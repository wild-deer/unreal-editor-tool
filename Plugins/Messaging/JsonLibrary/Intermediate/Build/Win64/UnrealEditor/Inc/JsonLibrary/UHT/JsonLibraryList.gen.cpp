// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonLibrary/Public/JsonLibraryList.h"
#include "JsonLibrary/Public/JsonLibraryValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonLibraryList() {}
// Cross Module References
	JSONLIBRARY_API UEnum* Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction();
	JSONLIBRARY_API UFunction* Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryList();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryValue();
	UPackage* Z_Construct_UPackage__Script_JsonLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics
	{
		struct _Script_JsonLibrary_eventJsonLibraryListNotify_Parms
		{
			FJsonLibraryValue List;
			EJsonLibraryNotifyAction Action;
			int32 Index;
			FJsonLibraryValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_List;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_List_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_JsonLibrary_eventJsonLibraryListNotify_Parms, List), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_List_MetaData)) }; // 3884245201
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_JsonLibrary_eventJsonLibraryListNotify_Parms, Action), Z_Construct_UEnum_JsonLibrary_EJsonLibraryNotifyAction, METADATA_PARAMS(nullptr, 0) }; // 983450544
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_JsonLibrary_eventJsonLibraryListNotify_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_JsonLibrary_eventJsonLibraryListNotify_Parms, Value), Z_Construct_UScriptStruct_FJsonLibraryValue, METADATA_PARAMS(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Value_MetaData)) }; // 3884245201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JsonLibraryList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_JsonLibrary, nullptr, "JsonLibraryListNotify__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::_Script_JsonLibrary_eventJsonLibraryListNotify_Parms), Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JsonLibrary_JsonLibraryListNotify__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JsonLibraryList;
class UScriptStruct* FJsonLibraryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JsonLibraryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JsonLibraryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonLibraryList, Z_Construct_UPackage__Script_JsonLibrary(), TEXT("JsonLibraryList"));
	}
	return Z_Registration_Info_UScriptStruct_JsonLibraryList.OuterSingleton;
}
template<> JSONLIBRARY_API UScriptStruct* StaticStruct<FJsonLibraryList>()
{
	return FJsonLibraryList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJsonLibraryList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonLibraryList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "JSON List" },
		{ "ModuleRelativePath", "Public/JsonLibraryList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonLibraryList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonLibraryList>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonLibraryList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonLibrary,
		nullptr,
		&NewStructOps,
		"JsonLibraryList",
		sizeof(FJsonLibraryList),
		alignof(FJsonLibraryList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonLibraryList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonLibraryList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryList()
	{
		if (!Z_Registration_Info_UScriptStruct_JsonLibraryList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JsonLibraryList.InnerSingleton, Z_Construct_UScriptStruct_FJsonLibraryList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JsonLibraryList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_Statics::ScriptStructInfo[] = {
		{ FJsonLibraryList::StaticStruct, Z_Construct_UScriptStruct_FJsonLibraryList_Statics::NewStructOps, TEXT("JsonLibraryList"), &Z_Registration_Info_UScriptStruct_JsonLibraryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJsonLibraryList), 1163239296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_874273604(TEXT("/Script/JsonLibrary"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
