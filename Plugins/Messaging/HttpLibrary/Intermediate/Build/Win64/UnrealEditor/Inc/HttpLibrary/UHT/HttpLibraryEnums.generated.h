// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpLibraryEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTTPLIBRARY_HttpLibraryEnums_generated_h
#error "HttpLibraryEnums.generated.h already included, missing '#pragma once' in HttpLibraryEnums.h"
#endif
#define HTTPLIBRARY_HttpLibraryEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Messaging_HttpLibrary_Source_HttpLibrary_Public_HttpLibraryEnums_h


#define FOREACH_ENUM_EHTTPLIBRARYREQUESTMETHOD(op) \
	op(EHttpLibraryRequestMethod::GET) \
	op(EHttpLibraryRequestMethod::POST) \
	op(EHttpLibraryRequestMethod::PUT) \
	op(EHttpLibraryRequestMethod::PATCH) \
	op(EHttpLibraryRequestMethod::DELETE) \
	op(EHttpLibraryRequestMethod::HEAD) \
	op(EHttpLibraryRequestMethod::CONNECT) \
	op(EHttpLibraryRequestMethod::OPTIONS) \
	op(EHttpLibraryRequestMethod::TRACE) 

enum class EHttpLibraryRequestMethod : uint8;
template<> struct TIsUEnumClass<EHttpLibraryRequestMethod> { enum { Value = true }; };
template<> HTTPLIBRARY_API UEnum* StaticEnum<EHttpLibraryRequestMethod>();

#define FOREACH_ENUM_EHTTPLIBRARYCONTENTTYPE(op) \
	op(EHttpLibraryContentType::Default) \
	op(EHttpLibraryContentType::TXT) \
	op(EHttpLibraryContentType::HTML) \
	op(EHttpLibraryContentType::CSS) \
	op(EHttpLibraryContentType::CSV) \
	op(EHttpLibraryContentType::JSON) \
	op(EHttpLibraryContentType::JS) \
	op(EHttpLibraryContentType::RTF) \
	op(EHttpLibraryContentType::XML) \
	op(EHttpLibraryContentType::XHTML) \
	op(EHttpLibraryContentType::BIN) \
	op(EHttpLibraryContentType::FORM) \
	op(EHttpLibraryContentType::DATA) 

enum class EHttpLibraryContentType : uint8;
template<> struct TIsUEnumClass<EHttpLibraryContentType> { enum { Value = true }; };
template<> HTTPLIBRARY_API UEnum* StaticEnum<EHttpLibraryContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
