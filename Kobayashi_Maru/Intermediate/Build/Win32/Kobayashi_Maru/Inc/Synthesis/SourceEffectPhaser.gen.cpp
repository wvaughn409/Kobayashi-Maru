// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectPhaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectPhaser() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EPhaserLFOType();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectPhaserSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPhaserPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	static UEnum* EPhaserLFOType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EPhaserLFOType, Z_Construct_UPackage__Script_Synthesis(), TEXT("EPhaserLFOType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EPhaserLFOType>()
	{
		return EPhaserLFOType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhaserLFOType(EPhaserLFOType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("EPhaserLFOType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_EPhaserLFOType_Hash() { return 4234154715U; }
	UEnum* Z_Construct_UEnum_Synthesis_EPhaserLFOType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhaserLFOType"), 0, Get_Z_Construct_UEnum_Synthesis_EPhaserLFOType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhaserLFOType::Sine", (int64)EPhaserLFOType::Sine },
				{ "EPhaserLFOType::UpSaw", (int64)EPhaserLFOType::UpSaw },
				{ "EPhaserLFOType::DownSaw", (int64)EPhaserLFOType::DownSaw },
				{ "EPhaserLFOType::Square", (int64)EPhaserLFOType::Square },
				{ "EPhaserLFOType::Triangle", (int64)EPhaserLFOType::Triangle },
				{ "EPhaserLFOType::Exponential", (int64)EPhaserLFOType::Exponential },
				{ "EPhaserLFOType::RandomSampleHold", (int64)EPhaserLFOType::RandomSampleHold },
				{ "EPhaserLFOType::Count", (int64)EPhaserLFOType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EPhaserLFOType::Count" },
				{ "DownSaw.Name", "EPhaserLFOType::DownSaw" },
				{ "Exponential.Name", "EPhaserLFOType::Exponential" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
				{ "RandomSampleHold.Name", "EPhaserLFOType::RandomSampleHold" },
				{ "Sine.Name", "EPhaserLFOType::Sine" },
				{ "Square.Name", "EPhaserLFOType::Square" },
				{ "Triangle.Name", "EPhaserLFOType::Triangle" },
				{ "UpSaw.Name", "EPhaserLFOType::UpSaw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"EPhaserLFOType",
				"EPhaserLFOType",
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
class UScriptStruct* FSourceEffectPhaserSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectPhaserSettings"), sizeof(FSourceEffectPhaserSettings), Get_Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectPhaserSettings>()
{
	return FSourceEffectPhaserSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectPhaserSettings(FSourceEffectPhaserSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectPhaserSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectPhaserSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectPhaserSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectPhaserSettings")),new UScriptStruct::TCppStructOps<FSourceEffectPhaserSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectPhaserSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseQuadraturePhase_MetaData[];
#endif
		static void NewProp_UseQuadraturePhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseQuadraturePhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFOType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LFOType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LFOType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectPhaserSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Whether or not to use quadtrature phase for the LFO modulation\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "Whether or not to use quadtrature phase for the LFO modulation" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_SetBit(void* Obj)
	{
		((FSourceEffectPhaserSettings*)Obj)->UseQuadraturePhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase = { "UseQuadraturePhase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSourceEffectPhaserSettings), &Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The phaser LFO type\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The phaser LFO type" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType = { "LFOType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectPhaserSettings, LFOType), Z_Construct_UEnum_Synthesis_EPhaserLFOType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the phaser effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The feedback of the phaser effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectPhaserSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The LFO frequency of the phaser effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The LFO frequency of the phaser effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectPhaserSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the phaser effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The wet level of the phaser effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectPhaserSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectPhaserSettings",
		sizeof(FSourceEffectPhaserSettings),
		alignof(FSourceEffectPhaserSettings),
		Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectPhaserSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectPhaserSettings"), sizeof(FSourceEffectPhaserSettings), Get_Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Hash() { return 2648828183U; }
	DEFINE_FUNCTION(USourceEffectPhaserPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectPhaserSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectPhaserPreset::StaticRegisterNativesUSourceEffectPhaserPreset()
	{
		UClass* Class = USourceEffectPhaserPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectPhaserPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics
	{
		struct SourceEffectPhaserPreset_eventSetSettings_Parms
		{
			FSourceEffectPhaserSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectPhaserPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectPhaserPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectPhaserPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister()
	{
		return USourceEffectPhaserPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectPhaserPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectPhaserPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectPhaserPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings, "SetSettings" }, // 945596078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectPhaser.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The depth of the chorus effect" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectPhaserPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectPhaserPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectPhaserPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectPhaserPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectPhaserPreset_Statics::ClassParams = {
		&USourceEffectPhaserPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectPhaserPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectPhaserPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectPhaserPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectPhaserPreset, 3189309979);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectPhaserPreset>()
	{
		return USourceEffectPhaserPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectPhaserPreset(Z_Construct_UClass_USourceEffectPhaserPreset, &USourceEffectPhaserPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectPhaserPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectPhaserPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
