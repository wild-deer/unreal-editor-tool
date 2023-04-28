// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryPostRequestCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UHttpLibraryPostRequestCallbackProxy;
struct FJsonLibraryValue;
#ifdef HTTPLIBRARY_HttpLibraryPostRequestCallbackProxy_generated_h
#error "HttpLibraryPostRequestCallbackProxy.generated.h already included, missing '#pragma once' in HttpLibraryPostRequestCallbackProxy.h"
#endif
#define HTTPLIBRARY_HttpLibraryPostRequestCallbackProxy_generated_h

#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_10_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryPostRequestCallback_Parms \
{ \
	FJsonLibraryValue Response; \
	int32 StatusCode; \
}; \
static inline void FHttpLibraryPostRequestCallback_DelegateWrapper(const FMulticastScriptDelegate& HttpLibraryPostRequestCallback, FJsonLibraryValue const& Response, int32 StatusCode) \
{ \
	_Script_HttpLibrary_eventHttpLibraryPostRequestCallback_Parms Parms; \
	Parms.Response=Response; \
	Parms.StatusCode=StatusCode; \
	HttpLibraryPostRequestCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_SPARSE_DATA
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForPost);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForPost);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_ACCESSORS
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpLibraryPostRequestCallbackProxy(); \
	friend struct Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryPostRequestCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), HTTPLIBRARY_API) \
	DECLARE_SERIALIZER(UHttpLibraryPostRequestCallbackProxy)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHttpLibraryPostRequestCallbackProxy(); \
	friend struct Z_Construct_UClass_UHttpLibraryPostRequestCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryPostRequestCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), HTTPLIBRARY_API) \
	DECLARE_SERIALIZER(UHttpLibraryPostRequestCallbackProxy)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPLIBRARY_API UHttpLibraryPostRequestCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryPostRequestCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPLIBRARY_API, UHttpLibraryPostRequestCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryPostRequestCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPLIBRARY_API UHttpLibraryPostRequestCallbackProxy(UHttpLibraryPostRequestCallbackProxy&&); \
	HTTPLIBRARY_API UHttpLibraryPostRequestCallbackProxy(const UHttpLibraryPostRequestCallbackProxy&); \
public: \
	HTTPLIBRARY_API virtual ~UHttpLibraryPostRequestCallbackProxy();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPLIBRARY_API UHttpLibraryPostRequestCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPLIBRARY_API UHttpLibraryPostRequestCallbackProxy(UHttpLibraryPostRequestCallbackProxy&&); \
	HTTPLIBRARY_API UHttpLibraryPostRequestCallbackProxy(const UHttpLibraryPostRequestCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPLIBRARY_API, UHttpLibraryPostRequestCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryPostRequestCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryPostRequestCallbackProxy) \
	HTTPLIBRARY_API virtual ~UHttpLibraryPostRequestCallbackProxy();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_12_PROLOG
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_RPC_WRAPPERS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_INCLASS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HttpLibraryPostRequestCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPLIBRARY_API UClass* StaticClass<class UHttpLibraryPostRequestCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryPostRequestCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
