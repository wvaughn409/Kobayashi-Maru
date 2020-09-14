// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundWaveLoadingBehavior_generated_h
#error "SoundWaveLoadingBehavior.generated.h already included, missing '#pragma once' in SoundWaveLoadingBehavior.h"
#endif
#define ENGINE_SoundWaveLoadingBehavior_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h


#define FOREACH_ENUM_ESOUNDWAVELOADINGBEHAVIOR(op) \
	op(ESoundWaveLoadingBehavior::Inherited) \
	op(ESoundWaveLoadingBehavior::RetainOnLoad) \
	op(ESoundWaveLoadingBehavior::PrimeOnLoad) \
	op(ESoundWaveLoadingBehavior::LoadOnDemand) \
	op(ESoundWaveLoadingBehavior::ForceInline) \
	op(ESoundWaveLoadingBehavior::Uninitialized) 

enum class ESoundWaveLoadingBehavior : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESoundWaveLoadingBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
