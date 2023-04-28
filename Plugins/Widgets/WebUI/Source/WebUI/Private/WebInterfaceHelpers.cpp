// Copyright 2022 Tracer Interactive, LLC. All Rights Reserved.
#include "WebInterfaceHelpers.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ImagePixelData.h"
#include "Kismet/KismetRenderingLibrary.h"

#include "CanvasTypes.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "EngineModule.h"
#include "LegacyScreenPercentageDriver.h"
#include "Rendering/Texture2DResource.h"
#include "RenderUtils.h"

#if WITH_EDITOR
#include "TextureCompiler.h"
#endif

bool UWebInterfaceHelpers::WebInterfaceCallback_IsValid( const FWebInterfaceCallback& Target )
{
	return Target.IsValid();
}

void UWebInterfaceHelpers::WebInterfaceCallback_Call( FWebInterfaceCallback& Target, const FJsonLibraryValue& Data )
{
	Target.Call( Data );
}


// FImageUtils::ImageResize()
TArray64<FColor> UWebInterfaceHelpers::ResizeImage( int32 SrcWidth, int32 SrcHeight, const TArray64<FColor>& SrcData, int32 DstWidth, int32 DstHeight, bool bLinearSpace, bool bForceOpaqueOutput )
{
	TArray64<FColor> DstData;
	DstData.Empty( DstWidth * DstHeight );
	DstData.AddZeroed( DstWidth * DstHeight );

	check( SrcData.Num() >= SrcWidth * SrcHeight );
	check( DstData.Num() >= DstWidth * DstHeight );

	float SrcX = 0;
	float SrcY = 0;

	const float StepSizeX = SrcWidth  / (float)DstWidth;
	const float StepSizeY = SrcHeight / (float)DstHeight;

	for ( int32 Y = 0; Y < DstHeight; Y++ )
	{
		int32 PixelPos = Y * DstWidth;
		SrcX = 0.0f;

		for ( int32 X = 0; X < DstWidth; X++ )
		{
			int32 PixelCount = 0;
			float EndX = SrcX + StepSizeX;
			float EndY = SrcY + StepSizeY;

			int32 PosY = FMath::TruncToInt( SrcY + 0.5f );
			PosY = FMath::Clamp<int32>( PosY, 0, ( SrcHeight - 1 ) );

			int32 PosX = FMath::TruncToInt( SrcX + 0.5f );
			PosX = FMath::Clamp<int32>( PosX, 0, ( SrcWidth - 1 ) );

			int32 EndPosY = FMath::TruncToInt( EndY + 0.5f );
			EndPosY = FMath::Clamp<int32>( EndPosY, 0, ( SrcHeight - 1 ) );

			int32 EndPosX = FMath::TruncToInt( EndX + 0.5f );
			EndPosX = FMath::Clamp<int32>( EndPosX, 0, ( SrcWidth - 1 ) );

			FColor FinalColor;
			if ( bLinearSpace )
			{
				FLinearColor LinearStepColor( 0.0f, 0.0f, 0.0f, 0.0f );
				for ( int32 PixelX = PosX; PixelX <= EndPosX; PixelX++ )
				{
					for ( int32 PixelY = PosY; PixelY <= EndPosY; PixelY++ )
					{
						int32 StartPixel = PixelX + PixelY * SrcWidth;

						LinearStepColor += SrcData[StartPixel];
						PixelCount++;
					}
				}

				LinearStepColor /= (float)PixelCount;
				FinalColor = LinearStepColor.ToFColor( true );
			}
			else
			{
				FVector4 StepColor( 0, 0, 0, 0 );
				for ( int32 PixelX = PosX; PixelX <= EndPosX; PixelX++ )
				{
					for ( int32 PixelY = PosY; PixelY <= EndPosY; PixelY++ )
					{
						int32 StartPixel = PixelX + PixelY * SrcWidth;
						StepColor.X += (float)SrcData[StartPixel].R;
						StepColor.Y += (float)SrcData[StartPixel].G;
						StepColor.Z += (float)SrcData[StartPixel].B;
						StepColor.W += (float)SrcData[StartPixel].A;

						PixelCount++;
					}
				}
				uint8 FinalR = FMath::Clamp( FMath::TruncToInt( StepColor.X / (float)PixelCount ), 0, 255 );
				uint8 FinalG = FMath::Clamp( FMath::TruncToInt( StepColor.Y / (float)PixelCount ), 0, 255 );
				uint8 FinalB = FMath::Clamp( FMath::TruncToInt( StepColor.Z / (float)PixelCount ), 0, 255 );
				uint8 FinalA = FMath::Clamp( FMath::TruncToInt( StepColor.W / (float)PixelCount ), 0, 255 );

				FinalColor = FColor( FinalR, FinalG, FinalB, FinalA );
			}

			if ( bForceOpaqueOutput )
				FinalColor.A = 255;

			DstData[PixelPos] = FinalColor;

			SrcX = EndX;
			PixelPos++;
		}

		SrcY += StepSizeY;
	}

	return DstData;
}


struct FGlobalInterfaceImageWrappers
{
	IImageWrapper* FindOrCreateImageWrapper( EImageFormat InFormat )
	{
		FScopeLock ScopeLock( &ImageWrappersCriticalSection );
		for ( int32 Index = 0; Index < AvailableImageWrappers.Num(); ++Index )
		{
			if ( AvailableImageWrappers[Index].Get<0>() == InFormat )
			{
				IImageWrapper* Wrapper = AvailableImageWrappers[Index].Get<1>();
				AvailableImageWrappers.RemoveAtSwap( Index, 1, false );
				return Wrapper;
			}
		}

		IImageWrapperModule* ImageWrapperModule = FModuleManager::GetModulePtr<IImageWrapperModule>( "ImageWrapper" );
		if ( !ensure( ImageWrapperModule ) )
			return nullptr;

		TSharedPtr<IImageWrapper> NewImageWrapper = ImageWrapperModule->CreateImageWrapper( InFormat );
		if ( !ensure( NewImageWrapper.IsValid() ) )
			return nullptr;

		AllImageWrappers.Add( MakeTuple( InFormat, NewImageWrapper.ToSharedRef() ) );
		return NewImageWrapper.Get();
	}

	void ReturnImageWrapper( IImageWrapper* InWrapper )
	{
		FScopeLock ScopeLock( &ImageWrappersCriticalSection );
		for ( const TTuple<EImageFormat, TSharedRef<IImageWrapper>>& Pair : AllImageWrappers )
		{
			if ( &Pair.Get<1>().Get() == InWrapper )
			{
				AvailableImageWrappers.Add( MakeTuple( Pair.Get<0>(), InWrapper ) );
				return;
			}
		}
	}

private:
	FCriticalSection ImageWrappersCriticalSection;
	TArray< TTuple<EImageFormat, IImageWrapper*> > AvailableImageWrappers;
	TArray< TTuple<EImageFormat, TSharedRef<IImageWrapper>> > AllImageWrappers;
} GInterfaceImageWrappers;


IImageWrapper* UWebInterfaceHelpers::FindOrCreateImageWrapper( EImageFormat Format )
{
	return GInterfaceImageWrappers.FindOrCreateImageWrapper( Format );
}

bool UWebInterfaceHelpers::SetImageWrapper( IImageWrapper* Wrapper, const TArray64<FColor>& Pixels, FIntPoint Size )
{
	if ( !Wrapper )
		return false;

	return Wrapper->SetRaw( Pixels.GetData(), Pixels.GetAllocatedSize(), Size.X, Size.Y, TImagePixelDataTraits<FColor>::PixelLayout, TImagePixelDataTraits<FColor>::BitDepth );
}

void UWebInterfaceHelpers::ReturnImageWrapper( IImageWrapper* Wrapper )
{
	GInterfaceImageWrappers.ReturnImageWrapper( Wrapper );
}

FIntPoint UWebInterfaceHelpers::GenerateImageFromRenderTarget( TArray64<FColor>& OutPixels, UTextureRenderTarget2D* RenderTarget )
{
	if ( !RenderTarget )
		return FIntPoint::ZeroValue;

	FTextureRenderTargetResource* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();

	int32 TargetWidth  = RenderTargetResource->GetSizeX();
	int32 TargetHeight = RenderTargetResource->GetSizeY();

	OutPixels.SetNumUninitialized( TargetWidth * TargetHeight );
	if ( !RenderTargetResource->ReadPixelsPtr( OutPixels.GetData(), FReadSurfaceDataFlags(), FIntRect( 0, 0, TargetWidth, TargetHeight ) ) )
		return FIntPoint::ZeroValue;

	return FIntPoint( TargetWidth, TargetHeight );
}

// ThumbnailGenerator::GenerateThumbnailFromTexture()
FIntPoint UWebInterfaceHelpers::GenerateImageFromTexture( TArray64<FColor>& OutPixels, UTexture2D* Texture )
{
	if ( !Texture )
		return FIntPoint::ZeroValue;

#if WITH_EDITOR
	FTextureCompilingManager::Get().FinishCompilation( { Texture } );
#endif

	Texture->SetForceMipLevelsToBeResident( 30.0f );
	Texture->WaitForStreaming();

	int32 TargetWidth  = Texture->GetSizeX();
	int32 TargetHeight = Texture->GetSizeY();

	if ( TargetWidth == 0 || TargetHeight == 0 || !Texture->GetResource() )
		return FIntPoint::ZeroValue;

	UTextureRenderTarget2D* RenderTargetTexture = NewObject<UTextureRenderTarget2D>();
	RenderTargetTexture->AddToRoot();
	RenderTargetTexture->ClearColor = FLinearColor::Transparent;
	RenderTargetTexture->TargetGamma = 0.f;
	RenderTargetTexture->InitCustomFormat( TargetWidth, TargetHeight, PF_B8G8R8A8, false );

	FTextureRenderTargetResource* RenderTargetResource = RenderTargetTexture->GameThread_GetRenderTargetResource();

	FCanvas Canvas( RenderTargetResource, NULL, FGameTime::GetTimeSinceAppStart(), GWorld->Scene->GetFeatureLevel() );
	Canvas.Clear( FLinearColor::Black );

	const bool bAlphaBlend = false;
	Canvas.DrawTile(
		0.0f,
		0.0f,
		(float)TargetWidth,
		(float)TargetHeight,
		0.0f,
		0.0f,
		1.0f,
		1.0f,
		FLinearColor::White,
		Texture->GetResource(),
		bAlphaBlend );
	Canvas.Flush_GameThread();

	OutPixels.SetNumUninitialized( TargetWidth * TargetHeight );
	if ( !RenderTargetResource->ReadPixelsPtr( OutPixels.GetData(), FReadSurfaceDataFlags(), FIntRect( 0, 0, TargetWidth, TargetHeight ) ) )
		return FIntPoint::ZeroValue;

	RenderTargetTexture->RemoveFromRoot();
	RenderTargetTexture = nullptr;

	return FIntPoint( TargetWidth, TargetHeight );
}

// UCanvas::K2_DrawMaterial()
FIntPoint UWebInterfaceHelpers::GenerateImageFromMaterial( TArray64<FColor>& OutPixels, UMaterialInterface* Material, int32 Width, int32 Height )
{
	int32 TargetWidth  = 1024;
	int32 TargetHeight = 1024;

	if ( Width > 0 && Height > 0 )
	{
		TargetWidth  = Width;
		TargetHeight = Height;
	}
	else if ( Width > 0 )
	{
		TargetWidth  = Width;
		TargetHeight = Width;
	}
	else if ( Height > 0 )
	{
		TargetWidth  = Height;
		TargetHeight = Height;
	}

	if ( !Material )
		return FIntPoint::ZeroValue;
	if ( !FApp::CanEverRender() )
		return FIntPoint::ZeroValue;
	
	UWorld* World =
		#if WITH_EDITOR
		GIsEditor ? GWorld :
		#endif
		( GEngine->GetWorldContexts().Num() > 0 ? GEngine->GetWorldContexts()[0].World() : nullptr );
	if ( !World )
		return FIntPoint::ZeroValue;

	World->FlushDeferredParameterCollectionInstanceUpdates();

	UTextureRenderTarget2D* RenderTargetTexture = NewObject<UTextureRenderTarget2D>();
	RenderTargetTexture->AddToRoot();
	RenderTargetTexture->ClearColor = FLinearColor::Transparent;
	RenderTargetTexture->TargetGamma = 0.f;
	RenderTargetTexture->InitCustomFormat( TargetWidth, TargetHeight, PF_B8G8R8A8, false );

	FTextureRenderTargetResource* RenderTargetResource = RenderTargetTexture->GameThread_GetRenderTargetResource();

	UKismetRenderingLibrary::ClearRenderTarget2D( World, RenderTargetTexture, FLinearColor::Black );
	UKismetRenderingLibrary::DrawMaterialToRenderTarget( World, RenderTargetTexture, Material );

	OutPixels.SetNumUninitialized( TargetWidth * TargetHeight );
	if ( !RenderTargetResource->ReadPixelsPtr( OutPixels.GetData(), FReadSurfaceDataFlags(), FIntRect( 0, 0, TargetWidth, TargetHeight ) ) )
		return FIntPoint::ZeroValue;

	// temporarily force opaque until fixed
	for ( int32 i = 0; i < OutPixels.Num(); i++ )
		OutPixels[i].A = 255;

	RenderTargetTexture->RemoveFromRoot();
	RenderTargetTexture = nullptr;

	return FIntPoint( TargetWidth, TargetHeight );
}

// ThumbnailGenerator::GenerateThumbnailFromCamera()
bool UWebInterfaceHelpers::GenerateImageFromCamera( TArray64<FColor>& OutPixels, UObject* WorldContextObject, const FTransform& CameraTransform, int32 Width, int32 Height, float FOVDegrees, float MinZ, float Gamma )
{
	if ( !WorldContextObject )
		return false;

	UWorld* World = WorldContextObject->GetWorld();
	if ( !World )
		return false;

	FSceneInterface* Scene = World->Scene;
	OutPixels.SetNumUninitialized( Width * Height );

	FIntPoint Size{ Width, Height };
	return GenerateImageFromScene(
		OutPixels,
		Scene,
		CameraTransform.GetTranslation(),
		FInverseRotationMatrix( CameraTransform.Rotator() ) * FInverseRotationMatrix( FRotator( 0, -90, 90 ) ),
		FReversedZPerspectiveMatrix( FOVDegrees * 2, 1, 1, MinZ ),
		Size,
		Gamma );
}

// ThumbnailGeneratorImpl::RenderSceneToTexture()
bool UWebInterfaceHelpers::GenerateImageFromScene( TArray64<FColor>& OutPixels, FSceneInterface* Scene, const FVector& ViewOrigin, const FMatrix& ViewRotationMatrix, const FMatrix& ProjectionMatrix, FIntPoint TargetSize, float TargetGamma )
{
	UTextureRenderTarget2D* RenderTargetTexture = NewObject<UTextureRenderTarget2D>();
	RenderTargetTexture->AddToRoot();
	RenderTargetTexture->ClearColor = FLinearColor::Transparent;
	RenderTargetTexture->TargetGamma = TargetGamma;
	RenderTargetTexture->InitCustomFormat( TargetSize.X, TargetSize.Y, PF_B8G8R8A8, false );

	FTextureRenderTargetResource* RenderTargetResource = RenderTargetTexture->GameThread_GetRenderTargetResource();

	FSceneViewFamilyContext ViewFamily(
		FSceneViewFamily::ConstructionValues( RenderTargetResource, Scene, FEngineShowFlags( ESFIM_Game ) )
		.SetTime( FGameTime::GetTimeSinceAppStart() )
	);

	ViewFamily.SetScreenPercentageInterface( new FLegacyScreenPercentageDriver(
		ViewFamily, /* GlobalResolutionFraction = */ 1.0f ) );

	FSceneViewInitOptions ViewInitOptions;
	ViewInitOptions.SetViewRectangle( FIntRect( 0, 0, TargetSize.X, TargetSize.Y ) );
	ViewInitOptions.ViewFamily = &ViewFamily;
	ViewInitOptions.ViewOrigin = ViewOrigin;
	ViewInitOptions.ViewRotationMatrix = ViewRotationMatrix;
	ViewInitOptions.ProjectionMatrix = ProjectionMatrix;

	FSceneView* NewView = new FSceneView( ViewInitOptions );
	ViewFamily.Views.Add( NewView );

	FCanvas Canvas( RenderTargetResource, NULL, FGameTime::GetTimeSinceAppStart(), Scene->GetFeatureLevel() );
	Canvas.Clear( FLinearColor::Transparent );
	GetRendererModule().BeginRenderingViewFamily( &Canvas, &ViewFamily );

	OutPixels.SetNumUninitialized( TargetSize.X * TargetSize.Y );
	if ( !RenderTargetResource->ReadPixelsPtr( OutPixels.GetData(), FReadSurfaceDataFlags(), FIntRect( 0, 0, TargetSize.X, TargetSize.Y ) ) )
		return false;

	FlushRenderingCommands();

	RenderTargetTexture->RemoveFromRoot();
	RenderTargetTexture = nullptr;

	return true;
}
