// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/WebInterface.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
#include "WebUI/Public/WebInterfaceCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_WebUI();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterface();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterface_NoRegister();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceObject_NoRegister();
	WEBUI_API UEnum* Z_Construct_UEnum_WebUI_EWebInterfaceDirectory();
	WEBUI_API UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature();
	WEBUI_API UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature();
	WEBUI_API UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature();
	WEBUI_API UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceCallback();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebInterfaceDirectory;
	static UEnum* EWebInterfaceDirectory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWebInterfaceDirectory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWebInterfaceDirectory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebUI_EWebInterfaceDirectory, Z_Construct_UPackage__Script_WebUI(), TEXT("EWebInterfaceDirectory"));
		}
		return Z_Registration_Info_UEnum_EWebInterfaceDirectory.OuterSingleton;
	}
	template<> WEBUI_API UEnum* StaticEnum<EWebInterfaceDirectory>()
	{
		return EWebInterfaceDirectory_StaticEnum();
	}
	struct Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::Enumerators[] = {
		{ "EWebInterfaceDirectory::UI", (int64)EWebInterfaceDirectory::UI },
		{ "EWebInterfaceDirectory::Content", (int64)EWebInterfaceDirectory::Content },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Content.DisplayName", "/Content" },
		{ "Content.Name", "EWebInterfaceDirectory::Content" },
		{ "DisplayName", "UI Directory" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "UI.DisplayName", "/UI" },
		{ "UI.Name", "EWebInterfaceDirectory::UI" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebUI,
		nullptr,
		"EWebInterfaceDirectory",
		"EWebInterfaceDirectory",
		Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebUI_EWebInterfaceDirectory()
	{
		if (!Z_Registration_Info_UEnum_EWebInterfaceDirectory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebInterfaceDirectory.InnerSingleton, Z_Construct_UEnum_WebUI_EWebInterfaceDirectory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWebInterfaceDirectory.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics
	{
		struct WebInterface_eventOnUrlChangedEvent_Parms
		{
			FText URL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventOnUrlChangedEvent_Parms, URL), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "OnUrlChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::WebInterface_eventOnUrlChangedEvent_Parms), Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics
	{
		struct WebInterface_eventOnPopupEvent_Parms
		{
			FString URL;
			FString Frame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventOnPopupEvent_Parms, URL), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_Frame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventOnPopupEvent_Parms, Frame), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_Frame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "OnPopupEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::WebInterface_eventOnPopupEvent_Parms), Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics
	{
		struct WebInterface_eventOnInterfaceEvent_Parms
		{
			FName Name;
			FJsonLibraryValue Data;
			FWebInterfaceCallback Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventOnInterfaceEvent_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventOnInterfaceEvent_Parms, Data), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(nullptr, 0) }; // 3884245201
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventOnInterfaceEvent_Parms, Callback), Z_Construct_UScriptStruct_FWebInterfaceCallback, METADATA_PARAMS(nullptr, 0) }; // 1936941784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "OnInterfaceEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::WebInterface_eventOnInterfaceEvent_Parms), Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWebInterface::execReadTexturePixels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=P_THIS->ReadTexturePixels(Z_Param_X,Z_Param_Y,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execReadTexturePixel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->ReadTexturePixel(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execGetTextureHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTextureHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execGetTextureWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTextureWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execGetTransparencyTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTransparencyTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execGetTransparencyThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTransparencyThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execGetTransparencyDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTransparencyDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execIsVirtualPointerTransparencyEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualPointerTransparencyEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execIsMouseTransparencyEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMouseTransparencyEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execIsUsingAcceleratedPaint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAcceleratedPaint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execResetMousePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMousePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execUnfocus)
	{
		P_GET_ENUM(EMouseCaptureMode,Z_Param_MouseCaptureMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unfocus(EMouseCaptureMode(Z_Param_MouseCaptureMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execFocus)
	{
		P_GET_ENUM(EMouseLockMode,Z_Param_MouseLockMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Focus(EMouseLockMode(Z_Param_MouseLockMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execDisableIME)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableIME();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execEnableIME)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableIME();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execUnbind)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unbind(Z_Param_Name,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execBind)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bind(Z_Param_Name,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execCall)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Function);
		P_GET_STRUCT_REF(FJsonLibraryValue,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Call(Z_Param_Function,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execExecute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Script);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_Script);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execGetURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execLoadContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_UBOOL(Z_Param_bScript);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadContent(Z_Param_File,Z_Param_bScript);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_ENUM(EWebInterfaceDirectory,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFile(Z_Param_File,EWebInterfaceDirectory(Z_Param_Directory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execLoadURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadURL(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execLoadHTML)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HTML);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadHTML(Z_Param_HTML);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterface::execLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Load(Z_Param_File);
		P_NATIVE_END;
	}
	void UWebInterface::StaticRegisterNativesUWebInterface()
	{
		UClass* Class = UWebInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bind", &UWebInterface::execBind },
			{ "Call", &UWebInterface::execCall },
			{ "DisableIME", &UWebInterface::execDisableIME },
			{ "EnableIME", &UWebInterface::execEnableIME },
			{ "Execute", &UWebInterface::execExecute },
			{ "Focus", &UWebInterface::execFocus },
			{ "GetTextureHeight", &UWebInterface::execGetTextureHeight },
			{ "GetTextureWidth", &UWebInterface::execGetTextureWidth },
			{ "GetTransparencyDelay", &UWebInterface::execGetTransparencyDelay },
			{ "GetTransparencyThreshold", &UWebInterface::execGetTransparencyThreshold },
			{ "GetTransparencyTick", &UWebInterface::execGetTransparencyTick },
			{ "GetURL", &UWebInterface::execGetURL },
			{ "IsMouseTransparencyEnabled", &UWebInterface::execIsMouseTransparencyEnabled },
			{ "IsUsingAcceleratedPaint", &UWebInterface::execIsUsingAcceleratedPaint },
			{ "IsVirtualPointerTransparencyEnabled", &UWebInterface::execIsVirtualPointerTransparencyEnabled },
			{ "Load", &UWebInterface::execLoad },
			{ "LoadContent", &UWebInterface::execLoadContent },
			{ "LoadFile", &UWebInterface::execLoadFile },
			{ "LoadHTML", &UWebInterface::execLoadHTML },
			{ "LoadURL", &UWebInterface::execLoadURL },
			{ "ReadTexturePixel", &UWebInterface::execReadTexturePixel },
			{ "ReadTexturePixels", &UWebInterface::execReadTexturePixels },
			{ "ResetMousePosition", &UWebInterface::execResetMousePosition },
			{ "Unbind", &UWebInterface::execUnbind },
			{ "Unfocus", &UWebInterface::execUnfocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebInterface_Bind_Statics
	{
		struct WebInterface_eventBind_Parms
		{
			FString Name;
			UObject* Object;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventBind_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventBind_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Bind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Bind_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Bind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Bind an object to ue.name in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Bind an object to ue.name in the browser context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Bind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Bind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Bind_Statics::WebInterface_eventBind_Parms), Z_Construct_UFunction_UWebInterface_Bind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Bind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Bind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Bind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Bind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Bind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_Call_Statics
	{
		struct WebInterface_eventCall_Parms
		{
			FString Function;
			FJsonLibraryValue Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventCall_Parms, Function), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventCall_Parms, Data), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Data_MetaData)) }; // 3884245201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Call_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Call_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Call_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Data" },
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "Web UI" },
		{ "Comment", "// Call ue.interface.function(data) in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Call ue.interface.function(data) in the browser context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Call_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Call", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Call_Statics::WebInterface_eventCall_Parms), Z_Construct_UFunction_UWebInterface_Call_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Call_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Call_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Call_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Call()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Call_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_DisableIME_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_DisableIME_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Input" },
		{ "Comment", "// Disables input method editors for different languages.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Disables input method editors for different languages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_DisableIME_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "DisableIME", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_DisableIME_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_DisableIME_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_DisableIME()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_DisableIME_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_EnableIME_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_EnableIME_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Input" },
		{ "Comment", "// Enables input method editors for different languages.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Enables input method editors for different languages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_EnableIME_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "EnableIME", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_EnableIME_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_EnableIME_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_EnableIME()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_EnableIME_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_Execute_Statics
	{
		struct WebInterface_eventExecute_Parms
		{
			FString Script;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Script;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Execute_Statics::NewProp_Script_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_Execute_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventExecute_Parms, Script), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Execute_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Execute_Statics::NewProp_Script_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Execute_Statics::NewProp_Script,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Execute JavaScript in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Execute JavaScript in the browser context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Execute_Statics::WebInterface_eventExecute_Parms), Z_Construct_UFunction_UWebInterface_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_Focus_Statics
	{
		struct WebInterface_eventFocus_Parms
		{
			EMouseLockMode MouseLockMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseLockMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseLockMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebInterface_Focus_Statics::NewProp_MouseLockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebInterface_Focus_Statics::NewProp_MouseLockMode = { "MouseLockMode", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventFocus_Parms, MouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(nullptr, 0) }; // 2802207277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Focus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Focus_Statics::NewProp_MouseLockMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Focus_Statics::NewProp_MouseLockMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Focus_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MouseLockMode" },
		{ "Category", "Web UI|Helpers" },
		{ "Comment", "// Set focus to the browser.\n" },
		{ "CPP_Default_MouseLockMode", "LockOnCapture" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Set focus to the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Focus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Focus_Statics::WebInterface_eventFocus_Parms), Z_Construct_UFunction_UWebInterface_Focus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Focus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Focus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Focus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Focus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics
	{
		struct WebInterface_eventGetTextureHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventGetTextureHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Textures" },
		{ "Comment", "// Get the height of the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Get the height of the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "GetTextureHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::WebInterface_eventGetTextureHeight_Parms), Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_GetTextureHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_GetTextureHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics
	{
		struct WebInterface_eventGetTextureWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventGetTextureWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Textures" },
		{ "Comment", "// Get the width of the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Get the width of the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "GetTextureWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::WebInterface_eventGetTextureWidth_Parms), Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_GetTextureWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_GetTextureWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics
	{
		struct WebInterface_eventGetTransparencyDelay_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventGetTransparencyDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Transparency" },
		{ "Comment", "// Get the transparency delay of the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Get the transparency delay of the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "GetTransparencyDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::WebInterface_eventGetTransparencyDelay_Parms), Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_GetTransparencyDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_GetTransparencyDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics
	{
		struct WebInterface_eventGetTransparencyThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventGetTransparencyThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Transparency" },
		{ "Comment", "// Get the transparency threshold of the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Get the transparency threshold of the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "GetTransparencyThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::WebInterface_eventGetTransparencyThreshold_Parms), Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics
	{
		struct WebInterface_eventGetTransparencyTick_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventGetTransparencyTick_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Transparency" },
		{ "Comment", "// Get the transparency tick rate of the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Get the transparency tick rate of the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "GetTransparencyTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::WebInterface_eventGetTransparencyTick_Parms), Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_GetTransparencyTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_GetTransparencyTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_GetURL_Statics
	{
		struct WebInterface_eventGetURL_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_GetURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_GetURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_GetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Get the current URL of the browser.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Get the current URL of the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_GetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "GetURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_GetURL_Statics::WebInterface_eventGetURL_Parms), Z_Construct_UFunction_UWebInterface_GetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_GetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_GetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_GetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_GetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics
	{
		struct WebInterface_eventIsMouseTransparencyEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebInterface_eventIsMouseTransparencyEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterface_eventIsMouseTransparencyEnabled_Parms), &Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Transparency" },
		{ "Comment", "// Check if mouse transparency is enabled.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Check if mouse transparency is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "IsMouseTransparencyEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::WebInterface_eventIsMouseTransparencyEnabled_Parms), Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics
	{
		struct WebInterface_eventIsUsingAcceleratedPaint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebInterface_eventIsUsingAcceleratedPaint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterface_eventIsUsingAcceleratedPaint_Parms), &Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Helpers" },
		{ "Comment", "// Check if accelerated paint is being used.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Check if accelerated paint is being used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "IsUsingAcceleratedPaint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::WebInterface_eventIsUsingAcceleratedPaint_Parms), Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics
	{
		struct WebInterface_eventIsVirtualPointerTransparencyEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebInterface_eventIsVirtualPointerTransparencyEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterface_eventIsVirtualPointerTransparencyEnabled_Parms), &Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Transparency" },
		{ "Comment", "// Check if virtual pointer transparency is enabled.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Check if virtual pointer transparency is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "IsVirtualPointerTransparencyEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::WebInterface_eventIsVirtualPointerTransparencyEnabled_Parms), Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_Load_Statics
	{
		struct WebInterface_eventLoad_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventLoad_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebInterface_eventLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterface_eventLoad_Parms), &Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Load_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Load_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Load the browser.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Load the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Load", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Load_Statics::WebInterface_eventLoad_Parms), Z_Construct_UFunction_UWebInterface_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_LoadContent_Statics
	{
		struct WebInterface_eventLoadContent_Parms
		{
			FString File;
			bool bScript;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_bScript_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScript;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventLoadContent_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_bScript_SetBit(void* Obj)
	{
		((WebInterface_eventLoadContent_Parms*)Obj)->bScript = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_bScript = { "bScript", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterface_eventLoadContent_Parms), &Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_bScript_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebInterface_eventLoadContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterface_eventLoadContent_Parms), &Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_LoadContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_bScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadContent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bScript" },
		{ "Category", "Web UI" },
		{ "Comment", "// Load content into the browser.\n" },
		{ "CPP_Default_bScript", "false" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Load content into the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_LoadContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "LoadContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_LoadContent_Statics::WebInterface_eventLoadContent_Parms), Z_Construct_UFunction_UWebInterface_LoadContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_LoadContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_LoadContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_LoadFile_Statics
	{
		struct WebInterface_eventLoadFile_Parms
		{
			FString File;
			EWebInterfaceDirectory Directory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Directory_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventLoadFile_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_File_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_Directory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventLoadFile_Parms, Directory), Z_Construct_UEnum_WebUI_EWebInterfaceDirectory, METADATA_PARAMS(nullptr, 0) }; // 2538096383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_Directory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadFile_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Directory" },
		{ "Category", "Web UI" },
		{ "Comment", "// Load a file in the browser.\n" },
		{ "CPP_Default_Directory", "UI" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Load a file in the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "LoadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_LoadFile_Statics::WebInterface_eventLoadFile_Parms), Z_Construct_UFunction_UWebInterface_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_LoadHTML_Statics
	{
		struct WebInterface_eventLoadHTML_Parms
		{
			FString HTML;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HTML_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HTML;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::NewProp_HTML_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::NewProp_HTML = { "HTML", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventLoadHTML_Parms, HTML), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::NewProp_HTML_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::NewProp_HTML_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::NewProp_HTML,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Load HTML in the browser.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Load HTML in the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "LoadHTML", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::WebInterface_eventLoadHTML_Parms), Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_LoadHTML()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_LoadHTML_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_LoadURL_Statics
	{
		struct WebInterface_eventLoadURL_Parms
		{
			FString URL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_LoadURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventLoadURL_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadURL_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadURL_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_LoadURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_LoadURL_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_LoadURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Load a URL in the browser.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Load a URL in the browser." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_LoadURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "LoadURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_LoadURL_Statics::WebInterface_eventLoadURL_Parms), Z_Construct_UFunction_UWebInterface_LoadURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_LoadURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_LoadURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_LoadURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_LoadURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics
	{
		struct WebInterface_eventReadTexturePixel_Parms
		{
			int32 X;
			int32 Y;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixel_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixel_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Textures" },
		{ "Comment", "// Read a pixel from the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Read a pixel from the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "ReadTexturePixel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::WebInterface_eventReadTexturePixel_Parms), Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_ReadTexturePixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_ReadTexturePixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics
	{
		struct WebInterface_eventReadTexturePixels_Parms
		{
			int32 X;
			int32 Y;
			int32 Width;
			int32 Height;
			TArray<FColor> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixels_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixels_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixels_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixels_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventReadTexturePixels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Textures" },
		{ "Comment", "// Read an area of pixels from the browser texture.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Read an area of pixels from the browser texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "ReadTexturePixels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::WebInterface_eventReadTexturePixels_Parms), Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_ReadTexturePixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_ReadTexturePixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_ResetMousePosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_ResetMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Helpers" },
		{ "Comment", "// Reset cursor to center of the viewport.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Reset cursor to center of the viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_ResetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "ResetMousePosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_ResetMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_ResetMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_ResetMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_ResetMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_Unbind_Statics
	{
		struct WebInterface_eventUnbind_Parms
		{
			FString Name;
			UObject* Object;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventUnbind_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventUnbind_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Unbind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Unbind_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Unbind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "Comment", "// Unbind an object from ue.name in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Unbind an object from ue.name in the browser context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Unbind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Unbind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Unbind_Statics::WebInterface_eventUnbind_Parms), Z_Construct_UFunction_UWebInterface_Unbind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Unbind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Unbind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Unbind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Unbind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Unbind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterface_Unfocus_Statics
	{
		struct WebInterface_eventUnfocus_Parms
		{
			EMouseCaptureMode MouseCaptureMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebInterface_Unfocus_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebInterface_Unfocus_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterface_eventUnfocus_Parms, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(nullptr, 0) }; // 1275285483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterface_Unfocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Unfocus_Statics::NewProp_MouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterface_Unfocus_Statics::NewProp_MouseCaptureMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterface_Unfocus_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MouseCaptureMode" },
		{ "Category", "Web UI|Helpers" },
		{ "Comment", "// Set focus to the game.\n" },
		{ "CPP_Default_MouseCaptureMode", "CapturePermanently" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Set focus to the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterface_Unfocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterface, nullptr, "Unfocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterface_Unfocus_Statics::WebInterface_eventUnfocus_Parms), Z_Construct_UFunction_UWebInterface_Unfocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Unfocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterface_Unfocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterface_Unfocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterface_Unfocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterface_Unfocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebInterface);
	UClass* Z_Construct_UClass_UWebInterface_NoRegister()
	{
		return UWebInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWebInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUrlChangedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUrlChangedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPopupEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPopupEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterfaceEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterfaceEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAcceleratedPaint_MetaData[];
#endif
		static void NewProp_bAcceleratedPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceleratedPaint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseTransparency_MetaData[];
#endif
		static void NewProp_bEnableMouseTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseTransparency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseTransparencyThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseTransparencyThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseTransparencyDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseTransparencyDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseTransparencyTick_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseTransparencyTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVirtualPointerTransparency_MetaData[];
#endif
		static void NewProp_bEnableVirtualPointerTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVirtualPointerTransparency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualPointerTransparencyThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VirtualPointerTransparencyThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomCursors_MetaData[];
#endif
		static void NewProp_bCustomCursors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomCursors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebInterface_Bind, "Bind" }, // 809951358
		{ &Z_Construct_UFunction_UWebInterface_Call, "Call" }, // 2008588585
		{ &Z_Construct_UFunction_UWebInterface_DisableIME, "DisableIME" }, // 4033256728
		{ &Z_Construct_UFunction_UWebInterface_EnableIME, "EnableIME" }, // 1422790538
		{ &Z_Construct_UFunction_UWebInterface_Execute, "Execute" }, // 3434914117
		{ &Z_Construct_UFunction_UWebInterface_Focus, "Focus" }, // 536040470
		{ &Z_Construct_UFunction_UWebInterface_GetTextureHeight, "GetTextureHeight" }, // 2022868097
		{ &Z_Construct_UFunction_UWebInterface_GetTextureWidth, "GetTextureWidth" }, // 3295615191
		{ &Z_Construct_UFunction_UWebInterface_GetTransparencyDelay, "GetTransparencyDelay" }, // 1989319739
		{ &Z_Construct_UFunction_UWebInterface_GetTransparencyThreshold, "GetTransparencyThreshold" }, // 1437629538
		{ &Z_Construct_UFunction_UWebInterface_GetTransparencyTick, "GetTransparencyTick" }, // 1167106098
		{ &Z_Construct_UFunction_UWebInterface_GetURL, "GetURL" }, // 2139733017
		{ &Z_Construct_UFunction_UWebInterface_IsMouseTransparencyEnabled, "IsMouseTransparencyEnabled" }, // 4206830081
		{ &Z_Construct_UFunction_UWebInterface_IsUsingAcceleratedPaint, "IsUsingAcceleratedPaint" }, // 1488291431
		{ &Z_Construct_UFunction_UWebInterface_IsVirtualPointerTransparencyEnabled, "IsVirtualPointerTransparencyEnabled" }, // 2911448324
		{ &Z_Construct_UFunction_UWebInterface_Load, "Load" }, // 3686302204
		{ &Z_Construct_UFunction_UWebInterface_LoadContent, "LoadContent" }, // 2500541863
		{ &Z_Construct_UFunction_UWebInterface_LoadFile, "LoadFile" }, // 3783029183
		{ &Z_Construct_UFunction_UWebInterface_LoadHTML, "LoadHTML" }, // 296560459
		{ &Z_Construct_UFunction_UWebInterface_LoadURL, "LoadURL" }, // 941099304
		{ &Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature, "OnInterfaceEvent__DelegateSignature" }, // 2191204551
		{ &Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature, "OnPopupEvent__DelegateSignature" }, // 2431480661
		{ &Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature, "OnUrlChangedEvent__DelegateSignature" }, // 3537166976
		{ &Z_Construct_UFunction_UWebInterface_ReadTexturePixel, "ReadTexturePixel" }, // 3590347863
		{ &Z_Construct_UFunction_UWebInterface_ReadTexturePixels, "ReadTexturePixels" }, // 1400460533
		{ &Z_Construct_UFunction_UWebInterface_ResetMousePosition, "ResetMousePosition" }, // 2061145004
		{ &Z_Construct_UFunction_UWebInterface_Unbind, "Unbind" }, // 2104757636
		{ &Z_Construct_UFunction_UWebInterface_Unfocus, "Unfocus" }, // 2584365094
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebInterface.h" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_OnUrlChangedEvent_MetaData[] = {
		{ "Category", "Web UI|Events" },
		{ "Comment", "// Called when the URL has changed.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Called when the URL has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_OnUrlChangedEvent = { "OnUrlChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, OnUrlChangedEvent), Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_OnUrlChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_OnUrlChangedEvent_MetaData)) }; // 3537166976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_OnPopupEvent_MetaData[] = {
		{ "Category", "Web UI|Events" },
		{ "Comment", "// Called when a popup is requested.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Called when a popup is requested." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_OnPopupEvent = { "OnPopupEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, OnPopupEvent), Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_OnPopupEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_OnPopupEvent_MetaData)) }; // 2431480661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_OnInterfaceEvent_MetaData[] = {
		{ "Category", "Web UI|Events" },
		{ "Comment", "// Called with ue.interface.broadcast(name, data) in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "ToolTip", "Called with ue.interface.broadcast(name, data) in the browser context." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_OnInterfaceEvent = { "OnInterfaceEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, OnInterfaceEvent), Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_OnInterfaceEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_OnInterfaceEvent_MetaData)) }; // 2191204551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_MyObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_MyObject = { "MyObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, MyObject), Z_Construct_UClass_UWebInterfaceObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_MyObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_MyObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "UIMax", "60" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, FrameRate), METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_InitialURL_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_InitialURL = { "InitialURL", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, InitialURL), METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_InitialURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_InitialURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint_SetBit(void* Obj)
	{
		((UWebInterface*)Obj)->bAcceleratedPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint = { "bAcceleratedPaint", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebInterface), &Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency_MetaData[] = {
		{ "Category", "Behavior|Mouse" },
		{ "DisplayName", "Enable Transparency" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency_SetBit(void* Obj)
	{
		((UWebInterface*)Obj)->bEnableMouseTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency = { "bEnableMouseTransparency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebInterface), &Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyThreshold_MetaData[] = {
		{ "Category", "Behavior|Mouse" },
		{ "DisplayName", "Transparency Threshold" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyThreshold = { "MouseTransparencyThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, MouseTransparencyThreshold), METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyDelay_MetaData[] = {
		{ "Category", "Behavior|Mouse" },
		{ "DisplayName", "Transparency Delay" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyDelay = { "MouseTransparencyDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, MouseTransparencyDelay), METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyTick_MetaData[] = {
		{ "Category", "Behavior|Mouse" },
		{ "DisplayName", "Transparency Tick" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyTick = { "MouseTransparencyTick", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, MouseTransparencyTick), METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency_MetaData[] = {
		{ "Category", "Behavior|Virtual Pointer" },
		{ "DisplayName", "Enable Transparency" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency_SetBit(void* Obj)
	{
		((UWebInterface*)Obj)->bEnableVirtualPointerTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency = { "bEnableVirtualPointerTransparency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebInterface), &Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_VirtualPointerTransparencyThreshold_MetaData[] = {
		{ "Category", "Behavior|Virtual Pointer" },
		{ "DisplayName", "Transparency Threshold" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_VirtualPointerTransparencyThreshold = { "VirtualPointerTransparencyThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterface, VirtualPointerTransparencyThreshold), METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_VirtualPointerTransparencyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_VirtualPointerTransparencyThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors_MetaData[] = {
		{ "Category", "Behavior|Mouse" },
		{ "DisplayName", "Custom Cursors" },
		{ "ModuleRelativePath", "Public/WebInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors_SetBit(void* Obj)
	{
		((UWebInterface*)Obj)->bCustomCursors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors = { "bCustomCursors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebInterface), &Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_OnUrlChangedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_OnPopupEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_OnInterfaceEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_MyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_InitialURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_bAcceleratedPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableMouseTransparency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_MouseTransparencyTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_bEnableVirtualPointerTransparency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_VirtualPointerTransparencyThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterface_Statics::NewProp_bCustomCursors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebInterface_Statics::ClassParams = {
		&UWebInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInterface()
	{
		if (!Z_Registration_Info_UClass_UWebInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebInterface.OuterSingleton, Z_Construct_UClass_UWebInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebInterface.OuterSingleton;
	}
	template<> WEBUI_API UClass* StaticClass<UWebInterface>()
	{
		return UWebInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInterface);
	UWebInterface::~UWebInterface() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics::EnumInfo[] = {
		{ EWebInterfaceDirectory_StaticEnum, TEXT("EWebInterfaceDirectory"), &Z_Registration_Info_UEnum_EWebInterfaceDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2538096383U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebInterface, UWebInterface::StaticClass, TEXT("UWebInterface"), &Z_Registration_Info_UClass_UWebInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebInterface), 1455674653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_1839019283(TEXT("/Script/WebUI"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
