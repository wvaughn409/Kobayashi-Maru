// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectReverbFast() {}
// Cross Module References
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbFastPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbFastPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
// End Cross Module References
class UScriptStruct* FSubmixEffectReverbFastSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectReverbFastSettings"), sizeof(FSubmixEffectReverbFastSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectReverbFastSettings>()
{
	return FSubmixEffectReverbFastSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectReverbFastSettings(FSubmixEffectReverbFastSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectReverbFastSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbFastSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbFastSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectReverbFastSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectReverbFastSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbFastSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectReverbFastSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "Routing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Overall dry level of the reverb effect\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Overall dry level of the reverb effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "Routing" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Overall wet level of the reverb effect\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Overall wet level of the reverb effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_AirAbsorptionGainHF_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_AirAbsorptionGainHF = { "AirAbsorptionGainHF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, AirAbsorptionGainHF), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_AirAbsorptionGainHF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_AirAbsorptionGainHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateDelay_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateDelay = { "LateDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, LateDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateGain_MetaData[] = {
		{ "Category", "LateReflections" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateGain = { "LateGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, LateGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsDelay_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "0.3" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, ReflectionsDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsGain_MetaData[] = {
		{ "Category", "EarlyReflections" },
		{ "ClampMax", "3.16" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsGain = { "ReflectionsGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, ReflectionsGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayHFRatio_MetaData[] = {
		{ "Category", "Decay" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies. */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, DecayHFRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayHFRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayHFRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "Decay" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_GainHF_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_GainHF = { "GainHF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, GainHF), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_GainHF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_GainHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Diffusion_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, Diffusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Diffusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Diffusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbFastSettings, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Bypasses reverb */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ToolTip", "Bypasses reverb" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSubmixEffectReverbFastSettings*)Obj)->bBypass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectReverbFastSettings), &Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_AirAbsorptionGainHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_LateGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_ReflectionsGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayHFRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_DecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_GainHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Diffusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::NewProp_bBypass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectReverbFastSettings",
		sizeof(FSubmixEffectReverbFastSettings),
		alignof(FSubmixEffectReverbFastSettings),
		Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectReverbFastSettings"), sizeof(FSubmixEffectReverbFastSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Hash() { return 783784018U; }
	DEFINE_FUNCTION(USubmixEffectReverbFastPreset::execSetSettingsWithReverbEffect)
	{
		P_GET_OBJECT(UReverbEffect,Z_Param_InReverbEffect);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingsWithReverbEffect(Z_Param_InReverbEffect,Z_Param_WetLevel,Z_Param_DryLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectReverbFastPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectReverbFastSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectReverbFastPreset::StaticRegisterNativesUSubmixEffectReverbFastPreset()
	{
		UClass* Class = USubmixEffectReverbFastPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectReverbFastPreset::execSetSettings },
			{ "SetSettingsWithReverbEffect", &USubmixEffectReverbFastPreset::execSetSettingsWithReverbEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics
	{
		struct SubmixEffectReverbFastPreset_eventSetSettings_Parms
		{
			FSubmixEffectReverbFastSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbFastPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbFastPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectReverbFastPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics
	{
		struct SubmixEffectReverbFastPreset_eventSetSettingsWithReverbEffect_Parms
		{
			const UReverbEffect* InReverbEffect;
			float WetLevel;
			float DryLevel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InReverbEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InReverbEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbFastPreset_eventSetSettingsWithReverbEffect_Parms, DryLevel), METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbFastPreset_eventSetSettingsWithReverbEffect_Parms, WetLevel), METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect = { "InReverbEffect", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbFastPreset_eventSetSettingsWithReverbEffect_Parms, InReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "CPP_Default_DryLevel", "0.000000" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbFastPreset, nullptr, "SetSettingsWithReverbEffect", nullptr, nullptr, sizeof(SubmixEffectReverbFastPreset_eventSetSettingsWithReverbEffect_Parms), Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectReverbFastPreset_NoRegister()
	{
		return USubmixEffectReverbFastPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettings, "SetSettings" }, // 1278570635
		{ &Z_Construct_UFunction_USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect, "SetSettingsWithReverbEffect" }, // 694990183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverbFast.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectReverbFastPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectReverbFastPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::ClassParams = {
		&USubmixEffectReverbFastPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectReverbFastPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectReverbFastPreset, 341356595);
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectReverbFastPreset>()
	{
		return USubmixEffectReverbFastPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectReverbFastPreset(Z_Construct_UClass_USubmixEffectReverbFastPreset, &USubmixEffectReverbFastPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectReverbFastPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectReverbFastPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
