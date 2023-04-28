// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/WebInterfaceHelpers.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
#include "WebUI/Public/WebInterfaceCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInterfaceHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_WebUI();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceHelpers();
	WEBUI_API UClass* Z_Construct_UClass_UWebInterfaceHelpers_NoRegister();
	WEBUI_API UScriptStruct* Z_Construct_UScriptStruct_FWebInterfaceCallback();
// End Cross Module References
	DEFINE_FUNCTION(UWebInterfaceHelpers::execWebInterfaceCallback_Call)
	{
		P_GET_STRUCT_REF(FWebInterfaceCallback,Z_Param_Out_Target);
		P_GET_STRUCT_REF(FJsonLibraryValue,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWebInterfaceHelpers::WebInterfaceCallback_Call(Z_Param_Out_Target,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInterfaceHelpers::execWebInterfaceCallback_IsValid)
	{
		P_GET_STRUCT_REF(FWebInterfaceCallback,Z_Param_Out_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWebInterfaceHelpers::WebInterfaceCallback_IsValid(Z_Param_Out_Target);
		P_NATIVE_END;
	}
	void UWebInterfaceHelpers::StaticRegisterNativesUWebInterfaceHelpers()
	{
		UClass* Class = UWebInterfaceHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WebInterfaceCallback_Call", &UWebInterfaceHelpers::execWebInterfaceCallback_Call },
			{ "WebInterfaceCallback_IsValid", &UWebInterfaceHelpers::execWebInterfaceCallback_IsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics
	{
		struct WebInterfaceHelpers_eventWebInterfaceCallback_Call_Parms
		{
			FWebInterfaceCallback Target;
			FJsonLibraryValue Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterfaceHelpers_eventWebInterfaceCallback_Call_Parms, Target), Z_Construct_UScriptStruct_FWebInterfaceCallback, METADATA_PARAMS(nullptr, 0) }; // 1936941784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterfaceHelpers_eventWebInterfaceCallback_Call_Parms, Data), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Data_MetaData)) }; // 3884245201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Data" },
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "Web UI|Callback" },
		{ "Comment", "// Call ue.interface.callback(data) in the browser context.\n" },
		{ "DisplayName", "Call" },
		{ "ModuleRelativePath", "Public/WebInterfaceHelpers.h" },
		{ "ToolTip", "Call ue.interface.callback(data) in the browser context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterfaceHelpers, nullptr, "WebInterfaceCallback_Call", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::WebInterfaceHelpers_eventWebInterfaceCallback_Call_Parms), Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics
	{
		struct WebInterfaceHelpers_eventWebInterfaceCallback_IsValid_Parms
		{
			FWebInterfaceCallback Target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebInterfaceHelpers_eventWebInterfaceCallback_IsValid_Parms, Target), Z_Construct_UScriptStruct_FWebInterfaceCallback, METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_Target_MetaData)) }; // 1936941784
	void Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebInterfaceHelpers_eventWebInterfaceCallback_IsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebInterfaceHelpers_eventWebInterfaceCallback_IsValid_Parms), &Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web UI|Callback" },
		{ "Comment", "// Check if this callback is valid.\n" },
		{ "DisplayName", "Valid" },
		{ "ModuleRelativePath", "Public/WebInterfaceHelpers.h" },
		{ "ToolTip", "Check if this callback is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInterfaceHelpers, nullptr, "WebInterfaceCallback_IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::WebInterfaceHelpers_eventWebInterfaceCallback_IsValid_Parms), Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebInterfaceHelpers);
	UClass* Z_Construct_UClass_UWebInterfaceHelpers_NoRegister()
	{
		return UWebInterfaceHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UWebInterfaceHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInterfaceHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebInterfaceHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_Call, "WebInterfaceCallback_Call" }, // 3157974313
		{ &Z_Construct_UFunction_UWebInterfaceHelpers_WebInterfaceCallback_IsValid, "WebInterfaceCallback_IsValid" }, // 3845010640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInterfaceHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebInterfaceHelpers.h" },
		{ "ModuleRelativePath", "Public/WebInterfaceHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInterfaceHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInterfaceHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebInterfaceHelpers_Statics::ClassParams = {
		&UWebInterfaceHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebInterfaceHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInterfaceHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInterfaceHelpers()
	{
		if (!Z_Registration_Info_UClass_UWebInterfaceHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebInterfaceHelpers.OuterSingleton, Z_Construct_UClass_UWebInterfaceHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebInterfaceHelpers.OuterSingleton;
	}
	template<> WEBUI_API UClass* StaticClass<UWebInterfaceHelpers>()
	{
		return UWebInterfaceHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInterfaceHelpers);
	UWebInterfaceHelpers::~UWebInterfaceHelpers() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebInterfaceHelpers, UWebInterfaceHelpers::StaticClass, TEXT("UWebInterfaceHelpers"), &Z_Registration_Info_UClass_UWebInterfaceHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebInterfaceHelpers), 4142043921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_3557362812(TEXT("/Script/WebUI"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
