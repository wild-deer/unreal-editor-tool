// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/WebInterfaceObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterfaceObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebUI();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceObject();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWebInterfaceObject::execBroadcast)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Broadcast(Z_Param_Name,Z_Param_Data,Z_Param_Callback);
		P_NATIVE_END;
	}
	void UWebInterfaceObject::StaticRegisterNativesUWebInterfaceObject()
	{
		UClass* Class = UWebInterfaceObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Broadcast", &UWebInterfaceObject::execBroadcast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics
	{
		struct WebInterfaceObject_eventBroadcast_Parms
		{
			FString Name;
			FString Data;
			FString Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterfaceObject_eventBroadcast_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterfaceObject_eventBroadcast_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterfaceObject_eventBroadcast_Parms, Callback), METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Callback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI" },
		{ "ModuleRelativePath", "Public/WebInterfaceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterfaceObject, nullptr, "Broadcast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::WebInterfaceObject_eventBroadcast_Parms), Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterfaceObject_Broadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterfaceObject_Broadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebInterfaceObject);
	UClass* Z_Construct_UClass_UWebInterfaceObject_NoRegister()
	{
		return UWebInterfaceObject::StaticClass();
	}
	struct Z_Construct_UClass_UWebInterfaceObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInterfaceObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebInterfaceObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebInterfaceObject_Broadcast, "Broadcast" }, // 1790191663
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterfaceObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebInterfaceObject.h" },
		{ "ModuleRelativePath", "Public/WebInterfaceObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInterfaceObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInterfaceObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebInterfaceObject_Statics::ClassParams = {
		&UWebInterfaceObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebInterfaceObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterfaceObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInterfaceObject()
	{
		if (!Z_Registration_Info_UClass_UWebInterfaceObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebInterfaceObject.OuterSingleton, Z_Construct_UClass_UWebInterfaceObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebInterfaceObject.OuterSingleton;
	}
	template<> WEBUI_API UClass* StaticClass<UWebInterfaceObject>()
	{
		return UWebInterfaceObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInterfaceObject);
	UWebInterfaceObject::~UWebInterfaceObject() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebInterfaceObject, UWebInterfaceObject::StaticClass, TEXT("UWebInterfaceObject"), &Z_Registration_Info_UClass_UWebInterfaceObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebInterfaceObject), 3021812436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceObject_h_561724885(TEXT("/Script/WebUI"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
