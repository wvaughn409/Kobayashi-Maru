// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNode_Inertialization_generated_h
#error "AnimNode_Inertialization.generated.h already included, missing '#pragma once' in AnimNode_Inertialization.h"
#endif
#define ENGINE_AnimNode_Inertialization_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNode_Inertialization>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationPoseDiff>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationCurveDiff>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationBoneDiff>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h


#define FOREACH_ENUM_EINERTIALIZATIONSPACE(op) \
	op(EInertializationSpace::Default) \
	op(EInertializationSpace::WorldSpace) \
	op(EInertializationSpace::WorldRotation) 

enum class EInertializationSpace : uint8;
template<> ENGINE_API UEnum* StaticEnum<EInertializationSpace>();

#define FOREACH_ENUM_EINERTIALIZATIONBONESTATE(op) \
	op(EInertializationBoneState::Invalid) \
	op(EInertializationBoneState::Valid) \
	op(EInertializationBoneState::Excluded) 

enum class EInertializationBoneState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EInertializationBoneState>();

#define FOREACH_ENUM_EINERTIALIZATIONSTATE(op) \
	op(EInertializationState::Inactive) \
	op(EInertializationState::Pending) \
	op(EInertializationState::Active) 

enum class EInertializationState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EInertializationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
