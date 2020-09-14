// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/VehicleWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleWheel() {}
// Cross Module References
	PHYSXVEHICLES_API UEnum* Z_Construct_UEnum_PhysXVehicles_EWheelSweepType();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UTireConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTireType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EWheelSweepType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysXVehicles_EWheelSweepType, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("EWheelSweepType"));
		}
		return Singleton;
	}
	template<> PHYSXVEHICLES_API UEnum* StaticEnum<EWheelSweepType>()
	{
		return EWheelSweepType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWheelSweepType(EWheelSweepType_StaticEnum, TEXT("/Script/PhysXVehicles"), TEXT("EWheelSweepType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysXVehicles_EWheelSweepType_Hash() { return 2001064117U; }
	UEnum* Z_Construct_UEnum_PhysXVehicles_EWheelSweepType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWheelSweepType"), 0, Get_Z_Construct_UEnum_PhysXVehicles_EWheelSweepType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SimpleAndComplex", (int64)SimpleAndComplex },
				{ "Simple", (int64)Simple },
				{ "Complex", (int64)Complex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Complex.Comment", "/** Sweeps against complex geometry only */" },
				{ "Complex.DisplayName", "Complex" },
				{ "Complex.Name", "Complex" },
				{ "Complex.ToolTip", "Sweeps against complex geometry only" },
				{ "ModuleRelativePath", "Public/VehicleWheel.h" },
				{ "Simple.Comment", "/** Sweeps against simple geometry only */" },
				{ "Simple.DisplayName", "Simple" },
				{ "Simple.Name", "Simple" },
				{ "Simple.ToolTip", "Sweeps against simple geometry only" },
				{ "SimpleAndComplex.Comment", "/** Sweeps against both simple and complex geometry. */" },
				{ "SimpleAndComplex.DisplayName", "SimpleAndComplex" },
				{ "SimpleAndComplex.Name", "SimpleAndComplex" },
				{ "SimpleAndComplex.ToolTip", "Sweeps against both simple and complex geometry." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysXVehicles,
				nullptr,
				"EWheelSweepType",
				"EWheelSweepType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UVehicleWheel::execIsInAir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInAir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleWheel::execGetSuspensionOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSuspensionOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleWheel::execGetRotationAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRotationAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleWheel::execGetSteerAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteerAngle();
		P_NATIVE_END;
	}
	void UVehicleWheel::StaticRegisterNativesUVehicleWheel()
	{
		UClass* Class = UVehicleWheel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRotationAngle", &UVehicleWheel::execGetRotationAngle },
			{ "GetSteerAngle", &UVehicleWheel::execGetSteerAngle },
			{ "GetSuspensionOffset", &UVehicleWheel::execGetSuspensionOffset },
			{ "IsInAir", &UVehicleWheel::execIsInAir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics
	{
		struct VehicleWheel_eventGetRotationAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleWheel_eventGetRotationAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheel, nullptr, "GetRotationAngle", nullptr, nullptr, sizeof(VehicleWheel_eventGetRotationAngle_Parms), Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleWheel_GetRotationAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleWheel_GetRotationAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics
	{
		struct VehicleWheel_eventGetSteerAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleWheel_eventGetSteerAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheel, nullptr, "GetSteerAngle", nullptr, nullptr, sizeof(VehicleWheel_eventGetSteerAngle_Parms), Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleWheel_GetSteerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleWheel_GetSteerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics
	{
		struct VehicleWheel_eventGetSuspensionOffset_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleWheel_eventGetSuspensionOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheel, nullptr, "GetSuspensionOffset", nullptr, nullptr, sizeof(VehicleWheel_eventGetSuspensionOffset_Parms), Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics
	{
		struct VehicleWheel_eventIsInAir_Parms
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
	void Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleWheel_eventIsInAir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleWheel_eventIsInAir_Parms), &Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheel, nullptr, "IsInAir", nullptr, nullptr, sizeof(VehicleWheel_eventIsInAir_Parms), Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleWheel_IsInAir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleWheel_IsInAir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleWheel_NoRegister()
	{
		return UVehicleWheel::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLatForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLatForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLongForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLongForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWheelTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugWheelTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugNormalizedTireLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugNormalizedTireLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLatSlip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLatSlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLongSlip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLongSlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleSim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHandBrakeTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHandBrakeTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrakeTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBrakeTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SweepType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionDampingRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionDampingRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionNaturalFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionNaturalFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionMaxDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionMaxDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionMaxRaise_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionMaxRaise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionForceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongStiffValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LongStiffValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatStiffValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LatStiffValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatStiffMaxLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LatStiffMaxLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectedByHandbrake_MetaData[];
#endif
		static void NewProp_bAffectedByHandbrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectedByHandbrake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteerAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteerAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShapeWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShapeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoAdjustCollisionSize_MetaData[];
#endif
		static void NewProp_bAutoAdjustCollisionSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoAdjustCollisionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDontCreateShape_MetaData[];
#endif
		static void NewProp_bDontCreateShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDontCreateShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleWheel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleWheel_GetRotationAngle, "GetRotationAngle" }, // 1108975432
		{ &Z_Construct_UFunction_UVehicleWheel_GetSteerAngle, "GetSteerAngle" }, // 3909459920
		{ &Z_Construct_UFunction_UVehicleWheel_GetSuspensionOffset, "GetSuspensionOffset" }, // 2182704979
		{ &Z_Construct_UFunction_UVehicleWheel_IsInAir, "IsInAir" }, // 1227322460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VehicleWheel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Velocity_MetaData[] = {
		{ "Comment", "// Current velocity of the wheel center (change in location over time)\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Current velocity of the wheel center (change in location over time)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_OldLocation_MetaData[] = {
		{ "Comment", "// Worldspace location of this wheel last frame\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Worldspace location of this wheel last frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_OldLocation = { "OldLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_OldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_OldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "// Worldspace location of this wheel\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Worldspace location of this wheel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatForce_MetaData[] = {
		{ "Comment", "// Lateral force the wheel is applying to the chassis\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Lateral force the wheel is applying to the chassis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatForce = { "DebugLatForce", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DebugLatForce), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongForce_MetaData[] = {
		{ "Comment", "// Longitudinal force the wheel is applying to the chassis\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Longitudinal force the wheel is applying to the chassis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongForce = { "DebugLongForce", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DebugLongForce), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugWheelTorque_MetaData[] = {
		{ "Comment", "// Wheel torque\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Wheel torque" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugWheelTorque = { "DebugWheelTorque", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DebugWheelTorque), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugWheelTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugWheelTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad_MetaData[] = {
		{ "Comment", "// How much force the tire experiences at rest divided by how much force it is experiencing now\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "How much force the tire experiences at rest divided by how much force it is experiencing now" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad = { "DebugNormalizedTireLoad", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DebugNormalizedTireLoad), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatSlip_MetaData[] = {
		{ "Comment", "// Lateral slip experienced by the wheel\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Lateral slip experienced by the wheel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatSlip = { "DebugLatSlip", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DebugLatSlip), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatSlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatSlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongSlip_MetaData[] = {
		{ "Comment", "// Longitudinal slip experienced by the wheel\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Longitudinal slip experienced by the wheel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongSlip = { "DebugLongSlip", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DebugLongSlip), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongSlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongSlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_WheelIndex_MetaData[] = {
		{ "Comment", "// Our index in the vehicle's (and setup's) wheels array\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Our index in the vehicle's (and setup's) wheels array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, WheelIndex), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_WheelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_WheelIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_VehicleSim_MetaData[] = {
		{ "Comment", "/** The vehicle that owns us */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "The vehicle that owns us" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_VehicleSim = { "VehicleSim", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, VehicleSim), Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_VehicleSim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_VehicleSim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxHandBrakeTorque_MetaData[] = {
		{ "Category", "Brakes" },
		{ "Comment", "/** \n\x09 *\x09Max handbrake brake torque for this wheel (Nm). A handbrake should have a stronger brake torque\n\x09 *\x09than the brake. This will be ignored for wheels that are not affected by the handbrake. \n\x09 */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Max handbrake brake torque for this wheel (Nm). A handbrake should have a stronger brake torque\nthan the brake. This will be ignored for wheels that are not affected by the handbrake." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxHandBrakeTorque = { "MaxHandBrakeTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, MaxHandBrakeTorque), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxHandBrakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxHandBrakeTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxBrakeTorque_MetaData[] = {
		{ "Category", "Brakes" },
		{ "Comment", "/** max brake torque for this wheel (Nm) */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "max brake torque for this wheel (Nm)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxBrakeTorque = { "MaxBrakeTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, MaxBrakeTorque), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxBrakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxBrakeTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SweepType_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Whether wheel suspension considers simple, complex, or both */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Whether wheel suspension considers simple, complex, or both" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SweepType = { "SweepType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SweepType), Z_Construct_UEnum_PhysXVehicles_EWheelSweepType, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SweepType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SweepType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionDampingRatio_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/**\n\x09 *\x09The rate at which energy is dissipated from the spring. Standard cars have values between 0.8 and 1.2.\n\x09 *\x09values < 1 are more sluggish, values > 1 or more twitchy\n\x09 */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "The rate at which energy is dissipated from the spring. Standard cars have values between 0.8 and 1.2.\nvalues < 1 are more sluggish, values > 1 or more twitchy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionDampingRatio = { "SuspensionDampingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SuspensionDampingRatio), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionDampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionDampingRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionNaturalFrequency_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Oscillation frequency of suspension. Standard cars have values between 5 and 10 */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Oscillation frequency of suspension. Standard cars have values between 5 and 10" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionNaturalFrequency = { "SuspensionNaturalFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SuspensionNaturalFrequency), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionNaturalFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionNaturalFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxDrop_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** How far the wheel can drop below the resting position */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "How far the wheel can drop below the resting position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxDrop = { "SuspensionMaxDrop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SuspensionMaxDrop), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxRaise_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** How far the wheel can go above the resting position */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "How far the wheel can go above the resting position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxRaise = { "SuspensionMaxRaise", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SuspensionMaxRaise), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxRaise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxRaise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionForceOffset_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Vertical offset from where suspension forces are applied (along Z-axis) */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Vertical offset from where suspension forces are applied (along Z-axis)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionForceOffset = { "SuspensionForceOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SuspensionForceOffset), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionForceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionForceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LongStiffValue_MetaData[] = {
		{ "Category", "Tire" },
		{ "Comment", "/** How much longitudinal stiffness to have given longitudinal slip */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "How much longitudinal stiffness to have given longitudinal slip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LongStiffValue = { "LongStiffValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, LongStiffValue), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LongStiffValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LongStiffValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffValue_MetaData[] = {
		{ "Category", "Tire" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** How much lateral stiffness to have given lateral slip */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "How much lateral stiffness to have given lateral slip" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffValue = { "LatStiffValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, LatStiffValue), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffMaxLoad_MetaData[] = {
		{ "Category", "Tire" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Max normalized tire load at which the tire can deliver no more lateral stiffness no matter how much extra load is applied to the tire. */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Max normalized tire load at which the tire can deliver no more lateral stiffness no matter how much extra load is applied to the tire." },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffMaxLoad = { "LatStiffMaxLoad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, LatStiffMaxLoad), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffMaxLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffMaxLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireConfig_MetaData[] = {
		{ "Category", "Tire" },
		{ "Comment", "/** Tire type for the wheel. Determines friction */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Tire type for the wheel. Determines friction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireConfig = { "TireConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, TireConfig), Z_Construct_UClass_UTireConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireType_MetaData[] = {
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireType = { "TireType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, TireType), Z_Construct_UClass_UTireType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Whether handbrake should affect this wheel */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Whether handbrake should affect this wheel" },
	};
#endif
	void Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake_SetBit(void* Obj)
	{
		((UVehicleWheel*)Obj)->bAffectedByHandbrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake = { "bAffectedByHandbrake", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehicleWheel), &Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SteerAngle_MetaData[] = {
		{ "Category", "WheelsSetup" },
		{ "ClampMin", "0" },
		{ "Comment", "// steer angle in degrees for this wheel\n" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "steer angle in degrees for this wheel" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SteerAngle = { "SteerAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, SteerAngle), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SteerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SteerAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DampingRate_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Damping rate for this wheel (Kgm^2/s) */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Damping rate for this wheel (Kgm^2/s)" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DampingRate = { "DampingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, DampingRate), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DampingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DampingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Mass of this wheel */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Mass of this wheel" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, Mass), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeWidth_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Width of the wheel */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Width of the wheel" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeWidth = { "ShapeWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, ShapeWidth), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeRadius_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Radius of the wheel */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Radius of the wheel" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeRadius = { "ShapeRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, ShapeRadius), METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** \n\x09 * If BoneName is specified, offset the wheel from the bone's location.\n\x09 * Otherwise this offsets the wheel from the vehicle's origin.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "If BoneName is specified, offset the wheel from the bone's location.\nOtherwise this offsets the wheel from the vehicle's origin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** \n\x09 *\x09If true, ShapeRadius and ShapeWidth will be used to automatically scale collision taken from CollisionMesh to match wheel size.\n\x09 *\x09If false, size of CollisionMesh won't be changed. Use if you want to scale wheels manually.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "If true, ShapeRadius and ShapeWidth will be used to automatically scale collision taken from CollisionMesh to match wheel size.\nIf false, size of CollisionMesh won't be changed. Use if you want to scale wheels manually." },
	};
#endif
	void Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize_SetBit(void* Obj)
	{
		((UVehicleWheel*)Obj)->bAutoAdjustCollisionSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize = { "bAutoAdjustCollisionSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehicleWheel), &Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** If set, shape won't be created, but mapped from chassis mesh */" },
		{ "DisplayName", "UsePhysAssetShape" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "If set, shape won't be created, but mapped from chassis mesh" },
	};
#endif
	void Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape_SetBit(void* Obj)
	{
		((UVehicleWheel*)Obj)->bDontCreateShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape = { "bDontCreateShape", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehicleWheel), &Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleWheel_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** \n\x09 * Static mesh with collision setup for wheel, will be used to create wheel shape\n\x09 * (if empty, sphere will be added as wheel shape, check bDontCreateShape flag)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VehicleWheel.h" },
		{ "ToolTip", "Static mesh with collision setup for wheel, will be used to create wheel shape\n(if empty, sphere will be added as wheel shape, check bDontCreateShape flag)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleWheel_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleWheel, CollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::NewProp_CollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicleWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_OldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugWheelTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLatSlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DebugLongSlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_VehicleSim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxHandBrakeTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_MaxBrakeTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SweepType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionDampingRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionNaturalFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionMaxRaise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SuspensionForceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LongStiffValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_LatStiffMaxLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_TireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAffectedByHandbrake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_SteerAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_DampingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_ShapeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bAutoAdjustCollisionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_bDontCreateShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheel_Statics::NewProp_CollisionMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleWheel_Statics::ClassParams = {
		&UVehicleWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVehicleWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleWheel, 2425442633);
	template<> PHYSXVEHICLES_API UClass* StaticClass<UVehicleWheel>()
	{
		return UVehicleWheel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleWheel(Z_Construct_UClass_UVehicleWheel, &UVehicleWheel::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("UVehicleWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
