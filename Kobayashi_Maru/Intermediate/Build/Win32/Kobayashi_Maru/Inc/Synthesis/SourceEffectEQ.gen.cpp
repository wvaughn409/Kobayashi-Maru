// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectEQ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectEQ() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQBand();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEQPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEQPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
class UScriptStruct* FSourceEffectEQSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEQSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEQSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEQSettings"), sizeof(FSourceEffectEQSettings), Get_Z_Construct_UScriptStruct_FSourceEffectEQSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEQSettings>()
{
	return FSourceEffectEQSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectEQSettings(FSourceEffectEQSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectEQSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEQSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEQSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectEQSettings")),new UScriptStruct::TCppStructOps<FSourceEffectEQSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEQSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQBands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EQBands;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQBands_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// EQ source effect settings\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "EQ source effect settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEQSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The EQ bands to use\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The EQ bands to use" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands = { "EQBands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEQSettings, EQBands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_Inner = { "EQBands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSourceEffectEQBand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectEQSettings",
		sizeof(FSourceEffectEQSettings),
		alignof(FSourceEffectEQSettings),
		Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEQSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectEQSettings"), sizeof(FSourceEffectEQSettings), Get_Z_Construct_UScriptStruct_FSourceEffectEQSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEQSettings_Hash() { return 1690292103U; }
class UScriptStruct* FSourceEffectEQBand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEQBand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEQBand, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEQBand"), sizeof(FSourceEffectEQBand), Get_Z_Construct_UScriptStruct_FSourceEffectEQBand_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEQBand>()
{
	return FSourceEffectEQBand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectEQBand(FSourceEffectEQBand::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectEQBand"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEQBand
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEQBand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectEQBand")),new UScriptStruct::TCppStructOps<FSourceEffectEQBand>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectEQBand;
	struct Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEQBand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not the band is enabled. Allows changing bands on the fly.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "Whether or not the band is enabled. Allows changing bands on the fly." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSourceEffectEQBand*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSourceEffectEQBand), &Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// The gain in decibels to apply to the eq band\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The gain in decibels to apply to the eq band" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEQBand, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The bandwidth (in octaves) of the band\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The bandwidth (in octaves) of the band" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEQBand, Bandwidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The cutoff frequency of the band\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The cutoff frequency of the band" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectEQBand, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectEQBand",
		sizeof(FSourceEffectEQBand),
		alignof(FSourceEffectEQBand),
		Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQBand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEQBand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectEQBand"), sizeof(FSourceEffectEQBand), Get_Z_Construct_UScriptStruct_FSourceEffectEQBand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectEQBand_Hash() { return 80056260U; }
	DEFINE_FUNCTION(USourceEffectEQPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectEQPreset::StaticRegisterNativesUSourceEffectEQPreset()
	{
		UClass* Class = USourceEffectEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics
	{
		struct SourceEffectEQPreset_eventSetSettings_Parms
		{
			FSourceEffectEQSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectEQSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEQPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectEQPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEQPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectEQPreset_NoRegister()
	{
		return USourceEffectEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectEQPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectEQPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectEQPreset_SetSettings, "SetSettings" }, // 3688629382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEQPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectEQ.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectEQPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectEQSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectEQPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectEQPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectEQPreset_Statics::ClassParams = {
		&USourceEffectEQPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectEQPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEQPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectEQPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectEQPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectEQPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectEQPreset, 3158588201);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectEQPreset>()
	{
		return USourceEffectEQPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectEQPreset(Z_Construct_UClass_USourceEffectEQPreset, &USourceEffectEQPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectEQPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectEQPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
