// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/EpicSynth1Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicSynth1Types() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchDestination();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchSource();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvPatch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOPatchType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOMode();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1OscType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FPatchId();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth1PatchCable();
// End Cross Module References
	static UEnum* ESynth1PatchDestination_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynth1PatchDestination"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynth1PatchDestination>()
	{
		return ESynth1PatchDestination_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynth1PatchDestination(ESynth1PatchDestination_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynth1PatchDestination"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Hash() { return 1068401879U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchDestination()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynth1PatchDestination"), 0, Get_Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynth1PatchDestination::Osc1Gain", (int64)ESynth1PatchDestination::Osc1Gain },
				{ "ESynth1PatchDestination::Osc1Frequency", (int64)ESynth1PatchDestination::Osc1Frequency },
				{ "ESynth1PatchDestination::Osc1Pulsewidth", (int64)ESynth1PatchDestination::Osc1Pulsewidth },
				{ "ESynth1PatchDestination::Osc2Gain", (int64)ESynth1PatchDestination::Osc2Gain },
				{ "ESynth1PatchDestination::Osc2Frequency", (int64)ESynth1PatchDestination::Osc2Frequency },
				{ "ESynth1PatchDestination::Osc2Pulsewidth", (int64)ESynth1PatchDestination::Osc2Pulsewidth },
				{ "ESynth1PatchDestination::FilterFrequency", (int64)ESynth1PatchDestination::FilterFrequency },
				{ "ESynth1PatchDestination::FilterQ", (int64)ESynth1PatchDestination::FilterQ },
				{ "ESynth1PatchDestination::Gain", (int64)ESynth1PatchDestination::Gain },
				{ "ESynth1PatchDestination::Pan", (int64)ESynth1PatchDestination::Pan },
				{ "ESynth1PatchDestination::LFO1Frequency", (int64)ESynth1PatchDestination::LFO1Frequency },
				{ "ESynth1PatchDestination::LFO1Gain", (int64)ESynth1PatchDestination::LFO1Gain },
				{ "ESynth1PatchDestination::LFO2Frequency", (int64)ESynth1PatchDestination::LFO2Frequency },
				{ "ESynth1PatchDestination::LFO2Gain", (int64)ESynth1PatchDestination::LFO2Gain },
				{ "ESynth1PatchDestination::Count", (int64)ESynth1PatchDestination::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynth1PatchDestination::Count" },
				{ "FilterFrequency.Name", "ESynth1PatchDestination::FilterFrequency" },
				{ "FilterQ.Name", "ESynth1PatchDestination::FilterQ" },
				{ "Gain.Name", "ESynth1PatchDestination::Gain" },
				{ "LFO1Frequency.Name", "ESynth1PatchDestination::LFO1Frequency" },
				{ "LFO1Gain.Name", "ESynth1PatchDestination::LFO1Gain" },
				{ "LFO2Frequency.Name", "ESynth1PatchDestination::LFO2Frequency" },
				{ "LFO2Gain.Name", "ESynth1PatchDestination::LFO2Gain" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "Osc1Frequency.Name", "ESynth1PatchDestination::Osc1Frequency" },
				{ "Osc1Gain.Name", "ESynth1PatchDestination::Osc1Gain" },
				{ "Osc1Pulsewidth.Name", "ESynth1PatchDestination::Osc1Pulsewidth" },
				{ "Osc2Frequency.Name", "ESynth1PatchDestination::Osc2Frequency" },
				{ "Osc2Gain.Name", "ESynth1PatchDestination::Osc2Gain" },
				{ "Osc2Pulsewidth.Name", "ESynth1PatchDestination::Osc2Pulsewidth" },
				{ "Pan.Name", "ESynth1PatchDestination::Pan" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynth1PatchDestination",
				"ESynth1PatchDestination",
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
	static UEnum* ESynth1PatchSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchSource, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynth1PatchSource"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynth1PatchSource>()
	{
		return ESynth1PatchSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynth1PatchSource(ESynth1PatchSource_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynth1PatchSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Hash() { return 245623449U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynth1PatchSource"), 0, Get_Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynth1PatchSource::LFO1", (int64)ESynth1PatchSource::LFO1 },
				{ "ESynth1PatchSource::LFO2", (int64)ESynth1PatchSource::LFO2 },
				{ "ESynth1PatchSource::Envelope", (int64)ESynth1PatchSource::Envelope },
				{ "ESynth1PatchSource::BiasEnvelope", (int64)ESynth1PatchSource::BiasEnvelope },
				{ "ESynth1PatchSource::Count", (int64)ESynth1PatchSource::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BiasEnvelope.Name", "ESynth1PatchSource::BiasEnvelope" },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynth1PatchSource::Count" },
				{ "Envelope.Name", "ESynth1PatchSource::Envelope" },
				{ "LFO1.Name", "ESynth1PatchSource::LFO1" },
				{ "LFO2.Name", "ESynth1PatchSource::LFO2" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynth1PatchSource",
				"ESynth1PatchSource",
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
	static UEnum* ESynthStereoDelayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthStereoDelayMode"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthStereoDelayMode>()
	{
		return ESynthStereoDelayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthStereoDelayMode(ESynthStereoDelayMode_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthStereoDelayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Hash() { return 1314495195U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthStereoDelayMode"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthStereoDelayMode::Normal", (int64)ESynthStereoDelayMode::Normal },
				{ "ESynthStereoDelayMode::Cross", (int64)ESynthStereoDelayMode::Cross },
				{ "ESynthStereoDelayMode::PingPong", (int64)ESynthStereoDelayMode::PingPong },
				{ "ESynthStereoDelayMode::Count", (int64)ESynthStereoDelayMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthStereoDelayMode::Count" },
				{ "Cross.Name", "ESynthStereoDelayMode::Cross" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "Normal.Name", "ESynthStereoDelayMode::Normal" },
				{ "PingPong.Name", "ESynthStereoDelayMode::PingPong" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthStereoDelayMode",
				"ESynthStereoDelayMode",
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
	static UEnum* ESynthFilterAlgorithm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthFilterAlgorithm"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthFilterAlgorithm>()
	{
		return ESynthFilterAlgorithm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthFilterAlgorithm(ESynthFilterAlgorithm_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthFilterAlgorithm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Hash() { return 1281077022U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthFilterAlgorithm"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthFilterAlgorithm::OnePole", (int64)ESynthFilterAlgorithm::OnePole },
				{ "ESynthFilterAlgorithm::StateVariable", (int64)ESynthFilterAlgorithm::StateVariable },
				{ "ESynthFilterAlgorithm::Ladder", (int64)ESynthFilterAlgorithm::Ladder },
				{ "ESynthFilterAlgorithm::Count", (int64)ESynthFilterAlgorithm::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthFilterAlgorithm::Count" },
				{ "Ladder.Name", "ESynthFilterAlgorithm::Ladder" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "OnePole.Name", "ESynthFilterAlgorithm::OnePole" },
				{ "StateVariable.Name", "ESynthFilterAlgorithm::StateVariable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthFilterAlgorithm",
				"ESynthFilterAlgorithm",
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
	static UEnum* ESynthFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthFilterType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthFilterType>()
	{
		return ESynthFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthFilterType(ESynthFilterType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthFilterType_Hash() { return 1743037703U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthFilterType"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthFilterType::LowPass", (int64)ESynthFilterType::LowPass },
				{ "ESynthFilterType::HighPass", (int64)ESynthFilterType::HighPass },
				{ "ESynthFilterType::BandPass", (int64)ESynthFilterType::BandPass },
				{ "ESynthFilterType::BandStop", (int64)ESynthFilterType::BandStop },
				{ "ESynthFilterType::Count", (int64)ESynthFilterType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BandPass.Name", "ESynthFilterType::BandPass" },
				{ "BandStop.Name", "ESynthFilterType::BandStop" },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthFilterType::Count" },
				{ "HighPass.Name", "ESynthFilterType::HighPass" },
				{ "LowPass.Name", "ESynthFilterType::LowPass" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthFilterType",
				"ESynthFilterType",
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
	static UEnum* ESynthModEnvBiasPatch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthModEnvBiasPatch"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthModEnvBiasPatch>()
	{
		return ESynthModEnvBiasPatch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthModEnvBiasPatch(ESynthModEnvBiasPatch_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthModEnvBiasPatch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Hash() { return 2091753937U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthModEnvBiasPatch"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthModEnvBiasPatch::PatchToNone", (int64)ESynthModEnvBiasPatch::PatchToNone },
				{ "ESynthModEnvBiasPatch::PatchToOscFreq", (int64)ESynthModEnvBiasPatch::PatchToOscFreq },
				{ "ESynthModEnvBiasPatch::PatchToFilterFreq", (int64)ESynthModEnvBiasPatch::PatchToFilterFreq },
				{ "ESynthModEnvBiasPatch::PatchToFilterQ", (int64)ESynthModEnvBiasPatch::PatchToFilterQ },
				{ "ESynthModEnvBiasPatch::PatchToLFO1Gain", (int64)ESynthModEnvBiasPatch::PatchToLFO1Gain },
				{ "ESynthModEnvBiasPatch::PatchToLFO2Gain", (int64)ESynthModEnvBiasPatch::PatchToLFO2Gain },
				{ "ESynthModEnvBiasPatch::PatchToLFO1Freq", (int64)ESynthModEnvBiasPatch::PatchToLFO1Freq },
				{ "ESynthModEnvBiasPatch::PatchToLFO2Freq", (int64)ESynthModEnvBiasPatch::PatchToLFO2Freq },
				{ "ESynthModEnvBiasPatch::Count", (int64)ESynthModEnvBiasPatch::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthModEnvBiasPatch::Count" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "PatchToFilterFreq.Name", "ESynthModEnvBiasPatch::PatchToFilterFreq" },
				{ "PatchToFilterQ.Name", "ESynthModEnvBiasPatch::PatchToFilterQ" },
				{ "PatchToLFO1Freq.Name", "ESynthModEnvBiasPatch::PatchToLFO1Freq" },
				{ "PatchToLFO1Gain.Name", "ESynthModEnvBiasPatch::PatchToLFO1Gain" },
				{ "PatchToLFO2Freq.Name", "ESynthModEnvBiasPatch::PatchToLFO2Freq" },
				{ "PatchToLFO2Gain.Name", "ESynthModEnvBiasPatch::PatchToLFO2Gain" },
				{ "PatchToNone.Name", "ESynthModEnvBiasPatch::PatchToNone" },
				{ "PatchToOscFreq.Name", "ESynthModEnvBiasPatch::PatchToOscFreq" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthModEnvBiasPatch",
				"ESynthModEnvBiasPatch",
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
	static UEnum* ESynthModEnvPatch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthModEnvPatch"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthModEnvPatch>()
	{
		return ESynthModEnvPatch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthModEnvPatch(ESynthModEnvPatch_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthModEnvPatch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Hash() { return 3596068061U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvPatch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthModEnvPatch"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthModEnvPatch::PatchToNone", (int64)ESynthModEnvPatch::PatchToNone },
				{ "ESynthModEnvPatch::PatchToOscFreq", (int64)ESynthModEnvPatch::PatchToOscFreq },
				{ "ESynthModEnvPatch::PatchToFilterFreq", (int64)ESynthModEnvPatch::PatchToFilterFreq },
				{ "ESynthModEnvPatch::PatchToFilterQ", (int64)ESynthModEnvPatch::PatchToFilterQ },
				{ "ESynthModEnvPatch::PatchToLFO1Gain", (int64)ESynthModEnvPatch::PatchToLFO1Gain },
				{ "ESynthModEnvPatch::PatchToLFO2Gain", (int64)ESynthModEnvPatch::PatchToLFO2Gain },
				{ "ESynthModEnvPatch::PatchToLFO1Freq", (int64)ESynthModEnvPatch::PatchToLFO1Freq },
				{ "ESynthModEnvPatch::PatchToLFO2Freq", (int64)ESynthModEnvPatch::PatchToLFO2Freq },
				{ "ESynthModEnvPatch::Count", (int64)ESynthModEnvPatch::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthModEnvPatch::Count" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "PatchToFilterFreq.Name", "ESynthModEnvPatch::PatchToFilterFreq" },
				{ "PatchToFilterQ.Name", "ESynthModEnvPatch::PatchToFilterQ" },
				{ "PatchToLFO1Freq.Name", "ESynthModEnvPatch::PatchToLFO1Freq" },
				{ "PatchToLFO1Gain.Name", "ESynthModEnvPatch::PatchToLFO1Gain" },
				{ "PatchToLFO2Freq.Name", "ESynthModEnvPatch::PatchToLFO2Freq" },
				{ "PatchToLFO2Gain.Name", "ESynthModEnvPatch::PatchToLFO2Gain" },
				{ "PatchToNone.Name", "ESynthModEnvPatch::PatchToNone" },
				{ "PatchToOscFreq.Name", "ESynthModEnvPatch::PatchToOscFreq" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthModEnvPatch",
				"ESynthModEnvPatch",
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
	static UEnum* ESynthLFOPatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthLFOPatchType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthLFOPatchType>()
	{
		return ESynthLFOPatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthLFOPatchType(ESynthLFOPatchType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthLFOPatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Hash() { return 4210803896U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOPatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthLFOPatchType"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthLFOPatchType::PatchToNone", (int64)ESynthLFOPatchType::PatchToNone },
				{ "ESynthLFOPatchType::PatchToGain", (int64)ESynthLFOPatchType::PatchToGain },
				{ "ESynthLFOPatchType::PatchToOscFreq", (int64)ESynthLFOPatchType::PatchToOscFreq },
				{ "ESynthLFOPatchType::PatchToFilterFreq", (int64)ESynthLFOPatchType::PatchToFilterFreq },
				{ "ESynthLFOPatchType::PatchToFilterQ", (int64)ESynthLFOPatchType::PatchToFilterQ },
				{ "ESynthLFOPatchType::PatchToOscPulseWidth", (int64)ESynthLFOPatchType::PatchToOscPulseWidth },
				{ "ESynthLFOPatchType::PatchToOscPan", (int64)ESynthLFOPatchType::PatchToOscPan },
				{ "ESynthLFOPatchType::PatchLFO1ToLFO2Frequency", (int64)ESynthLFOPatchType::PatchLFO1ToLFO2Frequency },
				{ "ESynthLFOPatchType::PatchLFO1ToLFO2Gain", (int64)ESynthLFOPatchType::PatchLFO1ToLFO2Gain },
				{ "ESynthLFOPatchType::Count", (int64)ESynthLFOPatchType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthLFOPatchType::Count" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "PatchLFO1ToLFO2Frequency.Name", "ESynthLFOPatchType::PatchLFO1ToLFO2Frequency" },
				{ "PatchLFO1ToLFO2Gain.Name", "ESynthLFOPatchType::PatchLFO1ToLFO2Gain" },
				{ "PatchToFilterFreq.Name", "ESynthLFOPatchType::PatchToFilterFreq" },
				{ "PatchToFilterQ.Name", "ESynthLFOPatchType::PatchToFilterQ" },
				{ "PatchToGain.Name", "ESynthLFOPatchType::PatchToGain" },
				{ "PatchToNone.Name", "ESynthLFOPatchType::PatchToNone" },
				{ "PatchToOscFreq.Name", "ESynthLFOPatchType::PatchToOscFreq" },
				{ "PatchToOscPan.Name", "ESynthLFOPatchType::PatchToOscPan" },
				{ "PatchToOscPulseWidth.Name", "ESynthLFOPatchType::PatchToOscPulseWidth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthLFOPatchType",
				"ESynthLFOPatchType",
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
	static UEnum* ESynthLFOMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOMode, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthLFOMode"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthLFOMode>()
	{
		return ESynthLFOMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthLFOMode(ESynthLFOMode_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthLFOMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthLFOMode_Hash() { return 4024638214U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthLFOMode"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthLFOMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthLFOMode::Sync", (int64)ESynthLFOMode::Sync },
				{ "ESynthLFOMode::OneShot", (int64)ESynthLFOMode::OneShot },
				{ "ESynthLFOMode::Free", (int64)ESynthLFOMode::Free },
				{ "ESynthLFOMode::Count", (int64)ESynthLFOMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthLFOMode::Count" },
				{ "Free.Name", "ESynthLFOMode::Free" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "OneShot.Name", "ESynthLFOMode::OneShot" },
				{ "Sync.Name", "ESynthLFOMode::Sync" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthLFOMode",
				"ESynthLFOMode",
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
	static UEnum* ESynthLFOType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthLFOType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthLFOType>()
	{
		return ESynthLFOType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynthLFOType(ESynthLFOType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynthLFOType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynthLFOType_Hash() { return 1519966388U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynthLFOType"), 0, Get_Z_Construct_UEnum_Synthesis_ESynthLFOType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynthLFOType::Sine", (int64)ESynthLFOType::Sine },
				{ "ESynthLFOType::UpSaw", (int64)ESynthLFOType::UpSaw },
				{ "ESynthLFOType::DownSaw", (int64)ESynthLFOType::DownSaw },
				{ "ESynthLFOType::Square", (int64)ESynthLFOType::Square },
				{ "ESynthLFOType::Triangle", (int64)ESynthLFOType::Triangle },
				{ "ESynthLFOType::Exponential", (int64)ESynthLFOType::Exponential },
				{ "ESynthLFOType::RandomSampleHold", (int64)ESynthLFOType::RandomSampleHold },
				{ "ESynthLFOType::Count", (int64)ESynthLFOType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynthLFOType::Count" },
				{ "DownSaw.Name", "ESynthLFOType::DownSaw" },
				{ "Exponential.Name", "ESynthLFOType::Exponential" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "RandomSampleHold.Name", "ESynthLFOType::RandomSampleHold" },
				{ "Sine.Name", "ESynthLFOType::Sine" },
				{ "Square.Name", "ESynthLFOType::Square" },
				{ "Triangle.Name", "ESynthLFOType::Triangle" },
				{ "UpSaw.Name", "ESynthLFOType::UpSaw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynthLFOType",
				"ESynthLFOType",
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
	static UEnum* ESynth1OscType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1OscType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynth1OscType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynth1OscType>()
	{
		return ESynth1OscType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESynth1OscType(ESynth1OscType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESynth1OscType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESynth1OscType_Hash() { return 2699997256U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESynth1OscType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESynth1OscType"), 0, Get_Z_Construct_UEnum_Synthesis_ESynth1OscType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESynth1OscType::Sine", (int64)ESynth1OscType::Sine },
				{ "ESynth1OscType::Saw", (int64)ESynth1OscType::Saw },
				{ "ESynth1OscType::Triangle", (int64)ESynth1OscType::Triangle },
				{ "ESynth1OscType::Square", (int64)ESynth1OscType::Square },
				{ "ESynth1OscType::Noise", (int64)ESynth1OscType::Noise },
				{ "ESynth1OscType::Count", (int64)ESynth1OscType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESynth1OscType::Count" },
				{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
				{ "Noise.Name", "ESynth1OscType::Noise" },
				{ "Saw.Name", "ESynth1OscType::Saw" },
				{ "Sine.Name", "ESynth1OscType::Sine" },
				{ "Square.Name", "ESynth1OscType::Square" },
				{ "Triangle.Name", "ESynth1OscType::Triangle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESynth1OscType",
				"ESynth1OscType",
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
class UScriptStruct* FPatchId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FPatchId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatchId, Z_Construct_UPackage__Script_Synthesis(), TEXT("PatchId"), sizeof(FPatchId), Get_Z_Construct_UScriptStruct_FPatchId_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FPatchId>()
{
	return FPatchId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatchId(FPatchId::StaticStruct, TEXT("/Script/Synthesis"), TEXT("PatchId"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFPatchId
{
	FScriptStruct_Synthesis_StaticRegisterNativesFPatchId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatchId")),new UScriptStruct::TCppStructOps<FPatchId>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFPatchId;
	struct Z_Construct_UScriptStruct_FPatchId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatchId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatchId>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatchId, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatchId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatchId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"PatchId",
		sizeof(FPatchId),
		alignof(FPatchId),
		Z_Construct_UScriptStruct_FPatchId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatchId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatchId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatchId"), sizeof(FPatchId), Get_Z_Construct_UScriptStruct_FPatchId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatchId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatchId_Hash() { return 374265168U; }
class UScriptStruct* FSynth1PatchCable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSynth1PatchCable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynth1PatchCable, Z_Construct_UPackage__Script_Synthesis(), TEXT("Synth1PatchCable"), sizeof(FSynth1PatchCable), Get_Z_Construct_UScriptStruct_FSynth1PatchCable_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynth1PatchCable>()
{
	return FSynth1PatchCable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSynth1PatchCable(FSynth1PatchCable::StaticStruct, TEXT("/Script/Synthesis"), TEXT("Synth1PatchCable"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSynth1PatchCable
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSynth1PatchCable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Synth1PatchCable")),new UScriptStruct::TCppStructOps<FSynth1PatchCable>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSynth1PatchCable;
	struct Z_Construct_UScriptStruct_FSynth1PatchCable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynth1PatchCable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The patch destination type\n" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "ToolTip", "The patch destination type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth1PatchCable, Destination), Z_Construct_UEnum_Synthesis_ESynth1PatchDestination, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The patch depth (how much the modulator modulates the destination)\n" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "ToolTip", "The patch depth (how much the modulator modulates the destination)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth1PatchCable, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"Synth1PatchCable",
		sizeof(FSynth1PatchCable),
		alignof(FSynth1PatchCable),
		Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynth1PatchCable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSynth1PatchCable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Synth1PatchCable"), sizeof(FSynth1PatchCable), Get_Z_Construct_UScriptStruct_FSynth1PatchCable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSynth1PatchCable_Hash() { return 2911759896U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
