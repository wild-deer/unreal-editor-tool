// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/WebInterfaceAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterfaceAssetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WebUI();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceAssetManager();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceAssetManager_NoRegister();
// End Cross Module References
	void UWebInterfaceAssetManager::StaticRegisterNativesUWebInterfaceAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebInterfaceAssetManager);
	UClass* Z_Construct_UClass_UWebInterfaceAssetManager_NoRegister()
	{
		return UWebInterfaceAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UWebInterfaceAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInterfaceAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterfaceAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebInterfaceAssetManager.h" },
		{ "ModuleRelativePath", "Public/WebInterfaceAssetManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterfaceAssetManager_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WebInterfaceAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWebInterfaceAssetManager_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebInterfaceAssetManager, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebInterfaceAssetManager_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterfaceAssetManager_Statics::NewProp_DefaultMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebInterfaceAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebInterfaceAssetManager_Statics::NewProp_DefaultMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInterfaceAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInterfaceAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebInterfaceAssetManager_Statics::ClassParams = {
		&UWebInterfaceAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebInterfaceAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterfaceAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebInterfaceAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterfaceAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInterfaceAssetManager()
	{
		if (!Z_Registration_Info_UClass_UWebInterfaceAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebInterfaceAssetManager.OuterSingleton, Z_Construct_UClass_UWebInterfaceAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebInterfaceAssetManager.OuterSingleton;
	}
	template<> WEBUI_API UClass* StaticClass<UWebInterfaceAssetManager>()
	{
		return UWebInterfaceAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInterfaceAssetManager);
	UWebInterfaceAssetManager::~UWebInterfaceAssetManager() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebInterfaceAssetManager, UWebInterfaceAssetManager::StaticClass, TEXT("UWebInterfaceAssetManager"), &Z_Registration_Info_UClass_UWebInterfaceAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebInterfaceAssetManager), 992144084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceAssetManager_h_2190281322(TEXT("/Script/WebUI"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
