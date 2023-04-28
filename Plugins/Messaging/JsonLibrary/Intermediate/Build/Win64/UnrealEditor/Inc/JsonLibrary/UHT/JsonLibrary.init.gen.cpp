// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonLibrary_init() {}
	JSONLIBRARY_API UFunction* Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature();
	JSONLIBRARY_API UFunction* Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryObjectNotify__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JsonLibrary;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JsonLibrary()
	{
		if (!Z_Registration_Info_UPackage__Script_JsonLibrary.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryObjectNotify__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JsonLibrary",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x65F4B00B,
				0x763E755D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JsonLibrary.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JsonLibrary.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JsonLibrary(Z_Construct_UPackage__Script_JsonLibrary, TEXT("/Script/JsonLibrary"), Z_Registration_Info_UPackage__Script_JsonLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65F4B00B, 0x763E755D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
