// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonLibrary/Public/JsonLibraryBlueprintHelpers.h"
#include "JsonLibrary/Public/JsonLibraryObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonLibraryBlueprintHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	JSONLIBRARY_API UClass* Z_Construct_UClass_UJsonLibraryBlueprintHelpers();
	JSONLIBRARY_API UClass* Z_Construct_UClass_UJsonLibraryBlueprintHelpers_NoRegister();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonLibraryObject();
	JSONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FStructBase();
	UPackage* Z_Construct_UPackage__Script_JsonLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructBase;
class UScriptStruct* FStructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructBase, Z_Construct_UPackage__Script_JsonLibrary(), TEXT("StructBase"));
	}
	return Z_Registration_Info_UScriptStruct_StructBase.OuterSingleton;
}
template<> JSONLIBRARY_API UScriptStruct* StaticStruct<FStructBase>()
{
	return FStructBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JsonLibraryBlueprintHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonLibrary,
		nullptr,
		&NewStructOps,
		"StructBase",
		sizeof(FStructBase),
		alignof(FStructBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StructBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructBase.InnerSingleton, Z_Construct_UScriptStruct_FStructBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructBase.InnerSingleton;
	}
	DEFINE_FUNCTION(UJsonLibraryBlueprintHelpers::execIsValidObject)
	{
		P_GET_STRUCT_REF(FJsonLibraryObject,Z_Param_Out_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonLibraryBlueprintHelpers::IsValidObject(Z_Param_Out_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibraryBlueprintHelpers::execConstructInvalidObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJsonLibraryObject*)Z_Param__Result=UJsonLibraryBlueprintHelpers::ConstructInvalidObject();
		P_NATIVE_END;
	}
	void UJsonLibraryBlueprintHelpers::StaticRegisterNativesUJsonLibraryBlueprintHelpers()
	{
		UClass* Class = UJsonLibraryBlueprintHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructInvalidObject", &UJsonLibraryBlueprintHelpers::execConstructInvalidObject },
			{ "IsValidObject", &UJsonLibraryBlueprintHelpers::execIsValidObject },
			{ "StructFromJson", &UJsonLibraryBlueprintHelpers::execStructFromJson },
			{ "StructToJson", &UJsonLibraryBlueprintHelpers::execStructToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics
	{
		struct JsonLibraryBlueprintHelpers_eventConstructInvalidObject_Parms
		{
			FJsonLibraryObject ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventConstructInvalidObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonLibraryObject, METADATA_PARAMS(nullptr, 0) }; // 2759709843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON Library" },
		{ "ModuleRelativePath", "Public/JsonLibraryBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibraryBlueprintHelpers, nullptr, "ConstructInvalidObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::JsonLibraryBlueprintHelpers_eventConstructInvalidObject_Parms), Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics
	{
		struct JsonLibraryBlueprintHelpers_eventIsValidObject_Parms
		{
			FJsonLibraryObject Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventIsValidObject_Parms, Object), Z_Construct_UScriptStruct_FJsonLibraryObject, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_Object_MetaData)) }; // 2759709843
	void Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonLibraryBlueprintHelpers_eventIsValidObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonLibraryBlueprintHelpers_eventIsValidObject_Parms), &Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON Library" },
		{ "ModuleRelativePath", "Public/JsonLibraryBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibraryBlueprintHelpers, nullptr, "IsValidObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::JsonLibraryBlueprintHelpers_eventIsValidObject_Parms), Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics
	{
		struct JsonLibraryBlueprintHelpers_eventStructFromJson_Parms
		{
			const UScriptStruct* StructType;
			FJsonLibraryObject Object;
			FStructBase OutStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventStructFromJson_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_StructType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventStructFromJson_Parms, Object), Z_Construct_UScriptStruct_FJsonLibraryObject, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_Object_MetaData)) }; // 2759709843
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventStructFromJson_Parms, OutStruct), Z_Construct_UScriptStruct_FStructBase, METADATA_PARAMS(nullptr, 0) }; // 1174176340
	void Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonLibraryBlueprintHelpers_eventStructFromJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonLibraryBlueprintHelpers_eventStructFromJson_Parms), &Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_StructType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON Library" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/JsonLibraryBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibraryBlueprintHelpers, nullptr, "StructFromJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::JsonLibraryBlueprintHelpers_eventStructFromJson_Parms), Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics
	{
		struct JsonLibraryBlueprintHelpers_eventStructToJson_Parms
		{
			const UScriptStruct* StructType;
			FStructBase Struct;
			FJsonLibraryObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventStructToJson_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_StructType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventStructToJson_Parms, Struct), Z_Construct_UScriptStruct_FStructBase, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_Struct_MetaData)) }; // 1174176340
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonLibraryBlueprintHelpers_eventStructToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonLibraryObject, METADATA_PARAMS(nullptr, 0) }; // 2759709843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_StructType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON Library" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/JsonLibraryBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibraryBlueprintHelpers, nullptr, "StructToJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::JsonLibraryBlueprintHelpers_eventStructToJson_Parms), Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonLibraryBlueprintHelpers);
	UClass* Z_Construct_UClass_UJsonLibraryBlueprintHelpers_NoRegister()
	{
		return UJsonLibraryBlueprintHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_ConstructInvalidObject, "ConstructInvalidObject" }, // 91129985
		{ &Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_IsValidObject, "IsValidObject" }, // 2467305092
		{ &Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructFromJson, "StructFromJson" }, // 3536974093
		{ &Z_Construct_UFunction_UJsonLibraryBlueprintHelpers_StructToJson, "StructToJson" }, // 1405139062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JsonLibraryBlueprintHelpers.h" },
		{ "ModuleRelativePath", "Public/JsonLibraryBlueprintHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonLibraryBlueprintHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::ClassParams = {
		&UJsonLibraryBlueprintHelpers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonLibraryBlueprintHelpers()
	{
		if (!Z_Registration_Info_UClass_UJsonLibraryBlueprintHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonLibraryBlueprintHelpers.OuterSingleton, Z_Construct_UClass_UJsonLibraryBlueprintHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonLibraryBlueprintHelpers.OuterSingleton;
	}
	template<> JSONLIBRARY_API UClass* StaticClass<UJsonLibraryBlueprintHelpers>()
	{
		return UJsonLibraryBlueprintHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonLibraryBlueprintHelpers);
	UJsonLibraryBlueprintHelpers::~UJsonLibraryBlueprintHelpers() {}
	struct Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics::ScriptStructInfo[] = {
		{ FStructBase::StaticStruct, Z_Construct_UScriptStruct_FStructBase_Statics::NewStructOps, TEXT("StructBase"), &Z_Registration_Info_UScriptStruct_StructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructBase), 1174176340U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJsonLibraryBlueprintHelpers, UJsonLibraryBlueprintHelpers::StaticClass, TEXT("UJsonLibraryBlueprintHelpers"), &Z_Registration_Info_UClass_UJsonLibraryBlueprintHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonLibraryBlueprintHelpers), 1974732771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_8321031(TEXT("/Script/JsonLibrary"),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shanxi_Plugins_Messaging_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryBlueprintHelpers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
