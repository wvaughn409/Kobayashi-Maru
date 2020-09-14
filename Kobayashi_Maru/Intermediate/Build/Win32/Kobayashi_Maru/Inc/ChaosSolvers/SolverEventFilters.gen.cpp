// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolvers/Public/SolverEventFilters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolverEventFilters() {}
// Cross Module References
	CHAOSSOLVERS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
	UPackage* Z_Construct_UPackage__Script_ChaosSolvers();
	CHAOSSOLVERS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
	CHAOSSOLVERS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
// End Cross Module References
class UScriptStruct* FSolverBreakingFilterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERS_API uint32 Get_Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, Z_Construct_UPackage__Script_ChaosSolvers(), TEXT("SolverBreakingFilterSettings"), sizeof(FSolverBreakingFilterSettings), Get_Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERS_API UScriptStruct* StaticStruct<FSolverBreakingFilterSettings>()
{
	return FSolverBreakingFilterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSolverBreakingFilterSettings(FSolverBreakingFilterSettings::StaticStruct, TEXT("/Script/ChaosSolvers"), TEXT("SolverBreakingFilterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverBreakingFilterSettings
{
	FScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverBreakingFilterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SolverBreakingFilterSettings")),new UScriptStruct::TCppStructOps<FSolverBreakingFilterSettings>);
	}
} ScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverBreakingFilterSettings;
	struct Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverBreakingFilterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverBreakingFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSolverBreakingFilterSettings), &Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolvers,
		nullptr,
		&NewStructOps,
		"SolverBreakingFilterSettings",
		sizeof(FSolverBreakingFilterSettings),
		alignof(FSolverBreakingFilterSettings),
		Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolvers();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SolverBreakingFilterSettings"), sizeof(FSolverBreakingFilterSettings), Get_Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Hash() { return 510092586U; }
class UScriptStruct* FSolverCollisionFilterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERS_API uint32 Get_Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, Z_Construct_UPackage__Script_ChaosSolvers(), TEXT("SolverCollisionFilterSettings"), sizeof(FSolverCollisionFilterSettings), Get_Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERS_API UScriptStruct* StaticStruct<FSolverCollisionFilterSettings>()
{
	return FSolverCollisionFilterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSolverCollisionFilterSettings(FSolverCollisionFilterSettings::StaticStruct, TEXT("/Script/ChaosSolvers"), TEXT("SolverCollisionFilterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverCollisionFilterSettings
{
	FScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverCollisionFilterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SolverCollisionFilterSettings")),new UScriptStruct::TCppStructOps<FSolverCollisionFilterSettings>);
	}
} ScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverCollisionFilterSettings;
	struct Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverCollisionFilterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The minimum impulse threshold for the results. */" },
		{ "DisplayName", "Min Impulse Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum impulse threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse = { "MinImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinImpulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverCollisionFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSolverCollisionFilterSettings), &Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolvers,
		nullptr,
		&NewStructOps,
		"SolverCollisionFilterSettings",
		sizeof(FSolverCollisionFilterSettings),
		alignof(FSolverCollisionFilterSettings),
		Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolvers();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SolverCollisionFilterSettings"), sizeof(FSolverCollisionFilterSettings), Get_Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Hash() { return 2651268706U; }
class UScriptStruct* FSolverTrailingFilterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERS_API uint32 Get_Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, Z_Construct_UPackage__Script_ChaosSolvers(), TEXT("SolverTrailingFilterSettings"), sizeof(FSolverTrailingFilterSettings), Get_Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERS_API UScriptStruct* StaticStruct<FSolverTrailingFilterSettings>()
{
	return FSolverTrailingFilterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSolverTrailingFilterSettings(FSolverTrailingFilterSettings::StaticStruct, TEXT("/Script/ChaosSolvers"), TEXT("SolverTrailingFilterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverTrailingFilterSettings
{
	FScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverTrailingFilterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SolverTrailingFilterSettings")),new UScriptStruct::TCppStructOps<FSolverTrailingFilterSettings>);
	}
} ScriptStruct_ChaosSolvers_StaticRegisterNativesFSolverTrailingFilterSettings;
	struct Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverTrailingFilterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverTrailingFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSolverTrailingFilterSettings), &Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolvers,
		nullptr,
		&NewStructOps,
		"SolverTrailingFilterSettings",
		sizeof(FSolverTrailingFilterSettings),
		alignof(FSolverTrailingFilterSettings),
		Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolvers();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SolverTrailingFilterSettings"), sizeof(FSolverTrailingFilterSettings), Get_Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Hash() { return 1388288165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
