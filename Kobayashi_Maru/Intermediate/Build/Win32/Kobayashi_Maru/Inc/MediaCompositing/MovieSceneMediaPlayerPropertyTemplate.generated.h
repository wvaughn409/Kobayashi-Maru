// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIACOMPOSITING_MovieSceneMediaPlayerPropertyTemplate_generated_h
#error "MovieSceneMediaPlayerPropertyTemplate.generated.h already included, missing '#pragma once' in MovieSceneMediaPlayerPropertyTemplate.h"
#endif
#define MEDIACOMPOSITING_MovieSceneMediaPlayerPropertyTemplate_generated_h

#define Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics; \
	MEDIACOMPOSITING_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__MediaSource() { return STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource); } \
	FORCEINLINE static uint32 __PPO__SectionStartFrame() { return STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame); } \
	FORCEINLINE static uint32 __PPO__bLoop() { return STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, bLoop); } \
	typedef FMovieScenePropertySectionTemplate Super;


template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<struct FMovieSceneMediaPlayerPropertySectionTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
