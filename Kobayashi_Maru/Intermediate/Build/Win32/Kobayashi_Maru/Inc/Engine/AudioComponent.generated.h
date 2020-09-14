// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
struct FSubtitleCue;
struct FSoundAttenuationSettings;
struct FSoundWaveEnvelopeDataPerSound;
struct FSoundWaveSpectralDataPerSound;
struct FSoundWaveSpectralData;
class USoundSourceBus;
class USoundSubmixBase;
enum class EAudioFaderCurve : uint8;
enum class EAudioComponentPlayState : uint8;
class USoundBase;
#ifdef ENGINE_AudioComponent_generated_h
#error "AudioComponent.generated.h already included, missing '#pragma once' in AudioComponent.h"
#endif
#define ENGINE_AudioComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioComponentParam>();

#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_74_DELEGATE \
struct _Script_Engine_eventOnAudioMultiEnvelopeValue_Parms \
{ \
	float AverageEnvelopeValue; \
	float MaxEnvelope; \
	int32 NumWaveInstances; \
}; \
static inline void FOnAudioMultiEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMultiEnvelopeValue, const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances) \
{ \
	_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms Parms; \
	Parms.AverageEnvelopeValue=AverageEnvelopeValue; \
	Parms.MaxEnvelope=MaxEnvelope; \
	Parms.NumWaveInstances=NumWaveInstances; \
	OnAudioMultiEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_65_DELEGATE \
struct _Script_Engine_eventOnAudioSingleEnvelopeValue_Parms \
{ \
	const USoundWave* PlayingSoundWave; \
	float EnvelopeValue; \
}; \
static inline void FOnAudioSingleEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSingleEnvelopeValue, const USoundWave* PlayingSoundWave, const float EnvelopeValue) \
{ \
	_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms Parms; \
	Parms.PlayingSoundWave=PlayingSoundWave; \
	Parms.EnvelopeValue=EnvelopeValue; \
	OnAudioSingleEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_56_DELEGATE \
struct _Script_Engine_eventOnAudioPlaybackPercent_Parms \
{ \
	const USoundWave* PlayingSoundWave; \
	float PlaybackPercent; \
}; \
static inline void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent) \
{ \
	_Script_Engine_eventOnAudioPlaybackPercent_Parms Parms; \
	Parms.PlayingSoundWave=PlayingSoundWave; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnAudioPlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_50_DELEGATE \
struct _Script_Engine_eventOnQueueSubtitles_Parms \
{ \
	TArray<FSubtitleCue> Subtitles; \
	float CueDuration; \
}; \
static inline void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration) \
{ \
	_Script_Engine_eventOnQueueSubtitles_Parms Parms; \
	Parms.Subtitles=Subtitles; \
	Parms.CueDuration=CueDuration; \
	OnQueueSubtitles.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_44_DELEGATE \
static inline void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished) \
{ \
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_154_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_157_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h


#define FOREACH_ENUM_EAUDIOFADERCURVE(op) \
	op(EAudioFaderCurve::Linear) \
	op(EAudioFaderCurve::Logarithmic) \
	op(EAudioFaderCurve::SCurve) \
	op(EAudioFaderCurve::Sin) \
	op(EAudioFaderCurve::Count) 

enum class EAudioFaderCurve : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioFaderCurve>();

#define FOREACH_ENUM_EAUDIOCOMPONENTPLAYSTATE(op) \
	op(EAudioComponentPlayState::Playing) \
	op(EAudioComponentPlayState::Stopped) \
	op(EAudioComponentPlayState::Paused) \
	op(EAudioComponentPlayState::FadingIn) \
	op(EAudioComponentPlayState::FadingOut) \
	op(EAudioComponentPlayState::Count) 

enum class EAudioComponentPlayState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioComponentPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
