// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosSolverActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverActor() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosDebugSubstepControl();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	CHAOSSOLVERS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
	CHAOSSOLVERS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
	CHAOSSOLVERS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
// End Cross Module References
	static UEnum* EClusterConnectionTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("EClusterConnectionTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOSSOLVERENGINE_API UEnum* StaticEnum<EClusterConnectionTypeEnum>()
	{
		return EClusterConnectionTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClusterConnectionTypeEnum(EClusterConnectionTypeEnum_StaticEnum, TEXT("/Script/ChaosSolverEngine"), TEXT("EClusterConnectionTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Hash() { return 3397344374U; }
	UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolverEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClusterConnectionTypeEnum"), 0, Get_Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClusterConnectionTypeEnum::Chaos_PointImplicit", (int64)EClusterConnectionTypeEnum::Chaos_PointImplicit },
				{ "EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation },
				{ "EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation },
				{ "EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay", (int64)EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay },
				{ "EClusterConnectionTypeEnum::Chaos_None", (int64)EClusterConnectionTypeEnum::Chaos_None },
				{ "EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max", (int64)EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Chaos_DelaunayTriangulation.DisplayName", "DelaunayTriangulation" },
				{ "Chaos_DelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation" },
				{ "Chaos_EClsuterCreationParameters_Max.Comment", "//\n" },
				{ "Chaos_EClsuterCreationParameters_Max.Hidden", "" },
				{ "Chaos_EClsuterCreationParameters_Max.Name", "EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max" },
				{ "Chaos_MinimalSpanningSubsetDelaunayTriangulation.DisplayName", "MinimalSpanningSubsetDelaunayTriangulation" },
				{ "Chaos_MinimalSpanningSubsetDelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation" },
				{ "Chaos_None.DisplayName", "None" },
				{ "Chaos_None.Name", "EClusterConnectionTypeEnum::Chaos_None" },
				{ "Chaos_PointImplicit.DisplayName", "PointImplicit" },
				{ "Chaos_PointImplicit.Name", "EClusterConnectionTypeEnum::Chaos_PointImplicit" },
				{ "Chaos_PointImplicitAugmentedWithMinimalDelaunay.DisplayName", "PointImplicitAugmentedWithMinimalDelaunay" },
				{ "Chaos_PointImplicitAugmentedWithMinimalDelaunay.Name", "EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
				nullptr,
				"EClusterConnectionTypeEnum",
				"EClusterConnectionTypeEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FChaosDebugSubstepControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosDebugSubstepControl, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosDebugSubstepControl"), sizeof(FChaosDebugSubstepControl), Get_Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosDebugSubstepControl>()
{
	return FChaosDebugSubstepControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosDebugSubstepControl(FChaosDebugSubstepControl::StaticStruct, TEXT("/Script/ChaosSolverEngine"), TEXT("ChaosDebugSubstepControl"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosDebugSubstepControl
{
	FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosDebugSubstepControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosDebugSubstepControl")),new UScriptStruct::TCppStructOps<FChaosDebugSubstepControl>);
	}
} ScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosDebugSubstepControl;
	struct Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStep_MetaData[];
#endif
		static void NewProp_bStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubstep_MetaData[];
#endif
		static void NewProp_bSubstep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubstep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPause_MetaData[];
#endif
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosDebugSubstepControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Step the solver to the next synchronization point.\n\x09*/" },
		{ "EditCondition", "bPause" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Step the solver to the next synchronization point." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_SetBit(void* Obj)
	{
		((FChaosDebugSubstepControl*)Obj)->bStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep = { "bStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Substep the solver to the next synchronization point.\n\x09*/" },
		{ "EditCondition", "bPause" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Substep the solver to the next synchronization point." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_SetBit(void* Obj)
	{
		((FChaosDebugSubstepControl*)Obj)->bSubstep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep = { "bSubstep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Pause the solver at the next synchronization point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Pause the solver at the next synchronization point." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((FChaosDebugSubstepControl*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosDebugSubstepControl",
		sizeof(FChaosDebugSubstepControl),
		alignof(FChaosDebugSubstepControl),
		Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosDebugSubstepControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolverEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosDebugSubstepControl"), sizeof(FChaosDebugSubstepControl), Get_Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Hash() { return 698117018U; }
	DEFINE_FUNCTION(AChaosSolverActor::execSetSolverActive)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSolverActive(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChaosSolverActor::execSetAsCurrentWorldSolver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsCurrentWorldSolver();
		P_NATIVE_END;
	}
	void AChaosSolverActor::StaticRegisterNativesAChaosSolverActor()
	{
		UClass* Class = AChaosSolverActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAsCurrentWorldSolver", &AChaosSolverActor::execSetAsCurrentWorldSolver },
			{ "SetSolverActive", &AChaosSolverActor::execSetSolverActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosSolverActor, nullptr, "SetAsCurrentWorldSolver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics
	{
		struct ChaosSolverActor_eventSetSolverActive_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ChaosSolverActor_eventSetSolverActive_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosSolverActor_eventSetSolverActive_Parms), &Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Controls whether the solver is able to simulate particles it controls */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Controls whether the solver is able to simulate particles it controls" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosSolverActor, nullptr, "SetSolverActive", nullptr, nullptr, sizeof(ChaosSolverActor_eventSetSolverActive_Parms), Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChaosSolverActor_SetSolverActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister()
	{
		return AChaosSolverActor::StaticClass();
	}
	struct Z_Construct_UClass_AChaosSolverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEventDispatcherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayEventDispatcherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosDebugSubstepControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChaosDebugSubstepControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateContactGraph_MetaData[];
#endif
		static void NewProp_bGenerateContactGraph_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateContactGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFloor_MetaData[];
#endif
		static void NewProp_bHasFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingFilterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailingFilterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoGenerateTrailingData_MetaData[];
#endif
		static void NewProp_DoGenerateTrailingData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoGenerateTrailingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingFilterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreakingFilterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoGenerateBreakingData_MetaData[];
#endif
		static void NewProp_DoGenerateBreakingData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoGenerateBreakingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionFilterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionFilterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoGenerateCollisionData_MetaData[];
#endif
		static void NewProp_DoGenerateCollisionData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoGenerateCollisionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClusterUnionConnectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClusterUnionConnectionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClusterUnionConnectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClusterConnectionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushOutPairIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PushOutPairIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushOutIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PushOutIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStepMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStepMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaosSolverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChaosSolverActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver, "SetAsCurrentWorldSolver" }, // 3556756549
		{ &Z_Construct_UFunction_AChaosSolverActor_SetSolverActive, "SetSolverActive" }, // 2537654075
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosSolverActor.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent_MetaData[] = {
		{ "Comment", "/** Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent = { "GameplayEventDispatcherComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, GameplayEventDispatcherComponent), Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* Display icon in the editor\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Display icon in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Control to pause/step/substep the solver to the next synchronization point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Control to pause/step/substep the solver to the next synchronization point." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl = { "ChaosDebugSubstepControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, ChaosDebugSubstepControl), Z_Construct_UScriptStruct_FChaosDebugSubstepControl, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "DisplayName", "Generate Contact Graph" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->bGenerateContactGraph = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph = { "bGenerateContactGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "DisplayName", "Mass Scale" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, MassScale), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData[] = {
		{ "Category", "ChaosPhysics|Floor" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "DisplayName", "Floor Height" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, FloorHeight), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_MetaData[] = {
		{ "Category", "ChaosPhysics|Floor" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "DisplayName", "Use Floor" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->bHasFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor = { "bHasFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/*\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings = { "TrailingFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TrailingFilterSettings), Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/*\n\x09* Turns on/off trailing data generation\n\x09*/" },
		{ "DisplayName", "Generate Trailing Data" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Turns on/off trailing data generation" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoGenerateTrailingData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData = { "DoGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/*\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings = { "BreakingFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, BreakingFilterSettings), Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/*\n\x09* Turns on/off breaking data generation\n\x09*/" },
		{ "DisplayName", "Generate Breaking Data" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Turns on/off breaking data generation" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoGenerateBreakingData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData = { "DoGenerateBreakingData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/*\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings = { "CollisionFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionFilterSettings), Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/*\n\x09* Turns on/off collision data generation\n\x09*/" },
		{ "DisplayName", "Generate Collision Data" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Turns on/off collision data generation" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoGenerateCollisionData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData = { "DoGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/*\n\x09*  ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "*  ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType = { "ClusterUnionConnectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, ClusterUnionConnectionType), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/**\n\x09* ClusterConnectionFactor\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "ClusterConnectionFactor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor = { "ClusterConnectionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, ClusterConnectionFactor), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|Iterations" },
		{ "Comment", "/**\n\x09* PushOut Iteration\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "PushOut Iteration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations = { "PushOutPairIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, PushOutPairIterations), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|Iterations" },
		{ "Comment", "/**\n\x09* PushOut Iteration\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "PushOut Iteration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations = { "PushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, PushOutIterations), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|Iterations" },
		{ "Comment", "/**\n\x09* Collision Iteration\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Collision Iteration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations = { "CollisionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionIterations), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* NumberOfSubSteps\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "NumberOfSubSteps" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier = { "TimeStepMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TimeStepMultiplier), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bGenerateContactGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaosSolverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosSolverActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams = {
		&AChaosSolverActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChaosSolverActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChaosSolverActor, 1871153073);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<AChaosSolverActor>()
	{
		return AChaosSolverActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChaosSolverActor(Z_Construct_UClass_AChaosSolverActor, &AChaosSolverActor::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("AChaosSolverActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosSolverActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
