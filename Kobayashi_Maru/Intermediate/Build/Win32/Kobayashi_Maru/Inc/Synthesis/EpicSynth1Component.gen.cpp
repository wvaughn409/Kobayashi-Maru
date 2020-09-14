// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/EpicSynth1Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicSynth1Component() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPresetBankEntry();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPreset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FEpicSynth1Patch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvPatch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOPatchType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOMode();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1OscType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth1PatchCable();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchSource();
	SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthPresetBank_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthPresetBank();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthLibrary_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthComponent_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthComponent();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FPatchId();
// End Cross Module References
class UScriptStruct* FModularSynthPresetBankEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry, Z_Construct_UPackage__Script_Synthesis(), TEXT("ModularSynthPresetBankEntry"), sizeof(FModularSynthPresetBankEntry), Get_Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FModularSynthPresetBankEntry>()
{
	return FModularSynthPresetBankEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModularSynthPresetBankEntry(FModularSynthPresetBankEntry::StaticStruct, TEXT("/Script/Synthesis"), TEXT("ModularSynthPresetBankEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFModularSynthPresetBankEntry
{
	FScriptStruct_Synthesis_StaticRegisterNativesFModularSynthPresetBankEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModularSynthPresetBankEntry")),new UScriptStruct::TCppStructOps<FModularSynthPresetBankEntry>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFModularSynthPresetBankEntry;
	struct Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularSynthPresetBankEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPresetBankEntry, Preset), Z_Construct_UScriptStruct_FModularSynthPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPresetBankEntry, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::NewProp_PresetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"ModularSynthPresetBankEntry",
		sizeof(FModularSynthPresetBankEntry),
		alignof(FModularSynthPresetBankEntry),
		Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPresetBankEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModularSynthPresetBankEntry"), sizeof(FModularSynthPresetBankEntry), Get_Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Hash() { return 3246047994U; }
class UScriptStruct* FModularSynthPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FModularSynthPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularSynthPreset, Z_Construct_UPackage__Script_Synthesis(), TEXT("ModularSynthPreset"), sizeof(FModularSynthPreset), Get_Z_Construct_UScriptStruct_FModularSynthPreset_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FModularSynthPreset>()
{
	return FModularSynthPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModularSynthPreset(FModularSynthPreset::StaticStruct, TEXT("/Script/Synthesis"), TEXT("ModularSynthPreset"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFModularSynthPreset
{
	FScriptStruct_Synthesis_StaticRegisterNativesFModularSynthPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModularSynthPreset")),new UScriptStruct::TCppStructOps<FModularSynthPreset>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFModularSynthPreset;
	struct Z_Construct_UScriptStruct_FModularSynthPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Patches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Patches;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Patches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChorusFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChorusFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChorusFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChorusFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChorusDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChorusDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChorusEnabled_MetaData[];
#endif
		static void NewProp_bChorusEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChorusEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoDelayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoDelayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoDelayWetlevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoDelayWetlevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoDelayFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoDelayFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoDelayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StereoDelayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StereoDelayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStereoDelayEnabled_MetaData[];
#endif
		static void NewProp_bStereoDelayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStereoDelayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterAlgorithm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterAlgorithm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterAlgorithm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRetrigger_MetaData[];
#endif
		static void NewProp_bRetrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRetrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegato_MetaData[];
#endif
		static void NewProp_bLegato_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegato;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeSustainGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeSustainGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeDecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeDecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationEnvelopeDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationEnvelopeDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertModulationEnvelopeBias_MetaData[];
#endif
		static void NewProp_bInvertModulationEnvelopeBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertModulationEnvelopeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertModulationEnvelope_MetaData[];
#endif
		static void NewProp_bInvertModulationEnvelope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertModulationEnvelope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModEnvBiasPatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModEnvBiasPatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModEnvBiasPatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModEnvPatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModEnvPatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModEnvPatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO2PatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFO2PatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFO2PatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO2Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFO2Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFO2Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO2Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFO2Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFO2Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO2Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFO2Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO2Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFO2Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO1PatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFO1PatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFO1PatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO1Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFO1Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFO1Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO1Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFO1Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFO1Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO1Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFO1Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFO1Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFO1Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOscillatorSync_MetaData[];
#endif
		static void NewProp_bEnableOscillatorSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOscillatorSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUnison_MetaData[];
#endif
		static void NewProp_bEnableUnison_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUnison;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Portamento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Portamento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc2PulseWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc2PulseWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc2Cents_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc2Cents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc2Semitones_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc2Semitones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc2Octave_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc2Octave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc2Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc2Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc2Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Osc2Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Osc2Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc1PulseWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc1PulseWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc1Cents_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc1Cents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc1Semitones_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc1Semitones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc1Octave_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc1Octave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc1Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Osc1Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Osc1Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Osc1Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Osc1Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePolyphony_MetaData[];
#endif
		static void NewProp_bEnablePolyphony_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePolyphony;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularSynthPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The modular synth patch chords to use for the synth. Allows routing the LFO1/LFO2 and Modulation Envelope to any patchable destination. \n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modular synth patch chords to use for the synth. Allows routing the LFO1/LFO2 and Modulation Envelope to any patchable destination." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches = { "Patches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Patches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_Inner = { "Patches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEpicSynth1Patch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The chorus LFO frequency [0.0, 20.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The chorus LFO frequency [0.0, 20.0]" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency = { "ChorusFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ChorusFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of feedback in the chorus effect [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of feedback in the chorus effect [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback = { "ChorusFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ChorusFeedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The depth of the chorus effect [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth = { "ChorusDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ChorusDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not the chorus effect is enabled\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not the chorus effect is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bChorusEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled = { "bChorusEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The ratio between left and right stereo delay lines (wider value is more separation) [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The ratio between left and right stereo delay lines (wider value is more separation) [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio = { "StereoDelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output wet level to use for the stereo delay time [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output wet level to use for the stereo delay time [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel = { "StereoDelayWetlevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayWetlevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of feedback in the stereo delay line [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of feedback in the stereo delay line [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback = { "StereoDelayFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayFeedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The stereo delay time (in ms) [0.0, 2000.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The stereo delay time (in ms) [0.0, 2000.0]" },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime = { "StereoDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The stereo delay mode of the synth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The stereo delay mode of the synth" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode = { "StereoDelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, StereoDelayMode), Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not stereo delay is enabled on the synth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not stereo delay is enabled on the synth" },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bStereoDelayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled = { "bStereoDelayEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The output filter circuit/algorithm type (one-pole ladder, ladder, state-variable)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter circuit/algorithm type (one-pole ladder, ladder, state-variable)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm = { "FilterAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, FilterAlgorithm), Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The output filter type (lowpass, highpass, bandpass, bandstop)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter type (lowpass, highpass, bandpass, bandstop)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, FilterType), Z_Construct_UEnum_Synthesis_ESynthFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The output filter resonance (Q) [0.5, 10]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter resonance (Q) [0.5, 10]" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output filter cutoff frequency (hz) [0.0, 20000.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The output filter cutoff frequency (hz) [0.0, 20000.0]" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, FilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to use retrigger mode.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to use retrigger mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bRetrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger = { "bRetrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to use legato mode.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to use legato mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bLegato = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato = { "bLegato", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope release time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope release time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime = { "ModulationEnvelopeReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope sustain gain (linear gain) [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope sustain gain (linear gain) [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain = { "ModulationEnvelopeSustainGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeSustainGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope decay time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope decay time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime = { "ModulationEnvelopeDecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeDecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The modulation envelope attack time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The modulation envelope attack time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime = { "ModulationEnvelopeAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeAttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The \"depth\" (i.e. how much) modulation envelope to use. This scales the modulation envelope output. [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The \"depth\" (i.e. how much) modulation envelope to use. This scales the modulation envelope output. [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth = { "ModulationEnvelopeDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModulationEnvelopeDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to invert the modulation envelope bias output\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to invert the modulation envelope bias output" },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bInvertModulationEnvelopeBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias = { "bInvertModulationEnvelopeBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to invert the modulation envelope\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to invert the modulation envelope" },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bInvertModulationEnvelope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope = { "bInvertModulationEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type for the envelope modulator bias output. Bias is when the envelope output is offset by the sustain gain.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type for the envelope modulator bias output. Bias is when the envelope output is offset by the sustain gain." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType = { "ModEnvBiasPatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModEnvBiasPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type for the envelope modulator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type for the envelope modulator" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType = { "ModEnvPatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ModEnvPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvPatch, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope release time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope release time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope sustain amount (linear gain) [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope sustain amount (linear gain) [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, SustainGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope decay time (in ms)[0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope decay time (in ms)[0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amplitude envelope attack time (in ms) [0.0, 10000]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amplitude envelope attack time (in ms) [0.0, 10000]" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// The overall gain to use for the synthesizer in dB [-90.0, 20.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The overall gain to use for the synthesizer in dB [-90.0, 20.0]" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type to use for LFO 2 (you can route this to any patchable parameter using the Patches parameter)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type to use for LFO 2 (you can route this to any patchable parameter using the Patches parameter)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType = { "LFO2PatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2PatchType), Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The mode to use for LFO 2\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The mode to use for LFO 2" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode = { "LFO2Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Mode), Z_Construct_UEnum_Synthesis_ESynthLFOMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The type of LFO to use for LFO 2\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The type of LFO to use for LFO 2" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type = { "LFO2Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Type), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain to use for LFO 2 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain to use for LFO 2 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain = { "LFO2Gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The frequency to use for LFO 2 (in hz) [0.0, 50.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The frequency to use for LFO 2 (in hz) [0.0, 50.0]" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency = { "LFO2Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO2Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The built-in patch type to use for LFO 1 (you can route this to any patchable parameter using the Patches parameter)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The built-in patch type to use for LFO 1 (you can route this to any patchable parameter using the Patches parameter)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType = { "LFO1PatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1PatchType), Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The mode to use for LFO 1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The mode to use for LFO 1" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode = { "LFO1Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Mode), Z_Construct_UEnum_Synthesis_ESynthLFOMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The type of LFO to use for LFO 1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The type of LFO to use for LFO 1" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type = { "LFO1Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Type), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain to use for LFO 1 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain to use for LFO 1 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain = { "LFO1Gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The frequency to use for LFO 1 (in hz) [0.0, 50.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The frequency to use for LFO 1 (in hz) [0.0, 50.0]" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency = { "LFO1Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, LFO1Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// The stereo pan to use. 0.0 is center. -1.0 is left, 1.0 is right.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The stereo pan to use. 0.0 is center. -1.0 is left, 1.0 is right." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan = { "Pan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Pan), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of stereo spread to use between oscillator 1 and oscillator 2 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of stereo spread to use between oscillator 1 and oscillator 2 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not oscillator sync is enabled. Oscillator sync forces oscillator 2's phase to align with oscillator 1's phase.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not oscillator sync is enabled. Oscillator sync forces oscillator 2's phase to align with oscillator 1's phase." },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bEnableOscillatorSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync = { "bEnableOscillatorSync", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Enables forcing the oscillators to have no stereo spread.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Enables forcing the oscillators to have no stereo spread." },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bEnableUnison = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison = { "bEnableUnison", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of portamento to use, which is the amount of pitch sliding from current note to next [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The amount of portamento to use, which is the amount of pitch sliding from current note to next [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento = { "Portamento", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Portamento), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The pulsewidth of oscillator 2 (when using a square wave type oscillator). [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The pulsewidth of oscillator 2 (when using a square wave type oscillator). [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth = { "Osc2PulseWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2PulseWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "// The cents (hundreds of a semitone) of oscillator 2. [-100.0, 100.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The cents (hundreds of a semitone) of oscillator 2. [-100.0, 100.0]" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents = { "Osc2Cents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Cents), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The semi-tones of oscillator 2. [-12.0, 12.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The semi-tones of oscillator 2. [-12.0, 12.0]" },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones = { "Osc2Semitones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Semitones), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "-8.0" },
		{ "Comment", "// The octave of oscillator 2. [-8.0, 8.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The octave of oscillator 2. [-8.0, 8.0]" },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave = { "Osc2Octave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Octave), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain of oscillator 2 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain of oscillator 2 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain = { "Osc2Gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// What type of oscillator to use for oscillator 2\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "What type of oscillator to use for oscillator 2" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type = { "Osc2Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc2Type), Z_Construct_UEnum_Synthesis_ESynth1OscType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The pulsewidth of oscillator 1 (when using a square wave type oscillator). [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The pulsewidth of oscillator 1 (when using a square wave type oscillator). [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth = { "Osc1PulseWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1PulseWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "// The cents (hundreds of a semitone) of oscillator 1. [-100.0, 100.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The cents (hundreds of a semitone) of oscillator 1. [-100.0, 100.0]" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents = { "Osc1Cents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Cents), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The semi-tones of oscillator 1. [-12.0, 12.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The semi-tones of oscillator 1. [-12.0, 12.0]" },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones = { "Osc1Semitones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Semitones), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "-8.0" },
		{ "Comment", "// The octave of oscillator 1. [-8.0, 8.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The octave of oscillator 1. [-8.0, 8.0]" },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave = { "Osc1Octave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Octave), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear gain of oscillator 1 [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The linear gain of oscillator 1 [0.0, 1.0]" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain = { "Osc1Gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// What type of oscillator to use for oscillator 1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "What type of oscillator to use for oscillator 1" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type = { "Osc1Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularSynthPreset, Osc1Type), Z_Construct_UEnum_Synthesis_ESynth1OscType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Whether or not to allow multiple synth voices.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Whether or not to allow multiple synth voices." },
	};
#endif
	void Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_SetBit(void* Obj)
	{
		((FModularSynthPreset*)Obj)->bEnablePolyphony = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony = { "bEnablePolyphony", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModularSynthPreset), &Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Patches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ChorusDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bChorusEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayWetlevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_StereoDelayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bStereoDelayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterAlgorithm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_FilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bRetrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bLegato,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeSustainGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModulationEnvelopeDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelopeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bInvertModulationEnvelope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvBiasPatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ModEnvPatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_ReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_SustainGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_DecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_AttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_GainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2PatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO2Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1PatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_LFO1Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Pan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableOscillatorSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnableUnison,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Portamento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2PulseWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Cents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Semitones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Octave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc2Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1PulseWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Cents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Semitones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Octave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_Osc1Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularSynthPreset_Statics::NewProp_bEnablePolyphony,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularSynthPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ModularSynthPreset",
		sizeof(FModularSynthPreset),
		alignof(FModularSynthPreset),
		Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularSynthPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModularSynthPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModularSynthPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModularSynthPreset"), sizeof(FModularSynthPreset), Get_Z_Construct_UScriptStruct_FModularSynthPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModularSynthPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModularSynthPreset_Hash() { return 3577994182U; }
class UScriptStruct* FEpicSynth1Patch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FEpicSynth1Patch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicSynth1Patch, Z_Construct_UPackage__Script_Synthesis(), TEXT("EpicSynth1Patch"), sizeof(FEpicSynth1Patch), Get_Z_Construct_UScriptStruct_FEpicSynth1Patch_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FEpicSynth1Patch>()
{
	return FEpicSynth1Patch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicSynth1Patch(FEpicSynth1Patch::StaticStruct, TEXT("/Script/Synthesis"), TEXT("EpicSynth1Patch"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFEpicSynth1Patch
{
	FScriptStruct_Synthesis_StaticRegisterNativesFEpicSynth1Patch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicSynth1Patch")),new UScriptStruct::TCppStructOps<FEpicSynth1Patch>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFEpicSynth1Patch;
	struct Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatchCables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatchCables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatchCables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatchSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PatchSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PatchSource_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicSynth1Patch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Patch cables to patch destinations from the patch source.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Patch cables to patch destinations from the patch source." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables = { "PatchCables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicSynth1Patch, PatchCables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_Inner = { "PatchCables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSynth1PatchCable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// A modular synth patch source (e.g. LFO1/LFO2/Modulation Envelope)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "A modular synth patch source (e.g. LFO1/LFO2/Modulation Envelope)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource = { "PatchSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicSynth1Patch, PatchSource), Z_Construct_UEnum_Synthesis_ESynth1PatchSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchCables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::NewProp_PatchSource_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"EpicSynth1Patch",
		sizeof(FEpicSynth1Patch),
		alignof(FEpicSynth1Patch),
		Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEpicSynth1Patch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicSynth1Patch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicSynth1Patch"), sizeof(FEpicSynth1Patch), Get_Z_Construct_UScriptStruct_FEpicSynth1Patch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicSynth1Patch_Hash() { return 16212776U; }
	void UModularSynthPresetBank::StaticRegisterNativesUModularSynthPresetBank()
	{
	}
	UClass* Z_Construct_UClass_UModularSynthPresetBank_NoRegister()
	{
		return UModularSynthPresetBank::StaticClass();
	}
	struct Z_Construct_UClass_UModularSynthPresetBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModularSynthPresetBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularSynthPresetBank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "IncludePath", "SynthComponents/EpicSynth1Component.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModularSynthPresetBank, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModularSynthPresetBankEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSynthPresetBank_Statics::NewProp_Presets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModularSynthPresetBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSynthPresetBank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModularSynthPresetBank_Statics::ClassParams = {
		&UModularSynthPresetBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModularSynthPresetBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthPresetBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModularSynthPresetBank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModularSynthPresetBank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModularSynthPresetBank, 2161198858);
	template<> SYNTHESIS_API UClass* StaticClass<UModularSynthPresetBank>()
	{
		return UModularSynthPresetBank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModularSynthPresetBank(Z_Construct_UClass_UModularSynthPresetBank, &UModularSynthPresetBank::StaticClass, TEXT("/Script/Synthesis"), TEXT("UModularSynthPresetBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSynthPresetBank);
	DEFINE_FUNCTION(UModularSynthLibrary::execAddModularSynthPresetToBankAsset)
	{
		P_GET_OBJECT(UModularSynthPresetBank,Z_Param_InBank);
		P_GET_STRUCT_REF(FModularSynthPreset,Z_Param_Out_Preset);
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModularSynthLibrary::AddModularSynthPresetToBankAsset(Z_Param_InBank,Z_Param_Out_Preset,Z_Param_PresetName);
		P_NATIVE_END;
	}
	void UModularSynthLibrary::StaticRegisterNativesUModularSynthLibrary()
	{
		UClass* Class = UModularSynthLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddModularSynthPresetToBankAsset", &UModularSynthLibrary::execAddModularSynthPresetToBankAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics
	{
		struct ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms
		{
			UModularSynthPresetBank* InBank;
			FModularSynthPreset Preset;
			FString PresetName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InBank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms, Preset), Z_Construct_UScriptStruct_FModularSynthPreset, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_InBank = { "InBank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms, InBank), Z_Construct_UClass_UModularSynthPresetBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_PresetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::NewProp_InBank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synthesis" },
		{ "Comment", "// Adds the modular synth preset to the bank asset in the content browser. Only call during editor.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Adds the modular synth preset to the bank asset in the content browser. Only call during editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthLibrary, nullptr, "AddModularSynthPresetToBankAsset", nullptr, nullptr, sizeof(ModularSynthLibrary_eventAddModularSynthPresetToBankAsset_Parms), Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModularSynthLibrary_NoRegister()
	{
		return UModularSynthLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModularSynthLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModularSynthLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModularSynthLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularSynthLibrary_AddModularSynthPresetToBankAsset, "AddModularSynthPresetToBankAsset" }, // 2919892285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularSynthLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SynthComponents/EpicSynth1Component.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModularSynthLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSynthLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModularSynthLibrary_Statics::ClassParams = {
		&UModularSynthLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModularSynthLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModularSynthLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModularSynthLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModularSynthLibrary, 1872686993);
	template<> SYNTHESIS_API UClass* StaticClass<UModularSynthLibrary>()
	{
		return UModularSynthLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModularSynthLibrary(Z_Construct_UClass_UModularSynthLibrary, &UModularSynthLibrary::StaticClass, TEXT("/Script/Synthesis"), TEXT("UModularSynthLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSynthLibrary);
	DEFINE_FUNCTION(UModularSynthComponent::execSetEnablePatch)
	{
		P_GET_STRUCT(FPatchId,Z_Param_PatchId);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnablePatch(Z_Param_PatchId,Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execCreatePatch)
	{
		P_GET_ENUM(ESynth1PatchSource,Z_Param_PatchSource);
		P_GET_TARRAY_REF(FSynth1PatchCable,Z_Param_Out_PatchCables);
		P_GET_UBOOL(Z_Param_bEnableByDefault);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPatchId*)Z_Param__Result=P_THIS->CreatePatch(ESynth1PatchSource(Z_Param_PatchSource),Z_Param_Out_PatchCables,Z_Param_bEnableByDefault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetSynthPreset)
	{
		P_GET_STRUCT_REF(FModularSynthPreset,Z_Param_Out_SynthPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSynthPreset(Z_Param_Out_SynthPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetChorusFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChorusFrequency(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetChorusFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChorusFeedback(Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetChorusDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChorusDepth(Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetChorusEnabled)
	{
		P_GET_UBOOL(Z_Param_EnableChorus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChorusEnabled(Z_Param_EnableChorus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoDelayRatio(Z_Param_DelayRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayWetlevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayWetlevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoDelayWetlevel(Z_Param_DelayWetlevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayFeedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoDelayFeedback(Z_Param_DelayFeedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoDelayTime(Z_Param_DelayTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayMode)
	{
		P_GET_ENUM(ESynthStereoDelayMode,Z_Param_StereoDelayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoDelayMode(ESynthStereoDelayMode(Z_Param_StereoDelayMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetStereoDelayIsEnabled)
	{
		P_GET_UBOOL(Z_Param_StereoDelayEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoDelayIsEnabled(Z_Param_StereoDelayEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetFilterAlgorithm)
	{
		P_GET_ENUM(ESynthFilterAlgorithm,Z_Param_FilterAlgorithm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterAlgorithm(ESynthFilterAlgorithm(Z_Param_FilterAlgorithm));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetFilterType)
	{
		P_GET_ENUM(ESynthFilterType,Z_Param_FilterType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterType(ESynthFilterType(Z_Param_FilterType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetFilterQMod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FilterQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterQMod(Z_Param_FilterQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetFilterQ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FilterQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterQ(Z_Param_FilterQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetFilterFrequencyMod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FilterFrequencyHz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterFrequencyMod(Z_Param_FilterFrequencyHz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetFilterFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FilterFrequencyHz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterFrequency(Z_Param_FilterFrequencyHz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetEnableRetrigger)
	{
		P_GET_UBOOL(Z_Param_RetriggerEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableRetrigger(Z_Param_RetriggerEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetEnableLegato)
	{
		P_GET_UBOOL(Z_Param_LegatoEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableLegato(Z_Param_LegatoEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvReleaseTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Release);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvReleaseTime(Z_Param_Release);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvSustainGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SustainGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvSustainGain(Z_Param_SustainGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvDecayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvDecayTime(Z_Param_DecayTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvAttackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvAttackTime(Z_Param_AttackTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvDepth(Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvBiasInvert)
	{
		P_GET_UBOOL(Z_Param_bInvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvBiasInvert(Z_Param_bInvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvInvert)
	{
		P_GET_UBOOL(Z_Param_bInvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvInvert(Z_Param_bInvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvBiasPatch)
	{
		P_GET_ENUM(ESynthModEnvBiasPatch,Z_Param_InPatchType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvBiasPatch(ESynthModEnvBiasPatch(Z_Param_InPatchType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetModEnvPatch)
	{
		P_GET_ENUM(ESynthModEnvPatch,Z_Param_InPatchType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModEnvPatch(ESynthModEnvPatch(Z_Param_InPatchType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetReleaseTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReleaseTime(Z_Param_ReleaseTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetSustainGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SustainGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSustainGain(Z_Param_SustainGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetDecayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecayTime(Z_Param_DecayTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetAttackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackTime(Z_Param_AttackTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetGainDb)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GainDb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGainDb(Z_Param_GainDb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOPatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_ENUM(ESynthLFOPatchType,Z_Param_LFOPatchType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOPatch(Z_Param_LFOIndex,ESynthLFOPatchType(Z_Param_LFOPatchType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_ENUM(ESynthLFOMode,Z_Param_LFOMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOMode(Z_Param_LFOIndex,ESynthLFOMode(Z_Param_LFOMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_ENUM(ESynthLFOType,Z_Param_LFOType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOType(Z_Param_LFOIndex,ESynthLFOType(Z_Param_LFOType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOGainMod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GainMod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOGainMod(Z_Param_LFOIndex,Z_Param_GainMod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOGain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOGain(Z_Param_LFOIndex,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOFrequencyMod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyModHz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOFrequencyMod(Z_Param_LFOIndex,Z_Param_FrequencyModHz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetLFOFrequency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LFOIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyHz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLFOFrequency(Z_Param_LFOIndex,Z_Param_FrequencyHz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetSpread)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpread(Z_Param_Spread);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetPan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPan(Z_Param_Pan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscSync)
	{
		P_GET_UBOOL(Z_Param_bIsSynced);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscSync(Z_Param_bIsSynced);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetEnableUnison)
	{
		P_GET_UBOOL(Z_Param_EnableUnison);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableUnison(Z_Param_EnableUnison);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscPulsewidth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pulsewidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscPulsewidth(Z_Param_OscIndex,Z_Param_Pulsewidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetPortamento)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Portamento);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPortamento(Z_Param_Portamento);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetPitchBend)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchBend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchBend(Z_Param_PitchBend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscCents)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscCents(Z_Param_OscIndex,Z_Param_Cents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscSemitones)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Semitones);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscSemitones(Z_Param_OscIndex,Z_Param_Semitones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscOctave)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Octave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscOctave(Z_Param_OscIndex,Z_Param_Octave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_ENUM(ESynth1OscType,Z_Param_OscType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscType(Z_Param_OscIndex,ESynth1OscType(Z_Param_OscType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscFrequencyMod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OscFreqMod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscFrequencyMod(Z_Param_OscIndex,Z_Param_OscFreqMod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscGainMod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OscGainMod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscGainMod(Z_Param_OscIndex,Z_Param_OscGainMod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetOscGain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OscIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OscGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOscGain(Z_Param_OscIndex,Z_Param_OscGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execSetEnablePolyphony)
	{
		P_GET_UBOOL(Z_Param_bEnablePolyphony);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnablePolyphony(Z_Param_bEnablePolyphony);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execNoteOff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
		P_GET_UBOOL(Z_Param_bAllNotesOff);
		P_GET_UBOOL(Z_Param_bKillAllNotes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoteOff(Z_Param_Note,Z_Param_bAllNotesOff,Z_Param_bKillAllNotes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModularSynthComponent::execNoteOn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
		P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoteOn(Z_Param_Note,Z_Param_Velocity,Z_Param_Duration);
		P_NATIVE_END;
	}
	void UModularSynthComponent::StaticRegisterNativesUModularSynthComponent()
	{
		UClass* Class = UModularSynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePatch", &UModularSynthComponent::execCreatePatch },
			{ "NoteOff", &UModularSynthComponent::execNoteOff },
			{ "NoteOn", &UModularSynthComponent::execNoteOn },
			{ "SetAttackTime", &UModularSynthComponent::execSetAttackTime },
			{ "SetChorusDepth", &UModularSynthComponent::execSetChorusDepth },
			{ "SetChorusEnabled", &UModularSynthComponent::execSetChorusEnabled },
			{ "SetChorusFeedback", &UModularSynthComponent::execSetChorusFeedback },
			{ "SetChorusFrequency", &UModularSynthComponent::execSetChorusFrequency },
			{ "SetDecayTime", &UModularSynthComponent::execSetDecayTime },
			{ "SetEnableLegato", &UModularSynthComponent::execSetEnableLegato },
			{ "SetEnablePatch", &UModularSynthComponent::execSetEnablePatch },
			{ "SetEnablePolyphony", &UModularSynthComponent::execSetEnablePolyphony },
			{ "SetEnableRetrigger", &UModularSynthComponent::execSetEnableRetrigger },
			{ "SetEnableUnison", &UModularSynthComponent::execSetEnableUnison },
			{ "SetFilterAlgorithm", &UModularSynthComponent::execSetFilterAlgorithm },
			{ "SetFilterFrequency", &UModularSynthComponent::execSetFilterFrequency },
			{ "SetFilterFrequencyMod", &UModularSynthComponent::execSetFilterFrequencyMod },
			{ "SetFilterQ", &UModularSynthComponent::execSetFilterQ },
			{ "SetFilterQMod", &UModularSynthComponent::execSetFilterQMod },
			{ "SetFilterType", &UModularSynthComponent::execSetFilterType },
			{ "SetGainDb", &UModularSynthComponent::execSetGainDb },
			{ "SetLFOFrequency", &UModularSynthComponent::execSetLFOFrequency },
			{ "SetLFOFrequencyMod", &UModularSynthComponent::execSetLFOFrequencyMod },
			{ "SetLFOGain", &UModularSynthComponent::execSetLFOGain },
			{ "SetLFOGainMod", &UModularSynthComponent::execSetLFOGainMod },
			{ "SetLFOMode", &UModularSynthComponent::execSetLFOMode },
			{ "SetLFOPatch", &UModularSynthComponent::execSetLFOPatch },
			{ "SetLFOType", &UModularSynthComponent::execSetLFOType },
			{ "SetModEnvAttackTime", &UModularSynthComponent::execSetModEnvAttackTime },
			{ "SetModEnvBiasInvert", &UModularSynthComponent::execSetModEnvBiasInvert },
			{ "SetModEnvBiasPatch", &UModularSynthComponent::execSetModEnvBiasPatch },
			{ "SetModEnvDecayTime", &UModularSynthComponent::execSetModEnvDecayTime },
			{ "SetModEnvDepth", &UModularSynthComponent::execSetModEnvDepth },
			{ "SetModEnvInvert", &UModularSynthComponent::execSetModEnvInvert },
			{ "SetModEnvPatch", &UModularSynthComponent::execSetModEnvPatch },
			{ "SetModEnvReleaseTime", &UModularSynthComponent::execSetModEnvReleaseTime },
			{ "SetModEnvSustainGain", &UModularSynthComponent::execSetModEnvSustainGain },
			{ "SetOscCents", &UModularSynthComponent::execSetOscCents },
			{ "SetOscFrequencyMod", &UModularSynthComponent::execSetOscFrequencyMod },
			{ "SetOscGain", &UModularSynthComponent::execSetOscGain },
			{ "SetOscGainMod", &UModularSynthComponent::execSetOscGainMod },
			{ "SetOscOctave", &UModularSynthComponent::execSetOscOctave },
			{ "SetOscPulsewidth", &UModularSynthComponent::execSetOscPulsewidth },
			{ "SetOscSemitones", &UModularSynthComponent::execSetOscSemitones },
			{ "SetOscSync", &UModularSynthComponent::execSetOscSync },
			{ "SetOscType", &UModularSynthComponent::execSetOscType },
			{ "SetPan", &UModularSynthComponent::execSetPan },
			{ "SetPitchBend", &UModularSynthComponent::execSetPitchBend },
			{ "SetPortamento", &UModularSynthComponent::execSetPortamento },
			{ "SetReleaseTime", &UModularSynthComponent::execSetReleaseTime },
			{ "SetSpread", &UModularSynthComponent::execSetSpread },
			{ "SetStereoDelayFeedback", &UModularSynthComponent::execSetStereoDelayFeedback },
			{ "SetStereoDelayIsEnabled", &UModularSynthComponent::execSetStereoDelayIsEnabled },
			{ "SetStereoDelayMode", &UModularSynthComponent::execSetStereoDelayMode },
			{ "SetStereoDelayRatio", &UModularSynthComponent::execSetStereoDelayRatio },
			{ "SetStereoDelayTime", &UModularSynthComponent::execSetStereoDelayTime },
			{ "SetStereoDelayWetlevel", &UModularSynthComponent::execSetStereoDelayWetlevel },
			{ "SetSustainGain", &UModularSynthComponent::execSetSustainGain },
			{ "SetSynthPreset", &UModularSynthComponent::execSetSynthPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics
	{
		struct ModularSynthComponent_eventCreatePatch_Parms
		{
			ESynth1PatchSource PatchSource;
			TArray<FSynth1PatchCable> PatchCables;
			bool bEnableByDefault;
			FPatchId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableByDefault_MetaData[];
#endif
		static void NewProp_bEnableByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatchCables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatchCables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatchCables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatchSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PatchSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PatchSource_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventCreatePatch_Parms, ReturnValue), Z_Construct_UScriptStruct_FPatchId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventCreatePatch_Parms*)Obj)->bEnableByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault = { "bEnableByDefault", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventCreatePatch_Parms), &Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables = { "PatchCables", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventCreatePatch_Parms, PatchCables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_Inner = { "PatchCables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSynth1PatchCable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource = { "PatchSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventCreatePatch_Parms, PatchSource), Z_Construct_UEnum_Synthesis_ESynth1PatchSource, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_bEnableByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchCables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::NewProp_PatchSource_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Creates a new modular synth patch between a modulation source and a set of modulation destinations\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Creates a new modular synth patch between a modulation source and a set of modulation destinations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "CreatePatch", nullptr, nullptr, sizeof(ModularSynthComponent_eventCreatePatch_Parms), Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_CreatePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_CreatePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics
	{
		struct ModularSynthComponent_eventNoteOff_Parms
		{
			float Note;
			bool bAllNotesOff;
			bool bKillAllNotes;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillAllNotes_MetaData[];
#endif
		static void NewProp_bKillAllNotes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillAllNotes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllNotesOff_MetaData[];
#endif
		static void NewProp_bAllNotesOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllNotesOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Note;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventNoteOff_Parms*)Obj)->bKillAllNotes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes = { "bKillAllNotes", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventNoteOff_Parms), &Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventNoteOff_Parms*)Obj)->bAllNotesOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff = { "bAllNotesOff", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventNoteOff_Parms), &Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOff_Parms, Note), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bKillAllNotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_bAllNotesOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::NewProp_Note,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Stop the note (will only do anything if a voice is playing with that note)\n" },
		{ "CPP_Default_bAllNotesOff", "false" },
		{ "CPP_Default_bKillAllNotes", "false" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Stop the note (will only do anything if a voice is playing with that note)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "NoteOff", nullptr, nullptr, sizeof(ModularSynthComponent_eventNoteOff_Parms), Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_NoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_NoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics
	{
		struct ModularSynthComponent_eventNoteOn_Parms
		{
			float Note;
			int32 Velocity;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Note;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOn_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOn_Parms, Velocity), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventNoteOn_Parms, Note), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::NewProp_Note,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Play a new note. Optionally pass in a duration to automatically turn off the note.\n" },
		{ "CPP_Default_Duration", "-1.000000" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Play a new note. Optionally pass in a duration to automatically turn off the note." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "NoteOn", nullptr, nullptr, sizeof(ModularSynthComponent_eventNoteOn_Parms), Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_NoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_NoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics
	{
		struct ModularSynthComponent_eventSetAttackTime_Parms
		{
			float AttackTimeMsec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetAttackTime_Parms, AttackTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::NewProp_AttackTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope attack time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope attack time in msec." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetAttackTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetAttackTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics
	{
		struct ModularSynthComponent_eventSetChorusDepth_Parms
		{
			float Depth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetChorusDepth_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::NewProp_Depth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the chorus depth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the chorus depth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusDepth", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetChorusDepth_Parms), Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics
	{
		struct ModularSynthComponent_eventSetChorusEnabled_Parms
		{
			bool EnableChorus;
		};
		static void NewProp_EnableChorus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableChorus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetChorusEnabled_Parms*)Obj)->EnableChorus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus = { "EnableChorus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetChorusEnabled_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::NewProp_EnableChorus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not chorus is enabled.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not chorus is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusEnabled", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetChorusEnabled_Parms), Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics
	{
		struct ModularSynthComponent_eventSetChorusFeedback_Parms
		{
			float Feedback;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetChorusFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the chorus feedback\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the chorus feedback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusFeedback", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetChorusFeedback_Parms), Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics
	{
		struct ModularSynthComponent_eventSetChorusFrequency_Parms
		{
			float Frequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetChorusFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the chorus frequency\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the chorus frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetChorusFrequency", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetChorusFrequency_Parms), Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics
	{
		struct ModularSynthComponent_eventSetDecayTime_Parms
		{
			float DecayTimeMsec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::NewProp_DecayTimeMsec = { "DecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetDecayTime_Parms, DecayTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::NewProp_DecayTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope decay time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope decay time in msec." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetDecayTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetDecayTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetDecayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetDecayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics
	{
		struct ModularSynthComponent_eventSetEnableLegato_Parms
		{
			bool LegatoEnabled;
		};
		static void NewProp_LegatoEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LegatoEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetEnableLegato_Parms*)Obj)->LegatoEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled = { "LegatoEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnableLegato_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::NewProp_LegatoEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to use legato for the synthesizer.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to use legato for the synthesizer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnableLegato", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetEnableLegato_Parms), Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics
	{
		struct ModularSynthComponent_eventSetEnablePatch_Parms
		{
			FPatchId PatchId;
			bool bIsEnabled;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetEnablePatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnablePatch_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetEnablePatch_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnablePatch_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId = { "PatchId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetEnablePatch_Parms, PatchId), Z_Construct_UScriptStruct_FPatchId, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::NewProp_PatchId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnablePatch", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetEnablePatch_Parms), Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics
	{
		struct ModularSynthComponent_eventSetEnablePolyphony_Parms
		{
			bool bEnablePolyphony;
		};
		static void NewProp_bEnablePolyphony_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePolyphony;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetEnablePolyphony_Parms*)Obj)->bEnablePolyphony = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony = { "bEnablePolyphony", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnablePolyphony_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::NewProp_bEnablePolyphony,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to use polyphony for the synthesizer.\n// @param bEnablePolyphony Whether or not to enable polyphony for the synth.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to use polyphony for the synthesizer.\n@param bEnablePolyphony Whether or not to enable polyphony for the synth." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnablePolyphony", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetEnablePolyphony_Parms), Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics
	{
		struct ModularSynthComponent_eventSetEnableRetrigger_Parms
		{
			bool RetriggerEnabled;
		};
		static void NewProp_RetriggerEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetriggerEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetEnableRetrigger_Parms*)Obj)->RetriggerEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled = { "RetriggerEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnableRetrigger_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::NewProp_RetriggerEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to retrigger envelope per note on.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to retrigger envelope per note on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnableRetrigger", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetEnableRetrigger_Parms), Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics
	{
		struct ModularSynthComponent_eventSetEnableUnison_Parms
		{
			bool EnableUnison;
		};
		static void NewProp_EnableUnison_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableUnison;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetEnableUnison_Parms*)Obj)->EnableUnison = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison = { "EnableUnison", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetEnableUnison_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::NewProp_EnableUnison,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not the synth is in unison mode (i.e. no spread)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not the synth is in unison mode (i.e. no spread)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetEnableUnison", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetEnableUnison_Parms), Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics
	{
		struct ModularSynthComponent_eventSetFilterAlgorithm_Parms
		{
			ESynthFilterAlgorithm FilterAlgorithm;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterAlgorithm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterAlgorithm_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm = { "FilterAlgorithm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterAlgorithm_Parms, FilterAlgorithm), Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::NewProp_FilterAlgorithm_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter algorithm.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter algorithm." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterAlgorithm", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetFilterAlgorithm_Parms), Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics
	{
		struct ModularSynthComponent_eventSetFilterFrequency_Parms
		{
			float FilterFrequencyHz;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterFrequencyHz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::NewProp_FilterFrequencyHz = { "FilterFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterFrequency_Parms, FilterFrequencyHz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::NewProp_FilterFrequencyHz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter cutoff frequency in hz.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter cutoff frequency in hz." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterFrequency", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetFilterFrequency_Parms), Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics
	{
		struct ModularSynthComponent_eventSetFilterFrequencyMod_Parms
		{
			float FilterFrequencyHz;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterFrequencyHz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::NewProp_FilterFrequencyHz = { "FilterFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterFrequencyMod_Parms, FilterFrequencyHz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::NewProp_FilterFrequencyHz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter cutoff frequency in hz.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter cutoff frequency in hz." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterFrequencyMod", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetFilterFrequencyMod_Parms), Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics
	{
		struct ModularSynthComponent_eventSetFilterQ_Parms
		{
			float FilterQ;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterQ_Parms, FilterQ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::NewProp_FilterQ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter Q (resonance)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter Q (resonance)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterQ", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetFilterQ_Parms), Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics
	{
		struct ModularSynthComponent_eventSetFilterQMod_Parms
		{
			float FilterQ;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterQMod_Parms, FilterQ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::NewProp_FilterQ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets a modulated filter Q (resonance)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets a modulated filter Q (resonance)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterQMod", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetFilterQMod_Parms), Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics
	{
		struct ModularSynthComponent_eventSetFilterType_Parms
		{
			ESynthFilterType FilterType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetFilterType_Parms, FilterType), Z_Construct_UEnum_Synthesis_ESynthFilterType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::NewProp_FilterType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the filter type.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the filter type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetFilterType", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetFilterType_Parms), Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics
	{
		struct ModularSynthComponent_eventSetGainDb_Parms
		{
			float GainDb;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainDb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetGainDb_Parms, GainDb), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::NewProp_GainDb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the synth gain in decibels.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the synth gain in decibels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetGainDb", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetGainDb_Parms), Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetGainDb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetGainDb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics
	{
		struct ModularSynthComponent_eventSetLFOFrequency_Parms
		{
			int32 LFOIndex;
			float FrequencyHz;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequency_Parms, FrequencyHz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequency_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_FrequencyHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO frequency in hz\n// @param LFOIndex Which LFO to set the frequency for.\n// @param FrequencyHz The LFO frequency to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO frequency in hz\n@param LFOIndex Which LFO to set the frequency for.\n@param FrequencyHz The LFO frequency to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOFrequency", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOFrequency_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics
	{
		struct ModularSynthComponent_eventSetLFOFrequencyMod_Parms
		{
			int32 LFOIndex;
			float FrequencyModHz;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyModHz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_FrequencyModHz = { "FrequencyModHz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequencyMod_Parms, FrequencyModHz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOFrequencyMod_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_FrequencyModHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO frequency modulation in hz\n// @param LFOIndex Which LFO to set the frequency for.\n// @param FrequencyModHz The LFO frequency to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO frequency modulation in hz\n@param LFOIndex Which LFO to set the frequency for.\n@param FrequencyModHz The LFO frequency to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOFrequencyMod", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOFrequencyMod_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics
	{
		struct ModularSynthComponent_eventSetLFOGain_Parms
		{
			int32 LFOIndex;
			float Gain;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGain_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO gain factor\n// @param LFOIndex Which LFO to set the frequency for.\n// @param Gain The gain factor to use for the LFO.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO gain factor\n@param LFOIndex Which LFO to set the frequency for.\n@param Gain The gain factor to use for the LFO." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOGain", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOGain_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics
	{
		struct ModularSynthComponent_eventSetLFOGainMod_Parms
		{
			int32 LFOIndex;
			float GainMod;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainMod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_GainMod = { "GainMod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGainMod_Parms, GainMod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOGainMod_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_GainMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO gain mod factor (external modulation)\n// @param LFOIndex Which LFO to set the frequency for.\n// @param Gain The gain factor to use for the LFO.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO gain mod factor (external modulation)\n@param LFOIndex Which LFO to set the frequency for.\n@param Gain The gain factor to use for the LFO." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOGainMod", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOGainMod_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics
	{
		struct ModularSynthComponent_eventSetLFOMode_Parms
		{
			int32 LFOIndex;
			ESynthLFOMode LFOMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFOMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFOMode_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode = { "LFOMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOMode_Parms, LFOMode), Z_Construct_UEnum_Synthesis_ESynthLFOMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOMode_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO type\n// @param LFOIndex Which LFO to set the frequency for.\n// @param LFOMode The LFO mode to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO type\n@param LFOIndex Which LFO to set the frequency for.\n@param LFOMode The LFO mode to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOMode", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOMode_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics
	{
		struct ModularSynthComponent_eventSetLFOPatch_Parms
		{
			int32 LFOIndex;
			ESynthLFOPatchType LFOPatchType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFOPatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFOPatchType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType = { "LFOPatchType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOPatch_Parms, LFOPatchType), Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOPatch_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOPatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO patch type. LFO patch determines what parameter is modulated by the LFO.\n// @param LFOIndex Which LFO to set the frequency for.\n// @param LFOPatchType The LFO patch type to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO patch type. LFO patch determines what parameter is modulated by the LFO.\n@param LFOIndex Which LFO to set the frequency for.\n@param LFOPatchType The LFO patch type to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOPatch", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOPatch_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics
	{
		struct ModularSynthComponent_eventSetLFOType_Parms
		{
			int32 LFOIndex;
			ESynthLFOType LFOType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFOType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFOType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LFOIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType = { "LFOType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOType_Parms, LFOType), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOIndex = { "LFOIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetLFOType_Parms, LFOIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::NewProp_LFOIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the LFO type\n// @param LFOIndex Which LFO to set the frequency for.\n// @param LFOType The LFO type to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the LFO type\n@param LFOIndex Which LFO to set the frequency for.\n@param LFOType The LFO type to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetLFOType", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetLFOType_Parms), Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetLFOType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetLFOType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics
	{
		struct ModularSynthComponent_eventSetModEnvAttackTime_Parms
		{
			float AttackTimeMsec;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvAttackTime_Parms, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::NewProp_AttackTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator attack time in msec\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator attack time in msec" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvAttackTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvAttackTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics
	{
		struct ModularSynthComponent_eventSetModEnvBiasInvert_Parms
		{
			bool bInvert;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetModEnvBiasInvert_Parms*)Obj)->bInvert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetModEnvBiasInvert_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::NewProp_bInvert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to invert the bias output of the envelope modulator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to invert the bias output of the envelope modulator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvBiasInvert", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvBiasInvert_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics
	{
		struct ModularSynthComponent_eventSetModEnvBiasPatch_Parms
		{
			ESynthModEnvBiasPatch InPatchType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPatchType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType = { "InPatchType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvBiasPatch_Parms, InPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::NewProp_InPatchType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvBiasPatch", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvBiasPatch_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics
	{
		struct ModularSynthComponent_eventSetModEnvDecayTime_Parms
		{
			float DecayTimeMsec;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec = { "DecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvDecayTime_Parms, DecayTimeMsec), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::NewProp_DecayTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator attack time in msec\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator attack time in msec" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvDecayTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvDecayTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics
	{
		struct ModularSynthComponent_eventSetModEnvDepth_Parms
		{
			float Depth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvDepth_Parms, Depth), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::NewProp_Depth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator depth (amount to apply the output modulation)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator depth (amount to apply the output modulation)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvDepth", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvDepth_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics
	{
		struct ModularSynthComponent_eventSetModEnvInvert_Parms
		{
			bool bInvert;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetModEnvInvert_Parms*)Obj)->bInvert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetModEnvInvert_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::NewProp_bInvert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to invert the envelope modulator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to invert the envelope modulator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvInvert", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvInvert_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics
	{
		struct ModularSynthComponent_eventSetModEnvPatch_Parms
		{
			ESynthModEnvPatch InPatchType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPatchType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType = { "InPatchType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvPatch_Parms, InPatchType), Z_Construct_UEnum_Synthesis_ESynthModEnvPatch, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::NewProp_InPatchType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether or not to modulate a param based on the envelope. Uses bias envelope output (offset from sustain gain)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvPatch", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvPatch_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics
	{
		struct ModularSynthComponent_eventSetModEnvReleaseTime_Parms
		{
			float Release;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Release_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Release;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release = { "Release", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvReleaseTime_Parms, Release), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::NewProp_Release,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator release\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvReleaseTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvReleaseTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics
	{
		struct ModularSynthComponent_eventSetModEnvSustainGain_Parms
		{
			float SustainGain;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetModEnvSustainGain_Parms, SustainGain), METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::NewProp_SustainGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope modulator sustain gain\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope modulator sustain gain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetModEnvSustainGain", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetModEnvSustainGain_Parms), Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics
	{
		struct ModularSynthComponent_eventSetOscCents_Parms
		{
			int32 OscIndex;
			float Cents;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cents;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_Cents = { "Cents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscCents_Parms, Cents), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscCents_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_Cents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator cents.\n// @param OscIndex Which oscillator to set the type for.\n// @param Cents The amount of cents to set the oscillator to (relative to base frequency/pitch)..\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the oscillator cents.\n@param OscIndex Which oscillator to set the type for.\n@param Cents The amount of cents to set the oscillator to (relative to base frequency/pitch).." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscCents", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscCents_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscCents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscCents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics
	{
		struct ModularSynthComponent_eventSetOscFrequencyMod_Parms
		{
			int32 OscIndex;
			float OscFreqMod;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscFreqMod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscFreqMod = { "OscFreqMod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscFrequencyMod_Parms, OscFreqMod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscFrequencyMod_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscFreqMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator frequency modulation\n// @param OscIndex Which oscillator to set the type for.\n// @param OscFreqMod The oscillator frequency modulation to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator frequency modulation\n@param OscIndex Which oscillator to set the type for.\n@param OscFreqMod The oscillator frequency modulation to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscFrequencyMod", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscFrequencyMod_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics
	{
		struct ModularSynthComponent_eventSetOscGain_Parms
		{
			int32 OscIndex;
			float OscGain;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscGain;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscGain = { "OscGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGain_Parms, OscGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGain_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator gain. \n// @param OscIndex Which oscillator to set the type for.\n// @param OscGain The oscillator gain.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator gain.\n@param OscIndex Which oscillator to set the type for.\n@param OscGain The oscillator gain." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscGain", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscGain_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics
	{
		struct ModularSynthComponent_eventSetOscGainMod_Parms
		{
			int32 OscIndex;
			float OscGainMod;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscGainMod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscGainMod = { "OscGainMod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGainMod_Parms, OscGainMod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscGainMod_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscGainMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator gain modulation. \n// @param OscIndex Which oscillator to set the type for.\n// @param OscGainMod The oscillator gain modulation to use.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator gain modulation.\n@param OscIndex Which oscillator to set the type for.\n@param OscGainMod The oscillator gain modulation to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscGainMod", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscGainMod_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics
	{
		struct ModularSynthComponent_eventSetOscOctave_Parms
		{
			int32 OscIndex;
			float Octave;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Octave;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_Octave = { "Octave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscOctave_Parms, Octave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscOctave_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_Octave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator octaves\n// @param OscIndex Which oscillator to set the type for.\n// @param Octave Which octave to set the oscillator to (relative to base frequency/pitch).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the oscillator octaves\n@param OscIndex Which oscillator to set the type for.\n@param Octave Which octave to set the oscillator to (relative to base frequency/pitch)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscOctave", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscOctave_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscOctave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscOctave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics
	{
		struct ModularSynthComponent_eventSetOscPulsewidth_Parms
		{
			int32 OscIndex;
			float Pulsewidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pulsewidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_Pulsewidth = { "Pulsewidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscPulsewidth_Parms, Pulsewidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscPulsewidth_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_Pulsewidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the square wave pulsewidth [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the square wave pulsewidth [0.0, 1.0]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscPulsewidth", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscPulsewidth_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics
	{
		struct ModularSynthComponent_eventSetOscSemitones_Parms
		{
			int32 OscIndex;
			float Semitones;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Semitones;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_Semitones = { "Semitones", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscSemitones_Parms, Semitones), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscSemitones_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_Semitones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator semitones.\n// @param OscIndex Which oscillator to set the type for.\n// @param Semitones The amount of semitones to set the oscillator to (relative to base frequency/pitch).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the oscillator semitones.\n@param OscIndex Which oscillator to set the type for.\n@param Semitones The amount of semitones to set the oscillator to (relative to base frequency/pitch)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscSemitones", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscSemitones_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics
	{
		struct ModularSynthComponent_eventSetOscSync_Parms
		{
			bool bIsSynced;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSynced_MetaData[];
#endif
		static void NewProp_bIsSynced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSynced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetOscSync_Parms*)Obj)->bIsSynced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced = { "bIsSynced", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetOscSync_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::NewProp_bIsSynced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set whether or not to slave the phase of osc2 to osc1\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set whether or not to slave the phase of osc2 to osc1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscSync", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscSync_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics
	{
		struct ModularSynthComponent_eventSetOscType_Parms
		{
			int32 OscIndex;
			ESynth1OscType OscType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OscType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OscType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OscIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType = { "OscType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscType_Parms, OscType), Z_Construct_UEnum_Synthesis_ESynth1OscType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscIndex = { "OscIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetOscType_Parms, OscIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::NewProp_OscIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator type. \n// @param OscIndex Which oscillator to set the type for.\n// @param OscType The oscillator type to set.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Set the oscillator type.\n@param OscIndex Which oscillator to set the type for.\n@param OscType The oscillator type to set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetOscType", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetOscType_Parms), Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetOscType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetOscType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics
	{
		struct ModularSynthComponent_eventSetPan_Parms
		{
			float Pan;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::NewProp_Pan = { "Pan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetPan_Parms, Pan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::NewProp_Pan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the pan of the synth [-1.0, 1.0].\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the pan of the synth [-1.0, 1.0]." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetPan", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetPan_Parms), Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetPan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetPan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics
	{
		struct ModularSynthComponent_eventSetPitchBend_Parms
		{
			float PitchBend;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchBend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::NewProp_PitchBend = { "PitchBend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetPitchBend_Parms, PitchBend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::NewProp_PitchBend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the synth pitch bend amount.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the synth pitch bend amount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetPitchBend", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetPitchBend_Parms), Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetPitchBend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetPitchBend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics
	{
		struct ModularSynthComponent_eventSetPortamento_Parms
		{
			float Portamento;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Portamento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::NewProp_Portamento = { "Portamento", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetPortamento_Parms, Portamento), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::NewProp_Portamento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the synth portamento [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the synth portamento [0.0, 1.0]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetPortamento", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetPortamento_Parms), Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetPortamento()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetPortamento_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics
	{
		struct ModularSynthComponent_eventSetReleaseTime_Parms
		{
			float ReleaseTimeMsec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetReleaseTime_Parms, ReleaseTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::NewProp_ReleaseTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope release time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope release time in msec." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetReleaseTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetReleaseTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics
	{
		struct ModularSynthComponent_eventSetSpread_Parms
		{
			float Spread;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetSpread_Parms, Spread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::NewProp_Spread,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of spread of the oscillators. [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of spread of the oscillators. [0.0, 1.0]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetSpread", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetSpread_Parms), Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics
	{
		struct ModularSynthComponent_eventSetStereoDelayFeedback_Parms
		{
			float DelayFeedback;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayFeedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::NewProp_DelayFeedback = { "DelayFeedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayFeedback_Parms, DelayFeedback), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::NewProp_DelayFeedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay feedback [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay feedback [0.0, 1.0]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayFeedback", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetStereoDelayFeedback_Parms), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics
	{
		struct ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms
		{
			bool StereoDelayEnabled;
		};
		static void NewProp_StereoDelayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StereoDelayEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled_SetBit(void* Obj)
	{
		((ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms*)Obj)->StereoDelayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled = { "StereoDelayEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms), &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::NewProp_StereoDelayEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether not stereo delay is enabled.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether not stereo delay is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayIsEnabled", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetStereoDelayIsEnabled_Parms), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics
	{
		struct ModularSynthComponent_eventSetStereoDelayMode_Parms
		{
			ESynthStereoDelayMode StereoDelayMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StereoDelayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StereoDelayMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode = { "StereoDelayMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayMode_Parms, StereoDelayMode), Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::NewProp_StereoDelayMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets whether not stereo delay is enabled.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets whether not stereo delay is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayMode", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetStereoDelayMode_Parms), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics
	{
		struct ModularSynthComponent_eventSetStereoDelayRatio_Parms
		{
			float DelayRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayRatio_Parms, DelayRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::NewProp_DelayRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay ratio between left and right delay lines [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay ratio between left and right delay lines [0.0, 1.0]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayRatio", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetStereoDelayRatio_Parms), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics
	{
		struct ModularSynthComponent_eventSetStereoDelayTime_Parms
		{
			float DelayTimeMsec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayTime_Parms, DelayTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::NewProp_DelayTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay time in msec.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay time in msec." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayTime", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetStereoDelayTime_Parms), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics
	{
		struct ModularSynthComponent_eventSetStereoDelayWetlevel_Parms
		{
			float DelayWetlevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayWetlevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::NewProp_DelayWetlevel = { "DelayWetlevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetStereoDelayWetlevel_Parms, DelayWetlevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::NewProp_DelayWetlevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the amount of stereo delay wetlevel [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the amount of stereo delay wetlevel [0.0, 1.0]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetStereoDelayWetlevel", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetStereoDelayWetlevel_Parms), Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics
	{
		struct ModularSynthComponent_eventSetSustainGain_Parms
		{
			float SustainGain;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetSustainGain_Parms, SustainGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::NewProp_SustainGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the envelope sustain gain value.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the envelope sustain gain value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetSustainGain", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetSustainGain_Parms), Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetSustainGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetSustainGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics
	{
		struct ModularSynthComponent_eventSetSynthPreset_Parms
		{
			FModularSynthPreset SynthPreset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SynthPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SynthPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset = { "SynthPreset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularSynthComponent_eventSetSynthPreset_Parms, SynthPreset), Z_Construct_UScriptStruct_FModularSynthPreset, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::NewProp_SynthPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the preset struct for the synth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "Sets the preset struct for the synth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularSynthComponent, nullptr, "SetSynthPreset", nullptr, nullptr, sizeof(ModularSynthComponent_eventSetSynthPreset_Parms), Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModularSynthComponent_NoRegister()
	{
		return UModularSynthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UModularSynthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoiceCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModularSynthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModularSynthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularSynthComponent_CreatePatch, "CreatePatch" }, // 3113471813
		{ &Z_Construct_UFunction_UModularSynthComponent_NoteOff, "NoteOff" }, // 3082042710
		{ &Z_Construct_UFunction_UModularSynthComponent_NoteOn, "NoteOn" }, // 4015771626
		{ &Z_Construct_UFunction_UModularSynthComponent_SetAttackTime, "SetAttackTime" }, // 3696284317
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusDepth, "SetChorusDepth" }, // 2431716466
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusEnabled, "SetChorusEnabled" }, // 66416542
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusFeedback, "SetChorusFeedback" }, // 2686174704
		{ &Z_Construct_UFunction_UModularSynthComponent_SetChorusFrequency, "SetChorusFrequency" }, // 3876693062
		{ &Z_Construct_UFunction_UModularSynthComponent_SetDecayTime, "SetDecayTime" }, // 3016669939
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnableLegato, "SetEnableLegato" }, // 1481518851
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnablePatch, "SetEnablePatch" }, // 2476190602
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnablePolyphony, "SetEnablePolyphony" }, // 4024646341
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnableRetrigger, "SetEnableRetrigger" }, // 2538108195
		{ &Z_Construct_UFunction_UModularSynthComponent_SetEnableUnison, "SetEnableUnison" }, // 3262005784
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterAlgorithm, "SetFilterAlgorithm" }, // 663800714
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequency, "SetFilterFrequency" }, // 1054754294
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterFrequencyMod, "SetFilterFrequencyMod" }, // 1408012769
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterQ, "SetFilterQ" }, // 2085932165
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterQMod, "SetFilterQMod" }, // 605541911
		{ &Z_Construct_UFunction_UModularSynthComponent_SetFilterType, "SetFilterType" }, // 2424699936
		{ &Z_Construct_UFunction_UModularSynthComponent_SetGainDb, "SetGainDb" }, // 526826468
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequency, "SetLFOFrequency" }, // 1073048892
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOFrequencyMod, "SetLFOFrequencyMod" }, // 2963570173
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOGain, "SetLFOGain" }, // 1977509978
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOGainMod, "SetLFOGainMod" }, // 1799231302
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOMode, "SetLFOMode" }, // 831530198
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOPatch, "SetLFOPatch" }, // 1087948062
		{ &Z_Construct_UFunction_UModularSynthComponent_SetLFOType, "SetLFOType" }, // 3473897591
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvAttackTime, "SetModEnvAttackTime" }, // 767924631
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasInvert, "SetModEnvBiasInvert" }, // 1910261487
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvBiasPatch, "SetModEnvBiasPatch" }, // 1139737578
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvDecayTime, "SetModEnvDecayTime" }, // 2299005414
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvDepth, "SetModEnvDepth" }, // 2906339303
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvInvert, "SetModEnvInvert" }, // 944582292
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvPatch, "SetModEnvPatch" }, // 595150408
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvReleaseTime, "SetModEnvReleaseTime" }, // 2075151378
		{ &Z_Construct_UFunction_UModularSynthComponent_SetModEnvSustainGain, "SetModEnvSustainGain" }, // 183761589
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscCents, "SetOscCents" }, // 2144260219
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscFrequencyMod, "SetOscFrequencyMod" }, // 3414316889
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscGain, "SetOscGain" }, // 2378722736
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscGainMod, "SetOscGainMod" }, // 2071247040
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscOctave, "SetOscOctave" }, // 2829141789
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscPulsewidth, "SetOscPulsewidth" }, // 1281617540
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscSemitones, "SetOscSemitones" }, // 3613355163
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscSync, "SetOscSync" }, // 1410846897
		{ &Z_Construct_UFunction_UModularSynthComponent_SetOscType, "SetOscType" }, // 906278524
		{ &Z_Construct_UFunction_UModularSynthComponent_SetPan, "SetPan" }, // 2355065948
		{ &Z_Construct_UFunction_UModularSynthComponent_SetPitchBend, "SetPitchBend" }, // 1420284941
		{ &Z_Construct_UFunction_UModularSynthComponent_SetPortamento, "SetPortamento" }, // 1595992313
		{ &Z_Construct_UFunction_UModularSynthComponent_SetReleaseTime, "SetReleaseTime" }, // 2436672787
		{ &Z_Construct_UFunction_UModularSynthComponent_SetSpread, "SetSpread" }, // 1674213245
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayFeedback, "SetStereoDelayFeedback" }, // 2880084769
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayIsEnabled, "SetStereoDelayIsEnabled" }, // 1830055669
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayMode, "SetStereoDelayMode" }, // 3042444618
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayRatio, "SetStereoDelayRatio" }, // 3465806470
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayTime, "SetStereoDelayTime" }, // 1650366429
		{ &Z_Construct_UFunction_UModularSynthComponent_SetStereoDelayWetlevel, "SetStereoDelayWetlevel" }, // 4280559757
		{ &Z_Construct_UFunction_UModularSynthComponent_SetSustainGain, "SetSustainGain" }, // 3002524622
		{ &Z_Construct_UFunction_UModularSynthComponent_SetSynthPreset, "SetSynthPreset" }, // 3083889614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularSynthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "Comment", "/**\n* UModularSynthComponent\n* Implementation of a USynthComponent.\n*/" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/EpicSynth1Component.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UModularSynthComponent\nImplementation of a USynthComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount_MetaData[] = {
		{ "Category", "Synth|VoiceCount" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "// The voice count to use for the synthesizer. Cannot be changed\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/EpicSynth1Component.h" },
		{ "ToolTip", "The voice count to use for the synthesizer. Cannot be changed" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount = { "VoiceCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModularSynthComponent, VoiceCount), METADATA_PARAMS(Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSynthComponent_Statics::NewProp_VoiceCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModularSynthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSynthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModularSynthComponent_Statics::ClassParams = {
		&UModularSynthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModularSynthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModularSynthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModularSynthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModularSynthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModularSynthComponent, 2795019047);
	template<> SYNTHESIS_API UClass* StaticClass<UModularSynthComponent>()
	{
		return UModularSynthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModularSynthComponent(Z_Construct_UClass_UModularSynthComponent, &UModularSynthComponent::StaticClass, TEXT("/Script/Synthesis"), TEXT("UModularSynthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSynthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
