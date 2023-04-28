// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpLibrary/Public/HttpLibraryHelpers.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpLibraryHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryBinaryRequest_NoRegister();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryHelpers();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryHelpers_NoRegister();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryJsonRequest_NoRegister();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryRequest_NoRegister();
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnBinaryProgress__DelegateSignature();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnBinaryResponse__DelegateSignature();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnProgress__DelegateSignature();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnResponse__DelegateSignature();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_HttpLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConstructHttpBinaryRequestWithProgress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryBinaryRequest**)Z_Param__Result=UHttpLibraryHelpers::ConstructHttpBinaryRequestWithProgress(FHttpLibraryRequestOnBinaryResponse(Z_Param_Out_Response),FHttpLibraryRequestOnBinaryProgress(Z_Param_Out_Progress));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConstructHttpBinaryRequest)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryBinaryRequest**)Z_Param__Result=UHttpLibraryHelpers::ConstructHttpBinaryRequest(FHttpLibraryRequestOnBinaryResponse(Z_Param_Out_Response));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConstructHttpJsonRequestWithProgress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryJsonRequest**)Z_Param__Result=UHttpLibraryHelpers::ConstructHttpJsonRequestWithProgress(FHttpLibraryRequestOnJsonResponse(Z_Param_Out_Response),FHttpLibraryRequestOnJsonProgress(Z_Param_Out_Progress));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConstructHttpJsonRequest)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryJsonRequest**)Z_Param__Result=UHttpLibraryHelpers::ConstructHttpJsonRequest(FHttpLibraryRequestOnJsonResponse(Z_Param_Out_Response));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConstructHttpRequestWithProgress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryRequest**)Z_Param__Result=UHttpLibraryHelpers::ConstructHttpRequestWithProgress(FHttpLibraryRequestOnResponse(Z_Param_Out_Response),FHttpLibraryRequestOnProgress(Z_Param_Out_Progress));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConstructHttpRequest)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryRequest**)Z_Param__Result=UHttpLibraryHelpers::ConstructHttpRequest(FHttpLibraryRequestOnResponse(Z_Param_Out_Response));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execSetHttpTimeout)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHttpLibraryHelpers::SetHttpTimeout(Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execGetHttpTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHttpLibraryHelpers::GetHttpTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execIsHttpEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpLibraryHelpers::IsHttpEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConvertJsonToBytes)
	{
		P_GET_STRUCT_REF(FJsonLibraryValue,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UHttpLibraryHelpers::ConvertJsonToBytes(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConvertBytesToJson)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJsonLibraryValue*)Z_Param__Result=UHttpLibraryHelpers::ConvertBytesToJson(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConvertStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UHttpLibraryHelpers::ConvertStringToBytes(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execConvertBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHttpLibraryHelpers::ConvertBytesToString(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execAppendQueryString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHttpLibraryHelpers::AppendQueryString(Z_Param_URL,Z_Param_Out_QueryString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execFindContentType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHttpLibraryContentType*)Z_Param__Result=UHttpLibraryHelpers::FindContentType(Z_Param_ContentType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryHelpers::execGetContentType)
	{
		P_GET_ENUM(EHttpLibraryContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHttpLibraryHelpers::GetContentType(EHttpLibraryContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	void UHttpLibraryHelpers::StaticRegisterNativesUHttpLibraryHelpers()
	{
		UClass* Class = UHttpLibraryHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendQueryString", &UHttpLibraryHelpers::execAppendQueryString },
			{ "ConstructHttpBinaryRequest", &UHttpLibraryHelpers::execConstructHttpBinaryRequest },
			{ "ConstructHttpBinaryRequestWithProgress", &UHttpLibraryHelpers::execConstructHttpBinaryRequestWithProgress },
			{ "ConstructHttpJsonRequest", &UHttpLibraryHelpers::execConstructHttpJsonRequest },
			{ "ConstructHttpJsonRequestWithProgress", &UHttpLibraryHelpers::execConstructHttpJsonRequestWithProgress },
			{ "ConstructHttpRequest", &UHttpLibraryHelpers::execConstructHttpRequest },
			{ "ConstructHttpRequestWithProgress", &UHttpLibraryHelpers::execConstructHttpRequestWithProgress },
			{ "ConvertBytesToJson", &UHttpLibraryHelpers::execConvertBytesToJson },
			{ "ConvertBytesToString", &UHttpLibraryHelpers::execConvertBytesToString },
			{ "ConvertJsonToBytes", &UHttpLibraryHelpers::execConvertJsonToBytes },
			{ "ConvertStringToBytes", &UHttpLibraryHelpers::execConvertStringToBytes },
			{ "FindContentType", &UHttpLibraryHelpers::execFindContentType },
			{ "GetContentType", &UHttpLibraryHelpers::execGetContentType },
			{ "GetHttpTimeout", &UHttpLibraryHelpers::execGetHttpTimeout },
			{ "IsHttpEnabled", &UHttpLibraryHelpers::execIsHttpEnabled },
			{ "SetHttpTimeout", &UHttpLibraryHelpers::execSetHttpTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics
	{
		struct HttpLibraryHelpers_eventAppendQueryString_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QueryString_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QueryString_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryString_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QueryString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventAppendQueryString_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventAppendQueryString_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventAppendQueryString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "QueryString" },
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Append a query string to a URL.\n" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Append a query string to a URL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "AppendQueryString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::HttpLibraryHelpers_eventAppendQueryString_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics
	{
		struct HttpLibraryHelpers_eventConstructHttpBinaryRequest_Parms
		{
			FScriptDelegate Response;
			UHttpLibraryBinaryRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpBinaryRequest_Parms, Response), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnBinaryResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_Response_MetaData)) }; // 2740913297
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpBinaryRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryBinaryRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Response" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Construct a HTTP binary request object.\n" },
		{ "CompactNodeTitle", "HTTP" },
		{ "DisplayName", "Construct HTTP (Binary)" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Construct a HTTP binary request object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConstructHttpBinaryRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::HttpLibraryHelpers_eventConstructHttpBinaryRequest_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics
	{
		struct HttpLibraryHelpers_eventConstructHttpBinaryRequestWithProgress_Parms
		{
			FScriptDelegate Response;
			FScriptDelegate Progress;
			UHttpLibraryBinaryRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Progress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpBinaryRequestWithProgress_Parms, Response), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnBinaryResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Response_MetaData)) }; // 2740913297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpBinaryRequestWithProgress_Parms, Progress), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnBinaryProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Progress_MetaData)) }; // 3488966842
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpBinaryRequestWithProgress_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryBinaryRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Response,Progress" },
		{ "Category", "HTTP Library|Request|Progress" },
		{ "Comment", "// Construct a HTTP binary request object with progress updates.\n" },
		{ "DisplayName", "Construct HTTP w/ Progress (Binary)" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Construct a HTTP binary request object with progress updates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConstructHttpBinaryRequestWithProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::HttpLibraryHelpers_eventConstructHttpBinaryRequestWithProgress_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics
	{
		struct HttpLibraryHelpers_eventConstructHttpJsonRequest_Parms
		{
			FScriptDelegate Response;
			UHttpLibraryJsonRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpJsonRequest_Parms, Response), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_Response_MetaData)) }; // 520995626
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpJsonRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryJsonRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Response" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Construct a HTTP JSON request object.\n" },
		{ "CompactNodeTitle", "HTTP" },
		{ "DisplayName", "Construct HTTP (JSON)" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Construct a HTTP JSON request object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConstructHttpJsonRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::HttpLibraryHelpers_eventConstructHttpJsonRequest_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics
	{
		struct HttpLibraryHelpers_eventConstructHttpJsonRequestWithProgress_Parms
		{
			FScriptDelegate Response;
			FScriptDelegate Progress;
			UHttpLibraryJsonRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Progress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpJsonRequestWithProgress_Parms, Response), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Response_MetaData)) }; // 520995626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpJsonRequestWithProgress_Parms, Progress), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Progress_MetaData)) }; // 2695868110
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpJsonRequestWithProgress_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryJsonRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Response,Progress" },
		{ "Category", "HTTP Library|Request|Progress" },
		{ "Comment", "// Construct a HTTP JSON request object with progress updates.\n" },
		{ "DisplayName", "Construct HTTP w/ Progress (JSON)" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Construct a HTTP JSON request object with progress updates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConstructHttpJsonRequestWithProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::HttpLibraryHelpers_eventConstructHttpJsonRequestWithProgress_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics
	{
		struct HttpLibraryHelpers_eventConstructHttpRequest_Parms
		{
			FScriptDelegate Response;
			UHttpLibraryRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpRequest_Parms, Response), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_Response_MetaData)) }; // 193441719
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Response" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Construct a HTTP request object.\n" },
		{ "CompactNodeTitle", "HTTP" },
		{ "DisplayName", "Construct HTTP" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Construct a HTTP request object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConstructHttpRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::HttpLibraryHelpers_eventConstructHttpRequest_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics
	{
		struct HttpLibraryHelpers_eventConstructHttpRequestWithProgress_Parms
		{
			FScriptDelegate Response;
			FScriptDelegate Progress;
			UHttpLibraryRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Progress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpRequestWithProgress_Parms, Response), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Response_MetaData)) }; // 193441719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpRequestWithProgress_Parms, Progress), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Progress_MetaData)) }; // 2434527657
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConstructHttpRequestWithProgress_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Response,Progress" },
		{ "Category", "HTTP Library|Request|Progress" },
		{ "Comment", "// Construct a HTTP request object with progress updates.\n" },
		{ "DisplayName", "Construct HTTP w/ Progress" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Construct a HTTP request object with progress updates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConstructHttpRequestWithProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::HttpLibraryHelpers_eventConstructHttpRequestWithProgress_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics
	{
		struct HttpLibraryHelpers_eventConvertBytesToJson_Parms
		{
			TArray<uint8> Data;
			FJsonLibraryValue ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertBytesToJson_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertBytesToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(nullptr, 0) }; // 3884245201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Convert an array of bytes to a string.\n" },
		{ "DisplayName", "Convert Bytes to JSON" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Convert an array of bytes to a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConvertBytesToJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::HttpLibraryHelpers_eventConvertBytesToJson_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics
	{
		struct HttpLibraryHelpers_eventConvertBytesToString_Parms
		{
			TArray<uint8> Data;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertBytesToString_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Convert an array of bytes to a string.\n" },
		{ "DisplayName", "Convert Bytes to String" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Convert an array of bytes to a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConvertBytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::HttpLibraryHelpers_eventConvertBytesToString_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics
	{
		struct HttpLibraryHelpers_eventConvertJsonToBytes_Parms
		{
			FJsonLibraryValue Data;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertJsonToBytes_Parms, Data), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_Data_MetaData)) }; // 3884245201
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertJsonToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Convert a string to an array of bytes.\n" },
		{ "DisplayName", "Convert JSON to Bytes" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Convert a string to an array of bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConvertJsonToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::HttpLibraryHelpers_eventConvertJsonToBytes_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics
	{
		struct HttpLibraryHelpers_eventConvertStringToBytes_Parms
		{
			FString Data;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertStringToBytes_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventConvertStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Convert a string to an array of bytes.\n" },
		{ "DisplayName", "Convert String to Bytes" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Convert a string to an array of bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "ConvertStringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::HttpLibraryHelpers_eventConvertStringToBytes_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics
	{
		struct HttpLibraryHelpers_eventFindContentType_Parms
		{
			FString ContentType;
			EHttpLibraryContentType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventFindContentType_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ContentType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventFindContentType_Parms, ReturnValue), Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, METADATA_PARAMS(nullptr, 0) }; // 3123879106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Find the content type from a string.\n" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Find the content type from a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "FindContentType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::HttpLibraryHelpers_eventFindContentType_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics
	{
		struct HttpLibraryHelpers_eventGetContentType_Parms
		{
			EHttpLibraryContentType ContentType;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventGetContentType_Parms, ContentType), Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, METADATA_PARAMS(nullptr, 0) }; // 3123879106
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventGetContentType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Helpers" },
		{ "Comment", "// Get the content type string.\n" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Get the content type string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "GetContentType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::HttpLibraryHelpers_eventGetContentType_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics
	{
		struct HttpLibraryHelpers_eventGetHttpTimeout_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventGetHttpTimeout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Settings" },
		{ "Comment", "// Get the default HTTP timeout.\n" },
		{ "DisplayName", "Get HTTP Timeout" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Get the default HTTP timeout." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "GetHttpTimeout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::HttpLibraryHelpers_eventGetHttpTimeout_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics
	{
		struct HttpLibraryHelpers_eventIsHttpEnabled_Parms
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
	void Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryHelpers_eventIsHttpEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryHelpers_eventIsHttpEnabled_Parms), &Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Settings" },
		{ "Comment", "// Check if HTTP is enabled.\n" },
		{ "DisplayName", "Is HTTP Enabled" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Check if HTTP is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "IsHttpEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::HttpLibraryHelpers_eventIsHttpEnabled_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics
	{
		struct HttpLibraryHelpers_eventSetHttpTimeout_Parms
		{
			float Timeout;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryHelpers_eventSetHttpTimeout_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Settings" },
		{ "Comment", "// Set the default HTTP timeout.\n" },
		{ "DisplayName", "Set HTTP Timeout" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
		{ "ToolTip", "Set the default HTTP timeout." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryHelpers, nullptr, "SetHttpTimeout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::HttpLibraryHelpers_eventSetHttpTimeout_Parms), Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpLibraryHelpers);
	UClass* Z_Construct_UClass_UHttpLibraryHelpers_NoRegister()
	{
		return UHttpLibraryHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UHttpLibraryHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpLibraryHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpLibraryHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_AppendQueryString, "AppendQueryString" }, // 2017153832
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequest, "ConstructHttpBinaryRequest" }, // 3183556982
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress, "ConstructHttpBinaryRequestWithProgress" }, // 3693505220
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequest, "ConstructHttpJsonRequest" }, // 505787961
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress, "ConstructHttpJsonRequestWithProgress" }, // 1480901821
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequest, "ConstructHttpRequest" }, // 3108452463
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConstructHttpRequestWithProgress, "ConstructHttpRequestWithProgress" }, // 1264949643
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToJson, "ConvertBytesToJson" }, // 2743176295
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConvertBytesToString, "ConvertBytesToString" }, // 615912618
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConvertJsonToBytes, "ConvertJsonToBytes" }, // 1849195154
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_ConvertStringToBytes, "ConvertStringToBytes" }, // 1308278257
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_FindContentType, "FindContentType" }, // 3023281635
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_GetContentType, "GetContentType" }, // 1865759497
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_GetHttpTimeout, "GetHttpTimeout" }, // 1808405627
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_IsHttpEnabled, "IsHttpEnabled" }, // 1646176266
		{ &Z_Construct_UFunction_UHttpLibraryHelpers_SetHttpTimeout, "SetHttpTimeout" }, // 1496185936
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpLibraryHelpers.h" },
		{ "ModuleRelativePath", "Public/HttpLibraryHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpLibraryHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpLibraryHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpLibraryHelpers_Statics::ClassParams = {
		&UHttpLibraryHelpers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpLibraryHelpers()
	{
		if (!Z_Registration_Info_UClass_UHttpLibraryHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpLibraryHelpers.OuterSingleton, Z_Construct_UClass_UHttpLibraryHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpLibraryHelpers.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UClass* StaticClass<UHttpLibraryHelpers>()
	{
		return UHttpLibraryHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpLibraryHelpers);
	UHttpLibraryHelpers::~UHttpLibraryHelpers() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpLibraryHelpers, UHttpLibraryHelpers::StaticClass, TEXT("UHttpLibraryHelpers"), &Z_Registration_Info_UClass_UHttpLibraryHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpLibraryHelpers), 1382804937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_1783248173(TEXT("/Script/HttpLibrary"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
