// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpLibrary/Public/HttpLibraryGetRequestCallbackProxy.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpLibraryGetRequestCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_NoRegister();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_HttpLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics
	{
		struct _Script_HttpLibrary_eventHttpLibraryGetRequestCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryGetRequestCallback_Parms, Response), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_Response_MetaData)) }; // 3884245201
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryGetRequestCallback_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::NewProp_StatusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryGetRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary, nullptr, "HttpLibraryGetRequestCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::_Script_HttpLibrary_eventHttpLibraryGetRequestCallback_Parms), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHttpLibraryGetRequestCallbackProxy::execCreateProxyObjectForGet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpLibraryGetRequestCallbackProxy**)Z_Param__Result=UHttpLibraryGetRequestCallbackProxy::CreateProxyObjectForGet(Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers);
		P_NATIVE_END;
	}
	void UHttpLibraryGetRequestCallbackProxy::StaticRegisterNativesUHttpLibraryGetRequestCallbackProxy()
	{
		UClass* Class = UHttpLibraryGetRequestCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForGet", &UHttpLibraryGetRequestCallbackProxy::execCreateProxyObjectForGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics
	{
		struct HttpLibraryGetRequestCallbackProxy_eventCreateProxyObjectForGet_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			UHttpLibraryGetRequestCallbackProxy* ReturnValue;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryGetRequestCallbackProxy_eventCreateProxyObjectForGet_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryGetRequestCallbackProxy_eventCreateProxyObjectForGet_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryGetRequestCallbackProxy_eventCreateProxyObjectForGet_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryGetRequestCallbackProxy_eventCreateProxyObjectForGet_Parms, ReturnValue), Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QueryString,Headers" },
		{ "AutoCreateRefTerm", "QueryString,Headers" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HTTP Library" },
		{ "DisplayName", "HTTP GET Request Proxy" },
		{ "ModuleRelativePath", "Public/HttpLibraryGetRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy, nullptr, "CreateProxyObjectForGet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::HttpLibraryGetRequestCallbackProxy_eventCreateProxyObjectForGet_Parms), Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpLibraryGetRequestCallbackProxy);
	UClass* Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_NoRegister()
	{
		return UHttpLibraryGetRequestCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet, "CreateProxyObjectForGet" }, // 3429150579
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpLibraryGetRequestCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/HttpLibraryGetRequestCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryGetRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryGetRequestCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 3918851723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryGetRequestCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpLibraryGetRequestCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryGetRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 3918851723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpLibraryGetRequestCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::ClassParams = {
		&UHttpLibraryGetRequestCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UHttpLibraryGetRequestCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpLibraryGetRequestCallbackProxy.OuterSingleton, Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpLibraryGetRequestCallbackProxy.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UClass* StaticClass<UHttpLibraryGetRequestCallbackProxy>()
	{
		return UHttpLibraryGetRequestCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpLibraryGetRequestCallbackProxy);
	UHttpLibraryGetRequestCallbackProxy::~UHttpLibraryGetRequestCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy, UHttpLibraryGetRequestCallbackProxy::StaticClass, TEXT("UHttpLibraryGetRequestCallbackProxy"), &Z_Registration_Info_UClass_UHttpLibraryGetRequestCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpLibraryGetRequestCallbackProxy), 60188672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_4249193082(TEXT("/Script/HttpLibrary"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
