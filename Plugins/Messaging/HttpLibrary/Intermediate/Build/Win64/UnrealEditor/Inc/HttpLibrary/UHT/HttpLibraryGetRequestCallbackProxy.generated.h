// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryGetRequestCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UHttpLibraryGetRequestCallbackProxy;
struct FJsonLibraryValue;
#ifdef HTTPLIBRARY_HttpLibraryGetRequestCallbackProxy_generated_h
#error "HttpLibraryGetRequestCallbackProxy.generated.h already included, missing '#pragma once' in HttpLibraryGetRequestCallbackProxy.h"
#endif
#define HTTPLIBRARY_HttpLibraryGetRequestCallbackProxy_generated_h

#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_10_DELEGATE \
struct _Script_HttpLibrary_eventHttpLibraryGetRequestCallback_Parms \
{ \
	FJsonLibraryValue Response; \
	int32 StatusCode; \
}; \
static inline void FHttpLibraryGetRequestCallback_DelegateWrapper(const FMulticastScriptDelegate& HttpLibraryGetRequestCallback, FJsonLibraryValue const& Response, int32 StatusCode) \
{ \
	_Script_HttpLibrary_eventHttpLibraryGetRequestCallback_Parms Parms; \
	Parms.Response=Response; \
	Parms.StatusCode=StatusCode; \
	HttpLibraryGetRequestCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_SPARSE_DATA
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForGet);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForGet);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_ACCESSORS
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpLibraryGetRequestCallbackProxy(); \
	friend struct Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryGetRequestCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), HTTPLIBRARY_API) \
	DECLARE_SERIALIZER(UHttpLibraryGetRequestCallbackProxy)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHttpLibraryGetRequestCallbackProxy(); \
	friend struct Z_Construct_UClass_UHttpLibraryGetRequestCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryGetRequestCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), HTTPLIBRARY_API) \
	DECLARE_SERIALIZER(UHttpLibraryGetRequestCallbackProxy)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPLIBRARY_API UHttpLibraryGetRequestCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryGetRequestCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPLIBRARY_API, UHttpLibraryGetRequestCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryGetRequestCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPLIBRARY_API UHttpLibraryGetRequestCallbackProxy(UHttpLibraryGetRequestCallbackProxy&&); \
	HTTPLIBRARY_API UHttpLibraryGetRequestCallbackProxy(const UHttpLibraryGetRequestCallbackProxy&); \
public: \
	HTTPLIBRARY_API virtual ~UHttpLibraryGetRequestCallbackProxy();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPLIBRARY_API UHttpLibraryGetRequestCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPLIBRARY_API UHttpLibraryGetRequestCallbackProxy(UHttpLibraryGetRequestCallbackProxy&&); \
	HTTPLIBRARY_API UHttpLibraryGetRequestCallbackProxy(const UHttpLibraryGetRequestCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPLIBRARY_API, UHttpLibraryGetRequestCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryGetRequestCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryGetRequestCallbackProxy) \
	HTTPLIBRARY_API virtual ~UHttpLibraryGetRequestCallbackProxy();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_12_PROLOG
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_RPC_WRAPPERS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_INCLASS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HttpLibraryGetRequestCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPLIBRARY_API UClass* StaticClass<class UHttpLibraryGetRequestCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryGetRequestCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
