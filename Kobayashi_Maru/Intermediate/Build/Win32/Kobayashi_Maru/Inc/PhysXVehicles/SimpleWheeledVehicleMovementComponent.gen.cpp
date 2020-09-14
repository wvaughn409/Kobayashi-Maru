// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/SimpleWheeledVehicleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleWheeledVehicleMovementComponent() {}
// Cross Module References
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_USimpleWheeledVehicleMovementComponent();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
// End Cross Module References
	DEFINE_FUNCTION(USimpleWheeledVehicleMovementComponent::execSetSteerAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SteerAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteerAngle(Z_Param_SteerAngle,Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleWheeledVehicleMovementComponent::execSetDriveTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DriveTorque);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDriveTorque(Z_Param_DriveTorque,Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleWheeledVehicleMovementComponent::execSetBrakeTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeTorque);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakeTorque(Z_Param_BrakeTorque,Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	void USimpleWheeledVehicleMovementComponent::StaticRegisterNativesUSimpleWheeledVehicleMovementComponent()
	{
		UClass* Class = USimpleWheeledVehicleMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBrakeTorque", &USimpleWheeledVehicleMovementComponent::execSetBrakeTorque },
			{ "SetDriveTorque", &USimpleWheeledVehicleMovementComponent::execSetDriveTorque },
			{ "SetSteerAngle", &USimpleWheeledVehicleMovementComponent::execSetSteerAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics
	{
		struct SimpleWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms
		{
			float BrakeTorque;
			int32 WheelIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms, BrakeTorque), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_BrakeTorque,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "/**Set the brake torque to be applied to a specific wheel*/" },
		{ "ModuleRelativePath", "Public/SimpleWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the brake torque to be applied to a specific wheel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleWheeledVehicleMovementComponent, nullptr, "SetBrakeTorque", nullptr, nullptr, sizeof(SimpleWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms), Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics
	{
		struct SimpleWheeledVehicleMovementComponent_eventSetDriveTorque_Parms
		{
			float DriveTorque;
			int32 WheelIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DriveTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleWheeledVehicleMovementComponent_eventSetDriveTorque_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_DriveTorque = { "DriveTorque", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleWheeledVehicleMovementComponent_eventSetDriveTorque_Parms, DriveTorque), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_DriveTorque,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "/**Set the drive torque to be applied to a specific wheel*/" },
		{ "ModuleRelativePath", "Public/SimpleWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the drive torque to be applied to a specific wheel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleWheeledVehicleMovementComponent, nullptr, "SetDriveTorque", nullptr, nullptr, sizeof(SimpleWheeledVehicleMovementComponent_eventSetDriveTorque_Parms), Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics
	{
		struct SimpleWheeledVehicleMovementComponent_eventSetSteerAngle_Parms
		{
			float SteerAngle;
			int32 WheelIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteerAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleWheeledVehicleMovementComponent_eventSetSteerAngle_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::NewProp_SteerAngle = { "SteerAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleWheeledVehicleMovementComponent_eventSetSteerAngle_Parms, SteerAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::NewProp_SteerAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "/**Set the steer angle (in degrees) to be applied to a specific wheel*/" },
		{ "ModuleRelativePath", "Public/SimpleWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set the steer angle (in degrees) to be applied to a specific wheel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleWheeledVehicleMovementComponent, nullptr, "SetSteerAngle", nullptr, nullptr, sizeof(SimpleWheeledVehicleMovementComponent_eventSetSteerAngle_Parms), Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_NoRegister()
	{
		return USimpleWheeledVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWheeledVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetBrakeTorque, "SetBrakeTorque" }, // 4224774026
		{ &Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetDriveTorque, "SetDriveTorque" }, // 183425756
		{ &Z_Construct_UFunction_USimpleWheeledVehicleMovementComponent_SetSteerAngle, "SetSteerAngle" }, // 1625118808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "SimpleWheeledVehicleMovementComponent.h" },
		{ "ModuleRelativePath", "Public/SimpleWheeledVehicleMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleWheeledVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::ClassParams = {
		&USimpleWheeledVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleWheeledVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleWheeledVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleWheeledVehicleMovementComponent, 1533238957);
	template<> PHYSXVEHICLES_API UClass* StaticClass<USimpleWheeledVehicleMovementComponent>()
	{
		return USimpleWheeledVehicleMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleWheeledVehicleMovementComponent(Z_Construct_UClass_USimpleWheeledVehicleMovementComponent, &USimpleWheeledVehicleMovementComponent::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("USimpleWheeledVehicleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleWheeledVehicleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
