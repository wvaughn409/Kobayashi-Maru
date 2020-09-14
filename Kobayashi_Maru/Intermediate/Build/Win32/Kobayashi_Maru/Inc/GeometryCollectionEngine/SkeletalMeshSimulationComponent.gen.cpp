// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/SkeletalMeshSimulationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSimulationComponent() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSimulationComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSimulationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
	CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectStateTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
// End Cross Module References
	static FName NAME_USkeletalMeshSimulationComponent_ReceivePhysicsCollision = FName(TEXT("ReceivePhysicsCollision"));
	void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo const& CollisionInfo)
	{
		SkeletalMeshSimulationComponent_eventReceivePhysicsCollision_Parms Parms;
		Parms.CollisionInfo=CollisionInfo;
		ProcessEvent(FindFunctionChecked(NAME_USkeletalMeshSimulationComponent_ReceivePhysicsCollision),&Parms);
	}
	void USkeletalMeshSimulationComponent::StaticRegisterNativesUSkeletalMeshSimulationComponent()
	{
	}
	struct Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMeshSimulationComponent_eventReceivePhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Physics Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSimulationComponent, nullptr, "ReceivePhysicsCollision", nullptr, nullptr, sizeof(SkeletalMeshSimulationComponent_eventReceivePhysicsCollision_Parms), Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkeletalMeshSimulationComponent_NoRegister()
	{
		return USkeletalMeshSimulationComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChaosPhysicsCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosPhysicsCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialVelocityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialVelocityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitShapeMaxNumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ImplicitShapeMaxNumParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitShapeMinNumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ImplicitShapeMinNumParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitShapeParticlesPerUnitArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImplicitShapeParticlesPerUnitArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyCollisions_MetaData[];
#endif
		static void NewProp_bNotifyCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulating_MetaData[];
#endif
		static void NewProp_bSimulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridePhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshSimulationComponent_ReceivePhysicsCollision, "ReceivePhysicsCollision" }, // 359526773
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n*\x09USkeletalMeshSimulationComponent\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "USkeletalMeshSimulationComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision = { "OnChaosPhysicsCollision", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, OnChaosPhysicsCollision), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** Initial angular velocity. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Initial angular velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** Initial linear velocity. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Initial linear velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** Where to pull initial velocity from - user defined or animation. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Where to pull initial velocity from - user defined or animation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, InitialVelocityType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Collision group - 0 = collides with all, -1 = none */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Collision group - 0 = collides with all, -1 = none" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, CollisionGroup), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Resolution on the smallest axes for the level set. (def: 10) */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Resolution on the smallest axes for the level set. (def: 5) */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMaxNumParticles_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Maximum number of particles for each implicit shape. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Maximum number of particles for each implicit shape." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMaxNumParticles = { "ImplicitShapeMaxNumParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, ImplicitShapeMaxNumParticles), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMaxNumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMaxNumParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMinNumParticles_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Minimum number of particles for each implicit shape. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Minimum number of particles for each implicit shape." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMinNumParticles = { "ImplicitShapeMinNumParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, ImplicitShapeMinNumParticles), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMinNumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMinNumParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeParticlesPerUnitArea_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Number of particles to generate per unit area (square cm). 0.1 would generate 1 collision particle per 10 cm^2. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Number of particles to generate per unit area (square cm). 0.1 would generate 1 collision particle per 10 cm^2." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeParticlesPerUnitArea = { "ImplicitShapeParticlesPerUnitArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, ImplicitShapeParticlesPerUnitArea), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeParticlesPerUnitArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeParticlesPerUnitArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** CollisionType defines how to initialize the rigid collision structures.  */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, CollisionType), Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxMass_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxMass = { "MaxMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, MaxMass), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, MinMass), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** Density / mass. \n\x09 *\n\x09 * Common densities in g/cm^3:\n\x09 *     gold: 19.3\n\x09 *     lead: 11.3\n\x09 *     copper: 8.3 - 9.0\n\x09 *     steel: 8.03\n\x09 *     iron: 7.8\n\x09 *     aluminium: 2.7\n\x09 *     glass: 2.4 - 2.8\n\x09 *     brick: 1.4 - 2.4\n\x09 *     concrete: 0.45 - 2.4\n\x09 *     bone: 1.7 - 2.0\n\x09 *     muscle: 1.06\n\x09 *     water: 1.0\n\x09 *     fat: 0.9196\n\x09 *     gasoline: 0.7\n\x09 *     wood: 0.67\n\x09 *     tree bark: 0.24\n\x09 *     air: 0.001293\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Density / mass.\n\nCommon densities in g/cm^3:\n   gold: 19.3\n   lead: 11.3\n   copper: 8.3 - 9.0\n   steel: 8.03\n   iron: 7.8\n   aluminium: 2.7\n   glass: 2.4 - 2.8\n   brick: 1.4 - 2.4\n   concrete: 0.45 - 2.4\n   bone: 1.7 - 2.0\n   muscle: 1.06\n   water: 1.0\n   fat: 0.9196\n   gasoline: 0.7\n   wood: 0.67\n   tree bark: 0.24\n   air: 0.001293" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, Density), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** ObjectType defines how to initialize the rigid collision structures. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "ObjectType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, ObjectType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectStateTypeEnum, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If true, this component will get collision notification events (@see IChaosNotifyHandlerInterface) */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "If true, this component will get collision notification events (@see IChaosNotifyHandlerInterface)" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_SetBit(void* Obj)
	{
		((USkeletalMeshSimulationComponent*)Obj)->bNotifyCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions = { "bNotifyCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkeletalMeshSimulationComponent), &Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** When Simulating is enabled the Component will initialize its rigid bodies within the solver. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "When Simulating is enabled the Component will initialize its rigid bodies within the solver." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating_SetBit(void* Obj)
	{
		((USkeletalMeshSimulationComponent*)Obj)->bSimulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating = { "bSimulating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkeletalMeshSimulationComponent), &Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OverridePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OverridePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Chaos RBD Solver */" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "ToolTip", "Chaos RBD Solver" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Physical Properties */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/SkeletalMeshSimulationComponent.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Physical Properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimulationComponent, PhysicalMaterial), Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_PhysicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_InitialVelocityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMaxNumParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeMinNumParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ImplicitShapeParticlesPerUnitArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MaxMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bNotifyCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_bSimulating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_OverridePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_ChaosSolverActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::NewProp_PhysicalMaterial,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshSimulationComponent, IChaosNotifyHandlerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshSimulationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::ClassParams = {
		&USkeletalMeshSimulationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshSimulationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshSimulationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshSimulationComponent, 2513200871);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<USkeletalMeshSimulationComponent>()
	{
		return USkeletalMeshSimulationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshSimulationComponent(Z_Construct_UClass_USkeletalMeshSimulationComponent, &USkeletalMeshSimulationComponent::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("USkeletalMeshSimulationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSimulationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
