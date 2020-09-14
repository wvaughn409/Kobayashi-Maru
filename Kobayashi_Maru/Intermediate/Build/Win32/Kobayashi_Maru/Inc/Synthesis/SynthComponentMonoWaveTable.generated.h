// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CurveInterpolationType : uint8;
enum class ESynthLFOType : uint8;
#ifdef SYNTHESIS_SynthComponentMonoWaveTable_generated_h
#error "SynthComponentMonoWaveTable.generated.h already included, missing '#pragma once' in SynthComponentMonoWaveTable.h"
#endif
#define SYNTHESIS_SynthComponentMonoWaveTable_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_134_DELEGATE \
static inline void FNumTablesChanged_DelegateWrapper(const FMulticastScriptDelegate& NumTablesChanged) \
{ \
	NumTablesChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_133_DELEGATE \
struct _Script_Synthesis_eventOnTableAltered_Parms \
{ \
	int32 TableIndex; \
}; \
static inline void FOnTableAltered_DelegateWrapper(const FMulticastScriptDelegate& OnTableAltered, int32 TableIndex) \
{ \
	_Script_Synthesis_eventOnTableAltered_Parms Parms; \
	Parms.TableIndex=TableIndex; \
	OnTableAltered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_RPC_WRAPPERS
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonoWaveTableSynthPreset(); \
	friend struct Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics; \
public: \
	DECLARE_CLASS(UMonoWaveTableSynthPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UMonoWaveTableSynthPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUMonoWaveTableSynthPreset(); \
	friend struct Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics; \
public: \
	DECLARE_CLASS(UMonoWaveTableSynthPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UMonoWaveTableSynthPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonoWaveTableSynthPreset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonoWaveTableSynthPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonoWaveTableSynthPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonoWaveTableSynthPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonoWaveTableSynthPreset(UMonoWaveTableSynthPreset&&); \
	NO_API UMonoWaveTableSynthPreset(const UMonoWaveTableSynthPreset&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonoWaveTableSynthPreset(UMonoWaveTableSynthPreset&&); \
	NO_API UMonoWaveTableSynthPreset(const UMonoWaveTableSynthPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonoWaveTableSynthPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonoWaveTableSynthPreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMonoWaveTableSynthPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_50_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UMonoWaveTableSynthPreset>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKeyFrameValuesForTable); \
	DECLARE_FUNCTION(execGetCurveTangent); \
	DECLARE_FUNCTION(execSetCurveTangent); \
	DECLARE_FUNCTION(execSetCurveInterpolationType); \
	DECLARE_FUNCTION(execSetCurveValue); \
	DECLARE_FUNCTION(execGetMaxTableIndex); \
	DECLARE_FUNCTION(execSetPositionEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetPositionEnvelopeDepth); \
	DECLARE_FUNCTION(execSetPositionEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetPositionEnvelopeInvert); \
	DECLARE_FUNCTION(execSetPositionEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetPositionEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetPositionEnvelopeDecayTime); \
	DECLARE_FUNCTION(execSetPositionEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetFilterEnvelopeDepth); \
	DECLARE_FUNCTION(execSetFilterEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetFilterEnvelopeInvert); \
	DECLARE_FUNCTION(execSetFilterEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetFilterEnvelopenDecayTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetAmpEnvelopeDepth); \
	DECLARE_FUNCTION(execSetAmpEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetAmpEnvelopeInvert); \
	DECLARE_FUNCTION(execSetAmpEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetAmpEnvelopeDecayTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetLowPassFilterResonance); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetPosLfoType); \
	DECLARE_FUNCTION(execSetPosLfoDepth); \
	DECLARE_FUNCTION(execSetPosLfoFrequency); \
	DECLARE_FUNCTION(execRefreshAllWaveTables); \
	DECLARE_FUNCTION(execRefreshWaveTable); \
	DECLARE_FUNCTION(execSetWaveTablePosition); \
	DECLARE_FUNCTION(execSetFrequencyWithMidiNote); \
	DECLARE_FUNCTION(execSetFrequencyPitchBend); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSustainPedalState); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn); \
	DECLARE_FUNCTION(execGetNumTableEntries);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKeyFrameValuesForTable); \
	DECLARE_FUNCTION(execGetCurveTangent); \
	DECLARE_FUNCTION(execSetCurveTangent); \
	DECLARE_FUNCTION(execSetCurveInterpolationType); \
	DECLARE_FUNCTION(execSetCurveValue); \
	DECLARE_FUNCTION(execGetMaxTableIndex); \
	DECLARE_FUNCTION(execSetPositionEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetPositionEnvelopeDepth); \
	DECLARE_FUNCTION(execSetPositionEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetPositionEnvelopeInvert); \
	DECLARE_FUNCTION(execSetPositionEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetPositionEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetPositionEnvelopeDecayTime); \
	DECLARE_FUNCTION(execSetPositionEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetFilterEnvelopeDepth); \
	DECLARE_FUNCTION(execSetFilterEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetFilterEnvelopeInvert); \
	DECLARE_FUNCTION(execSetFilterEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetFilterEnvelopenDecayTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetAmpEnvelopeDepth); \
	DECLARE_FUNCTION(execSetAmpEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetAmpEnvelopeInvert); \
	DECLARE_FUNCTION(execSetAmpEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetAmpEnvelopeDecayTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetLowPassFilterResonance); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetPosLfoType); \
	DECLARE_FUNCTION(execSetPosLfoDepth); \
	DECLARE_FUNCTION(execSetPosLfoFrequency); \
	DECLARE_FUNCTION(execRefreshAllWaveTables); \
	DECLARE_FUNCTION(execRefreshWaveTable); \
	DECLARE_FUNCTION(execSetWaveTablePosition); \
	DECLARE_FUNCTION(execSetFrequencyWithMidiNote); \
	DECLARE_FUNCTION(execSetFrequencyPitchBend); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSustainPedalState); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn); \
	DECLARE_FUNCTION(execGetNumTableEntries);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponentMonoWaveTable(); \
	friend struct Z_Construct_UClass_USynthComponentMonoWaveTable_Statics; \
public: \
	DECLARE_CLASS(USynthComponentMonoWaveTable, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthComponentMonoWaveTable)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUSynthComponentMonoWaveTable(); \
	friend struct Z_Construct_UClass_USynthComponentMonoWaveTable_Statics; \
public: \
	DECLARE_CLASS(USynthComponentMonoWaveTable, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthComponentMonoWaveTable)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthComponentMonoWaveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentMonoWaveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponentMonoWaveTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentMonoWaveTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponentMonoWaveTable(USynthComponentMonoWaveTable&&); \
	NO_API USynthComponentMonoWaveTable(const USynthComponentMonoWaveTable&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponentMonoWaveTable(USynthComponentMonoWaveTable&&); \
	NO_API USynthComponentMonoWaveTable(const USynthComponentMonoWaveTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponentMonoWaveTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentMonoWaveTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentMonoWaveTable)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPreset() { return STRUCT_OFFSET(USynthComponentMonoWaveTable, CurrentPreset); }


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_145_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynthComponentMonoWaveTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h


#define FOREACH_ENUM_CURVEINTERPOLATIONTYPE(op) \
	op(CurveInterpolationType::AUTOINTERP) \
	op(CurveInterpolationType::LINEAR) \
	op(CurveInterpolationType::CONSTANT) 

enum class CurveInterpolationType : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<CurveInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
