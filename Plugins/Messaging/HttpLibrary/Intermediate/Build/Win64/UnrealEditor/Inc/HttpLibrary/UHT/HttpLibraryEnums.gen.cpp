// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpLibrary/Public/HttpLibraryEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpLibraryEnums() {}
// Cross Module References
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType();
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod();
	UPackage* Z_Construct_UPackage__Script_HttpLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpLibraryRequestMethod;
	static UEnum* EHttpLibraryRequestMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpLibraryRequestMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpLibraryRequestMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod, Z_Construct_UPackage__Script_HttpLibrary(), TEXT("EHttpLibraryRequestMethod"));
		}
		return Z_Registration_Info_UEnum_EHttpLibraryRequestMethod.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UEnum* StaticEnum<EHttpLibraryRequestMethod>()
	{
		return EHttpLibraryRequestMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::Enumerators[] = {
		{ "EHttpLibraryRequestMethod::GET", (int64)EHttpLibraryRequestMethod::GET },
		{ "EHttpLibraryRequestMethod::POST", (int64)EHttpLibraryRequestMethod::POST },
		{ "EHttpLibraryRequestMethod::PUT", (int64)EHttpLibraryRequestMethod::PUT },
		{ "EHttpLibraryRequestMethod::PATCH", (int64)EHttpLibraryRequestMethod::PATCH },
		{ "EHttpLibraryRequestMethod::DELETE", (int64)EHttpLibraryRequestMethod::DELETE },
		{ "EHttpLibraryRequestMethod::HEAD", (int64)EHttpLibraryRequestMethod::HEAD },
		{ "EHttpLibraryRequestMethod::CONNECT", (int64)EHttpLibraryRequestMethod::CONNECT },
		{ "EHttpLibraryRequestMethod::OPTIONS", (int64)EHttpLibraryRequestMethod::OPTIONS },
		{ "EHttpLibraryRequestMethod::TRACE", (int64)EHttpLibraryRequestMethod::TRACE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CONNECT.DisplayName", "CONNECT" },
		{ "CONNECT.Name", "EHttpLibraryRequestMethod::CONNECT" },
		{ "DELETE.DisplayName", "DELETE" },
		{ "DELETE.Name", "EHttpLibraryRequestMethod::DELETE" },
		{ "DisplayName", "Request Method" },
		{ "GET.DisplayName", "GET" },
		{ "GET.Name", "EHttpLibraryRequestMethod::GET" },
		{ "HEAD.DisplayName", "HEAD" },
		{ "HEAD.Name", "EHttpLibraryRequestMethod::HEAD" },
		{ "ModuleRelativePath", "Public/HttpLibraryEnums.h" },
		{ "OPTIONS.DisplayName", "OPTIONS" },
		{ "OPTIONS.Name", "EHttpLibraryRequestMethod::OPTIONS" },
		{ "PATCH.DisplayName", "PATCH" },
		{ "PATCH.Name", "EHttpLibraryRequestMethod::PATCH" },
		{ "POST.DisplayName", "POST" },
		{ "POST.Name", "EHttpLibraryRequestMethod::POST" },
		{ "PUT.DisplayName", "PUT" },
		{ "PUT.Name", "EHttpLibraryRequestMethod::PUT" },
		{ "TRACE.DisplayName", "TRACE" },
		{ "TRACE.Name", "EHttpLibraryRequestMethod::TRACE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary,
		nullptr,
		"EHttpLibraryRequestMethod",
		"EHttpLibraryRequestMethod",
		Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod()
	{
		if (!Z_Registration_Info_UEnum_EHttpLibraryRequestMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpLibraryRequestMethod.InnerSingleton, Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpLibraryRequestMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpLibraryContentType;
	static UEnum* EHttpLibraryContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpLibraryContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpLibraryContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, Z_Construct_UPackage__Script_HttpLibrary(), TEXT("EHttpLibraryContentType"));
		}
		return Z_Registration_Info_UEnum_EHttpLibraryContentType.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UEnum* StaticEnum<EHttpLibraryContentType>()
	{
		return EHttpLibraryContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::Enumerators[] = {
		{ "EHttpLibraryContentType::Default", (int64)EHttpLibraryContentType::Default },
		{ "EHttpLibraryContentType::TXT", (int64)EHttpLibraryContentType::TXT },
		{ "EHttpLibraryContentType::HTML", (int64)EHttpLibraryContentType::HTML },
		{ "EHttpLibraryContentType::CSS", (int64)EHttpLibraryContentType::CSS },
		{ "EHttpLibraryContentType::CSV", (int64)EHttpLibraryContentType::CSV },
		{ "EHttpLibraryContentType::JSON", (int64)EHttpLibraryContentType::JSON },
		{ "EHttpLibraryContentType::JS", (int64)EHttpLibraryContentType::JS },
		{ "EHttpLibraryContentType::RTF", (int64)EHttpLibraryContentType::RTF },
		{ "EHttpLibraryContentType::XML", (int64)EHttpLibraryContentType::XML },
		{ "EHttpLibraryContentType::XHTML", (int64)EHttpLibraryContentType::XHTML },
		{ "EHttpLibraryContentType::BIN", (int64)EHttpLibraryContentType::BIN },
		{ "EHttpLibraryContentType::FORM", (int64)EHttpLibraryContentType::FORM },
		{ "EHttpLibraryContentType::DATA", (int64)EHttpLibraryContentType::DATA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::Enum_MetaDataParams[] = {
		{ "BIN.DisplayName", "application/octet-stream" },
		{ "BIN.Name", "EHttpLibraryContentType::BIN" },
		{ "BlueprintType", "true" },
		{ "CSS.DisplayName", "text/css" },
		{ "CSS.Name", "EHttpLibraryContentType::CSS" },
		{ "CSV.DisplayName", "text/csv" },
		{ "CSV.Name", "EHttpLibraryContentType::CSV" },
		{ "DATA.DisplayName", "multipart/form-data" },
		{ "DATA.Name", "EHttpLibraryContentType::DATA" },
		{ "Default.DisplayName", "*" },
		{ "Default.Name", "EHttpLibraryContentType::Default" },
		{ "DisplayName", "Content Type" },
		{ "FORM.DisplayName", "application/x-www-form-urlencoded" },
		{ "FORM.Name", "EHttpLibraryContentType::FORM" },
		{ "HTML.DisplayName", "text/html" },
		{ "HTML.Name", "EHttpLibraryContentType::HTML" },
		{ "JS.DisplayName", "application/javascript" },
		{ "JS.Name", "EHttpLibraryContentType::JS" },
		{ "JSON.DisplayName", "application/json" },
		{ "JSON.Name", "EHttpLibraryContentType::JSON" },
		{ "ModuleRelativePath", "Public/HttpLibraryEnums.h" },
		{ "RTF.DisplayName", "application/rtf" },
		{ "RTF.Name", "EHttpLibraryContentType::RTF" },
		{ "TXT.DisplayName", "text/plain" },
		{ "TXT.Name", "EHttpLibraryContentType::TXT" },
		{ "XHTML.DisplayName", "application/xhtml+xml" },
		{ "XHTML.Name", "EHttpLibraryContentType::XHTML" },
		{ "XML.DisplayName", "application/xml" },
		{ "XML.Name", "EHttpLibraryContentType::XML" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary,
		nullptr,
		"EHttpLibraryContentType",
		"EHttpLibraryContentType",
		Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType()
	{
		if (!Z_Registration_Info_UEnum_EHttpLibraryContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpLibraryContentType.InnerSingleton, Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpLibraryContentType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryEnums_h_Statics::EnumInfo[] = {
		{ EHttpLibraryRequestMethod_StaticEnum, TEXT("EHttpLibraryRequestMethod"), &Z_Registration_Info_UEnum_EHttpLibraryRequestMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3905513545U) },
		{ EHttpLibraryContentType_StaticEnum, TEXT("EHttpLibraryContentType"), &Z_Registration_Info_UEnum_EHttpLibraryContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3123879106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryEnums_h_3974934701(TEXT("/Script/HttpLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
