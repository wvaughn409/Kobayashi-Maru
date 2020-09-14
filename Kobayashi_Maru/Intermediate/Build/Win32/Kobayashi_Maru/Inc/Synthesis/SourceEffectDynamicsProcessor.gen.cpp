// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectDynamicsProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectDynamicsProcessor() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	static UEnum* ESourceEffectDynamicsPeakMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectDynamicsPeakMode"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectDynamicsPeakMode>()
	{
		return ESourceEffectDynamicsPeakMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceEffectDynamicsPeakMode(ESourceEffectDynamicsPeakMode_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESourceEffectDynamicsPeakMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Hash() { return 3305041057U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceEffectDynamicsPeakMode"), 0, Get_Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceEffectDynamicsPeakMode::MeanSquared", (int64)ESourceEffectDynamicsPeakMode::MeanSquared },
				{ "ESourceEffectDynamicsPeakMode::RootMeanSquared", (int64)ESourceEffectDynamicsPeakMode::RootMeanSquared },
				{ "ESourceEffectDynamicsPeakMode::Peak", (int64)ESourceEffectDynamicsPeakMode::Peak },
				{ "ESourceEffectDynamicsPeakMode::Count", (int64)ESourceEffectDynamicsPeakMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESourceEffectDynamicsPeakMode::Count" },
				{ "MeanSquared.Name", "ESourceEffectDynamicsPeakMode::MeanSquared" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
				{ "Peak.Name", "ESourceEffectDynamicsPeakMode::Peak" },
				{ "RootMeanSquared.Name", "ESourceEffectDynamicsPeakMode::RootMeanSquared" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESourceEffectDynamicsPeakMode",
				"ESourceEffectDynamicsPeakMode",
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
	static UEnum* ESourceEffectDynamicsProcessorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectDynamicsProcessorType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectDynamicsProcessorType>()
	{
		return ESourceEffectDynamicsProcessorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceEffectDynamicsProcessorType(ESourceEffectDynamicsProcessorType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESourceEffectDynamicsProcessorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Hash() { return 2830219813U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceEffectDynamicsProcessorType"), 0, Get_Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceEffectDynamicsProcessorType::Compressor", (int64)ESourceEffectDynamicsProcessorType::Compressor },
				{ "ESourceEffectDynamicsProcessorType::Limiter", (int64)ESourceEffectDynamicsProcessorType::Limiter },
				{ "ESourceEffectDynamicsProcessorType::Expander", (int64)ESourceEffectDynamicsProcessorType::Expander },
				{ "ESourceEffectDynamicsProcessorType::Gate", (int64)ESourceEffectDynamicsProcessorType::Gate },
				{ "ESourceEffectDynamicsProcessorType::Count", (int64)ESourceEffectDynamicsProcessorType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Compressor.Name", "ESourceEffectDynamicsProcessorType::Compressor" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESourceEffectDynamicsProcessorType::Count" },
				{ "Expander.Name", "ESourceEffectDynamicsProcessorType::Expander" },
				{ "Gate.Name", "ESourceEffectDynamicsProcessorType::Gate" },
				{ "Limiter.Name", "ESourceEffectDynamicsProcessorType::Limiter" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESourceEffectDynamicsProcessorType",
				"ESourceEffectDynamicsProcessorType",
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
class UScriptStruct* FSourceEffectDynamicsProcessorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectDynamicsProcessorSettings"), sizeof(FSourceEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectDynamicsProcessorSettings>()
{
	return FSourceEffectDynamicsProcessorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectDynamicsProcessorSettings(FSourceEffectDynamicsProcessorSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectDynamicsProcessorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectDynamicsProcessorSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectDynamicsProcessorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectDynamicsProcessorSettings")),new UScriptStruct::TCppStructOps<FSourceEffectDynamicsProcessorSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectDynamicsProcessorSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[];
#endif
		static void NewProp_bAnalogMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStereoLinked_MetaData[];
#endif
		static void NewProp_bStereoLinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStereoLinked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectDynamicsProcessorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
	{
		((FSourceEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSourceEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_SetBit(void* Obj)
	{
		((FSourceEffectDynamicsProcessorSettings*)Obj)->bStereoLinked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked = { "bStereoLinked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSourceEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectDynamicsProcessorSettings",
		sizeof(FSourceEffectDynamicsProcessorSettings),
		alignof(FSourceEffectDynamicsProcessorSettings),
		Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectDynamicsProcessorSettings"), sizeof(FSourceEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Hash() { return 1769618443U; }
	DEFINE_FUNCTION(USourceEffectDynamicsProcessorPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectDynamicsProcessorSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectDynamicsProcessorPreset::StaticRegisterNativesUSourceEffectDynamicsProcessorPreset()
	{
		UClass* Class = USourceEffectDynamicsProcessorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics
	{
		struct SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSourceEffectDynamicsProcessorSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectDynamicsProcessorPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister()
	{
		return USourceEffectDynamicsProcessorPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 2237977593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectDynamicsProcessorPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams = {
		&USourceEffectDynamicsProcessorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectDynamicsProcessorPreset, 409462440);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectDynamicsProcessorPreset>()
	{
		return USourceEffectDynamicsProcessorPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectDynamicsProcessorPreset(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset, &USourceEffectDynamicsProcessorPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectDynamicsProcessorPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectDynamicsProcessorPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
