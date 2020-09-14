// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimTypes_generated_h
#error "AnimTypes.generated.h already included, missing '#pragma once' in AnimTypes.h"
#endif
#define ENGINE_AnimTypes_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_835_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawAnimSequenceTrack>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_804_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTrackToSkeletonMap>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_623_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMarkerSyncData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMarkerSyncData>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_529_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNotifyTrack>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_478_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSyncMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSyncMarker>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNotifyEvent>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneBlendWeights>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneBlendWeight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h


#define FOREACH_ENUM_ECOMPONENTTYPE(op) \
	op(EComponentType::None) \
	op(EComponentType::TranslationX) \
	op(EComponentType::TranslationY) \
	op(EComponentType::TranslationZ) \
	op(EComponentType::RotationX) \
	op(EComponentType::RotationY) \
	op(EComponentType::RotationZ) \
	op(EComponentType::Scale) \
	op(EComponentType::ScaleX) \
	op(EComponentType::ScaleY) \
	op(EComponentType::ScaleZ) 
#define FOREACH_ENUM_EAXISOPTION(op) \
	op(EAxisOption::X) \
	op(EAxisOption::Y) \
	op(EAxisOption::Z) \
	op(EAxisOption::X_Neg) \
	op(EAxisOption::Y_Neg) \
	op(EAxisOption::Z_Neg) \
	op(EAxisOption::Custom) 
#define FOREACH_ENUM_EANIMINTERPOLATIONTYPE(op) \
	op(EAnimInterpolationType::Linear) \
	op(EAnimInterpolationType::Step) 

enum class EAnimInterpolationType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimInterpolationType>();

#define FOREACH_ENUM_ECURVEBLENDOPTION(op) \
	op(ECurveBlendOption::Override) \
	op(ECurveBlendOption::DoNotOverride) \
	op(ECurveBlendOption::NormalizeByWeight) \
	op(ECurveBlendOption::BlendByWeight) \
	op(ECurveBlendOption::UseBasePose) \
	op(ECurveBlendOption::UseMaxValue) \
	op(ECurveBlendOption::UseMinValue) 
#define FOREACH_ENUM_EADDITIVEANIMATIONTYPE(op) \
	op(AAT_None) \
	op(AAT_LocalSpaceBase) \
	op(AAT_RotationOffsetMeshSpace) 
#define FOREACH_ENUM_ENOTIFYFILTERTYPE(op) \
	op(ENotifyFilterType::NoFiltering) \
	op(ENotifyFilterType::LOD) 
#define FOREACH_ENUM_EMONTAGENOTIFYTICKTYPE(op) \
	op(EMontageNotifyTickType::Queued) \
	op(EMontageNotifyTickType::BranchingPoint) 
#define FOREACH_ENUM_EBONEROTATIONSOURCE(op) \
	op(BRS_KeepComponentSpaceRotation) \
	op(BRS_KeepLocalSpaceRotation) \
	op(BRS_CopyFromTarget) 
#define FOREACH_ENUM_EBONECONTROLSPACE(op) \
	op(BCS_WorldSpace) \
	op(BCS_ComponentSpace) \
	op(BCS_ParentBoneSpace) \
	op(BCS_BoneSpace) 
#define FOREACH_ENUM_EBONEAXIS(op) \
	op(BA_X) \
	op(BA_Y) \
	op(BA_Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
