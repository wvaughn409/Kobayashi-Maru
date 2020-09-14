// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundSubmixSend_generated_h
#error "SoundSubmixSend.generated.h already included, missing '#pragma once' in SoundSubmixSend.h"
#endif
#define ENGINE_SoundSubmixSend_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundSubmixSendInfo>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_17_DELEGATE \
struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms \
{ \
	TArray<float> Envelope; \
}; \
static inline void FOnSubmixEnvelopeBP_DelegateWrapper(const FScriptDelegate& OnSubmixEnvelopeBP, TArray<float> const& Envelope) \
{ \
	_Script_Engine_eventOnSubmixEnvelopeBP_Parms Parms; \
	Parms.Envelope=Envelope; \
	OnSubmixEnvelopeBP.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h


#define FOREACH_ENUM_ESENDLEVELCONTROLMETHOD(op) \
	op(ESendLevelControlMethod::Linear) \
	op(ESendLevelControlMethod::CustomCurve) \
	op(ESendLevelControlMethod::Manual) 

enum class ESendLevelControlMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESendLevelControlMethod>();

#define FOREACH_ENUM_EAUDIORECORDINGEXPORTTYPE(op) \
	op(EAudioRecordingExportType::SoundWave) \
	op(EAudioRecordingExportType::WavFile) 

enum class EAudioRecordingExportType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
