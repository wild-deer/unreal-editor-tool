// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonLibraryList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EJsonLibraryNotifyAction : uint8;
struct FJsonLibraryValue;
#ifdef JSONLIBRARY_JsonLibraryList_generated_h
#error "JsonLibraryList.generated.h already included, missing '#pragma once' in JsonLibraryList.h"
#endif
#define JSONLIBRARY_JsonLibraryList_generated_h

#define FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_14_DELEGATE \
struct _Script_JsonLibrary_eventJsonLibraryListNotify_Parms \
{ \
	FJsonLibraryValue List; \
	EJsonLibraryNotifyAction Action; \
	int32 Index; \
	FJsonLibraryValue Value; \
}; \
static inline void FJsonLibraryListNotify_DelegateWrapper(const FScriptDelegate& JsonLibraryListNotify, FJsonLibraryValue const& List, EJsonLibraryNotifyAction Action, int32 Index, FJsonLibraryValue const& Value) \
{ \
	_Script_JsonLibrary_eventJsonLibraryListNotify_Parms Parms; \
	Parms.List=List; \
	Parms.Action=Action; \
	Parms.Index=Index; \
	Parms.Value=Value; \
	JsonLibraryListNotify.ProcessDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJsonLibraryList_Statics; \
	static class UScriptStruct* StaticStruct();


template<> JSONLIBRARY_API UScriptStruct* StaticStruct<struct FJsonLibraryList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
