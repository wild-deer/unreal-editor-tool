// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebBrowserUI/Public/WebInterfaceJSFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterfaceJSFunction() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebBrowserUI();
	WEBBROWSERUI_API UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase();
	WEBBROWSERUI_API UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceJSFunction();
	WEBBROWSERUI_API UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceJSResponse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase;
class UScriptStruct* FWebInterfaceJSCallbackBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase, Z_Construct_UPackage__Script_WebBrowserUI(), TEXT("WebInterfaceJSCallbackBase"));
	}
	return Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase.OuterSingleton;
}
template<> WEBBROWSERUI_API UScriptStruct* StaticStruct<FWebInterfaceJSCallbackBase>()
{
	return FWebInterfaceJSCallbackBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for JS callback objects. */" },
		{ "ModuleRelativePath", "Public/WebInterfaceJSFunction.h" },
		{ "ToolTip", "Base class for JS callback objects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebInterfaceJSCallbackBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowserUI,
		nullptr,
		&NewStructOps,
		"WebInterfaceJSCallbackBase",
		sizeof(FWebInterfaceJSCallbackBase),
		alignof(FWebInterfaceJSCallbackBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase.InnerSingleton, Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWebInterfaceJSFunction>() == std::is_polymorphic<FWebInterfaceJSCallbackBase>(), "USTRUCT FWebInterfaceJSFunction cannot be polymorphic unless super FWebInterfaceJSCallbackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction;
class UScriptStruct* FWebInterfaceJSFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebInterfaceJSFunction, Z_Construct_UPackage__Script_WebBrowserUI(), TEXT("WebInterfaceJSFunction"));
	}
	return Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction.OuterSingleton;
}
template<> WEBBROWSERUI_API UScriptStruct* StaticStruct<FWebInterfaceJSFunction>()
{
	return FWebInterfaceJSFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a remote JS function.\n * FWebJSFunction objects represent a JS function and allow calling them from native code.\n * FWebJSFunction objects can also be added to delegates and events using the Bind/AddLambda method.\n */" },
		{ "ModuleRelativePath", "Public/WebInterfaceJSFunction.h" },
		{ "ToolTip", "Representation of a remote JS function.\nFWebJSFunction objects represent a JS function and allow calling them from native code.\nFWebJSFunction objects can also be added to delegates and events using the Bind/AddLambda method." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebInterfaceJSFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowserUI,
		Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase,
		&NewStructOps,
		"WebInterfaceJSFunction",
		sizeof(FWebInterfaceJSFunction),
		alignof(FWebInterfaceJSFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceJSFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction.InnerSingleton, Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWebInterfaceJSResponse>() == std::is_polymorphic<FWebInterfaceJSCallbackBase>(), "USTRUCT FWebInterfaceJSResponse cannot be polymorphic unless super FWebInterfaceJSCallbackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse;
class UScriptStruct* FWebInterfaceJSResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebInterfaceJSResponse, Z_Construct_UPackage__Script_WebBrowserUI(), TEXT("WebInterfaceJSResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse.OuterSingleton;
}
template<> WEBBROWSERUI_API UScriptStruct* StaticStruct<FWebInterfaceJSResponse>()
{
	return FWebInterfaceJSResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  Representation of a remote JS async response object.\n *  UFUNCTIONs taking a FWebJSResponse will get it passed in automatically when called from a web browser.\n *  Pass a result or error back by invoking Success or Failure on the object.\n *  UFunctions accepting a FWebJSResponse should have a void return type, as any value returned from the function will be ignored.\n *  Calling the response methods does not have to happen before returning from the function, which means you can use this to implement asynchronous functionality.\n *\n *  Note that the remote object will become invalid as soon as a result has been delivered, so you can only call either Success or Failure once.\n */" },
		{ "ModuleRelativePath", "Public/WebInterfaceJSFunction.h" },
		{ "ToolTip", "Representation of a remote JS async response object.\nUFUNCTIONs taking a FWebJSResponse will get it passed in automatically when called from a web browser.\nPass a result or error back by invoking Success or Failure on the object.\nUFunctions accepting a FWebJSResponse should have a void return type, as any value returned from the function will be ignored.\nCalling the response methods does not have to happen before returning from the function, which means you can use this to implement asynchronous functionality.\n\nNote that the remote object will become invalid as soon as a result has been delivered, so you can only call either Success or Failure once." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebInterfaceJSResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowserUI,
		Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase,
		&NewStructOps,
		"WebInterfaceJSResponse",
		sizeof(FWebInterfaceJSResponse),
		alignof(FWebInterfaceJSResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceJSResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse.InnerSingleton, Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebBrowserUI_Public_WebInterfaceJSFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebBrowserUI_Public_WebInterfaceJSFunction_h_Statics::ScriptStructInfo[] = {
		{ FWebInterfaceJSCallbackBase::StaticStruct, Z_Construct_UScriptStruct_FWebInterfaceJSCallbackBase_Statics::NewStructOps, TEXT("WebInterfaceJSCallbackBase"), &Z_Registration_Info_UScriptStruct_WebInterfaceJSCallbackBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebInterfaceJSCallbackBase), 1964614484U) },
		{ FWebInterfaceJSFunction::StaticStruct, Z_Construct_UScriptStruct_FWebInterfaceJSFunction_Statics::NewStructOps, TEXT("WebInterfaceJSFunction"), &Z_Registration_Info_UScriptStruct_WebInterfaceJSFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebInterfaceJSFunction), 3466842412U) },
		{ FWebInterfaceJSResponse::StaticStruct, Z_Construct_UScriptStruct_FWebInterfaceJSResponse_Statics::NewStructOps, TEXT("WebInterfaceJSResponse"), &Z_Registration_Info_UScriptStruct_WebInterfaceJSResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebInterfaceJSResponse), 1679036822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebBrowserUI_Public_WebInterfaceJSFunction_h_168735234(TEXT("/Script/WebBrowserUI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebBrowserUI_Public_WebInterfaceJSFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebBrowserUI_Public_WebInterfaceJSFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
