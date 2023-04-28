// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonLibrary/Public/JsonLibraryEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonLibraryEnums() {}
// Cross Module References
	JSONLIBRARY_API UEnum* Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction();
	JSONLIBRARY_API UEnum* Z_Construct_UEnum_JsonLibrary_EJsonLibraryType();
	UPackage* Z_Construct_UPackage__Script_JsonLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJsonLibraryType;
	static UEnum* EJsonLibraryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJsonLibraryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJsonLibraryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JsonLibrary_EJsonLibraryType, Z_Construct_UPackage__Script_JsonLibrary(), TEXT("EJsonLibraryType"));
		}
		return Z_Registration_Info_UEnum_EJsonLibraryType.OuterSingleton;
	}
	template<> JSONLIBRARY_API UEnum* StaticEnum<EJsonLibraryType>()
	{
		return EJsonLibraryType_StaticEnum();
	}
	struct Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::Enumerators[] = {
		{ "EJsonLibraryType::Invalid", (int64)EJsonLibraryType::Invalid },
		{ "EJsonLibraryType::Null", (int64)EJsonLibraryType::Null },
		{ "EJsonLibraryType::Object", (int64)EJsonLibraryType::Object },
		{ "EJsonLibraryType::Array", (int64)EJsonLibraryType::Array },
		{ "EJsonLibraryType::Boolean", (int64)EJsonLibraryType::Boolean },
		{ "EJsonLibraryType::Number", (int64)EJsonLibraryType::Number },
		{ "EJsonLibraryType::String", (int64)EJsonLibraryType::String },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::Enum_MetaDataParams[] = {
		{ "Array.DisplayName", "Array" },
		{ "Array.Name", "EJsonLibraryType::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.DisplayName", "Boolean" },
		{ "Boolean.Name", "EJsonLibraryType::Boolean" },
		{ "DisplayName", "JSON Type" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EJsonLibraryType::Invalid" },
		{ "ModuleRelativePath", "Public/JsonLibraryEnums.h" },
		{ "Null.DisplayName", "Null" },
		{ "Null.Name", "EJsonLibraryType::Null" },
		{ "Number.DisplayName", "Number" },
		{ "Number.Name", "EJsonLibraryType::Number" },
		{ "Object.DisplayName", "Object" },
		{ "Object.Name", "EJsonLibraryType::Object" },
		{ "String.DisplayName", "String" },
		{ "String.Name", "EJsonLibraryType::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JsonLibrary,
		nullptr,
		"EJsonLibraryType",
		"EJsonLibraryType",
		Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JsonLibrary_EJsonLibraryType()
	{
		if (!Z_Registration_Info_UEnum_EJsonLibraryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJsonLibraryType.InnerSingleton, Z_Construct_UEnum_JsonLibrary_EJsonLibraryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJsonLibraryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJsonLibraryNotifyAction;
	static UEnum* EJsonLibraryNotifyAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJsonLibraryNotifyAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJsonLibraryNotifyAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction, Z_Construct_UPackage__Script_JsonLibrary(), TEXT("EJsonLibraryNotifyAction"));
		}
		return Z_Registration_Info_UEnum_EJsonLibraryNotifyAction.OuterSingleton;
	}
	template<> JSONLIBRARY_API UEnum* StaticEnum<EJsonLibraryNotifyAction>()
	{
		return EJsonLibraryNotifyAction_StaticEnum();
	}
	struct Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::Enumerators[] = {
		{ "EJsonLibraryNotifyAction::None", (int64)EJsonLibraryNotifyAction::None },
		{ "EJsonLibraryNotifyAction::Added", (int64)EJsonLibraryNotifyAction::Added },
		{ "EJsonLibraryNotifyAction::Removed", (int64)EJsonLibraryNotifyAction::Removed },
		{ "EJsonLibraryNotifyAction::Changed", (int64)EJsonLibraryNotifyAction::Changed },
		{ "EJsonLibraryNotifyAction::Reset", (int64)EJsonLibraryNotifyAction::Reset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::Enum_MetaDataParams[] = {
		{ "Added.DisplayName", "Added" },
		{ "Added.Name", "EJsonLibraryNotifyAction::Added" },
		{ "BlueprintType", "true" },
		{ "Changed.DisplayName", "Changed" },
		{ "Changed.Name", "EJsonLibraryNotifyAction::Changed" },
		{ "DisplayName", "JSON Notify" },
		{ "ModuleRelativePath", "Public/JsonLibraryEnums.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EJsonLibraryNotifyAction::None" },
		{ "Removed.DisplayName", "Removed" },
		{ "Removed.Name", "EJsonLibraryNotifyAction::Removed" },
		{ "Reset.DisplayName", "Reset" },
		{ "Reset.Name", "EJsonLibraryNotifyAction::Reset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JsonLibrary,
		nullptr,
		"EJsonLibraryNotifyAction",
		"EJsonLibraryNotifyAction",
		Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction()
	{
		if (!Z_Registration_Info_UEnum_EJsonLibraryNotifyAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJsonLibraryNotifyAction.InnerSingleton, Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJsonLibraryNotifyAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryEnums_h_Statics::EnumInfo[] = {
		{ EJsonLibraryType_StaticEnum, TEXT("EJsonLibraryType"), &Z_Registration_Info_UEnum_EJsonLibraryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1018749416U) },
		{ EJsonLibraryNotifyAction_StaticEnum, TEXT("EJsonLibraryNotifyAction"), &Z_Registration_Info_UEnum_EJsonLibraryNotifyAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 983450544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryEnums_h_517938153(TEXT("/Script/JsonLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
