// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FlockCrowdFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockCrowdFollowingComponent() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UFlockCrowdFollowingComponent_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFlockCrowdFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UFlockCrowdFollowingComponent::StaticRegisterNativesUFlockCrowdFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UFlockCrowdFollowingComponent_NoRegister()
	{
		return UFlockCrowdFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TerrainRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAngleDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredAngleDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCrowdFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlockCrowdFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DeltaPosition_MetaData[] = {
		{ "Category", "Path Following" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DeltaPosition = { "DeltaPosition", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, DeltaPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DeltaPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DeltaPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_SpeedLimit_MetaData[] = {
		{ "Category", "Path Following" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_SpeedLimit = { "SpeedLimit", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, SpeedLimit), METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_SpeedLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_SpeedLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_TerrainRotation_MetaData[] = {
		{ "Category", "Path Following" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_TerrainRotation = { "TerrainRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, TerrainRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_TerrainRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_TerrainRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_YawDelta_MetaData[] = {
		{ "Category", "Path Following" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, YawDelta), METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_YawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_YawDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RequestedVelocity_MetaData[] = {
		{ "Category", "Path Following" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RequestedVelocity = { "RequestedVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RequestedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RequestedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DesiredAngleDelta_MetaData[] = {
		{ "Category", "Path Following" },
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DesiredAngleDelta = { "DesiredAngleDelta", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, DesiredAngleDelta), METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DesiredAngleDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DesiredAngleDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlockCrowdFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockCrowdFollowingComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RotationSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DeltaPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_SpeedLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_TerrainRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_YawDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RequestedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_DesiredAngleDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::NewProp_RotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlockCrowdFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::ClassParams = {
		&UFlockCrowdFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlockCrowdFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlockCrowdFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlockCrowdFollowingComponent, 2106877322);
	template<> COMPLETERPG_API UClass* StaticClass<UFlockCrowdFollowingComponent>()
	{
		return UFlockCrowdFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlockCrowdFollowingComponent(Z_Construct_UClass_UFlockCrowdFollowingComponent, &UFlockCrowdFollowingComponent::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UFlockCrowdFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlockCrowdFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
