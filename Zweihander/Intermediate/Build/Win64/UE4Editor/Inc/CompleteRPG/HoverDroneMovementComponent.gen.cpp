// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/HoverDroneMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneMovementComponent() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UHoverDroneMovementComponent::StaticRegisterNativesUHoverDroneMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister()
	{
		return UHoverDroneMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoverDroneMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboAccelerationAltitudeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurboAccelerationAltitudeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboAccelerationRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurboAccelerationRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboMaxYawRotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboMaxYawRotSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboMaxPitchRotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboMaxPitchRotSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboRotDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboRotDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboRotAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboRotAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxYawRotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxYawRotSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPitchRotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPitchRotSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoverDroneMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoverDroneMovementComponent.h" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboDeceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Linear deceleration while in turbo mode. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Linear deceleration while in turbo mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboDeceleration = { "TurboDeceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboDeceleration), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationAltitudeRange_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Used to map Altitude to Acceleration (using TurboAccelerationRange) */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Used to map Altitude to Acceleration (using TurboAccelerationRange)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationAltitudeRange = { "TurboAccelerationAltitudeRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboAccelerationAltitudeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationAltitudeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationAltitudeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationRange_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Range of valid accelerations (mapped to TurboAccelerationAltitudeRange) */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Range of valid accelerations (mapped to TurboAccelerationAltitudeRange)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationRange = { "TurboAccelerationRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboAccelerationRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxYawRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Maximum rotational speed, yaw, while in turbo mode. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Maximum rotational speed, yaw, while in turbo mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxYawRotSpeed = { "TurboMaxYawRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboMaxYawRotSpeed), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxYawRotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxYawRotSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxPitchRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Maximum rotational speed, pitch, while in turbo mode. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Maximum rotational speed, pitch, while in turbo mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxPitchRotSpeed = { "TurboMaxPitchRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboMaxPitchRotSpeed), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxPitchRotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxPitchRotSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotDeceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Rotational deceleration when not turning, while in turbo mode. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Rotational deceleration when not turning, while in turbo mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotDeceleration = { "TurboRotDeceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboRotDeceleration), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotAcceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Rotational acceleration when turning, while in turbo mode. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Rotational acceleration when turning, while in turbo mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotAcceleration = { "TurboRotAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, TurboRotAcceleration), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Maximum rotational speed, yaw */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Maximum rotational speed, yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed = { "MaxYawRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxYawRotSpeed), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Maximum rotational speed, pitch */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Maximum rotational speed, pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed = { "MaxPitchRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxPitchRotSpeed), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Rotational deceleration when not turning. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Rotational deceleration when not turning." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration = { "RotDeceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, RotDeceleration), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "Comment", "/** Rotational acceleration when turning. */" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ToolTip", "Rotational acceleration when turning." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration = { "RotAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, RotAcceleration), METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationAltitudeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboAccelerationRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxYawRotSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboMaxPitchRotSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_TurboRotAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoverDroneMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoverDroneMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::ClassParams = {
		&UHoverDroneMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoverDroneMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoverDroneMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoverDroneMovementComponent, 2364570814);
	template<> COMPLETERPG_API UClass* StaticClass<UHoverDroneMovementComponent>()
	{
		return UHoverDroneMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoverDroneMovementComponent(Z_Construct_UClass_UHoverDroneMovementComponent, &UHoverDroneMovementComponent::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UHoverDroneMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoverDroneMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
