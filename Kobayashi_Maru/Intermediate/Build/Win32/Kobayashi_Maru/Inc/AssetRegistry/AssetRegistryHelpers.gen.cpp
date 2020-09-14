// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Public/AssetRegistryHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistryHelpers() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTagAndValue();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FTagAndValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FTagAndValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagAndValue, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("TagAndValue"), sizeof(FTagAndValue), Get_Z_Construct_UScriptStruct_FTagAndValue_Hash());
	}
	return Singleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FTagAndValue>()
{
	return FTagAndValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTagAndValue(FTagAndValue::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("TagAndValue"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TagAndValue")),new UScriptStruct::TCppStructOps<FTagAndValue>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue;
	struct Z_Construct_UScriptStruct_FTagAndValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagAndValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagAndValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagAndValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagAndValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagAndValue, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagAndValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
		nullptr,
		&NewStructOps,
		"TagAndValue",
		sizeof(FTagAndValue),
		alignof(FTagAndValue),
		Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagAndValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagAndValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTagAndValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TagAndValue"), sizeof(FTagAndValue), Get_Z_Construct_UScriptStruct_FTagAndValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTagAndValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTagAndValue_Hash() { return 1220459362U; }
	DEFINE_FUNCTION(UAssetRegistryHelpers::execSetFilterTagsAndValues)
	{
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_InFilter);
		P_GET_TARRAY_REF(FTagAndValue,Z_Param_Out_InTagsAndValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARFilter*)Z_Param__Result=UAssetRegistryHelpers::SetFilterTagsAndValues(Z_Param_Out_InFilter,Z_Param_Out_InTagsAndValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execGetTagValue)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTagName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutTagValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::GetTagValue(Z_Param_Out_InAssetData,Z_Param_Out_InTagName,Z_Param_Out_OutTagValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execGetExportTextName)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetExportTextName(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execIsAssetLoaded)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsAssetLoaded(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execGetAsset)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UAssetRegistryHelpers::GetAsset(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execGetClass)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UAssetRegistryHelpers::GetClass(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execToSoftObjectPath)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=UAssetRegistryHelpers::ToSoftObjectPath(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execGetFullName)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetFullName(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execIsRedirector)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsRedirector(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execIsUAsset)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsUAsset(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execIsValid)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsValid(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execCreateAssetData)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_GET_UBOOL(Z_Param_bAllowBlueprintClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=UAssetRegistryHelpers::CreateAssetData(Z_Param_InAsset,Z_Param_bAllowBlueprintClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetRegistryHelpers::execGetAssetRegistry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IAssetRegistry>*)Z_Param__Result=UAssetRegistryHelpers::GetAssetRegistry();
		P_NATIVE_END;
	}
	void UAssetRegistryHelpers::StaticRegisterNativesUAssetRegistryHelpers()
	{
		UClass* Class = UAssetRegistryHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAssetData", &UAssetRegistryHelpers::execCreateAssetData },
			{ "GetAsset", &UAssetRegistryHelpers::execGetAsset },
			{ "GetAssetRegistry", &UAssetRegistryHelpers::execGetAssetRegistry },
			{ "GetClass", &UAssetRegistryHelpers::execGetClass },
			{ "GetExportTextName", &UAssetRegistryHelpers::execGetExportTextName },
			{ "GetFullName", &UAssetRegistryHelpers::execGetFullName },
			{ "GetTagValue", &UAssetRegistryHelpers::execGetTagValue },
			{ "IsAssetLoaded", &UAssetRegistryHelpers::execIsAssetLoaded },
			{ "IsRedirector", &UAssetRegistryHelpers::execIsRedirector },
			{ "IsUAsset", &UAssetRegistryHelpers::execIsUAsset },
			{ "IsValid", &UAssetRegistryHelpers::execIsValid },
			{ "SetFilterTagsAndValues", &UAssetRegistryHelpers::execSetFilterTagsAndValues },
			{ "ToSoftObjectPath", &UAssetRegistryHelpers::execToSoftObjectPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics
	{
		struct AssetRegistryHelpers_eventCreateAssetData_Parms
		{
			const UObject* InAsset;
			bool bAllowBlueprintClass;
			FAssetData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowBlueprintClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventCreateAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass_SetBit(void* Obj)
	{
		((AssetRegistryHelpers_eventCreateAssetData_Parms*)Obj)->bAllowBlueprintClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass = { "bAllowBlueprintClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventCreateAssetData_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventCreateAssetData_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** \n\x09 * Creates asset data from a UObject. \n\x09 *\n\x09 * @param InAsset\x09The asset to create asset data for\n\x09 * @param bAllowBlueprintClass\x09""By default trying to create asset data for a blueprint class will create one for the UBlueprint instead\n\x09 */" },
		{ "CPP_Default_bAllowBlueprintClass", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ToolTip", "Creates asset data from a UObject.\n\n@param InAsset       The asset to create asset data for\n@param bAllowBlueprintClass  By default trying to create asset data for a blueprint class will create one for the UBlueprint instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "CreateAssetData", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventCreateAssetData_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics
	{
		struct AssetRegistryHelpers_eventGetAsset_Parms
		{
			FAssetData InAssetData;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAsset_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns the asset UObject if it is loaded or loads the asset if it is unloaded then returns the result */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the asset UObject if it is loaded or loads the asset if it is unloaded then returns the result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetAsset", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventGetAsset_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics
	{
		struct AssetRegistryHelpers_eventGetAssetRegistry_Parms
		{
			TScriptInterface<IAssetRegistry> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAssetRegistry_Parms, ReturnValue), Z_Construct_UClass_UAssetRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Registry" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetAssetRegistry", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventGetAssetRegistry_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics
	{
		struct AssetRegistryHelpers_eventGetClass_Parms
		{
			FAssetData InAssetData;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetClass_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetClass", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventGetClass_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics
	{
		struct AssetRegistryHelpers_eventGetExportTextName_Parms
		{
			FAssetData InAssetData;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetExportTextName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetExportTextName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns the name for the asset in the form: Class'ObjectPath' */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the name for the asset in the form: Class'ObjectPath'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetExportTextName", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventGetExportTextName_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics
	{
		struct AssetRegistryHelpers_eventGetFullName_Parms
		{
			FAssetData InAssetData;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetFullName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetFullName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns the full name for the asset in the form: Class ObjectPath */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the full name for the asset in the form: Class ObjectPath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetFullName", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventGetFullName_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics
	{
		struct AssetRegistryHelpers_eventGetTagValue_Parms
		{
			FAssetData InAssetData;
			FName InTagName;
			FString OutTagValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutTagValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistryHelpers_eventGetTagValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventGetTagValue_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_OutTagValue = { "OutTagValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, OutTagValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName = { "InTagName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, InTagName), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_OutTagValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Gets the value associated with the given tag as a string */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets the value associated with the given tag as a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetTagValue", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventGetTagValue_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics
	{
		struct AssetRegistryHelpers_eventIsAssetLoaded_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistryHelpers_eventIsAssetLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsAssetLoaded_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsAssetLoaded_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns true if the asset is loaded */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns true if the asset is loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsAssetLoaded", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventIsAssetLoaded_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics
	{
		struct AssetRegistryHelpers_eventIsRedirector_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistryHelpers_eventIsRedirector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsRedirector_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsRedirector_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns true if the this asset is a redirector. */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns true if the this asset is a redirector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsRedirector", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventIsRedirector_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics
	{
		struct AssetRegistryHelpers_eventIsUAsset_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistryHelpers_eventIsUAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsUAsset_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsUAsset_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns true if this is the primary asset in a package, true for maps and assets but false for secondary objects like class redirectors */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns true if this is the primary asset in a package, true for maps and assets but false for secondary objects like class redirectors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsUAsset", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventIsUAsset_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics
	{
		struct AssetRegistryHelpers_eventIsValid_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistryHelpers_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsValid_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsValid_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Checks to see if this AssetData refers to an asset or is NULL */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Checks to see if this AssetData refers to an asset or is NULL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsValid", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventIsValid_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics
	{
		struct AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms
		{
			FARFilter InFilter;
			TArray<FTagAndValue> InTagsAndValues;
			FARFilter ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagsAndValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InTagsAndValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTagsAndValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues = { "InTagsAndValues", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, InTagsAndValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_Inner = { "InTagsAndValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTagAndValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter = { "InFilter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, InFilter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/**\n\x09 * Populates the FARFilters tags and values map with the passed in tags and values\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ToolTip", "Populates the FARFilters tags and values map with the passed in tags and values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "SetFilterTagsAndValues", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics
	{
		struct AssetRegistryHelpers_eventToSoftObjectPath_Parms
		{
			FAssetData InAssetData;
			FSoftObjectPath ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventToSoftObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventToSoftObjectPath_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Convert to a SoftObjectPath for loading */" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert to a SoftObjectPath for loading" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "ToSoftObjectPath", nullptr, nullptr, sizeof(AssetRegistryHelpers_eventToSoftObjectPath_Parms), Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister()
	{
		return UAssetRegistryHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UAssetRegistryHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetRegistryHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetRegistryHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData, "CreateAssetData" }, // 216972768
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset, "GetAsset" }, // 1754227784
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry, "GetAssetRegistry" }, // 629158341
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetClass, "GetClass" }, // 1796635620
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName, "GetExportTextName" }, // 1553169673
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName, "GetFullName" }, // 1566534556
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue, "GetTagValue" }, // 555576063
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded, "IsAssetLoaded" }, // 1092720957
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector, "IsRedirector" }, // 2470047333
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset, "IsUAsset" }, // 1343422421
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsValid, "IsValid" }, // 23424794
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues, "SetFilterTagsAndValues" }, // 3410713243
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath, "ToSoftObjectPath" }, // 1421270408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetRegistryHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetRegistryHelpers.h" },
		{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetRegistryHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetRegistryHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistryHelpers_Statics::ClassParams = {
		&UAssetRegistryHelpers::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetRegistryHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetRegistryHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetRegistryHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetRegistryHelpers, 1585651436);
	template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistryHelpers>()
	{
		return UAssetRegistryHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistryHelpers(Z_Construct_UClass_UAssetRegistryHelpers, &UAssetRegistryHelpers::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistryHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistryHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
