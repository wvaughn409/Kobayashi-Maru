// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/ChaosCloth/ChaosClothConfig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothConfig() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothConfig_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothConfig();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClothMassMode();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothSharedSimConfig_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothSharedSimConfig();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon();
// End Cross Module References
	void UChaosClothConfig::StaticRegisterNativesUChaosClothConfig()
	{
	}
	UClass* Z_Construct_UClass_UChaosClothConfig_NoRegister()
	{
		return UChaosClothConfig::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseContinuousCollisionDetection_MetaData[];
#endif
		static void NewProp_bUseContinuousCollisionDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseContinuousCollisionDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelfCollisions_MetaData[];
#endif
		static void NewProp_bUseSelfCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelfCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseThinShellVolumeConstraints_MetaData[];
#endif
		static void NewProp_bUseThinShellVolumeConstraints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseThinShellVolumeConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTetrahedralConstraints_MetaData[];
#endif
		static void NewProp_bUseTetrahedralConstraints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTetrahedralConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBendingElements_MetaData[];
#endif
		static void NewProp_bUseBendingElements_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBendingElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveSpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeTargetStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShapeTargetStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGeodesicDistance_MetaData[];
#endif
		static void NewProp_bUseGeodesicDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGeodesicDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrainLimitingStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrainLimitingStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AreaStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendingStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BendingStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgeStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPerParticleMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPerParticleMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UniformMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MassMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MassMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Holds initial, asset level config for clothing actors. */// Hiding categories that will be used in the future\n" },
		{ "HideCategories", "Collision" },
		{ "IncludePath", "ChaosCloth/ChaosClothConfig.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Holds initial, asset level config for clothing actors. // Hiding categories that will be used in the future" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale_MetaData[] = {
		{ "Category", "Velocity Scales" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of angular velocities sent to the local cloth space from the reference bone\n// (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of angular velocities sent to the local cloth space from the reference bone\n(the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, AngularVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale_MetaData[] = {
		{ "Category", "Velocity Scales" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of linear velocities sent to the local cloth space from the reference bone\n// (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of linear velocities sent to the local cloth space from the reference bone\n(the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, LinearVelocityScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_MetaData[] = {
		{ "Comment", "// Enable continuous collision detection.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable continuous collision detection." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseContinuousCollisionDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection = { "bUseContinuousCollisionDetection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_MetaData[] = {
		{ "Category", "Cloth Enable Flags" },
		{ "Comment", "// Enable self collision.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable self collision." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseSelfCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions = { "bUseSelfCollisions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_MetaData[] = {
		{ "Comment", "// Enable thin shell volume constraints.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable thin shell volume constraints." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseThinShellVolumeConstraints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints = { "bUseThinShellVolumeConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_MetaData[] = {
		{ "Comment", "// Enable tetrahedral constraints.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable tetrahedral constraints." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseTetrahedralConstraints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints = { "bUseTetrahedralConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_MetaData[] = {
		{ "Category", "Cloth Enable Flags" },
		{ "Comment", "// Enable the more accurate bending element constraints instead of the faster cross-edge spring constraints used for controlling bending stiffness.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable the more accurate bending element constraints instead of the faster cross-edge spring constraints used for controlling bending stiffness." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseBendingElements = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements = { "bUseBendingElements", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, AnimDriveSpringStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "Cloth Dynamics" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// The drag coefficient applying on each particle.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The drag coefficient applying on each particle." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, DragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient_MetaData[] = {
		{ "Category", "Cloth Dynamics" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of damping applied to the cloth velocities.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of damping applied to the cloth velocities." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient = { "DampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, DampingCoefficient), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient_MetaData[] = {
		{ "Category", "Cloth Dynamics" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// Friction coefficient for cloth - collider interaction.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Friction coefficient for cloth - collider interaction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient = { "FrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, FrictionCoefficient), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Cloth Dynamics" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "// The radius of cloth points when considering collisions against collider shapes.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The radius of cloth points when considering collisions against collider shapes." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness_MetaData[] = {
		{ "Comment", "// The stiffness of the shape target constraints\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the shape target constraints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness = { "ShapeTargetStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, ShapeTargetStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_MetaData[] = {
		{ "Category", "Long Range Attachment" },
		{ "Comment", "// Use geodesic instead of euclidean distance calculations in the long range attachment constraint,\n// which is slower at setup but less prone to artifacts during simulation.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use geodesic instead of euclidean distance calculations in the long range attachment constraint,\nwhich is slower at setup but less prone to artifacts during simulation." },
	};
#endif
	void Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_SetBit(void* Obj)
	{
		((UChaosClothConfig*)Obj)->bUseGeodesicDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance = { "bUseGeodesicDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothConfig), &Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale_MetaData[] = {
		{ "Category", "Long Range Attachment" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.01" },
		{ "Comment", "// The limit scale of the long range attachment constraints (aka tether limit).\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The limit scale of the long range attachment constraints (aka tether limit)." },
		{ "UIMax", "1.1" },
		{ "UIMin", "1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale = { "LimitScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, LimitScale), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness_MetaData[] = {
		{ "Category", "Long Range Attachment" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The strain limiting stiffness of the long range attachment constraints (aka tether stiffness).\n// The long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint.\n// This can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons.\n// Can lead to an unnatural pull string puppet like behavior. Use 0 to disable. \n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The strain limiting stiffness of the long range attachment constraints (aka tether stiffness).\nThe long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint.\nThis can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons.\nCan lead to an unnatural pull string puppet like behavior. Use 0 to disable." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness = { "StrainLimitingStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, StrainLimitingStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness_MetaData[] = {
		{ "Comment", "// The stiffness of the volume preservation constraints.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the volume preservation constraints." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness = { "VolumeStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, VolumeStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The stiffness of the area preservation constraints. Increase the iteration count for stiffer materials.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The stiffness of the area preservation constraints. Increase the iteration count for stiffer materials." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness = { "AreaStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, AreaStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The Stiffness of the bending constraints. Increase the iteration count for stiffer materials.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The Stiffness of the bending constraints. Increase the iteration count for stiffer materials." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness = { "BendingStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, BendingStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The Stiffness of the Edge constraints, only use lower than 1 values for very stretchy materials. Increase the iteration count for stiffer materials.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The Stiffness of the Edge constraints, only use lower than 1 values for very stretchy materials. Increase the iteration count for stiffer materials." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness = { "EdgeStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, EdgeStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass_MetaData[] = {
		{ "Category", "Mass Config" },
		{ "Comment", "// This is a lower bound to cloth particle masses.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "This is a lower bound to cloth particle masses." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass = { "MinPerParticleMass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, MinPerParticleMass), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Mass Config" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The value used when Mass Mode is set to Density.\n\x09 * Melton Wool: 0.7\n\x09 * Heavy leather: 0.6\n\x09 * Polyurethane: 0.5\n\x09 * Denim: 0.4\n\x09 * Light leather: 0.3\n\x09 * Cotton: 0.2\n\x09 * Silk: 0.1\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The value used when Mass Mode is set to Density.\nMelton Wool: 0.7\nHeavy leather: 0.6\nPolyurethane: 0.5\nDenim: 0.4\nLight leather: 0.3\nCotton: 0.2\nSilk: 0.1" },
		{ "UIMax", "1" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, Density), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Category", "Mass Config" },
		{ "ClampMin", "0" },
		{ "Comment", "// The value used when Mass Mode is set to TotalMass\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The value used when Mass Mode is set to TotalMass" },
		{ "UIMax", "10" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, TotalMass), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass_MetaData[] = {
		{ "Category", "Mass Config" },
		{ "ClampMin", "0" },
		{ "Comment", "// The value used when the Mass Mode is set to Uniform Mass\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The value used when the Mass Mode is set to Uniform Mass" },
		{ "UIMax", "0.001" },
		{ "UIMin", "0.000001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass = { "UniformMass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, UniformMass), METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_MetaData[] = {
		{ "Category", "Mass Config" },
		{ "Comment", "/**\n\x09 * How cloth particle mass is determined\n\x09 * -\x09Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations.\n\x09 * -\x09Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel.\n\x09 * -\x09""Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "How cloth particle mass is determined\n-    Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations.\n-    Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel.\n-    Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode = { "MassMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothConfig, MassMode), Z_Construct_UEnum_Engine_EClothMassMode, METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AngularVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LinearVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseContinuousCollisionDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseSelfCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseThinShellVolumeConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseTetrahedralConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseBendingElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AnimDriveSpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_DampingCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_FrictionCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_ShapeTargetStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_bUseGeodesicDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_LimitScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_StrainLimitingStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_VolumeStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_AreaStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_BendingStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_EdgeStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MinPerParticleMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_TotalMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_UniformMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothConfig_Statics::NewProp_MassMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothConfig_Statics::ClassParams = {
		&UChaosClothConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosClothConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosClothConfig, 2051681548);
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothConfig>()
	{
		return UChaosClothConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosClothConfig(Z_Construct_UClass_UChaosClothConfig, &UChaosClothConfig::StaticClass, TEXT("/Script/ChaosCloth"), TEXT("UChaosClothConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothConfig)
	void UChaosClothSharedSimConfig::StaticRegisterNativesUChaosClothSharedSimConfig()
	{
	}
	UClass* Z_Construct_UClass_UChaosClothSharedSimConfig_NoRegister()
	{
		return UChaosClothSharedSimConfig::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothSharedSimConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseXPBDConstraints_MetaData[];
#endif
		static void NewProp_bUseXPBDConstraints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseXPBDConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpaceSimulation_MetaData[];
#endif
		static void NewProp_bUseLocalSpaceSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpaceSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDampingOverride_MetaData[];
#endif
		static void NewProp_bUseDampingOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDampingOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubdivisionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubdivisionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IterationCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothSharedConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Chaos config settings shared between all instances of a skeletal mesh.\n * Unlike UChaosClothConfig, these settings contain common cloth simulation\n * parameters that cannot change between the various clothing assets assigned\n * to a specific skeletal mesh. @seealso UChaosClothConfig.\n */" },
		{ "IncludePath", "ChaosCloth/ChaosClothConfig.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Chaos config settings shared between all instances of a skeletal mesh.\nUnlike UChaosClothConfig, these settings contain common cloth simulation\nparameters that cannot change between the various clothing assets assigned\nto a specific skeletal mesh. @seealso UChaosClothConfig." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_MetaData[] = {
		{ "Comment", "// Enable the XPBD constraints that resolve stiffness independently from the number of iterations\n// Experimental, this feature might be removed without warning, not for production use\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable the XPBD constraints that resolve stiffness independently from the number of iterations\nExperimental, this feature might be removed without warning, not for production use" },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseXPBDConstraints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints = { "bUseXPBDConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "// Enable local space simulation to help with floating point precision errors if the character is far away form the world origin\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Enable local space simulation to help with floating point precision errors if the character is far away form the world origin" },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseLocalSpaceSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation = { "bUseLocalSpaceSimulation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "// The gravitational acceleration vector [cm/s^2]\n" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The gravitational acceleration vector [cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "// Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, GravityScale), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "// Use the config gravity value instead of world gravity.\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use the config gravity value instead of world gravity." },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseGravityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping_MetaData[] = {
		{ "Comment", "// The amount of cloth damping. Override the per cloth damping coefficients.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The amount of cloth damping. Override the per cloth damping coefficients." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, Damping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_MetaData[] = {
		{ "Comment", "// Use shared config damping rather than per cloth damping.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "Use shared config damping rather than per cloth damping." },
	};
#endif
	void Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_SetBit(void* Obj)
	{
		((UChaosClothSharedSimConfig*)Obj)->bUseDampingOverride_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride = { "bUseDampingOverride", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosClothSharedSimConfig), &Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Comment", "// The radius of cloth points when considering collisions against collider shapes.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The radius of cloth points when considering collisions against collider shapes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, CollisionThickness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "// The radius of the spheres used in self collision \n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The radius of the spheres used in self collision" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, SelfCollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// The number of solver substeps.\n// This will increase the precision of the collision inputs and help with constraint resolutions but will increase the CPU cost.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The number of solver substeps.\nThis will increase the precision of the collision inputs and help with constraint resolutions but will increase the CPU cost." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount = { "SubdivisionCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, SubdivisionCount), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// The number of solver iterations.\n// This will increase the stiffness of all constraints but will increase the CPU cost.\n" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothConfig.h" },
		{ "ToolTip", "The number of solver iterations.\nThis will increase the stiffness of all constraints but will increase the CPU cost." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount = { "IterationCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosClothSharedSimConfig, IterationCount), METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseXPBDConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseLocalSpaceSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseGravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_bUseDampingOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SelfCollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_SubdivisionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::NewProp_IterationCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothSharedSimConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::ClassParams = {
		&UChaosClothSharedSimConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothSharedSimConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosClothSharedSimConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosClothSharedSimConfig, 2201087892);
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothSharedSimConfig>()
	{
		return UChaosClothSharedSimConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosClothSharedSimConfig(Z_Construct_UClass_UChaosClothSharedSimConfig, &UChaosClothSharedSimConfig::StaticClass, TEXT("/Script/ChaosCloth"), TEXT("UChaosClothSharedSimConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothSharedSimConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothSharedSimConfig)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
