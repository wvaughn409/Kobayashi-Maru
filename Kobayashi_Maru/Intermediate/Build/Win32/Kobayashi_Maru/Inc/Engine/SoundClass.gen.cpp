// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulation();
// End Cross Module References
class UScriptStruct* FPassiveSoundMixModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSoundMixModifier, Z_Construct_UPackage__Script_Engine(), TEXT("PassiveSoundMixModifier"), sizeof(FPassiveSoundMixModifier), Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPassiveSoundMixModifier>()
{
	return FPassiveSoundMixModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSoundMixModifier(FPassiveSoundMixModifier::StaticStruct, TEXT("/Script/Engine"), TEXT("PassiveSoundMixModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier
{
	FScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassiveSoundMixModifier")),new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier;
	struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundMix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundMix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing information on a SoundMix to activate passively.\n */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Structure containing information on a SoundMix to activate passively." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold = { "MaxVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, MaxVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold = { "MinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, MinVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** The SoundMix to activate */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The SoundMix to activate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix = { "SoundMix", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, SoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PassiveSoundMixModifier",
		sizeof(FPassiveSoundMixModifier),
		alignof(FPassiveSoundMixModifier),
		Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSoundMixModifier"), sizeof(FPassiveSoundMixModifier), Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash() { return 836849577U; }
class UScriptStruct* FSoundClassProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassProperties, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassProperties"), sizeof(FSoundClassProperties), Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassProperties>()
{
	return FSoundClassProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassProperties(FSoundClassProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassProperties")),new UScriptStruct::TCppStructOps<FSoundClassProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties;
	struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default2DReverbSendAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default2DReverbSendAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverb_MetaData[];
#endif
		static void NewProp_bReverb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAmbientVolumes_MetaData[];
#endif
		static void NewProp_bApplyAmbientVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAmbientVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterChannelOnly_MetaData[];
#endif
		static void NewProp_bCenterChannelOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterChannelOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMusic_MetaData[];
#endif
		static void NewProp_bIsMusic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPlay_MetaData[];
#endif
		static void NewProp_bAlwaysPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyEffects_MetaData[];
#endif
		static void NewProp_bApplyEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFEBleed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFEBleed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoBleed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoBleed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Default output submix of referencing sounds. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings. \n\x09  * (Unavailable if legacy 'Output to Master EQ Submix' is set) */" },
		{ "EditCondition", "!bApplyEffects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Default output submix of referencing sounds. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings.\n(Unavailable if legacy 'Output to Master EQ Submix' is set)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix = { "DefaultSubmix", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, DefaultSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Specifies how and when compressed audio data is loaded for asset if stream caching is enabled. */" },
		{ "DisplayName", "Loading Behavior Override" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Specifies how and when compressed audio data is loaded for asset if stream caching is enabled." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior = { "LoadingBehavior", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, LoadingBehavior), Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Which output target the sound should be played through */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Which output target the sound should be played through" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, OutputTarget), Z_Construct_UEnum_Engine_EAudioOutputTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Send amount to master reverb effect for referencing, unattenuated (2D) sounds. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Send amount to master reverb effect for referencing, unattenuated (2D) sounds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount = { "Default2DReverbSendAmount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, Default2DReverbSendAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Whether or not sounds referencing this class send to the reverb submix */" },
		{ "DisplayName", "Send to Master Reverb Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not sounds referencing this class send to the reverb submix" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bReverb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb = { "bReverb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether the Interior/Exterior volume and LPF modifiers should be applied */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether the Interior/Exterior volume and LPF modifiers should be applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bApplyAmbientVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes = { "bApplyAmbientVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether or not this sound class forces sounds to the center channel */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound class forces sounds to the center channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bCenterChannelOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly = { "bCenterChannelOnly", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether or not this is music (propagates to child classes only if parent is true) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this is music (propagates to child classes only if parent is true)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bIsMusic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic = { "bIsMusic", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to inflate referencing sound's priority to always play. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to inflate referencing sound's priority to always play." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bAlwaysPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay = { "bAlwaysPlay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether to use 'Master EQ Submix' as set in the 'Audio' category of Project Settings as the default submix for referencing sounds. */" },
		{ "DisplayName", "Output to Master EQ Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to use 'Master EQ Submix' as set in the 'Audio' category of Project Settings as the default submix for referencing sounds." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bApplyEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects = { "bApplyEffects", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Volume at which the radio filter kicks in */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume at which the radio filter kicks in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold = { "RadioFilterVolumeThreshold", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Volume of the radio filter effect. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume of the radio filter effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume = { "RadioFilterVolume", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Voice center channel volume - Not a multiplier (does not propagate to child classes) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Voice center channel volume - Not a multiplier (does not propagate to child classes)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume = { "VoiceCenterChannelVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, VoiceCenterChannelVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The amount of a sound to bleed to the LFE channel */" },
		{ "DisplayName", "LFE Bleed" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount of a sound to bleed to the LFE channel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed = { "LFEBleed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, LFEBleed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed_MetaData[] = {
		{ "Category", "Routing" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Stereo Bleed no longer supported." },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed = { "StereoBleed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, StereoBleed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Distance scale to apply to sounds that play with this sound class.\n\x09  * Sounds will have their attenuation distance scaled by this amount.\n\x09  * Allows adjusting attenuation settings dynamically. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Distance scale to apply to sounds that play with this sound class.\nSounds will have their attenuation distance scaled by this amount.\nAllows adjusting attenuation settings dynamically." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale = { "AttenuationDistanceScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, AttenuationDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Lowpass filter frequency */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Lowpass filter frequency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Pitch multiplier. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Pitch multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Volume multiplier. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassProperties",
		sizeof(FSoundClassProperties),
		alignof(FSoundClassProperties),
		Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassProperties"), sizeof(FSoundClassProperties), Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundClassProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash() { return 105903360U; }
class UScriptStruct* FSoundClassEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassEditorData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassEditorData"), sizeof(FSoundClassEditorData), Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassEditorData>()
{
	return FSoundClassEditorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassEditorData(FSoundClassEditorData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassEditorData")),new UScriptStruct::TCppStructOps<FSoundClassEditorData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData;
	struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassEditorData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassEditorData",
		sizeof(FSoundClassEditorData),
		alignof(FSoundClassEditorData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassEditorData"), sizeof(FSoundClassEditorData), Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash() { return 114514767U; }
	void USoundClass::StaticRegisterNativesUSoundClass()
	{
	}
	UClass* Z_Construct_UClass_USoundClass_NoRegister()
	{
		return USoundClass::StaticClass();
	}
	struct Z_Construct_UClass_USoundClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSoundMixModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveSoundMixModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSoundMixModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildClasses;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, ParentClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_Modulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/**\n\x09  * Modulation for the sound class. If not set on sound directly, settings\n\x09  * fall back to the modulation settings provided here.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Modulation for the sound class. If not set on sound directly, settings\nfall back to the modulation settings provided here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_Modulation = { "Modulation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, Modulation), Z_Construct_UScriptStruct_FSoundModulation, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_Modulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_Modulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** SoundMix Modifiers to activate automatically when a sound of this class is playing. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "SoundMix Modifiers to activate automatically when a sound of this class is playing." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, PassiveSoundMixModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPassiveSoundMixModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses = { "ChildClasses", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, ChildClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner = { "ChildClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Configurable properties like volume and priority. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configurable properties like volume and priority." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, Properties), Z_Construct_UScriptStruct_FSoundClassProperties, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_Modulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundClass_Statics::ClassParams = {
		&USoundClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundClass, 1038077896);
	template<> ENGINE_API UClass* StaticClass<USoundClass>()
	{
		return USoundClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundClass(Z_Construct_UClass_USoundClass, &USoundClass::StaticClass, TEXT("/Script/Engine"), TEXT("USoundClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
