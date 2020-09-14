// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/WheeledVehicleMovementComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheeledVehicleMovementComponent() {}
// Cross Module References
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputRate();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedVehicleState();
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSetup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FVehicleInputRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleInputRate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleInputRate, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("VehicleInputRate"), sizeof(FVehicleInputRate), Get_Z_Construct_UScriptStruct_FVehicleInputRate_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FVehicleInputRate>()
{
	return FVehicleInputRate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleInputRate(FVehicleInputRate::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("VehicleInputRate"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleInputRate
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleInputRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleInputRate")),new UScriptStruct::TCppStructOps<FVehicleInputRate>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleInputRate;
	struct Z_Construct_UScriptStruct_FVehicleInputRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiseRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleInputRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_FallRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "Comment", "// Rate at which the input value falls\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value falls" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_FallRate = { "FallRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleInputRate, FallRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_FallRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_FallRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_RiseRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "Comment", "// Rate at which the input value rises\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value rises" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_RiseRate = { "RiseRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleInputRate, RiseRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_RiseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_RiseRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleInputRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_FallRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRate_Statics::NewProp_RiseRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleInputRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"VehicleInputRate",
		sizeof(FVehicleInputRate),
		alignof(FVehicleInputRate),
		Z_Construct_UScriptStruct_FVehicleInputRate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleInputRate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleInputRate"), sizeof(FVehicleInputRate), Get_Z_Construct_UScriptStruct_FVehicleInputRate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleInputRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleInputRate_Hash() { return 490474443U; }
class UScriptStruct* FReplicatedVehicleState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FReplicatedVehicleState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedVehicleState, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("ReplicatedVehicleState"), sizeof(FReplicatedVehicleState), Get_Z_Construct_UScriptStruct_FReplicatedVehicleState_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FReplicatedVehicleState>()
{
	return FReplicatedVehicleState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicatedVehicleState(FReplicatedVehicleState::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("ReplicatedVehicleState"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFReplicatedVehicleState
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFReplicatedVehicleState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicatedVehicleState")),new UScriptStruct::TCppStructOps<FReplicatedVehicleState>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFReplicatedVehicleState;
	struct Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandbrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedVehicleState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_CurrentGear_MetaData[] = {
		{ "Comment", "// state replication: current gear\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "state replication: current gear" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_CurrentGear = { "CurrentGear", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedVehicleState, CurrentGear), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_CurrentGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_CurrentGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_HandbrakeInput_MetaData[] = {
		{ "Comment", "// input replication: handbrake\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: handbrake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_HandbrakeInput = { "HandbrakeInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedVehicleState, HandbrakeInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_HandbrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_HandbrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_BrakeInput_MetaData[] = {
		{ "Comment", "// input replication: brake\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: brake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_BrakeInput = { "BrakeInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedVehicleState, BrakeInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_BrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_BrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_ThrottleInput_MetaData[] = {
		{ "Comment", "// input replication: throttle\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: throttle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_ThrottleInput = { "ThrottleInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedVehicleState, ThrottleInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_ThrottleInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_ThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_SteeringInput_MetaData[] = {
		{ "Comment", "// input replication: steering\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: steering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_SteeringInput = { "SteeringInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedVehicleState, SteeringInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_SteeringInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_SteeringInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_CurrentGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_HandbrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_BrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_ThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::NewProp_SteeringInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"ReplicatedVehicleState",
		sizeof(FReplicatedVehicleState),
		alignof(FReplicatedVehicleState),
		Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedVehicleState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicatedVehicleState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicatedVehicleState"), sizeof(FReplicatedVehicleState), Get_Z_Construct_UScriptStruct_FReplicatedVehicleState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicatedVehicleState_Hash() { return 91296835U; }
class UScriptStruct* FWheelSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FWheelSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelSetup, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("WheelSetup"), sizeof(FWheelSetup), Get_Z_Construct_UScriptStruct_FWheelSetup_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FWheelSetup>()
{
	return FWheelSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelSetup(FWheelSetup::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("WheelSetup"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFWheelSetup
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFWheelSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelSetup")),new UScriptStruct::TCppStructOps<FWheelSetup>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFWheelSetup;
	struct Z_Construct_UScriptStruct_FWheelSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableSteering_MetaData[];
#endif
		static void NewProp_bDisableSteering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableSteering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WheelClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Vehicle-specific wheel setup\n */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Vehicle-specific wheel setup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Disables steering regardless of the wheel data\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Disables steering regardless of the wheel data" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering_SetBit(void* Obj)
	{
		((FWheelSetup*)Obj)->bDisableSteering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering = { "bDisableSteering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWheelSetup), &Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_AdditionalOffset_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Additional offset to give the wheels for this axle.\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Additional offset to give the wheels for this axle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_AdditionalOffset = { "AdditionalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSetup, AdditionalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_AdditionalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_AdditionalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Bone name on mesh to create wheel at\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Bone name on mesh to create wheel at" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSetup, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_WheelClass_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// The wheel class to use\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "The wheel class to use" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_WheelClass = { "WheelClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSetup, WheelClass), Z_Construct_UClass_UVehicleWheel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_WheelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_WheelClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_bDisableSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_AdditionalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetup_Statics::NewProp_WheelClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"WheelSetup",
		sizeof(FWheelSetup),
		alignof(FWheelSetup),
		Z_Construct_UScriptStruct_FWheelSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelSetup"), sizeof(FWheelSetup), Get_Z_Construct_UScriptStruct_FWheelSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheelSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelSetup_Hash() { return 3846938062U; }
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execServerUpdateState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSteeringInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThrottleInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBrakeInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHandbrakeInput);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentGear);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate"));
			return;
		}
		P_THIS->ServerUpdateState_Implementation(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetAvoidanceEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvoidanceEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetGroupsToIgnoreMask)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetGroupsToIgnore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToIgnore(Z_Param_GroupFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetGroupsToAvoidMask)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetGroupsToAvoid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToAvoid(Z_Param_GroupFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetAvoidanceGroupMask)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetAvoidanceGroup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvoidanceGroup(Z_Param_GroupFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execGetUseAutoGears)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseAutoGears();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execGetTargetGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTargetGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execGetCurrentGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execGetEngineMaxRotationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEngineMaxRotationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execGetEngineRotationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEngineRotationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execGetForwardSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetUseAutoGears)
	{
		P_GET_UBOOL(Z_Param_bUseAuto);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAutoGears(Z_Param_bUseAuto);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetTargetGear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GearNum);
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetGear(Z_Param_GearNum,Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetGearDown)
	{
		P_GET_UBOOL(Z_Param_bNewGearDown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGearDown(Z_Param_bNewGearDown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetGearUp)
	{
		P_GET_UBOOL(Z_Param_bNewGearUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGearUp(Z_Param_bNewGearUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetHandbrakeInput)
	{
		P_GET_UBOOL(Z_Param_bNewHandbrake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandbrakeInput(Z_Param_bNewHandbrake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetSteeringInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Steering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteeringInput(Z_Param_Steering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetBrakeInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakeInput(Z_Param_Brake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWheeledVehicleMovementComponent::execSetThrottleInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Throttle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrottleInput(Z_Param_Throttle);
		P_NATIVE_END;
	}
	static FName NAME_UWheeledVehicleMovementComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
	void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear)
	{
		WheeledVehicleMovementComponent_eventServerUpdateState_Parms Parms;
		Parms.InSteeringInput=InSteeringInput;
		Parms.InThrottleInput=InThrottleInput;
		Parms.InBrakeInput=InBrakeInput;
		Parms.InHandbrakeInput=InHandbrakeInput;
		Parms.CurrentGear=CurrentGear;
		ProcessEvent(FindFunctionChecked(NAME_UWheeledVehicleMovementComponent_ServerUpdateState),&Parms);
	}
	void UWheeledVehicleMovementComponent::StaticRegisterNativesUWheeledVehicleMovementComponent()
	{
		UClass* Class = UWheeledVehicleMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentGear", &UWheeledVehicleMovementComponent::execGetCurrentGear },
			{ "GetEngineMaxRotationSpeed", &UWheeledVehicleMovementComponent::execGetEngineMaxRotationSpeed },
			{ "GetEngineRotationSpeed", &UWheeledVehicleMovementComponent::execGetEngineRotationSpeed },
			{ "GetForwardSpeed", &UWheeledVehicleMovementComponent::execGetForwardSpeed },
			{ "GetTargetGear", &UWheeledVehicleMovementComponent::execGetTargetGear },
			{ "GetUseAutoGears", &UWheeledVehicleMovementComponent::execGetUseAutoGears },
			{ "ServerUpdateState", &UWheeledVehicleMovementComponent::execServerUpdateState },
			{ "SetAvoidanceEnabled", &UWheeledVehicleMovementComponent::execSetAvoidanceEnabled },
			{ "SetAvoidanceGroup", &UWheeledVehicleMovementComponent::execSetAvoidanceGroup },
			{ "SetAvoidanceGroupMask", &UWheeledVehicleMovementComponent::execSetAvoidanceGroupMask },
			{ "SetBrakeInput", &UWheeledVehicleMovementComponent::execSetBrakeInput },
			{ "SetGearDown", &UWheeledVehicleMovementComponent::execSetGearDown },
			{ "SetGearUp", &UWheeledVehicleMovementComponent::execSetGearUp },
			{ "SetGroupsToAvoid", &UWheeledVehicleMovementComponent::execSetGroupsToAvoid },
			{ "SetGroupsToAvoidMask", &UWheeledVehicleMovementComponent::execSetGroupsToAvoidMask },
			{ "SetGroupsToIgnore", &UWheeledVehicleMovementComponent::execSetGroupsToIgnore },
			{ "SetGroupsToIgnoreMask", &UWheeledVehicleMovementComponent::execSetGroupsToIgnoreMask },
			{ "SetHandbrakeInput", &UWheeledVehicleMovementComponent::execSetHandbrakeInput },
			{ "SetSteeringInput", &UWheeledVehicleMovementComponent::execSetSteeringInput },
			{ "SetTargetGear", &UWheeledVehicleMovementComponent::execSetTargetGear },
			{ "SetThrottleInput", &UWheeledVehicleMovementComponent::execSetThrottleInput },
			{ "SetUseAutoGears", &UWheeledVehicleMovementComponent::execSetUseAutoGears },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics
	{
		struct WheeledVehicleMovementComponent_eventGetCurrentGear_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventGetCurrentGear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Get current gear */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get current gear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "GetCurrentGear", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventGetCurrentGear_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics
	{
		struct WheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Get current engine's max rotation speed */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get current engine's max rotation speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "GetEngineMaxRotationSpeed", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics
	{
		struct WheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Get current engine's rotation speed */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get current engine's rotation speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "GetEngineRotationSpeed", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics
	{
		struct WheeledVehicleMovementComponent_eventGetForwardSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventGetForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** How fast the vehicle is moving forward */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "How fast the vehicle is moving forward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "GetForwardSpeed", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventGetForwardSpeed_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics
	{
		struct WheeledVehicleMovementComponent_eventGetTargetGear_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventGetTargetGear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Get target gear */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get target gear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "GetTargetGear", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventGetTargetGear_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics
	{
		struct WheeledVehicleMovementComponent_eventGetUseAutoGears_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventGetUseAutoGears_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventGetUseAutoGears_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Are gears being changed automatically? */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Are gears being changed automatically?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "GetUseAutoGears", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventGetUseAutoGears_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentGear;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHandbrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThrottleInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSteeringInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_CurrentGear = { "CurrentGear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventServerUpdateState_Parms, CurrentGear), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InHandbrakeInput = { "InHandbrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventServerUpdateState_Parms, InHandbrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InBrakeInput = { "InBrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventServerUpdateState_Parms, InBrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InThrottleInput = { "InThrottleInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventServerUpdateState_Parms, InThrottleInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InSteeringInput = { "InSteeringInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventServerUpdateState_Parms, InSteeringInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_CurrentGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InHandbrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InSteeringInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Pass current state to server */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Pass current state to server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "ServerUpdateState", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventServerUpdateState_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetAvoidanceEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventSetAvoidanceEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventSetAvoidanceEnabled_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Change avoidance state and register with RVO manager if necessary */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Change avoidance state and register with RVO manager if necessary" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetAvoidanceEnabled", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetAvoidanceEnabled_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetAvoidanceGroup_Parms
		{
			int32 GroupFlags;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::NewProp_GroupFlags = { "GroupFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetAvoidanceGroup_Parms, GroupFlags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::NewProp_GroupFlags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetAvoidanceGroupMask function instead." },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetAvoidanceGroup", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetAvoidanceGroup_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetAvoidanceGroupMask_Parms
		{
			FNavAvoidanceMask GroupMask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetAvoidanceGroupMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetAvoidanceGroupMask", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetAvoidanceGroupMask_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetBrakeInput_Parms
		{
			float Brake;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetBrakeInput_Parms, Brake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::NewProp_Brake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle Brake */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle Brake" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetBrakeInput", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetBrakeInput_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetGearDown_Parms
		{
			bool bNewGearDown;
		};
		static void NewProp_bNewGearDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewGearDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::NewProp_bNewGearDown_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventSetGearDown_Parms*)Obj)->bNewGearDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::NewProp_bNewGearDown = { "bNewGearDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventSetGearDown_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::NewProp_bNewGearDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::NewProp_bNewGearDown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for gear down */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for gear down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetGearDown", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetGearDown_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetGearUp_Parms
		{
			bool bNewGearUp;
		};
		static void NewProp_bNewGearUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewGearUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::NewProp_bNewGearUp_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventSetGearUp_Parms*)Obj)->bNewGearUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::NewProp_bNewGearUp = { "bNewGearUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventSetGearUp_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::NewProp_bNewGearUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::NewProp_bNewGearUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for gear up */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for gear up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetGearUp", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetGearUp_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetGroupsToAvoid_Parms
		{
			int32 GroupFlags;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::NewProp_GroupFlags = { "GroupFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetGroupsToAvoid_Parms, GroupFlags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::NewProp_GroupFlags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetGroupsToAvoidMask function instead." },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetGroupsToAvoid", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetGroupsToAvoid_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetGroupsToAvoidMask_Parms
		{
			FNavAvoidanceMask GroupMask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetGroupsToAvoidMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetGroupsToAvoidMask", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetGroupsToAvoidMask_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetGroupsToIgnore_Parms
		{
			int32 GroupFlags;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::NewProp_GroupFlags = { "GroupFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetGroupsToIgnore_Parms, GroupFlags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::NewProp_GroupFlags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetGroupsToIgnoreMask function instead." },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetGroupsToIgnore", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetGroupsToIgnore_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetGroupsToIgnoreMask_Parms
		{
			FNavAvoidanceMask GroupMask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetGroupsToIgnoreMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetGroupsToIgnoreMask", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetGroupsToIgnoreMask_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetHandbrakeInput_Parms
		{
			bool bNewHandbrake;
		};
		static void NewProp_bNewHandbrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewHandbrake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventSetHandbrakeInput_Parms*)Obj)->bNewHandbrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake = { "bNewHandbrake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventSetHandbrakeInput_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for handbrake */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for handbrake" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetHandbrakeInput", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetHandbrakeInput_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetSteeringInput_Parms
		{
			float Steering;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetSteeringInput_Parms, Steering), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::NewProp_Steering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle steering */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle steering" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetSteeringInput", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetSteeringInput_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetTargetGear_Parms
		{
			int32 GearNum;
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GearNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventSetTargetGear_Parms*)Obj)->bImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventSetTargetGear_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::NewProp_GearNum = { "GearNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetTargetGear_Parms, GearNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::NewProp_GearNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for gear (-1 reverse, 0 neutral, 1+ forward)*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for gear (-1 reverse, 0 neutral, 1+ forward)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetTargetGear", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetTargetGear_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetThrottleInput_Parms
		{
			float Throttle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WheeledVehicleMovementComponent_eventSetThrottleInput_Parms, Throttle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::NewProp_Throttle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle throttle */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle throttle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetThrottleInput", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetThrottleInput_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics
	{
		struct WheeledVehicleMovementComponent_eventSetUseAutoGears_Parms
		{
			bool bUseAuto;
		};
		static void NewProp_bUseAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAuto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::NewProp_bUseAuto_SetBit(void* Obj)
	{
		((WheeledVehicleMovementComponent_eventSetUseAutoGears_Parms*)Obj)->bUseAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::NewProp_bUseAuto = { "bUseAuto", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WheeledVehicleMovementComponent_eventSetUseAutoGears_Parms), &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::NewProp_bUseAuto_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::NewProp_bUseAuto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "Comment", "/** Set the flag that will be used to select auto-gears */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the flag that will be used to select auto-gears" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheeledVehicleMovementComponent, nullptr, "SetUseAutoGears", nullptr, nullptr, sizeof(WheeledVehicleMovementComponent_eventSetUseAutoGears_Parms), Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister()
	{
		return UWheeledVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandbrakeInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrakeInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrottleInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrongDirectionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrongDirectionThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandbrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawSteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawSteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvoidanceUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOThrottleStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RVOThrottleStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOSteeringStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RVOSteeringStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConsiderationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceConsiderationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOAvoidanceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RVOAvoidanceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOAvoidanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RVOAvoidanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Wheels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wheels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighForwardSpeedSubStepCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighForwardSpeedSubStepCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowForwardSpeedSubStepCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LowForwardSpeedSubStepCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdLongitudinalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdLongitudinalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNormalizedTireLoadFiltered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNormalizedTireLoadFiltered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNormalizedTireLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNormalizedTireLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNormalizedTireLoadFiltered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinNormalizedTireLoadFiltered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNormalizedTireLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinNormalizedTireLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDragMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugDragMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEngineRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEngineRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedMaxEngineSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EstimatedMaxEngineSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChassisHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChassisHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChassisWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChassisWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WheelSetups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelSetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasAvoidanceUpdated_MetaData[];
#endif
		static void NewProp_bWasAvoidanceUpdated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasAvoidanceUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRawGearDownInput_MetaData[];
#endif
		static void NewProp_bRawGearDownInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRawGearDownInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRawGearUpInput_MetaData[];
#endif
		static void NewProp_bRawGearUpInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRawGearUpInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRawHandbrakeInput_MetaData[];
#endif
		static void NewProp_bRawHandbrakeInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRawHandbrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRVOAvoidance_MetaData[];
#endif
		static void NewProp_bUseRVOAvoidance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRVOAvoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseAsBrake_MetaData[];
#endif
		static void NewProp_bReverseAsBrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseAsBrake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeprecatedSpringOffsetMode_MetaData[];
#endif
		static void NewProp_bDeprecatedSpringOffsetMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeprecatedSpringOffsetMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetCurrentGear, "GetCurrentGear" }, // 1157463157
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed, "GetEngineMaxRotationSpeed" }, // 1214030591
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetEngineRotationSpeed, "GetEngineRotationSpeed" }, // 4250925911
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetForwardSpeed, "GetForwardSpeed" }, // 2960941376
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetTargetGear, "GetTargetGear" }, // 1571156379
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_GetUseAutoGears, "GetUseAutoGears" }, // 2594182308
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_ServerUpdateState, "ServerUpdateState" }, // 406771306
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceEnabled, "SetAvoidanceEnabled" }, // 4222298724
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroup, "SetAvoidanceGroup" }, // 539521583
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetAvoidanceGroupMask, "SetAvoidanceGroupMask" }, // 3399560890
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetBrakeInput, "SetBrakeInput" }, // 264871382
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearDown, "SetGearDown" }, // 2097175409
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGearUp, "SetGearUp" }, // 1209447221
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoid, "SetGroupsToAvoid" }, // 3651442030
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToAvoidMask, "SetGroupsToAvoidMask" }, // 1452743069
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnore, "SetGroupsToIgnore" }, // 3395482013
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask, "SetGroupsToIgnoreMask" }, // 1658321001
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetHandbrakeInput, "SetHandbrakeInput" }, // 1151713329
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetSteeringInput, "SetSteeringInput" }, // 684799400
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetTargetGear, "SetTargetGear" }, // 164229756
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetThrottleInput, "SetThrottleInput" }, // 1663710381
		{ &Z_Construct_UFunction_UWheeledVehicleMovementComponent_SetUseAutoGears, "SetUseAutoGears" }, // 2518427723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Component to handle the vehicle simulation for an actor.\n */" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "WheeledVehicleMovementComponent.h" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Component to handle the vehicle simulation for an actor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_OverrideController_MetaData[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_OverrideController = { "OverrideController", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, OverrideController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_OverrideController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_OverrideController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input steering can rise and fall\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input steering can rise and fall" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInputRate = { "SteeringInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, SteeringInputRate), Z_Construct_UScriptStruct_FVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInputRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input handbrake can rise and fall\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input handbrake can rise and fall" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate = { "HandbrakeInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, HandbrakeInputRate), Z_Construct_UScriptStruct_FVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input brake can rise and fall\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input brake can rise and fall" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInputRate = { "BrakeInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, BrakeInputRate), Z_Construct_UScriptStruct_FVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInputRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input throttle can rise and fall\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input throttle can rise and fall" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInputRate = { "ThrottleInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThrottleInputRate), Z_Construct_UScriptStruct_FVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInputRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Auto-brake when vehicle forward speed is opposite of player input by at least this much (cm/s)\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Auto-brake when vehicle forward speed is opposite of player input by at least this much (cm/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold = { "WrongDirectionThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, WrongDirectionThreshold), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_StopThreshold_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Auto-brake when absolute vehicle forward speed is less than this (cm/s)\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Auto-brake when absolute vehicle forward speed is less than this (cm/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_StopThreshold = { "StopThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, StopThreshold), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_StopThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_StopThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_IdleBrakeInput_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// How much to press the brake when the player has release throttle\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "How much to press the brake when the player has release throttle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_IdleBrakeInput = { "IdleBrakeInput", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, IdleBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_IdleBrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_IdleBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInput_MetaData[] = {
		{ "Comment", "// Handbrake output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Handbrake output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInput = { "HandbrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, HandbrakeInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInput_MetaData[] = {
		{ "Comment", "// Brake output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Brake output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInput = { "BrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, BrakeInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInput_MetaData[] = {
		{ "Comment", "// Accelerator output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Accelerator output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInput = { "ThrottleInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInput_MetaData[] = {
		{ "Comment", "// Steering output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Steering output to physics system. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInput = { "SteeringInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, SteeringInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawBrakeInput_MetaData[] = {
		{ "Comment", "// What the player has the brake set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the brake set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawBrakeInput = { "RawBrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawBrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawThrottleInput_MetaData[] = {
		{ "Comment", "// What the player has the accelerator set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the accelerator set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawThrottleInput = { "RawThrottleInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawThrottleInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawSteeringInput_MetaData[] = {
		{ "Comment", "// What the player has the steering set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the steering set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawSteeringInput = { "RawSteeringInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawSteeringInput), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawSteeringInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawSteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ReplicatedState_MetaData[] = {
		{ "Comment", "// replicated state of vehicle \n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "replicated state of vehicle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ReplicatedState = { "ReplicatedState", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, ReplicatedState), Z_Construct_UScriptStruct_FReplicatedVehicleState, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ReplicatedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ReplicatedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_PendingLaunchVelocity_MetaData[] = {
		{ "Comment", "/** Temporarily holds launch velocity when pawn is to be launched so it happens at end of movement. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Temporarily holds launch velocity when pawn is to be launched so it happens at end of movement." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_PendingLaunchVelocity = { "PendingLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, PendingLaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_PendingLaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_PendingLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceWeight_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** De facto default value 0.5 (due to that being the default in the avoidance registration function), indicates RVO behavior. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "De facto default value 0.5 (due to that being the default in the avoidance registration function), indicates RVO behavior." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, AvoidanceWeight), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToIgnore_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToIgnore = { "GroupsToIgnore", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, GroupsToIgnore), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToAvoid_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Will avoid other agents if they are in one of specified groups */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Will avoid other agents if they are in one of specified groups" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToAvoid = { "GroupsToAvoid", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, GroupsToAvoid), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToAvoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToAvoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceGroup_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Moving actor's group mask */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Moving actor's group mask" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceGroup = { "AvoidanceGroup", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, AvoidanceGroup), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceUID_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** No default value, for now it's assumed to be valid if GetAvoidanceManager() returns non-NULL. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "No default value, for now it's assumed to be valid if GetAvoidanceManager() returns non-NULL." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceUID = { "AvoidanceUID", nullptr, (EPropertyFlags)0x0010040000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, AvoidanceUID), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOThrottleStep_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value by which to alter throttle per frame based on calculated avoidance */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Value by which to alter throttle per frame based on calculated avoidance" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOThrottleStep = { "RVOThrottleStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RVOThrottleStep), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOThrottleStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOThrottleStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOSteeringStep_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value by which to alter steering per frame based on calculated avoidance */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Value by which to alter steering per frame based on calculated avoidance" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOSteeringStep = { "RVOSteeringStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RVOSteeringStep), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOSteeringStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOSteeringStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Area Radius to consider for RVO avoidance */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Area Radius to consider for RVO avoidance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius = { "AvoidanceConsiderationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, AvoidanceConsiderationRadius), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceHeight_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Vehicle Height to use for RVO avoidance (usually vehicle height) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Vehicle Height to use for RVO avoidance (usually vehicle height)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceHeight = { "RVOAvoidanceHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RVOAvoidanceHeight), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceRadius_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** Vehicle Radius to use for RVO avoidance (usually half of vehicle width) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Vehicle Radius to use for RVO avoidance (usually half of vehicle width)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceRadius = { "RVOAvoidanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, RVOAvoidanceRadius), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "// Our instanced wheels\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Our instanced wheels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels = { "Wheels", nullptr, (EPropertyFlags)0x0010000000202014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, Wheels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels_Inner = { "Wheels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVehicleWheel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HighForwardSpeedSubStepCount_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The sub-step count above the threshold longitudinal speed has a default of 1. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "The sub-step count above the threshold longitudinal speed has a default of 1." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HighForwardSpeedSubStepCount = { "HighForwardSpeedSubStepCount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, HighForwardSpeedSubStepCount), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HighForwardSpeedSubStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HighForwardSpeedSubStepCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_LowForwardSpeedSubStepCount_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The sub-step count below the threshold longitudinal speed has a default of 3. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "The sub-step count below the threshold longitudinal speed has a default of 3." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_LowForwardSpeedSubStepCount = { "LowForwardSpeedSubStepCount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, LowForwardSpeedSubStepCount), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_LowForwardSpeedSubStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_LowForwardSpeedSubStepCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThresholdLongitudinalSpeed_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** PhysX sub-steps\n     More sub-steps provides better stability but with greater computational cost.\n     Typically, vehicles require more sub-steps at very low forward speeds.\n     The threshold longitudinal speed has a default value of 5 metres per second. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "PhysX sub-steps\n    More sub-steps provides better stability but with greater computational cost.\n    Typically, vehicles require more sub-steps at very low forward speeds.\n    The threshold longitudinal speed has a default value of 5 metres per second." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThresholdLongitudinalSpeed = { "ThresholdLongitudinalSpeed", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThresholdLongitudinalSpeed), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThresholdLongitudinalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThresholdLongitudinalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoadFiltered_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Clamp normalized tire load to this value */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Clamp normalized tire load to this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoadFiltered = { "MaxNormalizedTireLoadFiltered", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, MaxNormalizedTireLoadFiltered), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoadFiltered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoadFiltered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoad_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Clamp normalized tire load to this value */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Clamp normalized tire load to this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoad = { "MaxNormalizedTireLoad", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, MaxNormalizedTireLoad), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoadFiltered_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Clamp normalized tire load to this value */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Clamp normalized tire load to this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoadFiltered = { "MinNormalizedTireLoadFiltered", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, MinNormalizedTireLoadFiltered), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoadFiltered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoadFiltered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoad_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Clamp normalized tire load to this value */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Clamp normalized tire load to this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoad = { "MinNormalizedTireLoad", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, MinNormalizedTireLoad), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_InertiaTensorScale_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Scales the vehicle's inertia in each direction (forward, right, up) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Scales the vehicle's inertia in each direction (forward, right, up)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_InertiaTensorScale = { "InertiaTensorScale", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_InertiaTensorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_InertiaTensorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude_MetaData[] = {
		{ "Comment", "// Debug drag magnitude last applied\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Debug drag magnitude last applied" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude = { "DebugDragMagnitude", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, DebugDragMagnitude), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxEngineRPM_MetaData[] = {
		{ "Comment", "// Max RPM for engine\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Max RPM for engine" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxEngineRPM = { "MaxEngineRPM", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, MaxEngineRPM), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxEngineRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxEngineRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_EstimatedMaxEngineSpeed_MetaData[] = {
		{ "Comment", "// Estimated mad speed for engine\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Estimated mad speed for engine" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_EstimatedMaxEngineSpeed = { "EstimatedMaxEngineSpeed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, EstimatedMaxEngineSpeed), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_EstimatedMaxEngineSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_EstimatedMaxEngineSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragArea_MetaData[] = {
		{ "Comment", "// Drag area in cm^2\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Drag area in cm^2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragArea = { "DragArea", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, DragArea), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisHeight_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Chassis height used for drag force computation (cm)*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Chassis height used for drag force computation (cm)" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisHeight = { "ChassisHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, ChassisHeight), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisWidth_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Chassis width used for drag force computation (cm)*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Chassis width used for drag force computation (cm)" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisWidth = { "ChassisWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, ChassisWidth), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** DragCoefficient of the vehicle chassis. */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "DragCoefficient of the vehicle chassis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, DragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Wheels to create */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Wheels to create" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups = { "WheelSetups", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, WheelSetups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_Inner = { "WheelSetups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWheelSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Mass to set the vehicle chassis to. It's much easier to tweak vehicle settings when\n\x09 * the mass doesn't change due to tweaks with the physics asset. [kg] */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Mass to set the vehicle chassis to. It's much easier to tweak vehicle settings when\nthe mass doesn't change due to tweaks with the physics asset. [kg]" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent, Mass), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData[] = {
		{ "Comment", "/** Was avoidance updated in this frame? */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Was avoidance updated in this frame?" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bWasAvoidanceUpdated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated = { "bWasAvoidanceUpdated", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_MetaData[] = {
		{ "Comment", "// True if the player is holding gear down\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "True if the player is holding gear down" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bRawGearDownInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput = { "bRawGearDownInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_MetaData[] = {
		{ "Comment", "// True if the player is holding gear up\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "True if the player is holding gear up" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bRawGearUpInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput = { "bRawGearUpInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_MetaData[] = {
		{ "Comment", "// True if the player is holding the handbrake\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "True if the player is holding the handbrake" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bRawHandbrakeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput = { "bRawHandbrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "Comment", "/** If set, component will use RVO avoidance */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "If set, component will use RVO avoidance" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bUseRVOAvoidance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance = { "bUseRVOAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** If true, the brake and reverse controls will behave in a more arcade fashion where holding reverse also functions as brake. For a more realistic approach turn this off*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "If true, the brake and reverse controls will behave in a more arcade fashion where holding reverse also functions as brake. For a more realistic approach turn this off" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bReverseAsBrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake = { "bReverseAsBrake", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "// Supports the old (before 4.14) way of applying spring forces. We used to offset from the vehicle center of mass instead of the spring location center of mass. You should only use this for existing content that hasn't been re-tuned\n" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Supports the old (before 4.14) way of applying spring forces. We used to offset from the vehicle center of mass instead of the spring location center of mass. You should only use this for existing content that hasn't been re-tuned" },
	};
#endif
	void Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode_SetBit(void* Obj)
	{
		((UWheeledVehicleMovementComponent*)Obj)->bDeprecatedSpringOffsetMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode = { "bDeprecatedSpringOffsetMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWheeledVehicleMovementComponent), &Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_OverrideController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_StopThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_IdleBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HandbrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_BrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_SteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RawSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ReplicatedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_PendingLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_GroupsToAvoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOThrottleStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOSteeringStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_RVOAvoidanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Wheels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_HighForwardSpeedSubStepCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_LowForwardSpeedSubStepCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ThresholdLongitudinalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoadFiltered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxNormalizedTireLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoadFiltered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MinNormalizedTireLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_InertiaTensorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_MaxEngineRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_EstimatedMaxEngineSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_ChassisWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearDownInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawGearUpInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bUseRVOAvoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bReverseAsBrake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::NewProp_bDeprecatedSpringOffsetMode,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URVOAvoidanceInterface_NoRegister, (int32)VTABLE_OFFSET(UWheeledVehicleMovementComponent, IRVOAvoidanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWheeledVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::ClassParams = {
		&UWheeledVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWheeledVehicleMovementComponent, 3924437435);
	template<> PHYSXVEHICLES_API UClass* StaticClass<UWheeledVehicleMovementComponent>()
	{
		return UWheeledVehicleMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent(Z_Construct_UClass_UWheeledVehicleMovementComponent, &UWheeledVehicleMovementComponent::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("UWheeledVehicleMovementComponent"), false, nullptr, nullptr, nullptr);

	void UWheeledVehicleMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedState(TEXT("ReplicatedState"));
		static const FName Name_OverrideController(TEXT("OverrideController"));

		const bool bIsValid = true
			&& Name_ReplicatedState == ClassReps[(int32)ENetFields_Private::ReplicatedState].Property->GetFName()
			&& Name_OverrideController == ClassReps[(int32)ENetFields_Private::OverrideController].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWheeledVehicleMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWheeledVehicleMovementComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWheeledVehicleMovementComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
