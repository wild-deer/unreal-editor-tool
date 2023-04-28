// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/WebInterfaceCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterfaceCallback() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebUI();
	WEBUI_API UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceCallback();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebInterfaceCallback;
class UScriptStruct* FWebInterfaceCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebInterfaceCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebInterfaceCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebInterfaceCallback, Z_Construct_UPackage__Script_WebUI(), TEXT("WebInterfaceCallback"));
	}
	return Z_Registration_Info_UScriptStruct_WebInterfaceCallback.OuterSingleton;
}
template<> WEBUI_API UScriptStruct* StaticStruct<FWebInterfaceCallback>()
{
	return FWebInterfaceCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebInterfaceCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebInterfaceCallback>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
		nullptr,
		&NewStructOps,
		"WebInterfaceCallback",
		sizeof(FWebInterfaceCallback),
		alignof(FWebInterfaceCallback),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_WebInterfaceCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebInterfaceCallback.InnerSingleton, Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebInterfaceCallback.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceCallback_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceCallback_h_Statics::ScriptStructInfo[] = {
		{ FWebInterfaceCallback::StaticStruct, Z_Construct_UScriptStruct_FWebInterfaceCallback_Statics::NewStructOps, TEXT("WebInterfaceCallback"), &Z_Registration_Info_UScriptStruct_WebInterfaceCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebInterfaceCallback), 1936941784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceCallback_h_3671435733(TEXT("/Script/WebUI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceCallback_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceCallback_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
