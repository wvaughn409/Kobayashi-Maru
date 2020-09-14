// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeCommon/Public/ClothConfig_Legacy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfig_Legacy() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy();
// End Cross Module References
	static UEnum* EClothingWindMethod_Legacy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EClothingWindMethod_Legacy"));
		}
		return Singleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothingWindMethod_Legacy>()
	{
		return EClothingWindMethod_Legacy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClothingWindMethod_Legacy(EClothingWindMethod_Legacy_StaticEnum, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("EClothingWindMethod_Legacy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Hash() { return 428330781U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClothingWindMethod_Legacy"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClothingWindMethod_Legacy::Legacy", (int64)EClothingWindMethod_Legacy::Legacy },
				{ "EClothingWindMethod_Legacy::Accurate", (int64)EClothingWindMethod_Legacy::Accurate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accurate.Comment", "// Use updated wind calculation for NvCloth based solved taking into account\n// drag and lift, this will require those properties to be correctly set in\n// the clothing configuration\n" },
				{ "Accurate.Name", "EClothingWindMethod_Legacy::Accurate" },
				{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
				{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use EClothingWindMethodNv instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
				{ "Legacy.Comment", "// Use legacy wind mode, where accelerations are modified directly by the simulation\n// with no regard for drag or lift\n" },
				{ "Legacy.Name", "EClothingWindMethod_Legacy::Legacy" },
				{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
				{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
				{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse EClothingWindMethodNv instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
				nullptr,
				"EClothingWindMethod_Legacy",
				"EClothingWindMethod_Legacy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FClothConfig_Legacy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMECOMMON_API uint32 Get_Z_Construct_UScriptStruct_FClothConfig_Legacy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig_Legacy, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothConfig_Legacy"), sizeof(FClothConfig_Legacy), Get_Z_Construct_UScriptStruct_FClothConfig_Legacy_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothConfig_Legacy>()
{
	return FClothConfig_Legacy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConfig_Legacy(FClothConfig_Legacy::StaticStruct, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("ClothConfig_Legacy"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothConfig_Legacy
{
	FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothConfig_Legacy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConfig_Legacy")),new UScriptStruct::TCppStructOps<FClothConfig_Legacy>);
	}
} ScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothConfig_Legacy;
	struct Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveDamperStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveDamperStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveSpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentrifugalInertiaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CentrifugalInertiaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularInertiaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularInertiaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearInertiaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearInertiaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDrag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDrag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindLiftCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindLiftCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindDragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionCullScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionCullScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShearConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShearConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BendConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Inherit new config class from UClothConfigCommon instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nInherit new config class from UClothConfigCommon instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConfig_Legacy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Comment", "// Default damper stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, AnimDriveDamperStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, AnimDriveSpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Comment", "// 'Thickness' of the simulated cloth, used to adjust collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, CollisionThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "Comment", "// Scale for the limit of particle tethers (how far they can separate)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, TetherLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Comment", "// Scale for stiffness of particle tethers between each other\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, TetherStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Comment", "// Use gravity override value vs gravity scale \n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((FClothConfig_Legacy*)Obj)->bUseGravityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClothConfig_Legacy), &Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "Comment", "// Direct gravity override value\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Comment", "// Scale of gravity effect on particles\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "Comment", "// Frequency for stiffness calculations, lower values will degrade stiffness of constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Comment", "// Frequency of the position solver, lower values will lead to stretchier, bouncier cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag_MetaData[] = {
		{ "Comment", "// Drag applied to angular particle movement, higher values should limit material bending (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag_MetaData[] = {
		{ "Comment", "// Drag applied to linear particle movement per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Comment", "// Lift coefficient for wind calculations, higher values make cloth rise easier in wind\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, WindLiftCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient_MetaData[] = {
		{ "Comment", "// Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, WindDragCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction_MetaData[] = {
		{ "Comment", "// Friction of the surface when colliding\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping_MetaData[] = {
		{ "Comment", "// Damping of particle motion per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionCullScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Comment", "// Stiffness of the spring force that will resolve self collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Comment", "// Size of self collision spheres centered on each vert\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for shear constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, ShearConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for bend constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, BendConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for horizontal constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, HorizontalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for vertical constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, VerticalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_MetaData[] = {
		{ "Comment", "// How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig_Legacy, WindMethod), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothConfig_Legacy",
		sizeof(FClothConfig_Legacy),
		alignof(FClothConfig_Legacy),
		Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConfig_Legacy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConfig_Legacy"), sizeof(FClothConfig_Legacy), Get_Z_Construct_UScriptStruct_FClothConfig_Legacy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConfig_Legacy_Hash() { return 1337993853U; }
class UScriptStruct* FClothConstraintSetup_Legacy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMECOMMON_API uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothConstraintSetup_Legacy"), sizeof(FClothConstraintSetup_Legacy), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothConstraintSetup_Legacy>()
{
	return FClothConstraintSetup_Legacy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConstraintSetup_Legacy(FClothConstraintSetup_Legacy::StaticStruct, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("ClothConstraintSetup_Legacy"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothConstraintSetup_Legacy
{
	FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothConstraintSetup_Legacy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConstraintSetup_Legacy")),new UScriptStruct::TCppStructOps<FClothConstraintSetup_Legacy>);
	}
} ScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothConstraintSetup_Legacy;
	struct Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use FClothConstraintSetupNv instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse FClothConstraintSetupNv instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetup_Legacy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit_MetaData[] = {
		{ "Comment", "// The hard limit on how far this constraint can compress\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "The hard limit on how far this constraint can compress" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, CompressionLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Comment", "// The hard limit on how far this constraint can stretch\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "The hard limit on how far this constraint can stretch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Comment", "// A multiplier affecting the above value\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, StiffnessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Comment", "// How stiff this constraint is, this affects how closely it will follow the desired position\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothConstraintSetup_Legacy",
		sizeof(FClothConstraintSetup_Legacy),
		alignof(FClothConstraintSetup_Legacy),
		Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConstraintSetup_Legacy"), sizeof(FClothConstraintSetup_Legacy), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Hash() { return 3978701318U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
