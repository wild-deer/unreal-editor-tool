// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/WebInterfaceInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterfaceInteractionComponent() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent();
	UPackage* Z_Construct_UPackage__Script_WebUI();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceInteractionComponent();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceInteractionComponent_NoRegister();
// End Cross Module References
	void UWebInterfaceInteractionComponent::StaticRegisterNativesUWebInterfaceInteractionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebInterfaceInteractionComponent);
	UClass* Z_Construct_UClass_UWebInterfaceInteractionComponent_NoRegister()
	{
		return UWebInterfaceInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetInteractionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UserInterface" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "WebInterfaceInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/WebInterfaceInteractionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInterfaceInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::ClassParams = {
		&UWebInterfaceInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInterfaceInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UWebInterfaceInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebInterfaceInteractionComponent.OuterSingleton, Z_Construct_UClass_UWebInterfaceInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebInterfaceInteractionComponent.OuterSingleton;
	}
	template<> WEBUI_API UClass* StaticClass<UWebInterfaceInteractionComponent>()
	{
		return UWebInterfaceInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInterfaceInteractionComponent);
	UWebInterfaceInteractionComponent::~UWebInterfaceInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceInteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceInteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebInterfaceInteractionComponent, UWebInterfaceInteractionComponent::StaticClass, TEXT("UWebInterfaceInteractionComponent"), &Z_Registration_Info_UClass_UWebInterfaceInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebInterfaceInteractionComponent), 243470831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceInteractionComponent_h_2172667140(TEXT("/Script/WebUI"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceInteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
