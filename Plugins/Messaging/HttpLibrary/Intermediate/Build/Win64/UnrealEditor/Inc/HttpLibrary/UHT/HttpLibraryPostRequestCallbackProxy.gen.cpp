// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpLibrary/Public/HttpLibraryPostRequestCallbackProxy.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpLibraryPostRequestCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_NoRegister();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_HttpLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics
	{
		struct _Script_HttpLibrary_eventHttpLibraryPostRequestCallback_Parms
		{
			FJsonLibraryValue Response;
			int32 StatusCode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryPostRequestCallback_Parms, Response), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData)) }; // 3884245201
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryPostRequestCallback_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::NewProp_StatusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryPostRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary, nullptr, "HttpLibraryPostRequestCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::_Script_HttpLibrary_eventHttpLibraryPostRequestCallback_Parms), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHttpLibraryPostRequestCallbackProxy::execCreateProxyObjectForPost)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_STRUCT_REF(FJsonLibraryValue,Z_Param_Out_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryPostRequestCallbackProxy**)Z_Param__Result=UHttpLibraryPostRequestCallbackProxy::CreateProxyObjectForPost(Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers,Z_Param_Out_Content);
		P_NATIVE_END;
	}
	void UHttpLibraryPostRequestCallbackProxy::StaticRegisterNativesUHttpLibraryPostRequestCallbackProxy()
	{
		UClass* Class = UHttpLibraryPostRequestCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForPost", &UHttpLibraryPostRequestCallbackProxy::execCreateProxyObjectForPost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics
	{
		struct HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			FJsonLibraryValue Content;
			UHttpLibraryPostRequestCallbackProxy* ReturnValue;
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms, Content), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Content_MetaData)) }; // 3884245201
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QueryString,Headers" },
		{ "AutoCreateRefTerm", "QueryString,Headers,Content" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HTTP Library" },
		{ "DisplayName", "HTTP POST Request Proxy" },
		{ "ModuleRelativePath", "Public/HttpLibraryPostRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy, nullptr, "CreateProxyObjectForPost", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::HttpLibraryPostRequestCallbackProxy_eventCreateProxyObjectForPost_Parms), Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpLibraryPostRequestCallbackProxy);
	UClass* Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_NoRegister()
	{
		return UHttpLibraryPostRequestCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost, "CreateProxyObjectForPost" }, // 436855040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpLibraryPostRequestCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/HttpLibraryPostRequestCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryPostRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryPostRequestCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2324903283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryPostRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryPostRequestCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryPostRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2324903283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpLibraryPostRequestCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::ClassParams = {
		&UHttpLibraryPostRequestCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UHttpLibraryPostRequestCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpLibraryPostRequestCallbackProxy.OuterSingleton, Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpLibraryPostRequestCallbackProxy.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UClass* StaticClass<UHttpLibraryPostRequestCallbackProxy>()
	{
		return UHttpLibraryPostRequestCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpLibraryPostRequestCallbackProxy);
	UHttpLibraryPostRequestCallbackProxy::~UHttpLibraryPostRequestCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy, UHttpLibraryPostRequestCallbackProxy::StaticClass, TEXT("UHttpLibraryPostRequestCallbackProxy"), &Z_Registration_Info_UClass_UHttpLibraryPostRequestCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpLibraryPostRequestCallbackProxy), 3417391014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_2956849199(TEXT("/Script/HttpLibrary"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
