// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonLibraryObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EJsonLibraryNotifyAction : uint8;
struct FJsonLibraryValue;
#ifdef JSONLIBRARY_JsonLibraryObject_generated_h
#error "JsonLibraryObject.generated.h already included, missing '#pragma once' in JsonLibraryObject.h"
#endif
#define JSONLIBRARY_JsonLibraryObject_generated_h

#define FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryObject_h_15_DELEGATE \
struct _Script_JsonLibrary_eventJsonLibraryObjectNotify_Parms \
{ \
	FJsonLibraryValue Object; \
	EJsonLibraryNotifyAction Action; \
	FString Key; \
	FJsonLibraryValue Value; \
}; \
static inline void FJsonLibraryObjectNotify_DelegateWrapper(const FScriptDelegate& JsonLibraryObjectNotify, FJsonLibraryValue const& Object, EJsonLibraryNotifyAction Action, const FString& Key, FJsonLibraryValue const& Value) \
{ \
	_Script_JsonLibrary_eventJsonLibraryObjectNotify_Parms Parms; \
	Parms.Object=Object; \
	Parms.Action=Action; \
	Parms.Key=Key; \
	Parms.Value=Value; \
	JsonLibraryObjectNotify.ProcessDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryObject_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJsonLibraryObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> JSONLIBRARY_API UScriptStruct* StaticStruct<struct FJsonLibraryObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
