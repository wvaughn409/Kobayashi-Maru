// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/WheeledVehicleMovementComponent4W.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheeledVehicleMovementComponent4W() {}
// Cross Module References
	PHYSXVEHICLES_API UEnum* Z_Construct_UEnum_PhysXVehicles_EVehicleDifferential4W();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionData();
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleGearData();
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleDifferential4WData();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent4W_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent4W();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent();
// End Cross Module References
	static UEnum* EVehicleDifferential4W_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysXVehicles_EVehicleDifferential4W, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("EVehicleDifferential4W"));
		}
		return Singleton;
	}
	template<> PHYSXVEHICLES_API UEnum* StaticEnum<EVehicleDifferential4W::Type>()
	{
		return EVehicleDifferential4W_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVehicleDifferential4W(EVehicleDifferential4W_StaticEnum, TEXT("/Script/PhysXVehicles"), TEXT("EVehicleDifferential4W"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysXVehicles_EVehicleDifferential4W_Hash() { return 281287130U; }
	UEnum* Z_Construct_UEnum_PhysXVehicles_EVehicleDifferential4W()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVehicleDifferential4W"), 0, Get_Z_Construct_UEnum_PhysXVehicles_EVehicleDifferential4W_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVehicleDifferential4W::LimitedSlip_4W", (int64)EVehicleDifferential4W::LimitedSlip_4W },
				{ "EVehicleDifferential4W::LimitedSlip_FrontDrive", (int64)EVehicleDifferential4W::LimitedSlip_FrontDrive },
				{ "EVehicleDifferential4W::LimitedSlip_RearDrive", (int64)EVehicleDifferential4W::LimitedSlip_RearDrive },
				{ "EVehicleDifferential4W::Open_4W", (int64)EVehicleDifferential4W::Open_4W },
				{ "EVehicleDifferential4W::Open_FrontDrive", (int64)EVehicleDifferential4W::Open_FrontDrive },
				{ "EVehicleDifferential4W::Open_RearDrive", (int64)EVehicleDifferential4W::Open_RearDrive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LimitedSlip_4W.Name", "EVehicleDifferential4W::LimitedSlip_4W" },
				{ "LimitedSlip_FrontDrive.Name", "EVehicleDifferential4W::LimitedSlip_FrontDrive" },
				{ "LimitedSlip_RearDrive.Name", "EVehicleDifferential4W::LimitedSlip_RearDrive" },
				{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
				{ "Open_4W.Name", "EVehicleDifferential4W::Open_4W" },
				{ "Open_FrontDrive.Name", "EVehicleDifferential4W::Open_FrontDrive" },
				{ "Open_RearDrive.Name", "EVehicleDifferential4W::Open_RearDrive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysXVehicles,
				nullptr,
				"EVehicleDifferential4W",
				"EVehicleDifferential4W::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVehicleTransmissionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleTransmissionData, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("VehicleTransmissionData"), sizeof(FVehicleTransmissionData), Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FVehicleTransmissionData>()
{
	return FVehicleTransmissionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleTransmissionData(FVehicleTransmissionData::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("VehicleTransmissionData"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleTransmissionData
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleTransmissionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleTransmissionData")),new UScriptStruct::TCppStructOps<FVehicleTransmissionData>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleTransmissionData;
	struct Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClutchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClutchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralGearUpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeutralGearUpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseGearRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseGearRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardGears_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForwardGears;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardGears_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearAutoBoxLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearAutoBoxLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearSwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearSwitchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGearAutoBox_MetaData[];
#endif
		static void NewProp_bUseGearAutoBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGearAutoBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleTransmissionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ClutchStrength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of clutch (Kgm^2/s)*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Strength of clutch (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ClutchStrength = { "ClutchStrength", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, ClutchStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ClutchStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ClutchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_NeutralGearUpRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value of engineRevs/maxEngineRevs that is high enough to increment gear*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Value of engineRevs/maxEngineRevs that is high enough to increment gear" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_NeutralGearUpRatio = { "NeutralGearUpRatio", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, NeutralGearUpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_NeutralGearUpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_NeutralGearUpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ReverseGearRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Reverse gear ratio */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Reverse gear ratio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ReverseGearRatio = { "ReverseGearRatio", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, ReverseGearRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ReverseGearRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ReverseGearRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Forward gear ratios (up to 30) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Forward gear ratios (up to 30)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears = { "ForwardGears", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, ForwardGears), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears_Inner = { "ForwardGears", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVehicleGearData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_FinalRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The final gear ratio multiplies the transmission gear ratios.*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "The final gear ratio multiplies the transmission gear ratios." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_FinalRatio = { "FinalRatio", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, FinalRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_FinalRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_FinalRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearAutoBoxLatency_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Minimum time it takes the automatic transmission to initiate a gear change (seconds)*/" },
		{ "editcondition", "bUseGearAutoBox" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Minimum time it takes the automatic transmission to initiate a gear change (seconds)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearAutoBoxLatency = { "GearAutoBoxLatency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, GearAutoBoxLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearAutoBoxLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearAutoBoxLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearSwitchTime_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time it takes to switch gears (seconds) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Time it takes to switch gears (seconds)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearSwitchTime = { "GearSwitchTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleTransmissionData, GearSwitchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearSwitchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearSwitchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Whether to use automatic transmission */" },
		{ "DisplayName", "Automatic Transmission" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Whether to use automatic transmission" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox_SetBit(void* Obj)
	{
		((FVehicleTransmissionData*)Obj)->bUseGearAutoBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox = { "bUseGearAutoBox", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleTransmissionData), &Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ClutchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_NeutralGearUpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ReverseGearRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_ForwardGears_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_FinalRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearAutoBoxLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_GearSwitchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::NewProp_bUseGearAutoBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"VehicleTransmissionData",
		sizeof(FVehicleTransmissionData),
		alignof(FVehicleTransmissionData),
		Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleTransmissionData"), sizeof(FVehicleTransmissionData), Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleTransmissionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_Hash() { return 3221858840U; }
class UScriptStruct* FVehicleGearData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleGearData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleGearData, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("VehicleGearData"), sizeof(FVehicleGearData), Get_Z_Construct_UScriptStruct_FVehicleGearData_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FVehicleGearData>()
{
	return FVehicleGearData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleGearData(FVehicleGearData::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("VehicleGearData"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleGearData
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleGearData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleGearData")),new UScriptStruct::TCppStructOps<FVehicleGearData>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleGearData;
	struct Z_Construct_UScriptStruct_FVehicleGearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleGearData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_UpRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value of engineRevs/maxEngineRevs that is high enough to gear up*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Value of engineRevs/maxEngineRevs that is high enough to gear up" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_UpRatio = { "UpRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGearData, UpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_UpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_UpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_DownRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value of engineRevs/maxEngineRevs that is low enough to gear down*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Value of engineRevs/maxEngineRevs that is low enough to gear down" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_DownRatio = { "DownRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGearData, DownRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_DownRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_DownRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Determines the amount of torque multiplication*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Determines the amount of torque multiplication" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGearData, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_Ratio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleGearData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_UpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_DownRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGearData_Statics::NewProp_Ratio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleGearData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"VehicleGearData",
		sizeof(FVehicleGearData),
		alignof(FVehicleGearData),
		Z_Construct_UScriptStruct_FVehicleGearData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGearData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGearData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleGearData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleGearData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleGearData"), sizeof(FVehicleGearData), Get_Z_Construct_UScriptStruct_FVehicleGearData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleGearData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleGearData_Hash() { return 2134306628U; }
class UScriptStruct* FVehicleEngineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleEngineData, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("VehicleEngineData"), sizeof(FVehicleEngineData), Get_Z_Construct_UScriptStruct_FVehicleEngineData_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FVehicleEngineData>()
{
	return FVehicleEngineData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleEngineData(FVehicleEngineData::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("VehicleEngineData"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleEngineData
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleEngineData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleEngineData")),new UScriptStruct::TCppStructOps<FVehicleEngineData>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleEngineData;
	struct Z_Construct_UScriptStruct_FVehicleEngineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchDisengaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchEngaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateFullThrottle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateFullThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MOI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorqueCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TorqueCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleEngineData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping rate of engine in at zero throttle when the clutch is disengaged (in neutral gear) (Kgm^2/s)*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Damping rate of engine in at zero throttle when the clutch is disengaged (in neutral gear) (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged = { "DampingRateZeroThrottleClutchDisengaged", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineData, DampingRateZeroThrottleClutchDisengaged), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping rate of engine in at zero throttle when the clutch is engaged (Kgm^2/s)*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Damping rate of engine in at zero throttle when the clutch is engaged (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged = { "DampingRateZeroThrottleClutchEngaged", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineData, DampingRateZeroThrottleClutchEngaged), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateFullThrottle_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping rate of engine when full throttle is applied (Kgm^2/s) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Damping rate of engine when full throttle is applied (Kgm^2/s)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateFullThrottle = { "DampingRateFullThrottle", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineData, DampingRateFullThrottle), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateFullThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateFullThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MOI_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Moment of inertia of the engine around the axis of rotation (Kgm^2). */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Moment of inertia of the engine around the axis of rotation (Kgm^2)." },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MOI = { "MOI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineData, MOI), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MOI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MOI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MaxRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Maximum revolutions per minute of the engine */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Maximum revolutions per minute of the engine" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MaxRPM = { "MaxRPM", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineData, MaxRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MaxRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MaxRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_TorqueCurve_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Torque (Nm) at a given RPM*/" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Torque (Nm) at a given RPM" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_TorqueCurve = { "TorqueCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineData, TorqueCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_TorqueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_TorqueCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleEngineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_DampingRateFullThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MOI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_MaxRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineData_Statics::NewProp_TorqueCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleEngineData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"VehicleEngineData",
		sizeof(FVehicleEngineData),
		alignof(FVehicleEngineData),
		Z_Construct_UScriptStruct_FVehicleEngineData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleEngineData"), sizeof(FVehicleEngineData), Get_Z_Construct_UScriptStruct_FVehicleEngineData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleEngineData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineData_Hash() { return 900570177U; }
class UScriptStruct* FVehicleDifferential4WData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleDifferential4WData, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("VehicleDifferential4WData"), sizeof(FVehicleDifferential4WData), Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FVehicleDifferential4WData>()
{
	return FVehicleDifferential4WData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleDifferential4WData(FVehicleDifferential4WData::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("VehicleDifferential4WData"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleDifferential4WData
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleDifferential4WData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleDifferential4WData")),new UScriptStruct::TCppStructOps<FVehicleDifferential4WData>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleDifferential4WData;
	struct Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentreBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CentreBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearLeftRightSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearLeftRightSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontLeftRightSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontLeftRightSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontRearSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontRearSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifferentialType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleDifferential4WData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearBias_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Maximum allowed ratio of rear-left and rear-right wheel rotation speeds (range: 1..inf, works only with LimitedSlip_4W, LimitedSlip_FrontDrive) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Maximum allowed ratio of rear-left and rear-right wheel rotation speeds (range: 1..inf, works only with LimitedSlip_4W, LimitedSlip_FrontDrive)" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearBias = { "RearBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, RearBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontBias_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Maximum allowed ratio of front-left and front-right wheel rotation speeds (range: 1..inf, works only with LimitedSlip_4W, LimitedSlip_FrontDrive) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Maximum allowed ratio of front-left and front-right wheel rotation speeds (range: 1..inf, works only with LimitedSlip_4W, LimitedSlip_FrontDrive)" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontBias = { "FrontBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, FrontBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_CentreBias_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Maximum allowed ratio of average front wheel rotation speed and rear wheel rotation speeds (range: 1..inf, works only with LimitedSlip_4W) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Maximum allowed ratio of average front wheel rotation speed and rear wheel rotation speeds (range: 1..inf, works only with LimitedSlip_4W)" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_CentreBias = { "CentreBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, CentreBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_CentreBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_CentreBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearLeftRightSplit_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ratio of torque split between rear-left and rear-right (>0.5 means more to rear-left, <0.5 means more to rear-right, works only with 4W and LimitedSlip_RearDrive) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Ratio of torque split between rear-left and rear-right (>0.5 means more to rear-left, <0.5 means more to rear-right, works only with 4W and LimitedSlip_RearDrive)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearLeftRightSplit = { "RearLeftRightSplit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, RearLeftRightSplit), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearLeftRightSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearLeftRightSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontLeftRightSplit_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ratio of torque split between front-left and front-right (>0.5 means more to front-left, <0.5 means more to front-right, works only with 4W and LimitedSlip_FrontDrive) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Ratio of torque split between front-left and front-right (>0.5 means more to front-left, <0.5 means more to front-right, works only with 4W and LimitedSlip_FrontDrive)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontLeftRightSplit = { "FrontLeftRightSplit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, FrontLeftRightSplit), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontLeftRightSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontLeftRightSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontRearSplit_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ratio of torque split between front and rear (>0.5 means more to front, <0.5 means more to rear, works only with 4W type) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Ratio of torque split between front and rear (>0.5 means more to front, <0.5 means more to rear, works only with 4W type)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontRearSplit = { "FrontRearSplit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, FrontRearSplit), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontRearSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontRearSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_DifferentialType_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Type of differential */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Type of differential" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_DifferentialType = { "DifferentialType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleDifferential4WData, DifferentialType), Z_Construct_UEnum_PhysXVehicles_EVehicleDifferential4W, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_DifferentialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_DifferentialType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_CentreBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_RearLeftRightSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontLeftRightSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_FrontRearSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::NewProp_DifferentialType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"VehicleDifferential4WData",
		sizeof(FVehicleDifferential4WData),
		alignof(FVehicleDifferential4WData),
		Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleDifferential4WData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleDifferential4WData"), sizeof(FVehicleDifferential4WData), Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleDifferential4WData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_Hash() { return 3065010736U; }
	void UWheeledVehicleMovementComponent4W::StaticRegisterNativesUWheeledVehicleMovementComponent4W()
	{
	}
	UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent4W_NoRegister()
	{
		return UWheeledVehicleMovementComponent4W::StaticClass();
	}
	struct Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmissionSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransmissionSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermannAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermannAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifferentialSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EngineSetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWheeledVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "WheeledVehicleMovementComponent4W.h" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_SteeringCurve_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "Comment", "/** Maximum steering versus forward speed (km/h) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Maximum steering versus forward speed (km/h)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_SteeringCurve = { "SteeringCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent4W, SteeringCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_SteeringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_TransmissionSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "Comment", "/** Transmission data */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Transmission data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_TransmissionSetup = { "TransmissionSetup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent4W, TransmissionSetup), Z_Construct_UScriptStruct_FVehicleTransmissionData, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_TransmissionSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_TransmissionSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_AckermannAccuracy_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Accuracy of Ackermann steer calculation (range: 0..1) */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Accuracy of Ackermann steer calculation (range: 0..1)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_AckermannAccuracy = { "AckermannAccuracy", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent4W, AckermannAccuracy), METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_AckermannAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_AckermannAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_DifferentialSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "Comment", "/** Differential */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Differential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_DifferentialSetup = { "DifferentialSetup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent4W, DifferentialSetup), Z_Construct_UScriptStruct_FVehicleDifferential4WData, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_DifferentialSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_DifferentialSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_EngineSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "Comment", "/** Engine */" },
		{ "ModuleRelativePath", "Public/WheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Engine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_EngineSetup = { "EngineSetup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWheeledVehicleMovementComponent4W, EngineSetup), Z_Construct_UScriptStruct_FVehicleEngineData, METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_EngineSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_EngineSetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_SteeringCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_TransmissionSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_AckermannAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_DifferentialSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::NewProp_EngineSetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWheeledVehicleMovementComponent4W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::ClassParams = {
		&UWheeledVehicleMovementComponent4W::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent4W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWheeledVehicleMovementComponent4W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWheeledVehicleMovementComponent4W, 3497651155);
	template<> PHYSXVEHICLES_API UClass* StaticClass<UWheeledVehicleMovementComponent4W>()
	{
		return UWheeledVehicleMovementComponent4W::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent4W(Z_Construct_UClass_UWheeledVehicleMovementComponent4W, &UWheeledVehicleMovementComponent4W::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("UWheeledVehicleMovementComponent4W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWheeledVehicleMovementComponent4W);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWheeledVehicleMovementComponent4W)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
