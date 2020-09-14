// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/StaticMeshSimulationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshSimulationComponent() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UStaticMeshSimulationComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UStaticMeshSimulationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectStateTypeEnum();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStaticMeshSimulationComponent::execForceRecreatePhysicsState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceRecreatePhysicsState();
		P_NATIVE_END;
	}
	static FName NAME_UStaticMeshSimulationComponent_ReceivePhysicsCollision = FName(TEXT("ReceivePhysicsCollision"));
	void UStaticMeshSimulationComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo const& CollisionInfo)
	{
		StaticMeshSimulationComponent_eventReceivePhysicsCollision_Parms Parms;
		Parms.CollisionInfo=CollisionInfo;
		ProcessEvent(FindFunctionChecked(NAME_UStaticMeshSimulationComponent_ReceivePhysicsCollision),&Parms);
	}
	void UStaticMeshSimulationComponent::StaticRegisterNativesUStaticMeshSimulationComponent()
	{
		UClass* Class = UStaticMeshSimulationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceRecreatePhysicsState", &UStaticMeshSimulationComponent::execForceRecreatePhysicsState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future break notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future break notifications." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshSimulationComponent, nullptr, "ForceRecreatePhysicsState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshSimulationComponent_eventReceivePhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Physics Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshSimulationComponent, nullptr, "ReceivePhysicsCollision", nullptr, nullptr, sizeof(StaticMeshSimulationComponent_eventReceivePhysicsCollision_Parms), Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMeshSimulationComponent_NoRegister()
	{
		return UStaticMeshSimulationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshSimulationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulatedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulatedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChaosPhysicsCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosPhysicsCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Simulating_MetaData[];
#endif
		static void NewProp_Simulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Simulating;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshSimulationComponent_ForceRecreatePhysicsState, "ForceRecreatePhysicsState" }, // 2116008862
		{ &Z_Construct_UFunction_UStaticMeshSimulationComponent_ReceivePhysicsCollision, "ReceivePhysicsCollision" }, // 4221336920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n*\x09UStaticMeshSimulationComponent\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "UStaticMeshSimulationComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents_MetaData[] = {
		{ "Comment", "/** List of component for which this simulation component created a physics object. Parallel array to PhysicsProxy, so PhysicsProxies[i] corresponds to SimulatedComponents[i] */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "List of component for which this simulation component created a physics object. Parallel array to PhysicsProxy, so PhysicsProxies[i] corresponds to SimulatedComponents[i]" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents = { "SimulatedComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, SimulatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents_Inner = { "SimulatedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision = { "OnChaosPhysicsCollision", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, OnChaosPhysicsCollision), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Chaos RBD Solver */" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Chaos RBD Solver" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Physical Properties\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Physical Properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, PhysicalMaterial), Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Damage threshold for clusters. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Damage threshold for clusters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, DamageThreshold), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, InitialVelocityType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** CollisionType defines how to initialize the rigid collision structures.  */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, ImplicitType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** CollisionType defines how to initialize the rigid collision structures.  */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, CollisionType), Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** Mass in Kg */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Mass in Kg" },
		{ "Units", "kg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, Mass), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** ObjectType defines how to initialize the rigid collision structures. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "ObjectType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, ObjectType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectStateTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If true, this component will get collision notification events (@see IChaosNotifyHandlerInterface) */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "If true, this component will get collision notification events (@see IChaosNotifyHandlerInterface)" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_SetBit(void* Obj)
	{
		((UStaticMeshSimulationComponent*)Obj)->bNotifyCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions = { "bNotifyCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMeshSimulationComponent), &Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** When Simulating is enabled the Component will initialize its rigid bodies within the solver. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "When Simulating is enabled the Component will initialize its rigid bodies within the solver." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_SetBit(void* Obj)
	{
		((UStaticMeshSimulationComponent*)Obj)->Simulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating = { "Simulating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMeshSimulationComponent), &Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_SimulatedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_OnChaosPhysicsCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_PhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MaxLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_MinLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ImplicitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_bNotifyCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshSimulationComponent, IChaosNotifyHandlerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshSimulationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::ClassParams = {
		&UStaticMeshSimulationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshSimulationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshSimulationComponent, 3717948382);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UStaticMeshSimulationComponent>()
	{
		return UStaticMeshSimulationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshSimulationComponent(Z_Construct_UClass_UStaticMeshSimulationComponent, &UStaticMeshSimulationComponent::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UStaticMeshSimulationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshSimulationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
