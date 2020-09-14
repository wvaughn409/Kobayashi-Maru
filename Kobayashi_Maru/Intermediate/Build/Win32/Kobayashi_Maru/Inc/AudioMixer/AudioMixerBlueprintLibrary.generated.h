// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
class USoundCue;
class UObject;
class USoundEffectSourcePresetChain;
struct FSourceEffectChainEntry;
class USoundSubmix;
enum class EFFTSize : uint8;
enum class EFFTPeakInterpolationMethod : uint8;
enum class EFFTWindowType : uint8;
enum class EAudioRecordingExportType : uint8;
class USoundEffectSubmixPreset;
#ifdef AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h
#error "AudioMixerBlueprintLibrary.generated.h already included, missing '#pragma once' in AudioMixerBlueprintLibrary.h"
#endif
#define AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h

#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_76_DELEGATE \
struct _Script_AudioMixer_eventOnSoundLoadComplete_Parms \
{ \
	const USoundWave* LoadedSoundWave; \
	bool WasCancelled; \
}; \
static inline void FOnSoundLoadComplete_DelegateWrapper(const FScriptDelegate& OnSoundLoadComplete, const USoundWave* LoadedSoundWave, bool WasCancelled) \
{ \
	_Script_AudioMixer_eventOnSoundLoadComplete_Parms Parms; \
	Parms.LoadedSoundWave=LoadedSoundWave; \
	Parms.WasCancelled=WasCancelled ? true : false; \
	OnSoundLoadComplete.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_SPARSE_DATA
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTrimAudioCache); \
	DECLARE_FUNCTION(execPrimeSoundCueForPlayback); \
	DECLARE_FUNCTION(execPrimeSoundForPlayback); \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain); \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry); \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain); \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain); \
	DECLARE_FUNCTION(execGetPhaseForFrequencies); \
	DECLARE_FUNCTION(execGetMagnitudeForFrequencies); \
	DECLARE_FUNCTION(execStopAnalyzingOutput); \
	DECLARE_FUNCTION(execStartAnalyzingOutput); \
	DECLARE_FUNCTION(execResumeRecordingOutput); \
	DECLARE_FUNCTION(execPauseRecordingOutput); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput); \
	DECLARE_FUNCTION(execClearSubmixEffects); \
	DECLARE_FUNCTION(execReplaceSoundEffectSubmix); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPresetAtIndex); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPreset); \
	DECLARE_FUNCTION(execAddSubmixEffect); \
	DECLARE_FUNCTION(execClearMasterSubmixEffects); \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect); \
	DECLARE_FUNCTION(execAddMasterSubmixEffect);


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTrimAudioCache); \
	DECLARE_FUNCTION(execPrimeSoundCueForPlayback); \
	DECLARE_FUNCTION(execPrimeSoundForPlayback); \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain); \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry); \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain); \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain); \
	DECLARE_FUNCTION(execGetPhaseForFrequencies); \
	DECLARE_FUNCTION(execGetMagnitudeForFrequencies); \
	DECLARE_FUNCTION(execStopAnalyzingOutput); \
	DECLARE_FUNCTION(execStartAnalyzingOutput); \
	DECLARE_FUNCTION(execResumeRecordingOutput); \
	DECLARE_FUNCTION(execPauseRecordingOutput); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput); \
	DECLARE_FUNCTION(execClearSubmixEffects); \
	DECLARE_FUNCTION(execReplaceSoundEffectSubmix); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPresetAtIndex); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPreset); \
	DECLARE_FUNCTION(execAddSubmixEffect); \
	DECLARE_FUNCTION(execClearMasterSubmixEffects); \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect); \
	DECLARE_FUNCTION(execAddMasterSubmixEffect);


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_79_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_SPARSE_DATA \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_SPARSE_DATA \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UAudioMixerBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h


#define FOREACH_ENUM_EAUDIOSPECTRUMTYPE(op) \
	op(EAudioSpectrumType::MagnitudeSpectrum) \
	op(EAudioSpectrumType::PowerSpectrum) 

enum class EAudioSpectrumType : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioSpectrumType>();

#define FOREACH_ENUM_EFFTWINDOWTYPE(op) \
	op(EFFTWindowType::None) \
	op(EFFTWindowType::Hamming) \
	op(EFFTWindowType::Hann) \
	op(EFFTWindowType::Blackman) 

enum class EFFTWindowType : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTWindowType>();

#define FOREACH_ENUM_EFFTPEAKINTERPOLATIONMETHOD(op) \
	op(EFFTPeakInterpolationMethod::NearestNeighbor) \
	op(EFFTPeakInterpolationMethod::Linear) \
	op(EFFTPeakInterpolationMethod::Quadratic) 

enum class EFFTPeakInterpolationMethod : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>();

#define FOREACH_ENUM_EFFTSIZE(op) \
	op(EFFTSize::DefaultSize) \
	op(EFFTSize::Min) \
	op(EFFTSize::Small) \
	op(EFFTSize::Medium) \
	op(EFFTSize::Large) \
	op(EFFTSize::Max) 

enum class EFFTSize : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
