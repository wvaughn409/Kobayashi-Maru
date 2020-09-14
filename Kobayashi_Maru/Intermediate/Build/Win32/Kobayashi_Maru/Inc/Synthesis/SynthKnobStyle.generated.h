// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SYNTHESIS_SynthKnobStyle_generated_h
#error "SynthKnobStyle.generated.h already included, missing '#pragma once' in SynthKnobStyle.h"
#endif
#define SYNTHESIS_SynthKnobStyle_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSynthKnobStyle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSynthKnobStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h


#define FOREACH_ENUM_ESYNTHKNOBSIZE(op) \
	op(ESynthKnobSize::Medium) \
	op(ESynthKnobSize::Large) \
	op(ESynthKnobSize::Count) 

enum class ESynthKnobSize : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ESynthKnobSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
