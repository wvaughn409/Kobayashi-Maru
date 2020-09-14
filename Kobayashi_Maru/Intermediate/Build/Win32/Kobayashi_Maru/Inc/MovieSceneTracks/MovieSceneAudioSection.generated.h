// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
class USoundBase;
#ifdef MOVIESCENETRACKS_MovieSceneAudioSection_generated_h
#error "MovieSceneAudioSection.generated.h already included, missing '#pragma once' in MovieSceneAudioSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetSound);


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetSound);


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAudioSection, NO_API)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioSection(UMovieSceneAudioSection&&); \
	NO_API UMovieSceneAudioSection(const UMovieSceneAudioSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioSection(UMovieSceneAudioSection&&); \
	NO_API UMovieSceneAudioSection(const UMovieSceneAudioSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sound() { return STRUCT_OFFSET(UMovieSceneAudioSection, Sound); } \
	FORCEINLINE static uint32 __PPO__StartFrameOffset() { return STRUCT_OFFSET(UMovieSceneAudioSection, StartFrameOffset); } \
	FORCEINLINE static uint32 __PPO__StartOffset_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneAudioSection, StartOffset_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__AudioStartTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneAudioSection, AudioStartTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__AudioDilationFactor_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneAudioSection, AudioDilationFactor_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__AudioVolume_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneAudioSection, AudioVolume_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SoundVolume() { return STRUCT_OFFSET(UMovieSceneAudioSection, SoundVolume); } \
	FORCEINLINE static uint32 __PPO__PitchMultiplier() { return STRUCT_OFFSET(UMovieSceneAudioSection, PitchMultiplier); } \
	FORCEINLINE static uint32 __PPO__AttachActorData() { return STRUCT_OFFSET(UMovieSceneAudioSection, AttachActorData); } \
	FORCEINLINE static uint32 __PPO__bSuppressSubtitles() { return STRUCT_OFFSET(UMovieSceneAudioSection, bSuppressSubtitles); } \
	FORCEINLINE static uint32 __PPO__bOverrideAttenuation() { return STRUCT_OFFSET(UMovieSceneAudioSection, bOverrideAttenuation); } \
	FORCEINLINE static uint32 __PPO__AttenuationSettings() { return STRUCT_OFFSET(UMovieSceneAudioSection, AttenuationSettings); } \
	FORCEINLINE static uint32 __PPO__OnQueueSubtitles() { return STRUCT_OFFSET(UMovieSceneAudioSection, OnQueueSubtitles); } \
	FORCEINLINE static uint32 __PPO__OnAudioFinished() { return STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioFinished); } \
	FORCEINLINE static uint32 __PPO__OnAudioPlaybackPercent() { return STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioPlaybackPercent); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_19_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneAudioSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneAudioSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
