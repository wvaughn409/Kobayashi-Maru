// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosPhysicalMaterial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UChaosPhysicalMaterial::StaticRegisterNativesUChaosPhysicalMaterial()
	{
	}
	UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister()
	{
		return UChaosPhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UChaosPhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingAngularVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepingAngularVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingLinearVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepingLinearVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularEtherDrag_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularEtherDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearEtherDrag_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearEtherDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Restitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosPhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical materials are used to define the response of a physical object when \n * interacting dynamically with the world.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Physical materials are used to define the response of a physical object when\ninteracting dynamically with the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to scale the damage threshold by on any destructible we are applied to */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold = { "SleepingAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, SleepingAngularVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to scale the damage threshold by on any destructible we are applied to */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold = { "SleepingLinearVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, SleepingLinearVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Uniform angular ether drag, the resistance a body experiences to its rotation. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Uniform angular ether drag, the resistance a body experiences to its rotation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag = { "AngularEtherDrag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, AngularEtherDrag), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Uniform linear ether drag, the resistance a body experiences to its translation. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Uniform linear ether drag, the resistance a body experiences to its translation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag = { "LinearEtherDrag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, LinearEtherDrag), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming). */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, Restitution), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction value of surface at rest, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Friction value of surface at rest, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, StaticFriction), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction value of a surface in motion, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/Experimental/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Friction value of a surface in motion, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosPhysicalMaterial, Friction), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosPhysicalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosPhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosPhysicalMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::ClassParams = {
		&UChaosPhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosPhysicalMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosPhysicalMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosPhysicalMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosPhysicalMaterial, 4094369385);
	template<> ENGINE_API UClass* StaticClass<UChaosPhysicalMaterial>()
	{
		return UChaosPhysicalMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosPhysicalMaterial(Z_Construct_UClass_UChaosPhysicalMaterial, &UChaosPhysicalMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UChaosPhysicalMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosPhysicalMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
