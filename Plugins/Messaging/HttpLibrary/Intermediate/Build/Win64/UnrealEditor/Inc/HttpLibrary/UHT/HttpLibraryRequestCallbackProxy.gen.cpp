// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpLibrary/Public/HttpLibraryRequestCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpLibraryRequestCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryRequestCallbackProxy();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_NoRegister();
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType();
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HttpLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics
	{
		struct _Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms
		{
			TArray<uint8> Response;
			EHttpLibraryContentType ContentType;
			int32 StatusCode;
			int32 BytesSent;
			int32 BytesReceived;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Response_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Response;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesSent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response_Inner = { "Response", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms, Response), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms, ContentType), Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, METADATA_PARAMS(nullptr, 0) }; // 3123879106
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms, BytesSent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms, BytesReceived), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_BytesSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::NewProp_BytesReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary, nullptr, "HttpLibraryRequestCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHttpLibraryRequestCallbackProxy::execCreateProxyObjectForRequest)
	{
		P_GET_ENUM(EHttpLibraryRequestMethod,Z_Param_Method);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_GET_ENUM(EHttpLibraryContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryRequestCallbackProxy**)Z_Param__Result=UHttpLibraryRequestCallbackProxy::CreateProxyObjectForRequest(EHttpLibraryRequestMethod(Z_Param_Method),Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers,Z_Param_Out_Content,EHttpLibraryContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	void UHttpLibraryRequestCallbackProxy::StaticRegisterNativesUHttpLibraryRequestCallbackProxy()
	{
		UClass* Class = UHttpLibraryRequestCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForRequest", &UHttpLibraryRequestCallbackProxy::execCreateProxyObjectForRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics
	{
		struct HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms
		{
			EHttpLibraryRequestMethod Method;
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			TArray<uint8> Content;
			EHttpLibraryContentType ContentType;
			UHttpLibraryRequestCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, Method), Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod, METADATA_PARAMS(nullptr, 0) }; // 3905513545
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, ContentType), Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, METADATA_PARAMS(nullptr, 0) }; // 3123879106
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Method,QueryString,Headers,Content,ContentType" },
		{ "AutoCreateRefTerm", "QueryString,Headers,Content" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HTTP Library" },
		{ "CPP_Default_ContentType", "Default" },
		{ "DisplayName", "HTTP Request Proxy" },
		{ "ModuleRelativePath", "Public/HttpLibraryRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryRequestCallbackProxy, nullptr, "CreateProxyObjectForRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::HttpLibraryRequestCallbackProxy_eventCreateProxyObjectForRequest_Parms), Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpLibraryRequestCallbackProxy);
	UClass* Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_NoRegister()
	{
		return UHttpLibraryRequestCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest, "CreateProxyObjectForRequest" }, // 3492486714
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpLibraryRequestCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/HttpLibraryRequestCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryRequestCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 1441557488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryRequestCallbackProxy, OnProgress), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnProgress_MetaData)) }; // 1441557488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryRequestCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 1441557488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpLibraryRequestCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::ClassParams = {
		&UHttpLibraryRequestCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpLibraryRequestCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UHttpLibraryRequestCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpLibraryRequestCallbackProxy.OuterSingleton, Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpLibraryRequestCallbackProxy.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UClass* StaticClass<UHttpLibraryRequestCallbackProxy>()
	{
		return UHttpLibraryRequestCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpLibraryRequestCallbackProxy);
	UHttpLibraryRequestCallbackProxy::~UHttpLibraryRequestCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpLibraryRequestCallbackProxy, UHttpLibraryRequestCallbackProxy::StaticClass, TEXT("UHttpLibraryRequestCallbackProxy"), &Z_Registration_Info_UClass_UHttpLibraryRequestCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpLibraryRequestCallbackProxy), 2199930722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_4122021103(TEXT("/Script/HttpLibrary"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
