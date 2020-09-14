// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputDevice/Public/AnimNode_SteamVRInputAnimPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SteamVRInputAnimPose() {}
// Cross Module References
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FUE4RetargettingRefs();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHand();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EMotionRange();
// End Cross Module References
class UScriptStruct* FAnimNode_SteamVRInputAnimPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("AnimNode_SteamVRInputAnimPose"), sizeof(FAnimNode_SteamVRInputAnimPose), Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FAnimNode_SteamVRInputAnimPose>()
{
	return FAnimNode_SteamVRInputAnimPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SteamVRInputAnimPose(FAnimNode_SteamVRInputAnimPose::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("AnimNode_SteamVRInputAnimPose"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFAnimNode_SteamVRInputAnimPose
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFAnimNode_SteamVRInputAnimPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SteamVRInputAnimPose")),new UScriptStruct::TCppStructOps<FAnimNode_SteamVRInputAnimPose>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFAnimNode_SteamVRInputAnimPose;
	struct Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UE4RetargettingRefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UE4RetargettingRefs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamVRSkeletalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamVRSkeletalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mirror_MetaData[];
#endif
		static void NewProp_Mirror_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Mirror;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandSkeleton;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandSkeleton_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MotionRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionRange_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Custom animation node to retrieve poses from the Skeletal Input System\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "Custom animation node to retrieve poses from the Skeletal Input System" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SteamVRInputAnimPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs_MetaData[] = {
		{ "Comment", "/** SteamVR Skeleton to UE4 retargetting cache */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "SteamVR Skeleton to UE4 retargetting cache" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs = { "UE4RetargettingRefs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, UE4RetargettingRefs), Z_Construct_UScriptStruct_FUE4RetargettingRefs, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform_MetaData[] = {
		{ "Category", "SteamVRInput" },
		{ "Comment", "/** The UE4 equivalent of the SteamVR Transform values per bone */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "The UE4 equivalent of the SteamVR Transform values per bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform = { "SteamVRSkeletalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, SteamVRSkeletalTransform), Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "Comment", "/** Should the pose be mirrored so it can be applied to the opposite hand */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "Should the pose be mirrored so it can be applied to the opposite hand" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_SetBit(void* Obj)
	{
		((FAnimNode_SteamVRInputAnimPose*)Obj)->Mirror = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror = { "Mirror", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SteamVRInputAnimPose), &Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "Comment", "/** What kind of skeleton are we dealing with */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "What kind of skeleton are we dealing with" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton = { "HandSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, HandSkeleton), Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which hand should the animation node retrieve skeletal input values for */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "Which hand should the animation node retrieve skeletal input values for" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, Hand), Z_Construct_UEnum_SteamVRInputDevice_EHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "Comment", "/** Range of motion for the skeletal input values */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "Range of motion for the skeletal input values" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange = { "MotionRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, MotionRange), Z_Construct_UEnum_SteamVRInputDevice_EMotionRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SteamVRInputAnimPose",
		sizeof(FAnimNode_SteamVRInputAnimPose),
		alignof(FAnimNode_SteamVRInputAnimPose),
		Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SteamVRInputAnimPose"), sizeof(FAnimNode_SteamVRInputAnimPose), Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Hash() { return 1596707435U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
