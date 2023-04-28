// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryRequestCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UHttpLibraryRequestCallbackProxy;
enum class EHttpLibraryContentType : uint8;
enum class EHttpLibraryRequestMethod : uint8;
#ifdef HTTPLIBRARY_HttpLibraryRequestCallbackProxy_generated_h
#error "HttpLibraryRequestCallbackProxy.generated.h already included, missing '#pragma once' in HttpLibraryRequestCallbackProxy.h"
#endif
#define HTTPLIBRARY_HttpLibraryRequestCallbackProxy_generated_h

#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_9_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms \
{ \
	TArray<uint8> Response; \
	EHttpLibraryContentType ContentType; \
	int32 StatusCode; \
	int32 BytesSent; \
	int32 BytesReceived; \
}; \
static inline void FHttpLibraryRequestCallback_DelegateWrapper(const FMulticastScriptDelegate& HttpLibraryRequestCallback, TArray<uint8> const& Response, EHttpLibraryContentType ContentType, int32 StatusCode, int32 BytesSent, int32 BytesReceived) \
{ \
	_Script_HttpLibrary_eventHttpLibraryRequestCallback_Parms Parms; \
	Parms.Response=Response; \
	Parms.ContentType=ContentType; \
	Parms.StatusCode=StatusCode; \
	Parms.BytesSent=BytesSent; \
	Parms.BytesReceived=BytesReceived; \
	HttpLibraryRequestCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_SPARSE_DATA
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForRequest);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForRequest);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_ACCESSORS
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpLibraryRequestCallbackProxy(); \
	friend struct Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryRequestCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), HTTPLIBRARY_API) \
	DECLARE_SERIALIZER(UHttpLibraryRequestCallbackProxy)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHttpLibraryRequestCallbackProxy(); \
	friend struct Z_Construct_UClass_UHttpLibraryRequestCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryRequestCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), HTTPLIBRARY_API) \
	DECLARE_SERIALIZER(UHttpLibraryRequestCallbackProxy)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPLIBRARY_API UHttpLibraryRequestCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryRequestCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPLIBRARY_API, UHttpLibraryRequestCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryRequestCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPLIBRARY_API UHttpLibraryRequestCallbackProxy(UHttpLibraryRequestCallbackProxy&&); \
	HTTPLIBRARY_API UHttpLibraryRequestCallbackProxy(const UHttpLibraryRequestCallbackProxy&); \
public: \
	HTTPLIBRARY_API virtual ~UHttpLibraryRequestCallbackProxy();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPLIBRARY_API UHttpLibraryRequestCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPLIBRARY_API UHttpLibraryRequestCallbackProxy(UHttpLibraryRequestCallbackProxy&&); \
	HTTPLIBRARY_API UHttpLibraryRequestCallbackProxy(const UHttpLibraryRequestCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPLIBRARY_API, UHttpLibraryRequestCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryRequestCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryRequestCallbackProxy) \
	HTTPLIBRARY_API virtual ~UHttpLibraryRequestCallbackProxy();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_11_PROLOG
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_RPC_WRAPPERS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_INCLASS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HttpLibraryRequestCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPLIBRARY_API UClass* StaticClass<class UHttpLibraryRequestCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryRequestCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
