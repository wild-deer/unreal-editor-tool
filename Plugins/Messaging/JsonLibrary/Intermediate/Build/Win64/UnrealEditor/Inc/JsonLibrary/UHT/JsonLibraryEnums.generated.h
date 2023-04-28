// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonLibraryEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSONLIBRARY_JsonLibraryEnums_generated_h
#error "JsonLibraryEnums.generated.h already included, missing '#pragma once' in JsonLibraryEnums.h"
#endif
#define JSONLIBRARY_JsonLibraryEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryEnums_h


#define FOREACH_ENUM_EJSONLIBRARYTYPE(op) \
	op(EJsonLibraryType::Invalid) \
	op(EJsonLibraryType::Null) \
	op(EJsonLibraryType::Object) \
	op(EJsonLibraryType::Array) \
	op(EJsonLibraryType::Boolean) \
	op(EJsonLibraryType::Number) \
	op(EJsonLibraryType::String) 

enum class EJsonLibraryType : uint8;
template<> struct TIsUEnumClass<EJsonLibraryType> { enum { Value = true }; };
template<> JSONLIBRARY_API UEnum* StaticEnum<EJsonLibraryType>();

#define FOREACH_ENUM_EJSONLIBRARYNOTIFYACTION(op) \
	op(EJsonLibraryNotifyAction::None) \
	op(EJsonLibraryNotifyAction::Added) \
	op(EJsonLibraryNotifyAction::Removed) \
	op(EJsonLibraryNotifyAction::Changed) \
	op(EJsonLibraryNotifyAction::Reset) 

enum class EJsonLibraryNotifyAction : uint8;
template<> struct TIsUEnumClass<EJsonLibraryNotifyAction> { enum { Value = true }; };
template<> JSONLIBRARY_API UEnum* StaticEnum<EJsonLibraryNotifyAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
