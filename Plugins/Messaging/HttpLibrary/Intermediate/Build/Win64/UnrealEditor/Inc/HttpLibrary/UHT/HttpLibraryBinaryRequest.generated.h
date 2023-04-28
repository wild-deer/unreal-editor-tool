// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryBinaryRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EHttpLibraryContentType : uint8;
enum class EHttpLibraryRequestMethod : uint8;
struct FJsonLibraryValue;
#ifdef HTTPLIBRARY_HttpLibraryBinaryRequest_generated_h
#error "HttpLibraryBinaryRequest.generated.h already included, missing '#pragma once' in HttpLibraryBinaryRequest.h"
#endif
#define HTTPLIBRARY_HttpLibraryBinaryRequest_generated_h

#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_20_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryRequestOnBinaryResponse_Parms \
{ \
	int32 StatusCode; \
	TArray<FString> Headers; \
	EHttpLibraryContentType ContentType; \
	TArray<uint8> Content; \
}; \
static inline void FHttpLibraryRequestOnBinaryResponse_DelegateWrapper(const FScriptDelegate& HttpLibraryRequestOnBinaryResponse, int32 StatusCode, TArray<FString> const& Headers, EHttpLibraryContentType ContentType, TArray<uint8> const& Content) \
{ \
	_Script_HttpLibrary_eventHttpLibraryRequestOnBinaryResponse_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Headers=Headers; \
	Parms.ContentType=ContentType; \
	Parms.Content=Content; \
	HttpLibraryRequestOnBinaryResponse.ProcessDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_21_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryRequestOnBinaryProgress_Parms \
{ \
	int32 BytesSent; \
	int32 BytesReceived; \
}; \
static inline void FHttpLibraryRequestOnBinaryProgress_DelegateWrapper(const FScriptDelegate& HttpLibraryRequestOnBinaryProgress, int32 BytesSent, int32 BytesReceived) \
{ \
	_Script_HttpLibrary_eventHttpLibraryRequestOnBinaryProgress_Parms Parms; \
	Parms.BytesSent=BytesSent; \
	Parms.BytesReceived=BytesReceived; \
	HttpLibraryRequestOnBinaryProgress.ProcessDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_SPARSE_DATA
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendJSON); \
	DECLARE_FUNCTION(execSendString); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execIsComplete); \
	DECLARE_FUNCTION(execIsRunning);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendJSON); \
	DECLARE_FUNCTION(execSendString); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execIsComplete); \
	DECLARE_FUNCTION(execIsRunning);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_ACCESSORS
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpLibraryBinaryRequest(); \
	friend struct Z_Construct_UClass_UHttpLibraryBinaryRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryBinaryRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), NO_API) \
	DECLARE_SERIALIZER(UHttpLibraryBinaryRequest)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUHttpLibraryBinaryRequest(); \
	friend struct Z_Construct_UClass_UHttpLibraryBinaryRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryBinaryRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), NO_API) \
	DECLARE_SERIALIZER(UHttpLibraryBinaryRequest)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpLibraryBinaryRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryBinaryRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpLibraryBinaryRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryBinaryRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpLibraryBinaryRequest(UHttpLibraryBinaryRequest&&); \
	NO_API UHttpLibraryBinaryRequest(const UHttpLibraryBinaryRequest&); \
public: \
	NO_API virtual ~UHttpLibraryBinaryRequest();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpLibraryBinaryRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpLibraryBinaryRequest(UHttpLibraryBinaryRequest&&); \
	NO_API UHttpLibraryBinaryRequest(const UHttpLibraryBinaryRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpLibraryBinaryRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryBinaryRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryBinaryRequest) \
	NO_API virtual ~UHttpLibraryBinaryRequest();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_23_PROLOG
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_RPC_WRAPPERS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_INCLASS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HttpLibraryBinaryRequest."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPLIBRARY_API UClass* StaticClass<class UHttpLibraryBinaryRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryBinaryRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
