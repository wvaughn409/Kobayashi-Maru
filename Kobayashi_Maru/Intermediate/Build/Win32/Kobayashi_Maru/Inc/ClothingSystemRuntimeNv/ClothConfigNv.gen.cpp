// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeNv/Public/ClothConfigNv.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfigNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMENV_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
	CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetupNv();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv_NoRegister();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EClothingWindMethodNv_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv, Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(), TEXT("EClothingWindMethodNv"));
		}
		return Singleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMENV_API UEnum* StaticEnum<EClothingWindMethodNv>()
	{
		return EClothingWindMethodNv_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClothingWindMethodNv(EClothingWindMethodNv_StaticEnum, TEXT("/Script/ClothingSystemRuntimeNv"), TEXT("EClothingWindMethodNv"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Hash() { return 1019615056U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClothingWindMethodNv"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClothingWindMethodNv::Legacy", (int64)EClothingWindMethodNv::Legacy },
				{ "EClothingWindMethodNv::Accurate", (int64)EClothingWindMethodNv::Accurate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accurate.Comment", "// Use updated wind calculation for NvCloth based solved taking into account\n// drag and lift, this will require those properties to be correctly set in\n// the clothing configuration\n" },
				{ "Accurate.Name", "EClothingWindMethodNv::Accurate" },
				{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
				{ "Comment", "/** Cloth wind method. */" },
				{ "Legacy.Comment", "// Use legacy wind mode, where accelerations are modified directly by the simulation\n// with no regard for drag or lift\n" },
				{ "Legacy.Name", "EClothingWindMethodNv::Legacy" },
				{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
				{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
				{ "ToolTip", "Cloth wind method." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
				nullptr,
				"EClothingWindMethodNv",
				"EClothingWindMethodNv",
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
class UScriptStruct* FClothConstraintSetupNv::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMENV_API uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetupNv_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetupNv, Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(), TEXT("ClothConstraintSetupNv"), sizeof(FClothConstraintSetupNv), Get_Z_Construct_UScriptStruct_FClothConstraintSetupNv_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* StaticStruct<FClothConstraintSetupNv>()
{
	return FClothConstraintSetupNv::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConstraintSetupNv(FClothConstraintSetupNv::StaticStruct, TEXT("/Script/ClothingSystemRuntimeNv"), TEXT("ClothConstraintSetupNv"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeNv_StaticRegisterNativesFClothConstraintSetupNv
{
	FScriptStruct_ClothingSystemRuntimeNv_StaticRegisterNativesFClothConstraintSetupNv()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConstraintSetupNv")),new UScriptStruct::TCppStructOps<FClothConstraintSetupNv>);
	}
} ScriptStruct_ClothingSystemRuntimeNv_StaticRegisterNativesFClothConstraintSetupNv;
	struct Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for a constraint setup, these can be horizontal, vertical, shear and bend. */" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Container for a constraint setup, these can be horizontal, vertical, shear and bend." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetupNv>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// The hard limit on how far this constraint can compress\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "The hard limit on how far this constraint can compress" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetupNv, CompressionLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// The hard limit on how far this constraint can stretch\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "The hard limit on how far this constraint can stretch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetupNv, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// A multiplier affecting the above value\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetupNv, StiffnessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// How stiff this constraint is, this affects how closely it will follow the desired position\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetupNv, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
		nullptr,
		&NewStructOps,
		"ClothConstraintSetupNv",
		sizeof(FClothConstraintSetupNv),
		alignof(FClothConstraintSetupNv),
		Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetupNv()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetupNv_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConstraintSetupNv"), sizeof(FClothConstraintSetupNv), Get_Z_Construct_UScriptStruct_FClothConstraintSetupNv_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetupNv_Hash() { return 2232792926U; }
	void UClothConfigNv::StaticRegisterNativesUClothConfigNv()
	{
	}
	UClass* Z_Construct_UClass_UClothConfigNv_NoRegister()
	{
		return UClothConfigNv::StaticClass();
	}
	struct Z_Construct_UClass_UClothConfigNv_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShearConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShearConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BendConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothingWindMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClothingWindMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClothingWindMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothConfigNv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothConfigNv.h" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, ShearConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, BendConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, HorizontalConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, VerticalConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_MetaData[] = {
		{ "Comment", "// Deprecated properties using old legacy structure and enum that couldn't be redirected\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Deprecated properties using old legacy structure and enum that couldn't be redirected" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, WindMethod_DEPRECATED), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Default damper stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, AnimDriveDamperStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, AnimDriveSpringStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// 'Thickness' of the simulated cloth, used to adjust collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale for the limit of particle tethers (how far they can separate)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, TetherLimit), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale for stiffness of particle tethers between each other\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, TetherStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "/** Use gravity override value vs gravity scale */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
#endif
	void Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UClothConfigNv*)Obj)->bUseGravityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClothConfigNv), &Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Direct gravity override value\n" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale of gravity effect on particles\n" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, GravityScale), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Frequency for stiffness calculations, lower values will degrade stiffness of constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "30" },
		{ "Comment", "// Frequency of the position solver, lower values will lead to stretchier, bouncier cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
		{ "UIMax", "240" },
		{ "UIMin", "30" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, SolverFrequency), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag applied to angular particle movement, higher values should limit material bending (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag applied to linear particle movement per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Lift coefficient for wind calculations, higher values make cloth rise easier in wind\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, WindLiftCoefficient), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, WindDragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Friction of the surface when colliding\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, Friction), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Damping of particle motion per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * Scale to use for the radius of the culling checks for self collisions.\n\x09 * Any other self collision body within the radius of this check will be culled.\n\x09 * This helps performance with higher resolution meshes by reducing the number\n\x09 * of colliding bodies within the cloth. Reducing this will have a negative\n\x09 * effect on performance!\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale to use for the radius of the culling checks for self collisions.\nAny other self collision body within the radius of this check will be culled.\nThis helps performance with higher resolution meshes by reducing the number\nof colliding bodies within the cloth. Reducing this will have a negative\neffect on performance!" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, SelfCollisionCullScale), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Stiffness of the spring force that will resolve self collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Size of self collision spheres centered on each vert\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, SelfCollisionRadius), METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for shear constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint = { "ShearConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, ShearConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for bend constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint = { "BendConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, BendConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for horizontal constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint = { "HorizontalConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, HorizontalConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for vertical constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint = { "VerticalConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, VerticalConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod = { "ClothingWindMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothConfigNv, ClothingWindMethod), Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv, METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothConfigNv_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothConfigNv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigNv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigNv_Statics::ClassParams = {
		&UClothConfigNv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothConfigNv_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothConfigNv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothConfigNv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothConfigNv, 4170873784);
	template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothConfigNv>()
	{
		return UClothConfigNv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothConfigNv(Z_Construct_UClass_UClothConfigNv, &UClothConfigNv::StaticClass, TEXT("/Script/ClothingSystemRuntimeNv"), TEXT("UClothConfigNv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigNv);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothConfigNv)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
