// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimStreamable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStreamable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimStreamable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStreamable();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
// End Cross Module References
	void UAnimStreamable::StaticRegisterNativesUAnimStreamable()
	{
	}
	UClass* Z_Construct_UClass_UAnimStreamable_NoRegister()
	{
		return UAnimStreamable::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStreamable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNormalizedRootMotionScale_MetaData[];
#endif
		static void NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNormalizedRootMotionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRootLock_MetaData[];
#endif
		static void NewProp_bForceRootLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRootLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotion_MetaData[];
#endif
		static void NewProp_bEnableRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveCompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveCompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneCompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneCompressionSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTrackNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationTrackNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackToSkeletonMapTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackToSkeletonMapTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackToSkeletonMapTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RawAnimationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawAnimationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawDataGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawDataGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceSequence;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStreamable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/AnimStreamable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) **/" },
		{ "DisplayName", "Use Normalized Root Motion Scale" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) *" },
	};
#endif
	void Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj)
	{
		((UAnimStreamable*)Obj)->bUseNormalizedRootMotionScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale = { "bUseNormalizedRootMotionScale", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStreamable), &Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Force Root Bone Lock even if Root Motion is not enabled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Force Root Bone Lock even if Root Motion is not enabled" },
	};
#endif
	void Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_SetBit(void* Obj)
	{
		((UAnimStreamable*)Obj)->bForceRootLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock = { "bForceRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStreamable), &Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Root Bone will be locked to that position when extracting root motion.**/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion.*" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock = { "RootMotionRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will allow extracting of root motion **/" },
		{ "DisplayName", "EnableRootMotion" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "If this is on, it will allow extracting of root motion *" },
	};
#endif
	void Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_SetBit(void* Obj)
	{
		((UAnimStreamable*)Obj)->bEnableRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion = { "bEnableRootMotion", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStreamable), &Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The curve compression settings used to compress curves in this sequence. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "The curve compression settings used to compress curves in this sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings = { "CurveCompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, CurveCompressionSettings), Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The bone compression settings used to compress bones in this sequence. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "The bone compression settings used to compress bones in this sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings = { "BoneCompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, BoneCompressionSettings), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_MetaData[] = {
		{ "Comment", "/**\n\x09 * This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, AnimationTrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_Inner = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\n\x09 * TrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\nTrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable = { "TrackToSkeletonMapTable", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, TrackToSkeletonMapTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_Inner = { "TrackToSkeletonMapTable", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrackToSkeletonMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Raw uncompressed keyframe data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Raw uncompressed keyframe data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData = { "RawAnimationData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, RawAnimationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_Inner = { "RawAnimationData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid = { "RawDataGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, RawDataGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "Comment", "// Sequence the streamable was created from (used for reflecting changes to the source in editor)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Sequence the streamable was created from (used for reflecting changes to the source in editor)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, SourceSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, RetargetSource), METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** This defines how values between keys are calculated **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "This defines how values between keys are calculated *" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Comment", "/** Number of raw frames in this sequence (not used by engine - just for informational purposes). */" },
		{ "DisplayName", "Number of Keys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Number of raw frames in this sequence (not used by engine - just for informational purposes)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStreamable, NumFrames), METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStreamable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStreamable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStreamable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStreamable_Statics::ClassParams = {
		&UAnimStreamable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStreamable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStreamable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStreamable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStreamable, 3286285609);
	template<> ENGINE_API UClass* StaticClass<UAnimStreamable>()
	{
		return UAnimStreamable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStreamable(Z_Construct_UClass_UAnimStreamable, &UAnimStreamable::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimStreamable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStreamable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStreamable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
