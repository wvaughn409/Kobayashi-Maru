// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/LevelVariantSetsActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsActor() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	DEFINE_FUNCTION(ALevelVariantSetsActor::execSwitchOnVariantByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantSetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByIndex(Z_Param_VariantSetIndex,Z_Param_VariantIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelVariantSetsActor::execSwitchOnVariantByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByName(Z_Param_VariantSetName,Z_Param_VariantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelVariantSetsActor::execSetLevelVariantSets)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_InVariantSets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelVariantSets(Z_Param_InVariantSets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelVariantSetsActor::execGetLevelVariantSets)
	{
		P_GET_UBOOL(Z_Param_bLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelVariantSets**)Z_Param__Result=P_THIS->GetLevelVariantSets(Z_Param_bLoad);
		P_NATIVE_END;
	}
	void ALevelVariantSetsActor::StaticRegisterNativesALevelVariantSetsActor()
	{
		UClass* Class = ALevelVariantSetsActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelVariantSets", &ALevelVariantSetsActor::execGetLevelVariantSets },
			{ "SetLevelVariantSets", &ALevelVariantSetsActor::execSetLevelVariantSets },
			{ "SwitchOnVariantByIndex", &ALevelVariantSetsActor::execSwitchOnVariantByIndex },
			{ "SwitchOnVariantByName", &ALevelVariantSetsActor::execSwitchOnVariantByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics
	{
		struct LevelVariantSetsActor_eventGetLevelVariantSets_Parms
		{
			bool bLoad;
			ULevelVariantSets* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventGetLevelVariantSets_Parms, ReturnValue), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit(void* Obj)
	{
		((LevelVariantSetsActor_eventGetLevelVariantSets_Parms*)Obj)->bLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad = { "bLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelVariantSetsActor_eventGetLevelVariantSets_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "CPP_Default_bLoad", "false" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
		{ "ToolTip", "Returns the LevelVariantSets asset, optionally loading it if necessary" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "GetLevelVariantSets", nullptr, nullptr, sizeof(LevelVariantSetsActor_eventGetLevelVariantSets_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics
	{
		struct LevelVariantSetsActor_eventSetLevelVariantSets_Parms
		{
			ULevelVariantSets* InVariantSets;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVariantSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::NewProp_InVariantSets = { "InVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSetLevelVariantSets_Parms, InVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::NewProp_InVariantSets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SetLevelVariantSets", nullptr, nullptr, sizeof(LevelVariantSetsActor_eventSetLevelVariantSets_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics
	{
		struct LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms
		{
			int32 VariantSetIndex;
			int32 VariantIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariantIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariantSetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantIndex = { "VariantIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms, VariantIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantSetIndex = { "VariantSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms, VariantSetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantSetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SwitchOnVariantByIndex", nullptr, nullptr, sizeof(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics
	{
		struct LevelVariantSetsActor_eventSwitchOnVariantByName_Parms
		{
			FString VariantSetName;
			FString VariantName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariantName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelVariantSetsActor_eventSwitchOnVariantByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms, VariantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms, VariantSetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantSetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SwitchOnVariantByName", nullptr, nullptr, sizeof(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister()
	{
		return ALevelVariantSetsActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelVariantSetsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelVariantSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelVariantSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelVariantSetsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelVariantSetsActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets, "GetLevelVariantSets" }, // 3121571383
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets, "SetLevelVariantSets" }, // 1621427608
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex, "SwitchOnVariantByIndex" }, // 1114451366
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName, "SwitchOnVariantByName" }, // 2958325777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Physics LOD Activation Input Actor Cooking" },
		{ "IncludePath", "LevelVariantSetsActor.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets_MetaData[] = {
		{ "AllowedClasses", "LevelVariantSets" },
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelVariantSetsActor, LevelVariantSets), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelVariantSetsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelVariantSetsActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams = {
		&ALevelVariantSetsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelVariantSetsActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelVariantSetsActor, 3998619585);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ALevelVariantSetsActor>()
	{
		return ALevelVariantSetsActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelVariantSetsActor(Z_Construct_UClass_ALevelVariantSetsActor, &ALevelVariantSetsActor::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("ALevelVariantSetsActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelVariantSetsActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
