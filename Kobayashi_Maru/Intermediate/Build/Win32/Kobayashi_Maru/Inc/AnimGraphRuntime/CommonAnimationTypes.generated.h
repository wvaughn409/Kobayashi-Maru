// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_CommonAnimationTypes_generated_h
#error "CommonAnimationTypes.generated.h already included, missing '#pragma once' in CommonAnimationTypes.h"
#endif
#define ANIMGRAPHRUNTIME_CommonAnimationTypes_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FRotationRetargetingInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h


#define FOREACH_ENUM_EROTATIONCOMPONENT(op) \
	op(ERotationComponent::EulerX) \
	op(ERotationComponent::EulerY) \
	op(ERotationComponent::EulerZ) \
	op(ERotationComponent::QuaternionAngle) \
	op(ERotationComponent::SwingAngle) \
	op(ERotationComponent::TwistAngle) 

enum class ERotationComponent : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERotationComponent>();

#define FOREACH_ENUM_EEASINGFUNCTYPE(op) \
	op(EEasingFuncType::Linear) \
	op(EEasingFuncType::Sinusoidal) \
	op(EEasingFuncType::Cubic) \
	op(EEasingFuncType::QuadraticInOut) \
	op(EEasingFuncType::CubicInOut) \
	op(EEasingFuncType::HermiteCubic) \
	op(EEasingFuncType::QuarticInOut) \
	op(EEasingFuncType::QuinticInOut) \
	op(EEasingFuncType::CircularIn) \
	op(EEasingFuncType::CircularOut) \
	op(EEasingFuncType::CircularInOut) \
	op(EEasingFuncType::ExpIn) \
	op(EEasingFuncType::ExpOut) \
	op(EEasingFuncType::ExpInOut) \
	op(EEasingFuncType::CustomCurve) 

enum class EEasingFuncType : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EEasingFuncType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
