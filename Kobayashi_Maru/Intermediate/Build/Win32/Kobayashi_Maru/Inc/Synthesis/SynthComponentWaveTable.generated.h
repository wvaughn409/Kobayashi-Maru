// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESamplePlayerSeekType : uint8;
class USoundWave;
#ifdef SYNTHESIS_SynthComponentWaveTable_generated_h
#error "SynthComponentWaveTable.generated.h already included, missing '#pragma once' in SynthComponentWaveTable.h"
#endif
#define SYNTHESIS_SynthComponentWaveTable_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_27_DELEGATE \
struct _Script_Synthesis_eventOnSamplePlaybackProgress_Parms \
{ \
	float ProgressPercent; \
	float ProgressTimeSeconds; \
}; \
static inline void FOnSamplePlaybackProgress_DelegateWrapper(const FMulticastScriptDelegate& OnSamplePlaybackProgress, float ProgressPercent, float ProgressTimeSeconds) \
{ \
	_Script_Synthesis_eventOnSamplePlaybackProgress_Parms Parms; \
	Parms.ProgressPercent=ProgressPercent; \
	Parms.ProgressTimeSeconds=ProgressTimeSeconds; \
	OnSamplePlaybackProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_24_DELEGATE \
static inline void FOnSampleLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnSampleLoaded) \
{ \
	OnSampleLoaded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressPercent); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressTime); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetScrubTimeWidth); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetSoundWave);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressPercent); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressTime); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetScrubTimeWidth); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetSoundWave);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthSamplePlayer(); \
	friend struct Z_Construct_UClass_USynthSamplePlayer_Statics; \
public: \
	DECLARE_CLASS(USynthSamplePlayer, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthSamplePlayer)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSynthSamplePlayer(); \
	friend struct Z_Construct_UClass_USynthSamplePlayer_Statics; \
public: \
	DECLARE_CLASS(USynthSamplePlayer, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthSamplePlayer)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSamplePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSamplePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSamplePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSamplePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSamplePlayer(USynthSamplePlayer&&); \
	NO_API USynthSamplePlayer(const USynthSamplePlayer&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSamplePlayer(USynthSamplePlayer&&); \
	NO_API USynthSamplePlayer(const USynthSamplePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSamplePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSamplePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSamplePlayer)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynthSamplePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h


#define FOREACH_ENUM_ESAMPLEPLAYERSEEKTYPE(op) \
	op(ESamplePlayerSeekType::FromBeginning) \
	op(ESamplePlayerSeekType::FromCurrentPosition) \
	op(ESamplePlayerSeekType::FromEnd) \
	op(ESamplePlayerSeekType::Count) 

enum class ESamplePlayerSeekType : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ESamplePlayerSeekType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
