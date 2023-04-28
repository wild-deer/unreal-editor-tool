// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebUI_init() {}
	WEBUI_API UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature();
	WEBUI_API UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature();
	WEBUI_API UFunction* Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WebUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WebUI()
	{
		if (!Z_Registration_Info_UPackage__Script_WebUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebInterface_OnInterfaceEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebInterface_OnPopupEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebInterface_OnUrlChangedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD5647B6D,
				0xAD2C48D5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WebUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WebUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WebUI(Z_Construct_UPackage__Script_WebUI, TEXT("/Script/WebUI"), Z_Registration_Info_UPackage__Script_WebUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD5647B6D, 0xAD2C48D5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
