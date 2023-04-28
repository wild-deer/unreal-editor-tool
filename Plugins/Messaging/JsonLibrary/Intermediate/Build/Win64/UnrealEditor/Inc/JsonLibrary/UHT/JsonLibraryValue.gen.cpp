// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonLibraryValue() {}
// Cross Module References
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_JsonLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JsonLibraryValue;
class UScriptStruct* FJsonLibraryValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JsonLibraryValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JsonLibraryValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonLibraryValue, Z_Construct_UPackage__Script_JsonLibrary(), TEXT("JsonLibraryValue"));
	}
	return Z_Registration_Info_UScriptStruct_JsonLibraryValue.OuterSingleton;
}
template<> JSONLIBRARY_API UScriptStruct* StaticStruct<FJsonLibraryValue>()
{
	return FJsonLibraryValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJsonLibraryValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "JSON Value" },
		{ "ModuleRelativePath", "Public/JsonLibraryValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonLibraryValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonLibrary,
		nullptr,
		&NewStructOps,
		"JsonLibraryValue",
		sizeof(FJsonLibraryValue),
		alignof(FJsonLibraryValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue()
	{
		if (!Z_Registration_Info_UScriptStruct_JsonLibraryValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JsonLibraryValue.InnerSingleton, Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JsonLibraryValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryValue_h_Statics::ScriptStructInfo[] = {
		{ FJsonLibraryValue::StaticStruct, Z_Construct_UScriptStruct_FJsonLibraryValue_Statics::NewStructOps, TEXT("JsonLibraryValue"), &Z_Registration_Info_UScriptStruct_JsonLibraryValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJsonLibraryValue), 3884245201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryValue_h_4120027810(TEXT("/Script/JsonLibrary"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
