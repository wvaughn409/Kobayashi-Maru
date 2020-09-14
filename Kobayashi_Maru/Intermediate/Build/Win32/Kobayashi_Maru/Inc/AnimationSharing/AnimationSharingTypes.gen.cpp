// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingTypes() {}
// Cross Module References
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSharingScalability();
	UPackage* Z_Construct_UPackage__Script_AnimationSharing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup();
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSetup();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimationSharingScalability::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONSHARING_API uint32 Get_Z_Construct_UScriptStruct_FAnimationSharingScalability_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationSharingScalability, Z_Construct_UPackage__Script_AnimationSharing(), TEXT("AnimationSharingScalability"), sizeof(FAnimationSharingScalability), Get_Z_Construct_UScriptStruct_FAnimationSharingScalability_Hash());
	}
	return Singleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FAnimationSharingScalability>()
{
	return FAnimationSharingScalability::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationSharingScalability(FAnimationSharingScalability::StaticStruct, TEXT("/Script/AnimationSharing"), TEXT("AnimationSharingScalability"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationSharingScalability
{
	FScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationSharingScalability()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationSharingScalability")),new UScriptStruct::TCppStructOps<FAnimationSharingScalability>);
	}
} ScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationSharingScalability;
	struct Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickSignificanceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickSignificanceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberConcurrentBlends_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaximumNumberConcurrentBlends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSignificanceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendSignificanceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBlendTransitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UseBlendTransitions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationSharingScalability>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Significance value tied to whether or not the master pose components should be ticking */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Significance value tied to whether or not the master pose components should be ticking" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue = { "TickSignificanceValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSharingScalability, TickSignificanceValue), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of blends which can be running concurrently */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Maximum number of blends which can be running concurrently" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends = { "MaximumNumberConcurrentBlends", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSharingScalability, MaximumNumberConcurrentBlends), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Significance value tied to whether or not a transition should be blended */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Significance value tied to whether or not a transition should be blended" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue = { "BlendSignificanceValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSharingScalability, BlendSignificanceValue), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Flag whether or not to use blend transitions between states */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Flag whether or not to use blend transitions between states" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions = { "UseBlendTransitions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSharingScalability, UseBlendTransitions), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_TickSignificanceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_MaximumNumberConcurrentBlends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_BlendSignificanceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewProp_UseBlendTransitions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
		nullptr,
		&NewStructOps,
		"AnimationSharingScalability",
		sizeof(FAnimationSharingScalability),
		alignof(FAnimationSharingScalability),
		Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationSharingScalability()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationSharingScalability_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationSharing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationSharingScalability"), sizeof(FAnimationSharingScalability), Get_Z_Construct_UScriptStruct_FAnimationSharingScalability_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationSharingScalability_Hash() { return 2496642993U; }
class UScriptStruct* FPerSkeletonAnimationSharingSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONSHARING_API uint32 Get_Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup, Z_Construct_UPackage__Script_AnimationSharing(), TEXT("PerSkeletonAnimationSharingSetup"), sizeof(FPerSkeletonAnimationSharingSetup), Get_Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Hash());
	}
	return Singleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FPerSkeletonAnimationSharingSetup>()
{
	return FPerSkeletonAnimationSharingSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerSkeletonAnimationSharingSetup(FPerSkeletonAnimationSharingSetup::StaticStruct, TEXT("/Script/AnimationSharing"), TEXT("PerSkeletonAnimationSharingSetup"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationSharing_StaticRegisterNativesFPerSkeletonAnimationSharingSetup
{
	FScriptStruct_AnimationSharing_StaticRegisterNativesFPerSkeletonAnimationSharingSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerSkeletonAnimationSharingSetup")),new UScriptStruct::TCppStructOps<FPerSkeletonAnimationSharingSetup>);
	}
} ScriptStruct_AnimationSharing_StaticRegisterNativesFPerSkeletonAnimationSharingSetup;
	struct Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationStates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateProcessorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateProcessorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AdditiveAnimBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendAnimBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlendAnimBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerSkeletonAnimationSharingSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Definition of different animation states */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Definition of different animation states" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates = { "AnimationStates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, AnimationStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_Inner = { "AnimationStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimationStateEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Interface class used when determining which state an actor is in */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Interface class used when determining which state an actor is in" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass = { "StateProcessorClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, StateProcessorClass), Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation blueprint used to apply additive animation on top of other states */" },
		{ "DisplayName", "Animation Blueprint for Additive Animation" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation blueprint used to apply additive animation on top of other states" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint = { "AdditiveAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint), Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation blueprint used to perform the blending between states */" },
		{ "DisplayName", "Animation Blueprint for Blending" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation blueprint used to perform the blending between states" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint = { "BlendAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint), Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Skeletal mesh used to setup skeletal mesh components */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Skeletal mesh used to setup skeletal mesh components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Skeleton compatible with the animation sharing setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Skeleton compatible with the animation sharing setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerSkeletonAnimationSharingSetup, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AnimationStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_StateProcessorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_AdditiveAnimBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_BlendAnimBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewProp_Skeleton,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
		nullptr,
		&NewStructOps,
		"PerSkeletonAnimationSharingSetup",
		sizeof(FPerSkeletonAnimationSharingSetup),
		alignof(FPerSkeletonAnimationSharingSetup),
		Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationSharing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerSkeletonAnimationSharingSetup"), sizeof(FPerSkeletonAnimationSharingSetup), Get_Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Hash() { return 2232258290U; }
class UScriptStruct* FAnimationStateEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONSHARING_API uint32 Get_Z_Construct_UScriptStruct_FAnimationStateEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateEntry, Z_Construct_UPackage__Script_AnimationSharing(), TEXT("AnimationStateEntry"), sizeof(FAnimationStateEntry), Get_Z_Construct_UScriptStruct_FAnimationStateEntry_Hash());
	}
	return Singleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FAnimationStateEntry>()
{
	return FAnimationStateEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationStateEntry(FAnimationStateEntry::StaticStruct, TEXT("/Script/AnimationSharing"), TEXT("AnimationStateEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationStateEntry
{
	FScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationStateEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationStateEntry")),new UScriptStruct::TCppStructOps<FAnimationStateEntry>);
	}
} ScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationStateEntry;
	struct Z_Construct_UScriptStruct_FAnimationStateEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresCurves_MetaData[];
#endif
		static void NewProp_bRequiresCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WiggleTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfConcurrentInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaximumNumberOfConcurrentInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NextState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetNextState_MetaData[];
#endif
		static void NewProp_bSetNextState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetNextState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReturnToPreviousState_MetaData[];
#endif
		static void NewProp_bReturnToPreviousState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnToPreviousState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditive_MetaData[];
#endif
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnDemand_MetaData[];
#endif
		static void NewProp_bOnDemand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnDemand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationSetups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationSetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Whether or not this animation requires curves or morphtargets to function correctly for slave components */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Whether or not this animation requires curves or morphtargets to function correctly for slave components" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_SetBit(void* Obj)
	{
		((FAnimationStateEntry*)Obj)->bRequiresCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves = { "bRequiresCurves", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Percentage of 'wiggle' frames, this is used when we run out of available entries in Components, if one of the on-demand animations has started SequenceLength * WiggleFramePercentage ago or earlier,\n\x09it is used instead of a brand new one */" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Percentage of 'wiggle' frames, this is used when we run out of available entries in Components, if one of the on-demand animations has started SequenceLength * WiggleFramePercentage ago or earlier,\n      it is used instead of a brand new one" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage = { "WiggleTimePercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationStateEntry, WiggleTimePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of instances that will be created for this state (platform-specific) */" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Number of instances that will be created for this state (platform-specific)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances = { "MaximumNumberOfConcurrentInstances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationStateEntry, MaximumNumberOfConcurrentInstances), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** State value to which the actors part of an on demand state should be set to when its animation has finished */" },
		{ "EditCondition", "bSetNextState" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "State value to which the actors part of an on demand state should be set to when its animation has finished" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationStateEntry, NextState), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_SetBit(void* Obj)
	{
		((FAnimationStateEntry*)Obj)->bSetNextState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState = { "bSetNextState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Flag whether or not we should return to the previous state, only used when this state is an on-demand one*/" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Flag whether or not we should return to the previous state, only used when this state is an on-demand one" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_SetBit(void* Obj)
	{
		((FAnimationStateEntry*)Obj)->bReturnToPreviousState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState = { "bReturnToPreviousState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration of blending when blending to this state */" },
		{ "EditCondition", "!bAdditive" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Duration of blending when blending to this state" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationStateEntry, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Whether or not this state is an additive state */" },
		{ "EditCondition", "bOnDemand" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Whether or not this state is an additive state" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((FAnimationStateEntry*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Flag whether or not this state is an on-demand state, this means that we kick off a unique animation when needed */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Flag whether or not this state is an on-demand state, this means that we kick off a unique animation when needed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_SetBit(void* Obj)
	{
		((FAnimationStateEntry*)Obj)->bOnDemand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand = { "bOnDemand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationStateEntry), &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Per state animation setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Per state animation setup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups = { "AnimationSetups", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationStateEntry, AnimationSetups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_Inner = { "AnimationSetups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimationSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Enum value linked to this state */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Enum value linked to this state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationStateEntry, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_WiggleTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_MaximumNumberOfConcurrentInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_NextState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_AnimationSetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_State,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
		nullptr,
		&NewStructOps,
		"AnimationStateEntry",
		sizeof(FAnimationStateEntry),
		alignof(FAnimationStateEntry),
		Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationStateEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationSharing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationStateEntry"), sizeof(FAnimationStateEntry), Get_Z_Construct_UScriptStruct_FAnimationStateEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationStateEntry_Hash() { return 1929034162U; }
class UScriptStruct* FAnimationSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONSHARING_API uint32 Get_Z_Construct_UScriptStruct_FAnimationSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationSetup, Z_Construct_UPackage__Script_AnimationSharing(), TEXT("AnimationSetup"), sizeof(FAnimationSetup), Get_Z_Construct_UScriptStruct_FAnimationSetup_Hash());
	}
	return Singleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FAnimationSetup>()
{
	return FAnimationSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationSetup(FAnimationSetup::StaticStruct, TEXT("/Script/AnimationSharing"), TEXT("AnimationSetup"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationSetup
{
	FScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationSetup")),new UScriptStruct::TCppStructOps<FAnimationSetup>);
	}
} ScriptStruct_AnimationSharing_StaticRegisterNativesFAnimationSetup;
	struct Z_Construct_UScriptStruct_FAnimationSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRandomizedInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumRandomizedInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Whether or not this setup is enabled for specific platforms */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Whether or not this setup is enabled for specific platforms" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSetup, Enabled), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of randomized instances created from this setup, it will create instance with different start time offsets (Length / Number of Instance) * InstanceIndex */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "The number of randomized instances created from this setup, it will create instance with different start time offsets (Length / Number of Instance) * InstanceIndex" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances = { "NumRandomizedInstances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSetup, NumRandomizedInstances), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation blueprint to use for playing back the Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation blueprint to use for playing back the Animation Sequence" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0014040000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSetup, AnimBlueprint), Z_Construct_UClass_UAnimSharingStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Animation Sequence to play for this particular setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
		{ "ToolTip", "Animation Sequence to play for this particular setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationSetup, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_NumRandomizedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewProp_AnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
		nullptr,
		&NewStructOps,
		"AnimationSetup",
		sizeof(FAnimationSetup),
		alignof(FAnimationSetup),
		Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationSharing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationSetup"), sizeof(FAnimationSetup), Get_Z_Construct_UScriptStruct_FAnimationSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationSetup_Hash() { return 1905822770U; }
	DEFINE_FUNCTION(UAnimationSharingStateProcessor::execGetAnimationStateEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnum**)Z_Param__Result=P_THIS->GetAnimationStateEnum_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingStateProcessor::execProcessActorState)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutState);
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_CurrentState);
		P_GET_PROPERTY(FByteProperty,Z_Param_OnDemandState);
		P_GET_UBOOL_REF(Z_Param_Out_bShouldProcess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessActorState_Implementation(Z_Param_Out_OutState,Z_Param_InActor,Z_Param_CurrentState,Z_Param_OnDemandState,Z_Param_Out_bShouldProcess);
		P_NATIVE_END;
	}
	static FName NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum = FName(TEXT("GetAnimationStateEnum"));
	UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
	{
		AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimationSharingStateProcessor_ProcessActorState = FName(TEXT("ProcessActorState"));
	void UAnimationSharingStateProcessor::ProcessActorState(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess)
	{
		AnimationSharingStateProcessor_eventProcessActorState_Parms Parms;
		Parms.OutState=OutState;
		Parms.InActor=InActor;
		Parms.CurrentState=CurrentState;
		Parms.OnDemandState=OnDemandState;
		Parms.bShouldProcess=bShouldProcess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAnimationSharingStateProcessor_ProcessActorState),&Parms);
		OutState=Parms.OutState;
		bShouldProcess=Parms.bShouldProcess;
	}
	void UAnimationSharingStateProcessor::StaticRegisterNativesUAnimationSharingStateProcessor()
	{
		UClass* Class = UAnimationSharingStateProcessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationStateEnum", &UAnimationSharingStateProcessor::execGetAnimationStateEnum },
			{ "ProcessActorState", &UAnimationSharingStateProcessor::execProcessActorState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms, ReturnValue), Z_Construct_UClass_UEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingStateProcessor, nullptr, "GetAnimationStateEnum", nullptr, nullptr, sizeof(AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms), Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics
	{
		static void NewProp_bShouldProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldProcess;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnDemandState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess_SetBit(void* Obj)
	{
		((AnimationSharingStateProcessor_eventProcessActorState_Parms*)Obj)->bShouldProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess = { "bShouldProcess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationSharingStateProcessor_eventProcessActorState_Parms), &Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OnDemandState = { "OnDemandState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, OnDemandState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, CurrentState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingStateProcessor_eventProcessActorState_Parms, OutState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_bShouldProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OnDemandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::NewProp_OutState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingStateProcessor, nullptr, "ProcessActorState", nullptr, nullptr, sizeof(AnimationSharingStateProcessor_eventProcessActorState_Parms), Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister()
	{
		return UAnimationSharingStateProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationStateEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationStateEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum, "GetAnimationStateEnum" }, // 3043937735
		{ &Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState, "ProcessActorState" }, // 1277722568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationSharingTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum = { "AnimationStateEnum", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSharingStateProcessor, AnimationStateEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::NewProp_AnimationStateEnum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingStateProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::ClassParams = {
		&UAnimationSharingStateProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSharingStateProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSharingStateProcessor, 190938511);
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimationSharingStateProcessor>()
	{
		return UAnimationSharingStateProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSharingStateProcessor(Z_Construct_UClass_UAnimationSharingStateProcessor, &UAnimationSharingStateProcessor::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimationSharingStateProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingStateProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
