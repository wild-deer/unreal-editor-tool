// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EHttpLibraryContentType : uint8;
enum class EHttpLibraryRequestMethod : uint8;
struct FJsonLibraryValue;
#ifdef HTTPLIBRARY_HttpLibraryRequest_generated_h
#error "HttpLibraryRequest.generated.h already included, missing '#pragma once' in HttpLibraryRequest.h"
#endif
#define HTTPLIBRARY_HttpLibraryRequest_generated_h

#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_20_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryRequestOnResponse_Parms \
{ \
	int32 StatusCode; \
	EHttpLibraryContentType ContentType; \
	FString Content; \
}; \
static inline void FHttpLibraryRequestOnResponse_DelegateWrapper(const FScriptDelegate& HttpLibraryRequestOnResponse, int32 StatusCode, EHttpLibraryContentType ContentType, const FString& Content) \
{ \
	_Script_HttpLibrary_eventHttpLibraryRequestOnResponse_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.ContentType=ContentType; \
	Parms.Content=Content; \
	HttpLibraryRequestOnResponse.ProcessDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_21_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryRequestOnProgress_Parms \
{ \
	int32 BytesSent; \
	int32 BytesReceived; \
}; \
static inline void FHttpLibraryRequestOnProgress_DelegateWrapper(const FScriptDelegate& HttpLibraryRequestOnProgress, int32 BytesSent, int32 BytesReceived) \
{ \
	_Script_HttpLibrary_eventHttpLibraryRequestOnProgress_Parms Parms; \
	Parms.BytesSent=BytesSent; \
	Parms.BytesReceived=BytesReceived; \
	HttpLibraryRequestOnProgress.ProcessDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_SPARSE_DATA
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendJSON); \
	DECLARE_FUNCTION(execSendString); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execIsComplete); \
	DECLARE_FUNCTION(execIsRunning);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendJSON); \
	DECLARE_FUNCTION(execSendString); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execIsComplete); \
	DECLARE_FUNCTION(execIsRunning);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_ACCESSORS
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpLibraryRequest(); \
	friend struct Z_Construct_UClass_UHttpLibraryRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), NO_API) \
	DECLARE_SERIALIZER(UHttpLibraryRequest)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUHttpLibraryRequest(); \
	friend struct Z_Construct_UClass_UHttpLibraryRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), NO_API) \
	DECLARE_SERIALIZER(UHttpLibraryRequest)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpLibraryRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpLibraryRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpLibraryRequest(UHttpLibraryRequest&&); \
	NO_API UHttpLibraryRequest(const UHttpLibraryRequest&); \
public: \
	NO_API virtual ~UHttpLibraryRequest();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpLibraryRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpLibraryRequest(UHttpLibraryRequest&&); \
	NO_API UHttpLibraryRequest(const UHttpLibraryRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpLibraryRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryRequest) \
	NO_API virtual ~UHttpLibraryRequest();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_23_PROLOG
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_RPC_WRAPPERS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_INCLASS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HttpLibraryRequest."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPLIBRARY_API UClass* StaticClass<class UHttpLibraryRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
