// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedMeshComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage();
// End Cross Module References
	static UEnum* EBoneSpaces_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneSpaces, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneSpaces"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneSpaces::Type>()
	{
		return EBoneSpaces_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneSpaces(EBoneSpaces_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneSpaces"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneSpaces_Hash() { return 463123439U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneSpaces()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneSpaces"), 0, Get_Z_Construct_UEnum_Engine_EBoneSpaces_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneSpaces::WorldSpace", (int64)EBoneSpaces::WorldSpace },
				{ "EBoneSpaces::ComponentSpace", (int64)EBoneSpaces::ComponentSpace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Values for specifying bone space. */" },
				{ "ComponentSpace.Comment", "/** Set position of bone in components reference frame. */" },
				{ "ComponentSpace.DisplayName", "Component Space" },
				{ "ComponentSpace.Name", "EBoneSpaces::ComponentSpace" },
				{ "ComponentSpace.ToolTip", "Set position of bone in components reference frame." },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Values for specifying bone space." },
				{ "WorldSpace.Comment", "/** Set absolute position of bone in world space. */" },
				{ "WorldSpace.DisplayName", "World Space" },
				{ "WorldSpace.Name", "EBoneSpaces::WorldSpace" },
				{ "WorldSpace.ToolTip", "Set absolute position of bone in world space." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneSpaces",
				"EBoneSpaces::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVisibilityBasedAnimTickOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityBasedAnimTickOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>()
	{
		return EVisibilityBasedAnimTickOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityBasedAnimTickOption(EVisibilityBasedAnimTickOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityBasedAnimTickOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Hash() { return 618367604U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityBasedAnimTickOption"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones },
				{ "EVisibilityBasedAnimTickOption::AlwaysTickPose", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPose },
				{ "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered },
				{ "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysTickPose.Comment", "/** Always Tick, but Refresh BoneTransforms only when rendered. */" },
				{ "AlwaysTickPose.Name", "EVisibilityBasedAnimTickOption::AlwaysTickPose" },
				{ "AlwaysTickPose.ToolTip", "Always Tick, but Refresh BoneTransforms only when rendered." },
				{ "AlwaysTickPoseAndRefreshBones.Comment", "/** Always Tick and Refresh BoneTransforms whether rendered or not. */" },
				{ "AlwaysTickPoseAndRefreshBones.Name", "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones" },
				{ "AlwaysTickPoseAndRefreshBones.ToolTip", "Always Tick and Refresh BoneTransforms whether rendered or not." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\" */" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "OnlyTickMontagesWhenNotRendered.Comment", "/**\n\x09\x09When rendered Tick Pose and Refresh Bone Transforms,\n\x09\x09otherwise, just update montages and skip everything else.\n\x09\x09(AnimBP graph will not be updated).\n\x09*/" },
				{ "OnlyTickMontagesWhenNotRendered.Name", "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered" },
				{ "OnlyTickMontagesWhenNotRendered.ToolTip", "When rendered Tick Pose and Refresh Bone Transforms,\notherwise, just update montages and skip everything else.\n(AnimBP graph will not be updated)." },
				{ "OnlyTickPoseWhenRendered.Comment", "/** Tick only when rendered, and it will only RefreshBoneTransforms when rendered. */" },
				{ "OnlyTickPoseWhenRendered.Name", "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered" },
				{ "OnlyTickPoseWhenRendered.ToolTip", "Tick only when rendered, and it will only RefreshBoneTransforms when rendered." },
				{ "ToolTip", "Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\"" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVisibilityBasedAnimTickOption",
				"EVisibilityBasedAnimTickOption",
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
	static UEnum* EPhysBodyOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysBodyOp, Z_Construct_UPackage__Script_Engine(), TEXT("EPhysBodyOp"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPhysBodyOp>()
	{
		return EPhysBodyOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysBodyOp(EPhysBodyOp_StaticEnum, TEXT("/Script/Engine"), TEXT("EPhysBodyOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPhysBodyOp_Hash() { return 4214936612U; }
	UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysBodyOp"), 0, Get_Z_Construct_UEnum_Engine_EPhysBodyOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PBO_None", (int64)PBO_None },
				{ "PBO_Term", (int64)PBO_Term },
				{ "PBO_MAX", (int64)PBO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** PhysicsBody options when bone is hidden */" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "PBO_MAX.Name", "PBO_MAX" },
				{ "PBO_None.Comment", "/** Don't do anything. */" },
				{ "PBO_None.Name", "PBO_None" },
				{ "PBO_None.ToolTip", "Don't do anything." },
				{ "PBO_Term.Comment", "/** Terminate - if you terminate, you won't be able to re-init when unhidden. */" },
				{ "PBO_Term.Name", "PBO_Term" },
				{ "PBO_Term.ToolTip", "Terminate - if you terminate, you won't be able to re-init when unhidden." },
				{ "ToolTip", "PhysicsBody options when bone is hidden" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPhysBodyOp",
				"EPhysBodyOp",
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
	static UEnum* EBoneVisibilityStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneVisibilityStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneVisibilityStatus"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneVisibilityStatus>()
	{
		return EBoneVisibilityStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneVisibilityStatus(EBoneVisibilityStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneVisibilityStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Hash() { return 2266693387U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneVisibilityStatus"), 0, Get_Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BVS_HiddenByParent", (int64)BVS_HiddenByParent },
				{ "BVS_Visible", (int64)BVS_Visible },
				{ "BVS_ExplicitlyHidden", (int64)BVS_ExplicitlyHidden },
				{ "BVS_MAX", (int64)BVS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BVS_ExplicitlyHidden.Comment", "/** Bone is hidden directly. */" },
				{ "BVS_ExplicitlyHidden.Name", "BVS_ExplicitlyHidden" },
				{ "BVS_ExplicitlyHidden.ToolTip", "Bone is hidden directly." },
				{ "BVS_HiddenByParent.Comment", "/** Bone is hidden because it's parent is hidden. */" },
				{ "BVS_HiddenByParent.Name", "BVS_HiddenByParent" },
				{ "BVS_HiddenByParent.ToolTip", "Bone is hidden because it's parent is hidden." },
				{ "BVS_MAX.Name", "BVS_MAX" },
				{ "BVS_Visible.Comment", "/** Bone is visible. */" },
				{ "BVS_Visible.Name", "BVS_Visible" },
				{ "BVS_Visible.ToolTip", "Bone is visible." },
				{ "Comment", "/** The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1 */" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneVisibilityStatus",
				"EBoneVisibilityStatus",
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
class UScriptStruct* FSkelMeshComponentLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshComponentLODInfo"), sizeof(FSkelMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshComponentLODInfo>()
{
	return FSkelMeshComponentLODInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshComponentLODInfo(FSkelMeshComponentLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkelMeshComponentLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshComponentLODInfo")),new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo;
	struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenMaterials;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HiddenMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** LOD specific setup for the skeletal mesh component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD specific setup for the skeletal mesh component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData[] = {
		{ "Comment", "/** Material corresponds to section. To show/hide each section, use this. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Material corresponds to section. To show/hide each section, use this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkelMeshComponentLODInfo, HiddenMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkelMeshComponentLODInfo",
		sizeof(FSkelMeshComponentLODInfo),
		alignof(FSkelMeshComponentLODInfo),
		Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshComponentLODInfo"), sizeof(FSkelMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash() { return 1073411760U; }
class UScriptStruct* FSkelMeshSkinWeightInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshSkinWeightInfo"), sizeof(FSkelMeshSkinWeightInfo), Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshSkinWeightInfo>()
{
	return FSkelMeshSkinWeightInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshSkinWeightInfo(FSkelMeshSkinWeightInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkelMeshSkinWeightInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshSkinWeightInfo")),new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo;
	struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Vertex skin weight info supplied for a component override. */" },
		{ "HasNativeBreak", "Engine.KismetRenderingLibrary.BreakSkinWeightInfo" },
		{ "HasNativeMake", "Engine.KismetRenderingLibrary.MakeSkinWeightInfo" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Vertex skin weight info supplied for a component override." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData[] = {
		{ "Comment", "/** Influence of each bone on this vertex */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Influence of each bone on this vertex" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Weights, FSkelMeshSkinWeightInfo), STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Weights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData[] = {
		{ "Comment", "/** Index of bones that influence this vertex */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Index of bones that influence this vertex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Bones, FSkelMeshSkinWeightInfo), STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Bones), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkelMeshSkinWeightInfo",
		sizeof(FSkelMeshSkinWeightInfo),
		alignof(FSkelMeshSkinWeightInfo),
		Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshSkinWeightInfo"), sizeof(FSkelMeshSkinWeightInfo), Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash() { return 3919053429U; }
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetRenderStatic)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderStatic(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execIsMaterialSectionShown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSectionShown(Z_Param_MaterialID,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execShowAllMaterialSections)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAllMaterialSections(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execShowMaterialSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bShow);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMaterialSection(Z_Param_MaterialID,Z_Param_SectionIndex,Z_Param_bShow,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execIsBoneHiddenByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoneHiddenByName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execUnHideBoneByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnHideBoneByName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execHideBoneByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_PhysBodyOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBoneByName(Z_Param_BoneName,EPhysBodyOp(Z_Param_PhysBodyOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execFindClosestBone_K2)
	{
		P_GET_STRUCT(FVector,Z_Param_TestLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoneLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IgnoreScale);
		P_GET_UBOOL(Z_Param_bRequirePhysicsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->FindClosestBone_K2(Z_Param_TestLocation,Z_Param_Out_BoneLocation,Z_Param_IgnoreScale,Z_Param_bRequirePhysicsAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execTransformFromBoneSpace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InPosition);
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformFromBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execTransformToBoneSpace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InPosition);
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformToBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetRefPosePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRefPosePosition(Z_Param_BoneIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execBoneIsChildOf)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BoneIsChildOf(Z_Param_BoneName,Z_Param_ParentBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetMasterPoseComponent)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_NewMasterBoneComponent);
		P_GET_UBOOL(Z_Param_bForceUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMasterPoseComponent(Z_Param_NewMasterBoneComponent,Z_Param_bForceUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execIsUsingSkinWeightProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingSkinWeightProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetCurrentSkinWeightProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentSkinWeightProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execUnloadSkinWeightProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadSkinWeightProfile(Z_Param_InProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execClearSkinWeightProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSkinWeightProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinWeightProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkinWeightProfile(Z_Param_InProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execClearSkinWeightOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSkinWeightOverride(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinWeightOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TARRAY_REF(FSkelMeshSkinWeightInfo,Z_Param_Out_SkinWeights);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkinWeightOverride(Z_Param_LODIndex,Z_Param_Out_SkinWeights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execClearVertexColorOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearVertexColorOverride(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetVertexColorOverride_LinearColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexColorOverride_LinearColor(Z_Param_LODIndex,Z_Param_Out_VertexColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetTwistAndSwingAngleOfDeltaRotationFromRefPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTwistAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSwingAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTwistAndSwingAngleOfDeltaRotationFromRefPose(Z_Param_BoneName,Z_Param_Out_OutTwistAngle,Z_Param_Out_OutSwingAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetDeltaTransformFromRefPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_BaseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetDeltaTransformFromRefPose(Z_Param_BoneName,Z_Param_BaseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetParentBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetParentBone(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
		P_GET_UBOOL(Z_Param_bReinitPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMesh(Z_Param_NewMesh,Z_Param_bReinitPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetSocketBoneName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSocketBoneName(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBoneName(Z_Param_BoneIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBoneIndex(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetNumBones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumBones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapsuleIndirectShadowMinVisibility(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetCastCapsuleIndirectShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastCapsuleIndirectShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetCastCapsuleDirectShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastCapsuleDirectShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetForcedLOD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetForcedLOD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetForcedLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewForcedLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForcedLOD(Z_Param_InNewForcedLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetMinLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewMinLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLOD(Z_Param_InNewMinLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetNumLODs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetPhysicsAsset)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_NewPhysicsAsset);
		P_GET_UBOOL(Z_Param_bForceReInit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhysicsAsset(Z_Param_NewPhysicsAsset,Z_Param_bForceReInit);
		P_NATIVE_END;
	}
	void USkinnedMeshComponent::StaticRegisterNativesUSkinnedMeshComponent()
	{
		UClass* Class = USkinnedMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoneIsChildOf", &USkinnedMeshComponent::execBoneIsChildOf },
			{ "ClearSkinWeightOverride", &USkinnedMeshComponent::execClearSkinWeightOverride },
			{ "ClearSkinWeightProfile", &USkinnedMeshComponent::execClearSkinWeightProfile },
			{ "ClearVertexColorOverride", &USkinnedMeshComponent::execClearVertexColorOverride },
			{ "FindClosestBone_K2", &USkinnedMeshComponent::execFindClosestBone_K2 },
			{ "GetBoneIndex", &USkinnedMeshComponent::execGetBoneIndex },
			{ "GetBoneName", &USkinnedMeshComponent::execGetBoneName },
			{ "GetCurrentSkinWeightProfileName", &USkinnedMeshComponent::execGetCurrentSkinWeightProfileName },
			{ "GetDeltaTransformFromRefPose", &USkinnedMeshComponent::execGetDeltaTransformFromRefPose },
			{ "GetForcedLOD", &USkinnedMeshComponent::execGetForcedLOD },
			{ "GetNumBones", &USkinnedMeshComponent::execGetNumBones },
			{ "GetNumLODs", &USkinnedMeshComponent::execGetNumLODs },
			{ "GetParentBone", &USkinnedMeshComponent::execGetParentBone },
			{ "GetRefPosePosition", &USkinnedMeshComponent::execGetRefPosePosition },
			{ "GetSocketBoneName", &USkinnedMeshComponent::execGetSocketBoneName },
			{ "GetTwistAndSwingAngleOfDeltaRotationFromRefPose", &USkinnedMeshComponent::execGetTwistAndSwingAngleOfDeltaRotationFromRefPose },
			{ "HideBoneByName", &USkinnedMeshComponent::execHideBoneByName },
			{ "IsBoneHiddenByName", &USkinnedMeshComponent::execIsBoneHiddenByName },
			{ "IsMaterialSectionShown", &USkinnedMeshComponent::execIsMaterialSectionShown },
			{ "IsUsingSkinWeightProfile", &USkinnedMeshComponent::execIsUsingSkinWeightProfile },
			{ "SetCapsuleIndirectShadowMinVisibility", &USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility },
			{ "SetCastCapsuleDirectShadow", &USkinnedMeshComponent::execSetCastCapsuleDirectShadow },
			{ "SetCastCapsuleIndirectShadow", &USkinnedMeshComponent::execSetCastCapsuleIndirectShadow },
			{ "SetForcedLOD", &USkinnedMeshComponent::execSetForcedLOD },
			{ "SetMasterPoseComponent", &USkinnedMeshComponent::execSetMasterPoseComponent },
			{ "SetMinLOD", &USkinnedMeshComponent::execSetMinLOD },
			{ "SetPhysicsAsset", &USkinnedMeshComponent::execSetPhysicsAsset },
			{ "SetRenderStatic", &USkinnedMeshComponent::execSetRenderStatic },
			{ "SetSkeletalMesh", &USkinnedMeshComponent::execSetSkeletalMesh },
			{ "SetSkinWeightOverride", &USkinnedMeshComponent::execSetSkinWeightOverride },
			{ "SetSkinWeightProfile", &USkinnedMeshComponent::execSetSkinWeightProfile },
			{ "SetVertexColorOverride_LinearColor", &USkinnedMeshComponent::execSetVertexColorOverride_LinearColor },
			{ "ShowAllMaterialSections", &USkinnedMeshComponent::execShowAllMaterialSections },
			{ "ShowMaterialSection", &USkinnedMeshComponent::execShowMaterialSection },
			{ "TransformFromBoneSpace", &USkinnedMeshComponent::execTransformFromBoneSpace },
			{ "TransformToBoneSpace", &USkinnedMeshComponent::execTransformToBoneSpace },
			{ "UnHideBoneByName", &USkinnedMeshComponent::execUnHideBoneByName },
			{ "UnloadSkinWeightProfile", &USkinnedMeshComponent::execUnloadSkinWeightProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics
	{
		struct SkinnedMeshComponent_eventBoneIsChildOf_Parms
		{
			FName BoneName;
			FName ParentBoneName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventBoneIsChildOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, ParentBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Tests if BoneName is child of (or equal to) ParentBoneName.\n\x09 *\n\x09 * @param BoneName Name of the bone\n\x09 * @param ParentBone Name to check\n\x09 *\n\x09 * @return true if child (strictly, not same). false otherwise\n\x09 * Note - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Tests if BoneName is child of (or equal to) ParentBoneName.\n\n@param BoneName Name of the bone\n@param ParentBone Name to check\n\n@return true if child (strictly, not same). false otherwise\nNote - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "BoneIsChildOf", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics
	{
		struct SkinnedMeshComponent_eventClearSkinWeightOverride_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any applied skin weight override */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied skin weight override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightOverride", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear the Skin Weight Profile from this component, in case it is set */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear the Skin Weight Profile from this component, in case it is set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics
	{
		struct SkinnedMeshComponent_eventClearVertexColorOverride_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventClearVertexColorOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any applied vertex color override */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied vertex color override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearVertexColorOverride", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventClearVertexColorOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics
	{
		struct SkinnedMeshComponent_eventFindClosestBone_K2_Parms
		{
			FVector TestLocation;
			FVector BoneLocation;
			float IgnoreScale;
			bool bRequirePhysicsAsset;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static void NewProp_bRequirePhysicsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequirePhysicsAsset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventFindClosestBone_K2_Parms*)Obj)->bRequirePhysicsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset = { "bRequirePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale = { "IgnoreScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, IgnoreScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation = { "BoneLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bRequirePhysicsAsset" },
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** finds the closest bone to the given location\n\x09*\n\x09* @param TestLocation the location to test against\n\x09* @param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n\x09* @param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n\x09* @param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\x09*\n\x09* @return the name of the bone that was found, or 'None' if no bone was found\n\x09*/" },
		{ "CPP_Default_bRequirePhysicsAsset", "false" },
		{ "CPP_Default_IgnoreScale", "0.000000" },
		{ "DisplayName", "FindClosestBone" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "finds the closest bone to the given location\n\n@param TestLocation the location to test against\n@param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n@param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n@param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\n@return the name of the bone that was found, or 'None' if no bone was found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "FindClosestBone_K2", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics
	{
		struct SkinnedMeshComponent_eventGetBoneIndex_Parms
		{
			FName BoneName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\x09 * \n\x09 * @param BoneName Name of bone to look up\n\x09 * \n\x09 * @return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\x09 *\n\x09 * @see USkeletalMesh::GetBoneIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\n@param BoneName Name of bone to look up\n\n@return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\n@see USkeletalMesh::GetBoneIndex." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneIndex", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetBoneIndex_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics
	{
		struct SkinnedMeshComponent_eventGetBoneName_Parms
		{
			int32 BoneIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Bone Name from index\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return the name of the bone at the specified index \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Bone Name from index\n@param BoneIndex Index of the bone\n\n@return the name of the bone at the specified index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneName", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetBoneName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics
	{
		struct SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Return the name of the Skin Weight Profile that is currently set otherwise returns 'None' */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Return the name of the Skin Weight Profile that is currently set otherwise returns 'None'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetCurrentSkinWeightProfileName", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics
	{
		struct SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms
		{
			FName BoneName;
			FName BaseName;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BaseName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09* Get delta transform from reference pose based on BaseNode.\n\x09* This uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\x09*\n\x09* @param BoneName Name of the bone\n\x09* @param BaseName Name of the base bone - if none, it will use parent as a base\n\x09* \n\x09* @return the delta transform from refpose in that given space (BaseName)\n\x09*/" },
		{ "CPP_Default_BaseName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get delta transform from reference pose based on BaseNode.\nThis uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\n@param BoneName Name of the bone\n@param BaseName Name of the base bone - if none, it will use parent as a base\n\n@return the delta transform from refpose in that given space (BaseName)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetDeltaTransformFromRefPose", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics
	{
		struct SkinnedMeshComponent_eventGetForcedLOD_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetForcedLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetForcedLOD", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetForcedLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics
	{
		struct SkinnedMeshComponent_eventGetNumBones_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumBones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09*  Returns the number of bones in the skeleton.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns the number of bones in the skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumBones", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetNumBones_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics
	{
		struct SkinnedMeshComponent_eventGetNumLODs_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get the number of LODs on this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get the number of LODs on this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumLODs", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetNumLODs_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics
	{
		struct SkinnedMeshComponent_eventGetParentBone_Parms
		{
			FName BoneName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Parent Bone of the input bone\n\x09 * \n\x09 * @param BoneName Name of the bone\n\x09 *\n\x09 * @return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Parent Bone of the input bone\n\n@param BoneName Name of the bone\n\n@return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetParentBone", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetParentBone_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics
	{
		struct SkinnedMeshComponent_eventGetRefPosePosition_Parms
		{
			int32 BoneIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Gets the local-space position of a bone in the reference pose. \n\x09 *\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return Local space reference position \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Gets the local-space position of a bone in the reference pose.\n\n@param BoneIndex Index of the bone\n\n@return Local space reference position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetRefPosePosition", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetRefPosePosition_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics
	{
		struct SkinnedMeshComponent_eventGetSocketBoneName_Parms
		{
			FName InSocketName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Returns bone name linked to a given named socket on the skeletal mesh component.\n\x09 * If you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\x09 *\n\x09 * @param\x09""bone name or socket name\n\x09 *\n\x09 * @return\x09""bone name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns bone name linked to a given named socket on the skeletal mesh component.\nIf you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\n@param       bone name or socket name\n\n@return      bone name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSocketBoneName", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetSocketBoneName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics
	{
		struct SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms
		{
			FName BoneName;
			float OutTwistAngle;
			float OutSwingAngle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSwingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutTwistAngle;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutSwingAngle = { "OutSwingAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, OutSwingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutTwistAngle = { "OutTwistAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, OutTwistAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutSwingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutTwistAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space \n\x09 *\n\x09 * First this function gets rotation of current, and rotation of ref pose in local space, and \n\x09 * And gets twist/swing angle value from refpose aligned. \n\x09 * \n\x09 * @param BoneName Name of the bone\n\x09 * @param OutTwistAngle TwistAngle in degree\n\x09 * @param OutSwingAngle SwingAngle in degree\n\x09 *\n\x09 * @return true if succeed. False otherwise. Often due to incorrect bone name. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space\n\nFirst this function gets rotation of current, and rotation of ref pose in local space, and\nAnd gets twist/swing angle value from refpose aligned.\n\n@param BoneName Name of the bone\n@param OutTwistAngle TwistAngle in degree\n@param OutSwingAngle SwingAngle in degree\n\n@return true if succeed. False otherwise. Often due to incorrect bone name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetTwistAndSwingAngleOfDeltaRotationFromRefPose", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics
	{
		struct SkinnedMeshComponent_eventHideBoneByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EPhysBodyOp> PhysBodyOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysBodyOption;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption = { "PhysBodyOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, PhysBodyOption), Z_Construct_UEnum_Engine_EPhysBodyOp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\n\x09 *\x09""Compoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\x09 *\n\x09 *\x09@param  BoneName            Name of bone to hide\n\x09 *\x09@param\x09PhysBodyOption\x09\x09Option for physics bodies that attach to the bones to be hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\n@param  BoneName            Name of bone to hide\n@param  PhysBodyOption          Option for physics bodies that attach to the bones to be hidden" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "HideBoneByName", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventHideBoneByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics
	{
		struct SkinnedMeshComponent_eventIsBoneHiddenByName_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsBoneHiddenByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 *\x09""Determines if the specified bone is hidden. \n\x09 *\n\x09 *\x09@param  BoneName            Name of bone to check\n\x09 *\n\x09 *\x09@return true if hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Determines if the specified bone is hidden.\n\n@param  BoneName            Name of bone to check\n\n@return true if hidden" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsBoneHiddenByName", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics
	{
		struct SkinnedMeshComponent_eventIsMaterialSectionShown_Parms
		{
			int32 MaterialID;
			int32 LODIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsMaterialSectionShown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsMaterialSectionShown", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics
	{
		struct SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms
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
	void Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Check whether or not a Skin Weight Profile is currently set */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Check whether or not a Skin Weight Profile is currently set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsUsingSkinWeightProfile", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics
	{
		struct SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCapsuleIndirectShadowMinVisibility", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleDirectShadow", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleIndirectShadow", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics
	{
		struct SkinnedMeshComponent_eventSetForcedLOD_Parms
		{
			int32 InNewForcedLOD;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewForcedLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD = { "InNewForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetForcedLOD_Parms, InNewForcedLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set ForcedLodModel of the mesh component\n\x09 *\n\x09 * @param\x09InNewForcedLOD\x09Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set ForcedLodModel of the mesh component\n\n@param       InNewForcedLOD  Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetForcedLOD", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetForcedLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics
	{
		struct SkinnedMeshComponent_eventSetMasterPoseComponent_Parms
		{
			USkinnedMeshComponent* NewMasterBoneComponent;
			bool bForceUpdate;
		};
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMasterBoneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMasterBoneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetMasterPoseComponent_Parms*)Obj)->bForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent = { "NewMasterBoneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms, NewMasterBoneComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set MasterPoseComponent for this component\n\x09 *\n\x09 * @param NewMasterBoneComponent New MasterPoseComponent\n\x09 */" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set MasterPoseComponent for this component\n\n@param NewMasterBoneComponent New MasterPoseComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMasterPoseComponent", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics
	{
		struct SkinnedMeshComponent_eventSetMinLOD_Parms
		{
			int32 InNewMinLOD;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewMinLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD = { "InNewMinLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMinLOD_Parms, InNewMinLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set MinLodModel of the mesh component\n\x09 *\n\x09 * @param\x09InNewMinLOD\x09Set new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set MinLodModel of the mesh component\n\n@param       InNewMinLOD     Set new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMinLOD", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetMinLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics
	{
		struct SkinnedMeshComponent_eventSetPhysicsAsset_Parms
		{
			UPhysicsAsset* NewPhysicsAsset;
			bool bForceReInit;
		};
		static void NewProp_bForceReInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceReInit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetPhysicsAsset_Parms*)Obj)->bForceReInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit = { "bForceReInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset = { "NewPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPhysicsAsset_Parms, NewPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\x09 * \n\x09 * @param\x09NewPhysicsAsset\x09New PhysicsAsset\n\x09 * @param\x09""bForceReInit\x09""Force reinitialize\n\x09 */" },
		{ "CPP_Default_bForceReInit", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\n@param       NewPhysicsAsset New PhysicsAsset\n@param       bForceReInit    Force reinitialize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPhysicsAsset", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics
	{
		struct SkinnedMeshComponent_eventSetRenderStatic_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetRenderStatic_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetRenderStatic_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\x09 *\n\x09 * @param\x09whether this skinned mesh should be rendered as static\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\n@param       whether this skinned mesh should be rendered as static" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetRenderStatic", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetRenderStatic_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics
	{
		struct SkinnedMeshComponent_eventSetSkeletalMesh_Parms
		{
			USkeletalMesh* NewMesh;
			bool bReinitPose;
		};
		static void NewProp_bReinitPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReinitPose;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetSkeletalMesh_Parms*)Obj)->bReinitPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose = { "bReinitPose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkeletalMesh_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkeletalMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Change the SkeletalMesh that is rendered for this Component. Will re-initialize the animation tree etc. \n\x09 *\n\x09 * @param NewMesh New mesh to set for this component\n\x09 * @param bReinitPose Whether we should keep current pose or reinitialize.\n\x09 */" },
		{ "CPP_Default_bReinitPose", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Change the SkeletalMesh that is rendered for this Component. Will re-initialize the animation tree etc.\n\n@param NewMesh New mesh to set for this component\n@param bReinitPose Whether we should keep current pose or reinitialize." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkeletalMesh", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetSkeletalMesh_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics
	{
		struct SkinnedMeshComponent_eventSetSkinWeightOverride_Parms
		{
			int32 LODIndex;
			TArray<FSkelMeshSkinWeightInfo> SkinWeights;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinWeights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkinWeights_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights = { "SkinWeights", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, SkinWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner = { "SkinWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Allow override of skin weights on a per-component basis. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of skin weights on a per-component basis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightOverride", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics
	{
		struct SkinnedMeshComponent_eventSetSkinWeightProfile_Parms
		{
			FName InProfileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetSkinWeightProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms, InProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_InProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Setup an override Skin Weight Profile for this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Setup an override Skin Weight Profile for this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightProfile", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics
	{
		struct SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms
		{
			int32 LODIndex;
			TArray<FLinearColor> VertexColors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors. */" },
		{ "DisplayName", "Set Vertex Color Override" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetVertexColorOverride_LinearColor", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics
	{
		struct SkinnedMeshComponent_eventShowAllMaterialSections_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowAllMaterialSections_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any material visibility modifications made by ShowMaterialSection */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any material visibility modifications made by ShowMaterialSection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowAllMaterialSections", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventShowAllMaterialSections_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics
	{
		struct SkinnedMeshComponent_eventShowMaterialSection_Parms
		{
			int32 MaterialID;
			int32 SectionIndex;
			bool bShow;
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventShowMaterialSection_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventShowMaterialSection_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09""Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\x09 *\n\x09 * @param MaterialID - Index of the material show/hide\n\x09 * @param bShow - True to show the material, false to hide it\n\x09 * @param LODIndex - Index of the LOD to modify material visibility within\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\n@param MaterialID - Index of the material show/hide\n@param bShow - True to show the material, false to hide it\n@param LODIndex - Index of the LOD to modify material visibility within" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowMaterialSection", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventShowMaterialSection_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics
	{
		struct SkinnedMeshComponent_eventTransformFromBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Transform a location/rotation in bone relative space to world space.\n\x09 *\n\x09 * @param BoneName Name of bone\n\x09 * @param InPosition Input position\n\x09 * @param InRotation Input rotation\n\x09 * @param OutPosition (out) Transformed position\n\x09 * @param OutRotation (out) Transformed rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation in bone relative space to world space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformFromBoneSpace", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms), Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics
	{
		struct SkinnedMeshComponent_eventTransformToBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Transform a location/rotation from world space to bone relative space.\n\x09 *\x09This is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\x09 *\n\x09 * @param BoneName Name of bone\n\x09 * @param InPosition Input position\n\x09 * @param InRotation Input rotation\n\x09 * @param OutPosition (out) Transformed position\n\x09 * @param OutRotation (out) Transformed rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation from world space to bone relative space.\nThis is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformToBoneSpace", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventTransformToBoneSpace_Parms), Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics
	{
		struct SkinnedMeshComponent_eventUnHideBoneByName_Parms
		{
			FName BoneName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventUnHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\n\x09 *\x09""Compoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\x09 *\x09@param  BoneName            Name of bone to unhide\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n@param  BoneName            Name of bone to unhide" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnHideBoneByName", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventUnHideBoneByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics
	{
		struct SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms
		{
			FName InProfileName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms, InProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::NewProp_InProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Unload a Skin Weight Profile's skin weight buffer (if created) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Unload a Skin Weight Profile's skin weight buffer (if created)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnloadSkinWeightProfile", nullptr, nullptr, sizeof(SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms), Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkinnedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedWorldToLocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedWorldToLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedWorldSpaceBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedWorldSpaceBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleIndirectShadowMinVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleIndirectShadowMinVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMeshObjectUpdate_MetaData[];
#endif
		static void NewProp_bForceMeshObjectUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMeshObjectUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedLocalBoundsUpToDate_MetaData[];
#endif
		static void NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedLocalBoundsUpToDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMasterPoseComponentLOD_MetaData[];
#endif
		static void NewProp_bIgnoreMasterPoseComponentLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMasterPoseComponentLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderStatic_MetaData[];
#endif
		static void NewProp_bRenderStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayDebugUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCPUSkinning_MetaData[];
#endif
		static void NewProp_bCPUSkinning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCPUSkinning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleIndirectShadow_MetaData[];
#endif
		static void NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleIndirectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleDirectShadow_MetaData[];
#endif
		static void NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleDirectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecentlyRendered_MetaData[];
#endif
		static void NewProp_bRecentlyRendered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecentlyRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHighlightSelectedSections_MetaData[];
#endif
		static void NewProp_bCanHighlightSelectedSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHighlightSelectedSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncAttachParentLOD_MetaData[];
#endif
		static void NewProp_bSyncAttachParentLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncAttachParentLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderAllBodiesForBounds_MetaData[];
#endif
		static void NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderAllBodiesForBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentUseFixedSkelBounds_MetaData[];
#endif
		static void NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentUseFixedSkelBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_bPerBoneMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerBoneMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideSkin_MetaData[];
#endif
		static void NewProp_bHideSkin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideSkin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMorphTarget_MetaData[];
#endif
		static void NewProp_bDisableMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayBones_MetaData[];
#endif
		static void NewProp_bDisplayBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceWireframe_MetaData[];
#endif
		static void NewProp_bForceWireframe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceWireframe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBoundsFromMasterPoseComponent_MetaData[];
#endif
		static void NewProp_bUseBoundsFromMasterPoseComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBoundsFromMasterPoseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLod_MetaData[];
#endif
		static void NewProp_bOverrideMinLod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityBasedAnimTickOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VisibilityBasedAnimTickOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibilityBasedAnimTickOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLodModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLodModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAssetOverride;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinCacheUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinCacheUsage;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkinCacheUsage_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinCacheUsage_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPoseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_MasterPoseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinnedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkinnedMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf, "BoneIsChildOf" }, // 2337875966
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride, "ClearSkinWeightOverride" }, // 1355415329
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile, "ClearSkinWeightProfile" }, // 2305907588
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride, "ClearVertexColorOverride" }, // 461753571
		{ &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2, "FindClosestBone_K2" }, // 104226758
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex, "GetBoneIndex" }, // 3169856771
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName, "GetBoneName" }, // 2245762350
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName, "GetCurrentSkinWeightProfileName" }, // 1996791366
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose, "GetDeltaTransformFromRefPose" }, // 726897870
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD, "GetForcedLOD" }, // 1715495529
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones, "GetNumBones" }, // 714119708
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs, "GetNumLODs" }, // 1048384254
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone, "GetParentBone" }, // 1525410865
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition, "GetRefPosePosition" }, // 735008609
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName, "GetSocketBoneName" }, // 4011833977
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose, "GetTwistAndSwingAngleOfDeltaRotationFromRefPose" }, // 1076768544
		{ &Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName, "HideBoneByName" }, // 1509537486
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName, "IsBoneHiddenByName" }, // 333432420
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown, "IsMaterialSectionShown" }, // 2951990173
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile, "IsUsingSkinWeightProfile" }, // 1285107384
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility, "SetCapsuleIndirectShadowMinVisibility" }, // 2155053419
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow, "SetCastCapsuleDirectShadow" }, // 3097306078
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow, "SetCastCapsuleIndirectShadow" }, // 1024969725
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD, "SetForcedLOD" }, // 4020366725
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent, "SetMasterPoseComponent" }, // 3153646099
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD, "SetMinLOD" }, // 976178865
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 250756225
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic, "SetRenderStatic" }, // 2657942911
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh, "SetSkeletalMesh" }, // 309563080
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride, "SetSkinWeightOverride" }, // 1568300011
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile, "SetSkinWeightProfile" }, // 3006127024
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor, "SetVertexColorOverride_LinearColor" }, // 2158922066
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections, "ShowAllMaterialSections" }, // 1664946561
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection, "ShowMaterialSection" }, // 1655843633
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace, "TransformFromBoneSpace" }, // 3585029821
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace, "TransformToBoneSpace" }, // 3917944478
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName, "UnHideBoneByName" }, // 2203707823
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile, "UnloadSkinWeightProfile" }, // 1641856737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Skinned mesh component that supports bone skinned mesh rendering.\n * This class does not support animation.\n *\n * @see USkeletalMeshComponent\n*/" },
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Components/SkinnedMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Skinned mesh component that supports bone skinned mesh rendering.\nThis class does not support animation.\n\n@see USkeletalMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform = { "CachedWorldToLocalTransform", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldToLocalTransform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldSpaceBounds_MetaData[] = {
		{ "Comment", "/** Bounds cached, so they're computed just once. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Bounds cached, so they're computed just once." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldSpaceBounds = { "CachedWorldSpaceBounds", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldSpaceBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldSpaceBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldSpaceBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Controls how dark the capsule indirect shadow can be.\n\x09 */" },
		{ "DisplayName", "Capsule Indirect Shadow Min Visibility" },
		{ "EditCondition", "bCastCapsuleIndirectShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Controls how dark the capsule indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility = { "CapsuleIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, CapsuleIndirectShadowMinVisibility), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData[] = {
		{ "Comment", "/** If true, UpdateTransform will always result in a call to MeshObject->Update. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, UpdateTransform will always result in a call to MeshObject->Update." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceMeshObjectUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate = { "bForceMeshObjectUpdate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData[] = {
		{ "Comment", "/** true when CachedLocalBounds is up to date. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true when CachedLocalBounds is up to date." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCachedLocalBoundsUpToDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate = { "bCachedLocalBoundsUpToDate", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Flag that when set will ensure UpdateLODStatus will not take the MasterPoseComponent's current LOD in consideration when determining the correct LOD level (this requires MasterPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Flag that when set will ensure UpdateLODStatus will not take the MasterPoseComponent's current LOD in consideration when determining the correct LOD level (this requires MasterPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bIgnoreMasterPoseComponentLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD = { "bIgnoreMasterPoseComponentLOD", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 *\x09If true, render as static in reference pose.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, render as static in reference pose." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bRenderStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic = { "bRenderStatic", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Enable on screen debugging of update rate optimization. \n\x09 * Red = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames. \n\x09 * @todo: turn this into a console command. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Enable on screen debugging of update rate optimization.\nRed = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames.\n@todo: turn this into a console command." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisplayDebugUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations = { "bDisplayDebugUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick() \n\x09 * This allows to skip frames for performance. (For example based on visibility and size on screen). */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick()\nThis allows to skip frames for performance. (For example based on visibility and size on screen)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bEnableUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations = { "bEnableUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCPUSkinning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning = { "bCPUSkinning", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight).\n\x09 */" },
		{ "DisplayName", "Capsule Indirect Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCastCapsuleIndirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow = { "bCastCapsuleIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\n\x09 * This type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\n\x09 * This flag will force bCastInsetShadow to be enabled.\n\x09 */" },
		{ "DisplayName", "Capsule Direct Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\nThis type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\nThis flag will force bCastInsetShadow to be enabled." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCastCapsuleDirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow = { "bCastCapsuleDirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData[] = {
		{ "Comment", "/** true if mesh has been recently rendered, false otherwise */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true if mesh has been recently rendered, false otherwise" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bRecentlyRendered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered = { "bRecentlyRendered", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData[] = {
		{ "Comment", "/** Whether or not we can highlight selected sections - this should really only be done in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether or not we can highlight selected sections - this should really only be done in the editor" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCanHighlightSelectedSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections = { "bCanHighlightSelectedSections", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component uses its parents LOD when attached if available\n\x09* ForcedLOD can override this change. By default, it will use parent LOD.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, this component uses its parents LOD when attached if available\nForcedLOD can override this change. By default, it will use parent LOD." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bSyncAttachParentLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD = { "bSyncAttachParentLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bConsiderAllBodiesForBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds = { "bConsiderAllBodiesForBounds", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bComponentUseFixedSkelBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds = { "bComponentUseFixedSkelBounds", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 *\x09If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bPerBoneMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur = { "bPerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData[] = {
		{ "Comment", "/** Don't bother rendering the skin. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Don't bother rendering the skin." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bHideSkin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin = { "bHideSkin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Disable Morphtarget for this component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Disable Morphtarget for this component." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisableMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget = { "bDisableMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData[] = {
		{ "Comment", "/** Draw the skeleton hierarchy for this skel mesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Draw the skeleton hierarchy for this skel mesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisplayBones_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones = { "bDisplayBones", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData[] = {
		{ "Comment", "/** Forces the mesh to draw in wireframe mode. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Forces the mesh to draw in wireframe mode." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceWireframe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe = { "bForceWireframe", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** \n\x09 * When true, we will just using the bounds from our MasterPoseComponent.  This is useful for when we have a Mesh Parented\n\x09 * to the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\n\x09 * bounds as parent.  We want to do no calculations in that case.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, we will just using the bounds from our MasterPoseComponent.  This is useful for when we have a Mesh Parented\nto the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\nbounds as parent.  We want to do no calculations in that case." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bUseBoundsFromMasterPoseComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent = { "bUseBoundsFromMasterPoseComponent", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bOverrideMinLod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod = { "bOverrideMinLod", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/*\n\x09 * This is tick animation frequency option based on this component rendered or not or using montage\n\x09 *  You can change this default value in the INI file \n\x09 * Mostly related with performance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "* This is tick animation frequency option based on this component rendered or not or using montage\n*  You can change this default value in the INI file\n* Mostly related with performance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption = { "VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData[] = {
		{ "Comment", "/** LOD array info. Each index will correspond to the LOD index **/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD array info. Each index will correspond to the LOD index *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n\x09 * 1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\n\x09 * A lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\n\x09 * Value can be < 0 (from legcay content, or code changes)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\nA lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\nValue can be < 0 (from legcay content, or code changes)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 * This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\n\x09 * meshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\nmeshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel = { "MinLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, MinLodModel), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, ForcedLodModel), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 *\x09PhysicsAsset is set in SkeletalMesh by default, but you can override with this value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "PhysicsAsset is set in SkeletalMesh by default, but you can override with this value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride = { "PhysicsAssetOverride", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, PhysicsAssetOverride), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Wireframe color\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Wireframe color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, WireframeColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 * How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, SkinCacheUsage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ESkinCacheUsage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\n\x09 *\x09use the component space transforms from the MasterPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\n\x09 *\x09skeleton within the same Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\nuse the component space transforms from the MasterPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\nskeleton within the same Actor." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent = { "MasterPoseComponent", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, MasterPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The skeletal mesh used by this component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "The skeletal mesh used by this component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldSpaceBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinnedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams = {
		&USkinnedMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinnedMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkinnedMeshComponent, 3271499058);
	template<> ENGINE_API UClass* StaticClass<USkinnedMeshComponent>()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkinnedMeshComponent(Z_Construct_UClass_USkinnedMeshComponent, &USkinnedMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USkinnedMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
