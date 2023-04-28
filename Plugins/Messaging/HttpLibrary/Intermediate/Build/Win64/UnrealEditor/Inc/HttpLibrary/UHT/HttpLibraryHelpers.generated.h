// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UHttpLibraryBinaryRequest;
class UHttpLibraryJsonRequest;
class UHttpLibraryRequest;
enum class EHttpLibraryContentType : uint8;
struct FJsonLibraryValue;
#ifdef HTTPLIBRARY_HttpLibraryHelpers_generated_h
#error "HttpLibraryHelpers.generated.h already included, missing '#pragma once' in HttpLibraryHelpers.h"
#endif
#define HTTPLIBRARY_HttpLibraryHelpers_generated_h

#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_SPARSE_DATA
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructHttpBinaryRequestWithProgress); \
	DECLARE_FUNCTION(execConstructHttpBinaryRequest); \
	DECLARE_FUNCTION(execConstructHttpJsonRequestWithProgress); \
	DECLARE_FUNCTION(execConstructHttpJsonRequest); \
	DECLARE_FUNCTION(execConstructHttpRequestWithProgress); \
	DECLARE_FUNCTION(execConstructHttpRequest); \
	DECLARE_FUNCTION(execSetHttpTimeout); \
	DECLARE_FUNCTION(execGetHttpTimeout); \
	DECLARE_FUNCTION(execIsHttpEnabled); \
	DECLARE_FUNCTION(execConvertJsonToBytes); \
	DECLARE_FUNCTION(execConvertBytesToJson); \
	DECLARE_FUNCTION(execConvertStringToBytes); \
	DECLARE_FUNCTION(execConvertBytesToString); \
	DECLARE_FUNCTION(execAppendQueryString); \
	DECLARE_FUNCTION(execFindContentType); \
	DECLARE_FUNCTION(execGetContentType);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructHttpBinaryRequestWithProgress); \
	DECLARE_FUNCTION(execConstructHttpBinaryRequest); \
	DECLARE_FUNCTION(execConstructHttpJsonRequestWithProgress); \
	DECLARE_FUNCTION(execConstructHttpJsonRequest); \
	DECLARE_FUNCTION(execConstructHttpRequestWithProgress); \
	DECLARE_FUNCTION(execConstructHttpRequest); \
	DECLARE_FUNCTION(execSetHttpTimeout); \
	DECLARE_FUNCTION(execGetHttpTimeout); \
	DECLARE_FUNCTION(execIsHttpEnabled); \
	DECLARE_FUNCTION(execConvertJsonToBytes); \
	DECLARE_FUNCTION(execConvertBytesToJson); \
	DECLARE_FUNCTION(execConvertStringToBytes); \
	DECLARE_FUNCTION(execConvertBytesToString); \
	DECLARE_FUNCTION(execAppendQueryString); \
	DECLARE_FUNCTION(execFindContentType); \
	DECLARE_FUNCTION(execGetContentType);


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_ACCESSORS
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpLibraryHelpers(); \
	friend struct Z_Construct_UClass_UHttpLibraryHelpers_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), NO_API) \
	DECLARE_SERIALIZER(UHttpLibraryHelpers)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHttpLibraryHelpers(); \
	friend struct Z_Construct_UClass_UHttpLibraryHelpers_Statics; \
public: \
	DECLARE_CLASS(UHttpLibraryHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpLibrary"), NO_API) \
	DECLARE_SERIALIZER(UHttpLibraryHelpers)


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpLibraryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpLibraryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpLibraryHelpers(UHttpLibraryHelpers&&); \
	NO_API UHttpLibraryHelpers(const UHttpLibraryHelpers&); \
public: \
	NO_API virtual ~UHttpLibraryHelpers();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpLibraryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpLibraryHelpers(UHttpLibraryHelpers&&); \
	NO_API UHttpLibraryHelpers(const UHttpLibraryHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpLibraryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpLibraryHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpLibraryHelpers) \
	NO_API virtual ~UHttpLibraryHelpers();


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_12_PROLOG
#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_RPC_WRAPPERS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_INCLASS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_SPARSE_DATA \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_ACCESSORS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPLIBRARY_API UClass* StaticClass<class UHttpLibraryHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
