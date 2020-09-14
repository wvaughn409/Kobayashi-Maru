// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTH_ChaosWeightMapTarget_generated_h
#error "ChaosWeightMapTarget.generated.h already included, missing '#pragma once' in ChaosWeightMapTarget.h"
#endif
#define CHAOSCLOTH_ChaosWeightMapTarget_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Private_ChaosCloth_ChaosWeightMapTarget_h


#define FOREACH_ENUM_ECHAOSWEIGHTMAPTARGET(op) \
	op(EChaosWeightMapTarget::None) \
	op(EChaosWeightMapTarget::MaxDistance) \
	op(EChaosWeightMapTarget::BackstopDistance) \
	op(EChaosWeightMapTarget::BackstopRadius) \
	op(EChaosWeightMapTarget::AnimDriveMultiplier) 

enum class EChaosWeightMapTarget : uint8;
template<> CHAOSCLOTH_API UEnum* StaticEnum<EChaosWeightMapTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
