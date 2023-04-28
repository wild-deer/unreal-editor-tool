// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpLibrary/Public/HttpLibraryJsonRequest.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpLibraryJsonRequest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryJsonRequest();
	HTTPLIBRARY_API UClass* Z_Construct_UClass_UHttpLibraryJsonRequest_NoRegister();
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType();
	HTTPLIBRARY_API UEnum* Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature();
	HTTPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_HttpLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics
	{
		struct _Script_HttpLibrary_eventHttpLibraryRequestOnJsonResponse_Parms
		{
			int32 StatusCode;
			FJsonLibraryValue Content;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestOnJsonResponse_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestOnJsonResponse_Parms, Content), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_Content_MetaData)) }; // 3884245201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary, nullptr, "HttpLibraryRequestOnJsonResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::_Script_HttpLibrary_eventHttpLibraryRequestOnJsonResponse_Parms), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics
	{
		struct _Script_HttpLibrary_eventHttpLibraryRequestOnJsonProgress_Parms
		{
			int32 BytesSent;
			int32 BytesReceived;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesSent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestOnJsonProgress_Parms, BytesSent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpLibrary_eventHttpLibraryRequestOnJsonProgress_Parms, BytesReceived), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::NewProp_BytesSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::NewProp_BytesReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpLibrary, nullptr, "HttpLibraryRequestOnJsonProgress__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::_Script_HttpLibrary_eventHttpLibraryRequestOnJsonProgress_Parms), Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpLibrary_HttpLibraryRequestOnJsonProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execSendBinary)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_GET_ENUM(EHttpLibraryContentType,Z_Param_ContentType);
		P_GET_ENUM(EHttpLibraryRequestMethod,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendBinary(Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers,Z_Param_Out_Content,EHttpLibraryContentType(Z_Param_ContentType),EHttpLibraryRequestMethod(Z_Param_Method));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execSendJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_STRUCT_REF(FJsonLibraryValue,Z_Param_Out_Content);
		P_GET_ENUM(EHttpLibraryRequestMethod,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendJSON(Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers,Z_Param_Out_Content,EHttpLibraryRequestMethod(Z_Param_Method));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execSendString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_ENUM(EHttpLibraryContentType,Z_Param_ContentType);
		P_GET_ENUM(EHttpLibraryRequestMethod,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendString(Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers,Z_Param_Content,EHttpLibraryContentType(Z_Param_ContentType),EHttpLibraryRequestMethod(Z_Param_Method));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execSend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_QueryString);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_ENUM(EHttpLibraryRequestMethod,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send(Z_Param_URL,Z_Param_Out_QueryString,Z_Param_Out_Headers,EHttpLibraryRequestMethod(Z_Param_Method));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execIsComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpLibraryJsonRequest::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	void UHttpLibraryJsonRequest::StaticRegisterNativesUHttpLibraryJsonRequest()
	{
		UClass* Class = UHttpLibraryJsonRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cancel", &UHttpLibraryJsonRequest::execCancel },
			{ "IsComplete", &UHttpLibraryJsonRequest::execIsComplete },
			{ "IsRunning", &UHttpLibraryJsonRequest::execIsRunning },
			{ "Send", &UHttpLibraryJsonRequest::execSend },
			{ "SendBinary", &UHttpLibraryJsonRequest::execSendBinary },
			{ "SendJSON", &UHttpLibraryJsonRequest::execSendJSON },
			{ "SendString", &UHttpLibraryJsonRequest::execSendString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics
	{
		struct HttpLibraryJsonRequest_eventCancel_Parms
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
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventCancel_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Cancel a HTTP request if currently in progress.\n" },
		{ "DisplayName", "Cancel" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Cancel a HTTP request if currently in progress." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "Cancel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::HttpLibraryJsonRequest_eventCancel_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics
	{
		struct HttpLibraryJsonRequest_eventIsComplete_Parms
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
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventIsComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventIsComplete_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Check if a HTTP request is complete.\n" },
		{ "DisplayName", "Is Complete" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Check if a HTTP request is complete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "IsComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::HttpLibraryJsonRequest_eventIsComplete_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics
	{
		struct HttpLibraryJsonRequest_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventIsRunning_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Check if a HTTP request is in progress.\n" },
		{ "DisplayName", "In Progress" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Check if a HTTP request is in progress." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::HttpLibraryJsonRequest_eventIsRunning_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics
	{
		struct HttpLibraryJsonRequest_eventSend_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			EHttpLibraryRequestMethod Method;
			bool ReturnValue;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSend_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSend_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSend_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSend_Parms, Method), Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod, METADATA_PARAMS(nullptr, 0) }; // 3905513545
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventSend_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QueryString,Headers,Method" },
		{ "AutoCreateRefTerm", "QueryString,Headers" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Send a HTTP request.\n" },
		{ "CPP_Default_Method", "GET" },
		{ "DisplayName", "Send Request" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Send a HTTP request." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "Send", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::HttpLibraryJsonRequest_eventSend_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics
	{
		struct HttpLibraryJsonRequest_eventSendBinary_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			TArray<uint8> Content;
			EHttpLibraryContentType ContentType;
			EHttpLibraryRequestMethod Method;
			bool ReturnValue;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendBinary_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendBinary_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendBinary_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendBinary_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendBinary_Parms, ContentType), Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, METADATA_PARAMS(nullptr, 0) }; // 3123879106
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendBinary_Parms, Method), Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod, METADATA_PARAMS(nullptr, 0) }; // 3905513545
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventSendBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventSendBinary_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QueryString,Headers,Method" },
		{ "AutoCreateRefTerm", "QueryString,Headers,Content" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Send a HTTP request with binary content.\n" },
		{ "CPP_Default_ContentType", "Default" },
		{ "CPP_Default_Method", "POST" },
		{ "DisplayName", "Send Content (Binary)" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Send a HTTP request with binary content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "SendBinary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::HttpLibraryJsonRequest_eventSendBinary_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics
	{
		struct HttpLibraryJsonRequest_eventSendJSON_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			FJsonLibraryValue Content;
			EHttpLibraryRequestMethod Method;
			bool ReturnValue;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendJSON_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendJSON_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendJSON_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendJSON_Parms, Content), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Content_MetaData)) }; // 3884245201
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendJSON_Parms, Method), Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod, METADATA_PARAMS(nullptr, 0) }; // 3905513545
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventSendJSON_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventSendJSON_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QueryString,Headers,Method" },
		{ "AutoCreateRefTerm", "QueryString,Headers,Content" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Send a HTTP request with JSON content.\n" },
		{ "CPP_Default_Method", "POST" },
		{ "DisplayName", "Send Content (JSON)" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Send a HTTP request with JSON content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "SendJSON", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::HttpLibraryJsonRequest_eventSendJSON_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics
	{
		struct HttpLibraryJsonRequest_eventSendString_Parms
		{
			FString URL;
			TMap<FString,FString> QueryString;
			TMap<FString,FString> Headers;
			FString Content;
			EHttpLibraryContentType ContentType;
			EHttpLibraryRequestMethod Method;
			bool ReturnValue;
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendString_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_ValueProp = { "QueryString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_Key_KeyProp = { "QueryString_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString = { "QueryString", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendString_Parms, QueryString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendString_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendString_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendString_Parms, ContentType), Z_Construct_UEnum_HttpLibrary_EHttpLibraryContentType, METADATA_PARAMS(nullptr, 0) }; // 3123879106
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpLibraryJsonRequest_eventSendString_Parms, Method), Z_Construct_UEnum_HttpLibrary_EHttpLibraryRequestMethod, METADATA_PARAMS(nullptr, 0) }; // 3905513545
	void Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpLibraryJsonRequest_eventSendString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpLibraryJsonRequest_eventSendString_Parms), &Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_QueryString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QueryString,Headers,Method" },
		{ "AutoCreateRefTerm", "QueryString,Headers" },
		{ "Category", "HTTP Library|Request" },
		{ "Comment", "// Send a HTTP request with content.\n" },
		{ "CPP_Default_ContentType", "Default" },
		{ "CPP_Default_Method", "POST" },
		{ "DisplayName", "Send Content" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
		{ "ToolTip", "Send a HTTP request with content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpLibraryJsonRequest, nullptr, "SendString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::HttpLibraryJsonRequest_eventSendString_Parms), Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpLibraryJsonRequest);
	UClass* Z_Construct_UClass_UHttpLibraryJsonRequest_NoRegister()
	{
		return UHttpLibraryJsonRequest::StaticClass();
	}
	struct Z_Construct_UClass_UHttpLibraryJsonRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_Cancel, "Cancel" }, // 1235770284
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_IsComplete, "IsComplete" }, // 609784626
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_IsRunning, "IsRunning" }, // 860974053
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_Send, "Send" }, // 2441758393
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_SendBinary, "SendBinary" }, // 3522613773
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_SendJSON, "SendJSON" }, // 4256939699
		{ &Z_Construct_UFunction_UHttpLibraryJsonRequest_SendString, "SendString" }, // 852318086
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HTTP Request (JSON)" },
		{ "IncludePath", "HttpLibraryJsonRequest.h" },
		{ "ModuleRelativePath", "Public/HttpLibraryJsonRequest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpLibraryJsonRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::ClassParams = {
		&UHttpLibraryJsonRequest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpLibraryJsonRequest()
	{
		if (!Z_Registration_Info_UClass_UHttpLibraryJsonRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpLibraryJsonRequest.OuterSingleton, Z_Construct_UClass_UHttpLibraryJsonRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpLibraryJsonRequest.OuterSingleton;
	}
	template<> HTTPLIBRARY_API UClass* StaticClass<UHttpLibraryJsonRequest>()
	{
		return UHttpLibraryJsonRequest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpLibraryJsonRequest);
	UHttpLibraryJsonRequest::~UHttpLibraryJsonRequest() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryJsonRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryJsonRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpLibraryJsonRequest, UHttpLibraryJsonRequest::StaticClass, TEXT("UHttpLibraryJsonRequest"), &Z_Registration_Info_UClass_UHttpLibraryJsonRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpLibraryJsonRequest), 342907055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryJsonRequest_h_2722345779(TEXT("/Script/HttpLibrary"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryJsonRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryJsonRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS