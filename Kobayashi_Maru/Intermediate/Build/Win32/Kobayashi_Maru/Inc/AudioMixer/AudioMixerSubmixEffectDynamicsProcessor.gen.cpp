// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#include "Serialization/StructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor() {}
// Cross Module References
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
	static UEnum* ESubmixEffectDynamicsChannelLinkMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsChannelLinkMode"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsChannelLinkMode>()
	{
		return ESubmixEffectDynamicsChannelLinkMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsChannelLinkMode(ESubmixEffectDynamicsChannelLinkMode_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsChannelLinkMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Hash() { return 3394775439U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsChannelLinkMode"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsChannelLinkMode::Disabled", (int64)ESubmixEffectDynamicsChannelLinkMode::Disabled },
				{ "ESubmixEffectDynamicsChannelLinkMode::Average", (int64)ESubmixEffectDynamicsChannelLinkMode::Average },
				{ "ESubmixEffectDynamicsChannelLinkMode::Peak", (int64)ESubmixEffectDynamicsChannelLinkMode::Peak },
				{ "ESubmixEffectDynamicsChannelLinkMode::Count", (int64)ESubmixEffectDynamicsChannelLinkMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.Name", "ESubmixEffectDynamicsChannelLinkMode::Average" },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESubmixEffectDynamicsChannelLinkMode::Count" },
				{ "Disabled.Name", "ESubmixEffectDynamicsChannelLinkMode::Disabled" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "Peak.Name", "ESubmixEffectDynamicsChannelLinkMode::Peak" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"ESubmixEffectDynamicsChannelLinkMode",
				"ESubmixEffectDynamicsChannelLinkMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESubmixEffectDynamicsPeakMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsPeakMode"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>()
	{
		return ESubmixEffectDynamicsPeakMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsPeakMode(ESubmixEffectDynamicsPeakMode_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsPeakMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Hash() { return 585234546U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsPeakMode"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsPeakMode::MeanSquared", (int64)ESubmixEffectDynamicsPeakMode::MeanSquared },
				{ "ESubmixEffectDynamicsPeakMode::RootMeanSquared", (int64)ESubmixEffectDynamicsPeakMode::RootMeanSquared },
				{ "ESubmixEffectDynamicsPeakMode::Peak", (int64)ESubmixEffectDynamicsPeakMode::Peak },
				{ "ESubmixEffectDynamicsPeakMode::Count", (int64)ESubmixEffectDynamicsPeakMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESubmixEffectDynamicsPeakMode::Count" },
				{ "MeanSquared.Name", "ESubmixEffectDynamicsPeakMode::MeanSquared" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "Peak.Name", "ESubmixEffectDynamicsPeakMode::Peak" },
				{ "RootMeanSquared.Name", "ESubmixEffectDynamicsPeakMode::RootMeanSquared" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"ESubmixEffectDynamicsPeakMode",
				"ESubmixEffectDynamicsPeakMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESubmixEffectDynamicsProcessorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsProcessorType"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>()
	{
		return ESubmixEffectDynamicsProcessorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsProcessorType(ESubmixEffectDynamicsProcessorType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsProcessorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Hash() { return 3890925496U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsProcessorType"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsProcessorType::Compressor", (int64)ESubmixEffectDynamicsProcessorType::Compressor },
				{ "ESubmixEffectDynamicsProcessorType::Limiter", (int64)ESubmixEffectDynamicsProcessorType::Limiter },
				{ "ESubmixEffectDynamicsProcessorType::Expander", (int64)ESubmixEffectDynamicsProcessorType::Expander },
				{ "ESubmixEffectDynamicsProcessorType::Gate", (int64)ESubmixEffectDynamicsProcessorType::Gate },
				{ "ESubmixEffectDynamicsProcessorType::Count", (int64)ESubmixEffectDynamicsProcessorType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Compressor.Name", "ESubmixEffectDynamicsProcessorType::Compressor" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESubmixEffectDynamicsProcessorType::Count" },
				{ "Expander.Name", "ESubmixEffectDynamicsProcessorType::Expander" },
				{ "Gate.Name", "ESubmixEffectDynamicsProcessorType::Gate" },
				{ "Limiter.Name", "ESubmixEffectDynamicsProcessorType::Limiter" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"ESubmixEffectDynamicsProcessorType",
				"ESubmixEffectDynamicsProcessorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubmixEffectDynamicsProcessorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicsProcessorSettings>()
{
	return FSubmixEffectDynamicsProcessorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings(FSubmixEffectDynamicsProcessorSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectDynamicsProcessorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectDynamicsProcessorSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyLowshelf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyLowshelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyHighshelf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyHighshelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KeyGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeyAudition_MetaData[];
#endif
		static void NewProp_bKeyAudition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeyAudition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[];
#endif
		static void NewProp_bAnalogMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChannelLinked_MetaData[];
#endif
		static void NewProp_bChannelLinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChannelLinked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinkMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Submix dynamics processor settings\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Submix dynamics processor settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Low Shelf filter settings for key signal (external signal if supplied or input signal if not)\n" },
		{ "DisplayName", "Key Lowshelf" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Low Shelf filter settings for key signal (external signal if supplied or input signal if not)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf = { "KeyLowshelf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// High Shelf filter settings for key signal (external signal if supplied or input signal if not)\n" },
		{ "DisplayName", "Key Highshelf" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "High Shelf filter settings for key signal (external signal if supplied or input signal if not)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf = { "KeyHighshelf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// The output gain of the dynamics processor\n" },
		{ "DisplayName", "Output Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The output gain of the dynamics processor" },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Gain to apply to key signal (external signal if supplied or input signal if disabled)\n" },
		{ "DisplayName", "Key Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Gain to apply to key signal (external signal if supplied or input signal if disabled)" },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb = { "KeyGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Audition the key modulation signal, bypassing enveloping and processing the input signal.\n" },
		{ "DisplayName", "Key Audition" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Audition the key modulation signal, bypassing enveloping and processing the input signal." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bKeyAudition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition = { "bKeyAudition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "// Toggles treating the attack and release envelopes as analog-style vs digital-style (Analog will respond a bit more naturally/slower)\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style (Analog will respond a bit more naturally/slower)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bChannelLinked_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked = { "bChannelLinked", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix = { "ExternalSubmix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The amount of time to release the dynamics processing effect\n" },
		{ "DisplayName", "Release Time (ms)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to release the dynamics processing effect" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The amount of time to ramp into any dynamics processing effect\n" },
		{ "DisplayName", "AttackTime (ms)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to ramp into any dynamics processing effect" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of time to look ahead of the current audio (Allows for transients to be included in dynamics processing)\n" },
		{ "DisplayName", "Look Ahead (ms)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to look ahead of the current audio (Allows for transients to be included in dynamics processing)" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The knee bandwidth of the processor to use\n" },
		{ "DisplayName", "Knee (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The knee bandwidth of the processor to use" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The dynamics processor ratio used for compression/expansion\n" },
		{ "EditCondition", "DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::Compressor || DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::Expander" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The dynamics processor ratio used for compression/expansion" },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The threshold at which to perform a dynamics processing operation\n" },
		{ "DisplayName", "Threshold (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The input gain of the dynamics processor\n" },
		{ "DisplayName", "Input Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The input gain of the dynamics processor" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Mode of peak detection if key signal is multi-channel\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Mode of peak detection if key signal is multi-channel" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode = { "LinkMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LinkMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Mode of peak detection used on input key signal\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Mode of peak detection used on input key signal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Type of processor to apply\n" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Type of processor to apply" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectDynamicsProcessorSettings",
		sizeof(FSubmixEffectDynamicsProcessorSettings),
		alignof(FSubmixEffectDynamicsProcessorSettings),
		Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash() { return 3312640814U; }
class UScriptStruct* FSubmixEffectDynamicProcessorFilterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicProcessorFilterSettings"), sizeof(FSubmixEffectDynamicProcessorFilterSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicProcessorFilterSettings>()
{
	return FSubmixEffectDynamicProcessorFilterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings(FSubmixEffectDynamicProcessorFilterSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectDynamicProcessorFilterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicProcessorFilterSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicProcessorFilterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectDynamicProcessorFilterSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectDynamicProcessorFilterSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicProcessorFilterSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cutoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicProcessorFilterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The gain of the filter shelf applied to the key signal\n" },
		{ "DisplayName", "Gain (dB)" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The gain of the filter shelf applied to the key signal" },
		{ "UIMax", "6.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicProcessorFilterSettings, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The cutoff frequency of the HPF applied to key signal\n" },
		{ "DisplayName", "Cutoff (Hz)" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The cutoff frequency of the HPF applied to key signal" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff = { "Cutoff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicProcessorFilterSettings, Cutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// Whether or not filter is enabled\n" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Whether or not filter is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicProcessorFilterSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicProcessorFilterSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectDynamicProcessorFilterSettings",
		sizeof(FSubmixEffectDynamicProcessorFilterSettings),
		alignof(FSubmixEffectDynamicProcessorFilterSettings),
		Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectDynamicProcessorFilterSettings"), sizeof(FSubmixEffectDynamicProcessorFilterSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Hash() { return 2503862730U; }
	DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectDynamicsProcessorSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix)
	{
		P_GET_OBJECT(USoundSubmix,Z_Param_Submix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalSubmix(Z_Param_Submix);
		P_NATIVE_END;
	}
	void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset()
	{
		UClass* Class = USubmixEffectDynamicsProcessorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExternalSubmix", &USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix },
			{ "SetSettings", &USubmixEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms
		{
			USoundSubmix* Submix;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::NewProp_Submix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetExternalSubmix", nullptr, nullptr, sizeof(SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSubmixEffectDynamicsProcessorSettings Settings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix, "SetExternalSubmix" }, // 2687619778
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 1943751608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDynamicsProcessorPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams = {
		&USubmixEffectDynamicsProcessorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectDynamicsProcessorPreset, 1436584108);
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectDynamicsProcessorPreset>()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectDynamicsProcessorPreset(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, &USubmixEffectDynamicsProcessorPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectDynamicsProcessorPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDynamicsProcessorPreset);
	IMPLEMENT_FARCHIVE_SERIALIZER(USubmixEffectDynamicsProcessorPreset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
