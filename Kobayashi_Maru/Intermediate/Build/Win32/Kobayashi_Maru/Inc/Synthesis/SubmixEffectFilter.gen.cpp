// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectFilter() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFilterSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFilterPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
	static UEnum* ESubmixFilterAlgorithm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESubmixFilterAlgorithm"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterAlgorithm>()
	{
		return ESubmixFilterAlgorithm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixFilterAlgorithm(ESubmixFilterAlgorithm_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESubmixFilterAlgorithm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Hash() { return 3457939789U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixFilterAlgorithm"), 0, Get_Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixFilterAlgorithm::OnePole", (int64)ESubmixFilterAlgorithm::OnePole },
				{ "ESubmixFilterAlgorithm::StateVariable", (int64)ESubmixFilterAlgorithm::StateVariable },
				{ "ESubmixFilterAlgorithm::Ladder", (int64)ESubmixFilterAlgorithm::Ladder },
				{ "ESubmixFilterAlgorithm::Count", (int64)ESubmixFilterAlgorithm::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESubmixFilterAlgorithm::Count" },
				{ "Ladder.Name", "ESubmixFilterAlgorithm::Ladder" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
				{ "OnePole.Name", "ESubmixFilterAlgorithm::OnePole" },
				{ "StateVariable.Name", "ESubmixFilterAlgorithm::StateVariable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESubmixFilterAlgorithm",
				"ESubmixFilterAlgorithm",
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
	static UEnum* ESubmixFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESubmixFilterType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterType>()
	{
		return ESubmixFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixFilterType(ESubmixFilterType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESubmixFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESubmixFilterType_Hash() { return 1214548781U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixFilterType"), 0, Get_Z_Construct_UEnum_Synthesis_ESubmixFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixFilterType::LowPass", (int64)ESubmixFilterType::LowPass },
				{ "ESubmixFilterType::HighPass", (int64)ESubmixFilterType::HighPass },
				{ "ESubmixFilterType::BandPass", (int64)ESubmixFilterType::BandPass },
				{ "ESubmixFilterType::BandStop", (int64)ESubmixFilterType::BandStop },
				{ "ESubmixFilterType::Count", (int64)ESubmixFilterType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BandPass.Name", "ESubmixFilterType::BandPass" },
				{ "BandStop.Name", "ESubmixFilterType::BandStop" },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESubmixFilterType::Count" },
				{ "HighPass.Name", "ESubmixFilterType::HighPass" },
				{ "LowPass.Name", "ESubmixFilterType::LowPass" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESubmixFilterType",
				"ESubmixFilterType",
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
class UScriptStruct* FSubmixEffectFilterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectFilterSettings"), sizeof(FSubmixEffectFilterSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectFilterSettings>()
{
	return FSubmixEffectFilterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectFilterSettings(FSubmixEffectFilterSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SubmixEffectFilterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectFilterSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectFilterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectFilterSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectFilterSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectFilterSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSubmixEffectFilterSettings\n// UStruct used to define user-exposed params for use with your effect.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "FSubmixEffectFilterSettings\nUStruct used to define user-exposed params for use with your effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectFilterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The output filter resonance (Q) [0.5, 10]\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "The output filter resonance (Q) [0.5, 10]" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output filter cutoff frequency (hz) [0.0, 20000.0]\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "The output filter cutoff frequency (hz) [0.0, 20000.0]" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// What type of filter algorithm to use for the submix filter effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "What type of filter algorithm to use for the submix filter effect" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm = { "FilterAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterAlgorithm), Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// What type of filter to use for the submix filter effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "What type of filter to use for the submix filter effect" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterType), Z_Construct_UEnum_Synthesis_ESubmixFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectFilterSettings",
		sizeof(FSubmixEffectFilterSettings),
		alignof(FSubmixEffectFilterSettings),
		Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFilterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectFilterSettings"), sizeof(FSubmixEffectFilterSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Hash() { return 2679827579U; }
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterQMod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterQMod(Z_Param_InQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterQ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterQ(Z_Param_InQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterCutoffFrequencyMod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterCutoffFrequencyMod(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterCutoffFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterCutoffFrequency(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterAlgorithm)
	{
		P_GET_ENUM(ESubmixFilterAlgorithm,Z_Param_InAlgorithm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterAlgorithm(ESubmixFilterAlgorithm(Z_Param_InAlgorithm));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterType)
	{
		P_GET_ENUM(ESubmixFilterType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterType(ESubmixFilterType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectFilterPreset::StaticRegisterNativesUSubmixEffectFilterPreset()
	{
		UClass* Class = USubmixEffectFilterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilterAlgorithm", &USubmixEffectFilterPreset::execSetFilterAlgorithm },
			{ "SetFilterCutoffFrequency", &USubmixEffectFilterPreset::execSetFilterCutoffFrequency },
			{ "SetFilterCutoffFrequencyMod", &USubmixEffectFilterPreset::execSetFilterCutoffFrequencyMod },
			{ "SetFilterQ", &USubmixEffectFilterPreset::execSetFilterQ },
			{ "SetFilterQMod", &USubmixEffectFilterPreset::execSetFilterQMod },
			{ "SetFilterType", &USubmixEffectFilterPreset::execSetFilterType },
			{ "SetSettings", &USubmixEffectFilterPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterAlgorithm_Parms
		{
			ESubmixFilterAlgorithm InAlgorithm;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAlgorithm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAlgorithm_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm = { "InAlgorithm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterAlgorithm_Parms, InAlgorithm), Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter algorithm\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter algorithm" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterAlgorithm", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetFilterAlgorithm_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterCutoffFrequency_Parms
		{
			float InFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterCutoffFrequency_Parms, InFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the base filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the base filter cutoff frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterCutoffFrequency", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetFilterCutoffFrequency_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterCutoffFrequencyMod_Parms
		{
			float InFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterCutoffFrequencyMod_Parms, InFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the mod filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the mod filter cutoff frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterCutoffFrequencyMod", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetFilterCutoffFrequencyMod_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterQ_Parms
		{
			float InQ;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::NewProp_InQ = { "InQ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterQ_Parms, InQ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::NewProp_InQ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter Q\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter Q" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterQ", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetFilterQ_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterQMod_Parms
		{
			float InQ;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::NewProp_InQ = { "InQ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterQMod_Parms, InQ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::NewProp_InQ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter Q\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter Q" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterQMod", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetFilterQMod_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterType_Parms
		{
			ESubmixFilterType InType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterType_Parms, InType), Z_Construct_UEnum_Synthesis_ESubmixFilterType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter type\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterType", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetFilterType_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics
	{
		struct SubmixEffectFilterPreset_eventSetSettings_Parms
		{
			FSubmixEffectFilterSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Set all filter effect settings\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Set all filter effect settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectFilterPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister()
	{
		return USubmixEffectFilterPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectFilterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectFilterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm, "SetFilterAlgorithm" }, // 2696220812
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency, "SetFilterCutoffFrequency" }, // 2187390040
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod, "SetFilterCutoffFrequencyMod" }, // 1569209195
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ, "SetFilterQ" }, // 3792325159
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod, "SetFilterQMod" }, // 282493275
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType, "SetFilterType" }, // 1390802177
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings, "SetSettings" }, // 2226065653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectFilterPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectFilter.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "USubmixEffectFilterPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectFilterPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectFilterSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectFilterPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectFilterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectFilterPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectFilterPreset_Statics::ClassParams = {
		&USubmixEffectFilterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectFilterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectFilterPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectFilterPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectFilterPreset, 3398245014);
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectFilterPreset>()
	{
		return USubmixEffectFilterPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectFilterPreset(Z_Construct_UClass_USubmixEffectFilterPreset, &USubmixEffectFilterPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USubmixEffectFilterPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectFilterPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
