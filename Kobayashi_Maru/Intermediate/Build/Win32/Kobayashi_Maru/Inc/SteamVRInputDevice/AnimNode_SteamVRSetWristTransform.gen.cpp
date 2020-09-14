// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputDevice/Public/AnimNode_SteamVRSetWristTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SteamVRSetWristTransform() {}
// Cross Module References
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton();
// End Cross Module References
class UScriptStruct* FAnimNode_SteamVRSetWristTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMVRINPUTDEVICE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform, Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("AnimNode_SteamVRSetWristTransform"), sizeof(FAnimNode_SteamVRSetWristTransform), Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Hash());
	}
	return Singleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FAnimNode_SteamVRSetWristTransform>()
{
	return FAnimNode_SteamVRSetWristTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SteamVRSetWristTransform(FAnimNode_SteamVRSetWristTransform::StaticStruct, TEXT("/Script/SteamVRInputDevice"), TEXT("AnimNode_SteamVRSetWristTransform"), false, nullptr, nullptr);
static struct FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFAnimNode_SteamVRSetWristTransform
{
	FScriptStruct_SteamVRInputDevice_StaticRegisterNativesFAnimNode_SteamVRSetWristTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SteamVRSetWristTransform")),new UScriptStruct::TCppStructOps<FAnimNode_SteamVRSetWristTransform>);
	}
} ScriptStruct_SteamVRInputDevice_StaticRegisterNativesFAnimNode_SteamVRSetWristTransform;
	struct Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandSkeleton;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandSkeleton_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Custom animation node that sets the wrist transform of a target pose from a reference pose\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
		{ "ToolTip", "Custom animation node that sets the wrist transform of a target pose from a reference pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SteamVRSetWristTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The pose to apply the wrist transform to */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
		{ "ToolTip", "The pose to apply the wrist transform to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose = { "TargetPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRSetWristTransform, TargetPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "Comment", "/** What kind of skeleton is used in the reference pose */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
		{ "ToolTip", "What kind of skeleton is used in the reference pose" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton = { "HandSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRSetWristTransform, HandSkeleton), Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The pose from where we will get the root and/or wrist transform from */" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
		{ "ToolTip", "The pose from where we will get the root and/or wrist transform from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SteamVRSetWristTransform, ReferencePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SteamVRSetWristTransform",
		sizeof(FAnimNode_SteamVRSetWristTransform),
		alignof(FAnimNode_SteamVRSetWristTransform),
		Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRInputDevice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SteamVRSetWristTransform"), sizeof(FAnimNode_SteamVRSetWristTransform), Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Hash() { return 3900796509U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
