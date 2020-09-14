// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModularSynthPresetBank;
struct FModularSynthPreset;
struct FPatchId;
enum class ESynth1PatchSource : uint8;
struct FSynth1PatchCable;
enum class ESynthStereoDelayMode : uint8;
enum class ESynthFilterAlgorithm : uint8;
enum class ESynthFilterType : uint8;
enum class ESynthModEnvBiasPatch : uint8;
enum class ESynthModEnvPatch : uint8;
enum class ESynthLFOPatchType : uint8;
enum class ESynthLFOMode : uint8;
enum class ESynthLFOType : uint8;
enum class ESynth1OscType : uint8;
#ifdef SYNTHESIS_EpicSynth1Component_generated_h
#error "EpicSynth1Component.generated.h already included, missing '#pragma once' in EpicSynth1Component.h"
#endif
#define SYNTHESIS_EpicSynth1Component_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FModularSynthPresetBankEntry>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularSynthPreset_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FModularSynthPreset>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FEpicSynth1Patch>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_RPC_WRAPPERS
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthPresetBank(); \
	friend struct Z_Construct_UClass_UModularSynthPresetBank_Statics; \
public: \
	DECLARE_CLASS(UModularSynthPresetBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthPresetBank)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_INCLASS \
private: \
	static void StaticRegisterNativesUModularSynthPresetBank(); \
	friend struct Z_Construct_UClass_UModularSynthPresetBank_Statics; \
public: \
	DECLARE_CLASS(UModularSynthPresetBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthPresetBank)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthPresetBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthPresetBank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthPresetBank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthPresetBank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthPresetBank(UModularSynthPresetBank&&); \
	NO_API UModularSynthPresetBank(const UModularSynthPresetBank&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthPresetBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthPresetBank(UModularSynthPresetBank&&); \
	NO_API UModularSynthPresetBank(const UModularSynthPresetBank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthPresetBank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthPresetBank); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthPresetBank)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_354_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UModularSynthPresetBank>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddModularSynthPresetToBankAsset);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddModularSynthPresetToBankAsset);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthLibrary(); \
	friend struct Z_Construct_UClass_UModularSynthLibrary_Statics; \
public: \
	DECLARE_CLASS(UModularSynthLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthLibrary)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_INCLASS \
private: \
	static void StaticRegisterNativesUModularSynthLibrary(); \
	friend struct Z_Construct_UClass_UModularSynthLibrary_Statics; \
public: \
	DECLARE_CLASS(UModularSynthLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthLibrary)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthLibrary(UModularSynthLibrary&&); \
	NO_API UModularSynthLibrary(const UModularSynthLibrary&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthLibrary(UModularSynthLibrary&&); \
	NO_API UModularSynthLibrary(const UModularSynthLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthLibrary)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_365_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_368_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UModularSynthLibrary>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnablePatch); \
	DECLARE_FUNCTION(execCreatePatch); \
	DECLARE_FUNCTION(execSetSynthPreset); \
	DECLARE_FUNCTION(execSetChorusFrequency); \
	DECLARE_FUNCTION(execSetChorusFeedback); \
	DECLARE_FUNCTION(execSetChorusDepth); \
	DECLARE_FUNCTION(execSetChorusEnabled); \
	DECLARE_FUNCTION(execSetStereoDelayRatio); \
	DECLARE_FUNCTION(execSetStereoDelayWetlevel); \
	DECLARE_FUNCTION(execSetStereoDelayFeedback); \
	DECLARE_FUNCTION(execSetStereoDelayTime); \
	DECLARE_FUNCTION(execSetStereoDelayMode); \
	DECLARE_FUNCTION(execSetStereoDelayIsEnabled); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterFrequency); \
	DECLARE_FUNCTION(execSetEnableRetrigger); \
	DECLARE_FUNCTION(execSetEnableLegato); \
	DECLARE_FUNCTION(execSetModEnvReleaseTime); \
	DECLARE_FUNCTION(execSetModEnvSustainGain); \
	DECLARE_FUNCTION(execSetModEnvDecayTime); \
	DECLARE_FUNCTION(execSetModEnvAttackTime); \
	DECLARE_FUNCTION(execSetModEnvDepth); \
	DECLARE_FUNCTION(execSetModEnvBiasInvert); \
	DECLARE_FUNCTION(execSetModEnvInvert); \
	DECLARE_FUNCTION(execSetModEnvBiasPatch); \
	DECLARE_FUNCTION(execSetModEnvPatch); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetGainDb); \
	DECLARE_FUNCTION(execSetLFOPatch); \
	DECLARE_FUNCTION(execSetLFOMode); \
	DECLARE_FUNCTION(execSetLFOType); \
	DECLARE_FUNCTION(execSetLFOGainMod); \
	DECLARE_FUNCTION(execSetLFOGain); \
	DECLARE_FUNCTION(execSetLFOFrequencyMod); \
	DECLARE_FUNCTION(execSetLFOFrequency); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execSetOscSync); \
	DECLARE_FUNCTION(execSetEnableUnison); \
	DECLARE_FUNCTION(execSetOscPulsewidth); \
	DECLARE_FUNCTION(execSetPortamento); \
	DECLARE_FUNCTION(execSetPitchBend); \
	DECLARE_FUNCTION(execSetOscCents); \
	DECLARE_FUNCTION(execSetOscSemitones); \
	DECLARE_FUNCTION(execSetOscOctave); \
	DECLARE_FUNCTION(execSetOscType); \
	DECLARE_FUNCTION(execSetOscFrequencyMod); \
	DECLARE_FUNCTION(execSetOscGainMod); \
	DECLARE_FUNCTION(execSetOscGain); \
	DECLARE_FUNCTION(execSetEnablePolyphony); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnablePatch); \
	DECLARE_FUNCTION(execCreatePatch); \
	DECLARE_FUNCTION(execSetSynthPreset); \
	DECLARE_FUNCTION(execSetChorusFrequency); \
	DECLARE_FUNCTION(execSetChorusFeedback); \
	DECLARE_FUNCTION(execSetChorusDepth); \
	DECLARE_FUNCTION(execSetChorusEnabled); \
	DECLARE_FUNCTION(execSetStereoDelayRatio); \
	DECLARE_FUNCTION(execSetStereoDelayWetlevel); \
	DECLARE_FUNCTION(execSetStereoDelayFeedback); \
	DECLARE_FUNCTION(execSetStereoDelayTime); \
	DECLARE_FUNCTION(execSetStereoDelayMode); \
	DECLARE_FUNCTION(execSetStereoDelayIsEnabled); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterFrequency); \
	DECLARE_FUNCTION(execSetEnableRetrigger); \
	DECLARE_FUNCTION(execSetEnableLegato); \
	DECLARE_FUNCTION(execSetModEnvReleaseTime); \
	DECLARE_FUNCTION(execSetModEnvSustainGain); \
	DECLARE_FUNCTION(execSetModEnvDecayTime); \
	DECLARE_FUNCTION(execSetModEnvAttackTime); \
	DECLARE_FUNCTION(execSetModEnvDepth); \
	DECLARE_FUNCTION(execSetModEnvBiasInvert); \
	DECLARE_FUNCTION(execSetModEnvInvert); \
	DECLARE_FUNCTION(execSetModEnvBiasPatch); \
	DECLARE_FUNCTION(execSetModEnvPatch); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetGainDb); \
	DECLARE_FUNCTION(execSetLFOPatch); \
	DECLARE_FUNCTION(execSetLFOMode); \
	DECLARE_FUNCTION(execSetLFOType); \
	DECLARE_FUNCTION(execSetLFOGainMod); \
	DECLARE_FUNCTION(execSetLFOGain); \
	DECLARE_FUNCTION(execSetLFOFrequencyMod); \
	DECLARE_FUNCTION(execSetLFOFrequency); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execSetOscSync); \
	DECLARE_FUNCTION(execSetEnableUnison); \
	DECLARE_FUNCTION(execSetOscPulsewidth); \
	DECLARE_FUNCTION(execSetPortamento); \
	DECLARE_FUNCTION(execSetPitchBend); \
	DECLARE_FUNCTION(execSetOscCents); \
	DECLARE_FUNCTION(execSetOscSemitones); \
	DECLARE_FUNCTION(execSetOscOctave); \
	DECLARE_FUNCTION(execSetOscType); \
	DECLARE_FUNCTION(execSetOscFrequencyMod); \
	DECLARE_FUNCTION(execSetOscGainMod); \
	DECLARE_FUNCTION(execSetOscGain); \
	DECLARE_FUNCTION(execSetEnablePolyphony); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthComponent(); \
	friend struct Z_Construct_UClass_UModularSynthComponent_Statics; \
public: \
	DECLARE_CLASS(UModularSynthComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthComponent)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_INCLASS \
private: \
	static void StaticRegisterNativesUModularSynthComponent(); \
	friend struct Z_Construct_UClass_UModularSynthComponent_Statics; \
public: \
	DECLARE_CLASS(UModularSynthComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthComponent)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthComponent(UModularSynthComponent&&); \
	NO_API UModularSynthComponent(const UModularSynthComponent&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthComponent(UModularSynthComponent&&); \
	NO_API UModularSynthComponent(const UModularSynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthComponent)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_380_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_383_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UModularSynthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
