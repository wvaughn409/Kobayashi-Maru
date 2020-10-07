// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/ProceduralFaunaActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFaunaActor() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_AProceduralFaunaActor_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AProceduralFaunaActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COMPLETERPG_API UClass* Z_Construct_UClass_UProceduralFaunaComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProceduralFaunaActor::execToggleDebugDrawSpawners)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugDrawSpawners();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralFaunaActor::execToggleDebugDrawGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugDrawGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralFaunaActor::execSetSpawnBoundsFromVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Min);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnBoundsFromVectors(Z_Param_Out_Min,Z_Param_Out_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralFaunaActor::execSetSpawnBounds)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_SpawnBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnBounds(Z_Param_Out_SpawnBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralFaunaActor::execSetEnableSpawning)
	{
		P_GET_UBOOL(Z_Param_bSpawningEnabled);
		P_GET_UBOOL(Z_Param_bCullActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSpawning(Z_Param_bSpawningEnabled,Z_Param_bCullActive);
		P_NATIVE_END;
	}
	void AProceduralFaunaActor::StaticRegisterNativesAProceduralFaunaActor()
	{
		UClass* Class = AProceduralFaunaActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnableSpawning", &AProceduralFaunaActor::execSetEnableSpawning },
			{ "SetSpawnBounds", &AProceduralFaunaActor::execSetSpawnBounds },
			{ "SetSpawnBoundsFromVectors", &AProceduralFaunaActor::execSetSpawnBoundsFromVectors },
			{ "ToggleDebugDrawGrid", &AProceduralFaunaActor::execToggleDebugDrawGrid },
			{ "ToggleDebugDrawSpawners", &AProceduralFaunaActor::execToggleDebugDrawSpawners },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics
	{
		struct ProceduralFaunaActor_eventSetEnableSpawning_Parms
		{
			bool bSpawningEnabled;
			bool bCullActive;
		};
		static void NewProp_bCullActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullActive;
		static void NewProp_bSpawningEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawningEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bCullActive_SetBit(void* Obj)
	{
		((ProceduralFaunaActor_eventSetEnableSpawning_Parms*)Obj)->bCullActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bCullActive = { "bCullActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralFaunaActor_eventSetEnableSpawning_Parms), &Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bCullActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bSpawningEnabled_SetBit(void* Obj)
	{
		((ProceduralFaunaActor_eventSetEnableSpawning_Parms*)Obj)->bSpawningEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bSpawningEnabled = { "bSpawningEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProceduralFaunaActor_eventSetEnableSpawning_Parms), &Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bSpawningEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bCullActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::NewProp_bSpawningEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fauna" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralFaunaActor, nullptr, "SetEnableSpawning", nullptr, nullptr, sizeof(ProceduralFaunaActor_eventSetEnableSpawning_Parms), Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics
	{
		struct ProceduralFaunaActor_eventSetSpawnBounds_Parms
		{
			FBox SpawnBounds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::NewProp_SpawnBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::NewProp_SpawnBounds = { "SpawnBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFaunaActor_eventSetSpawnBounds_Parms, SpawnBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::NewProp_SpawnBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::NewProp_SpawnBounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::NewProp_SpawnBounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fauna" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralFaunaActor, nullptr, "SetSpawnBounds", nullptr, nullptr, sizeof(ProceduralFaunaActor_eventSetSpawnBounds_Parms), Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics
	{
		struct ProceduralFaunaActor_eventSetSpawnBoundsFromVectors_Parms
		{
			FVector Min;
			FVector Max;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFaunaActor_eventSetSpawnBoundsFromVectors_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFaunaActor_eventSetSpawnBoundsFromVectors_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::NewProp_Min,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fauna" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralFaunaActor, nullptr, "SetSpawnBoundsFromVectors", nullptr, nullptr, sizeof(ProceduralFaunaActor_eventSetSpawnBoundsFromVectors_Parms), Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaunaDebug" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralFaunaActor, nullptr, "ToggleDebugDrawGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaunaDebug" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralFaunaActor, nullptr, "ToggleDebugDrawSpawners", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProceduralFaunaActor_NoRegister()
	{
		return AProceduralFaunaActor::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralFaunaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaunaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaunaComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSpawners_MetaData[];
#endif
		static void NewProp_bDrawSpawners_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSpawners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawGrid_MetaData[];
#endif
		static void NewProp_bDrawGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralFaunaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProceduralFaunaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralFaunaActor_SetEnableSpawning, "SetEnableSpawning" }, // 2993221742
		{ &Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBounds, "SetSpawnBounds" }, // 3446401922
		{ &Z_Construct_UFunction_AProceduralFaunaActor_SetSpawnBoundsFromVectors, "SetSpawnBoundsFromVectors" }, // 4253377988
		{ &Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawGrid, "ToggleDebugDrawGrid" }, // 4259040530
		{ &Z_Construct_UFunction_AProceduralFaunaActor_ToggleDebugDrawSpawners, "ToggleDebugDrawSpawners" }, // 2421533495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFaunaActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProceduralFaunaActor.h" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_FaunaComponent_MetaData[] = {
		{ "Category", "Fauna" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_FaunaComponent = { "FaunaComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralFaunaActor, FaunaComponent), Z_Construct_UClass_UProceduralFaunaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_FaunaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_FaunaComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners_MetaData[] = {
		{ "Category", "DebugVisualisation" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	void Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners_SetBit(void* Obj)
	{
		((AProceduralFaunaActor*)Obj)->bDrawSpawners = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners = { "bDrawSpawners", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProceduralFaunaActor), &Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid_MetaData[] = {
		{ "Category", "DebugVisualisation" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaActor.h" },
	};
#endif
	void Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid_SetBit(void* Obj)
	{
		((AProceduralFaunaActor*)Obj)->bDrawGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid = { "bDrawGrid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProceduralFaunaActor), &Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFaunaActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_FaunaComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFaunaActor_Statics::NewProp_bDrawGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralFaunaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFaunaActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFaunaActor_Statics::ClassParams = {
		&AProceduralFaunaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProceduralFaunaActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFaunaActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralFaunaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFaunaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralFaunaActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralFaunaActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralFaunaActor, 2968861446);
	template<> COMPLETERPG_API UClass* StaticClass<AProceduralFaunaActor>()
	{
		return AProceduralFaunaActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralFaunaActor(Z_Construct_UClass_AProceduralFaunaActor, &AProceduralFaunaActor::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AProceduralFaunaActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFaunaActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
