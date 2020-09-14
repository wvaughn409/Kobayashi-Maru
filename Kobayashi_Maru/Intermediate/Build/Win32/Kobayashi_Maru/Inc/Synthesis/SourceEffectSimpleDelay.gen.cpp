// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectSimpleDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectSimpleDelay() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
class UScriptStruct* FSourceEffectSimpleDelaySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectSimpleDelaySettings"), sizeof(FSourceEffectSimpleDelaySettings), Get_Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectSimpleDelaySettings>()
{
	return FSourceEffectSimpleDelaySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectSimpleDelaySettings(FSourceEffectSimpleDelaySettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectSimpleDelaySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectSimpleDelaySettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectSimpleDelaySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectSimpleDelaySettings")),new UScriptStruct::TCppStructOps<FSourceEffectSimpleDelaySettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectSimpleDelaySettings;
	struct Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayBasedOnDistance_MetaData[];
#endif
		static void NewProp_bDelayBasedOnDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayBasedOnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectSimpleDelaySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not to delay the audio based on the distance to the listener or use manual delay\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Whether or not to delay the audio based on the distance to the listener or use manual delay" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_SetBit(void* Obj)
	{
		((FSourceEffectSimpleDelaySettings*)Obj)->bDelayBasedOnDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance = { "bDelayBasedOnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSourceEffectSimpleDelaySettings), &Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount to feedback into the delay line (because why not)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Amount to feedback into the delay line (because why not)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain stage on wet (delayed) signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Gain stage on wet (delayed) signal" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount = { "WetAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, WetAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain stage on dry (non-delayed signal)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Gain stage on dry (non-delayed signal)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount = { "DryAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, DryAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Delay amount in seconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Delay amount in seconds" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount = { "DelayAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, DelayAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.01" },
		{ "Comment", "// Speed of sound in meters per second when using distance-based delay\n" },
		{ "EditCondition", "bDelayBasedOnDistance" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ToolTip", "Speed of sound in meters per second when using distance-based delay" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound = { "SpeedOfSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectSimpleDelaySettings, SpeedOfSound), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_bDelayBasedOnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_WetAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DryAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_DelayAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::NewProp_SpeedOfSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectSimpleDelaySettings",
		sizeof(FSourceEffectSimpleDelaySettings),
		alignof(FSourceEffectSimpleDelaySettings),
		Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectSimpleDelaySettings"), sizeof(FSourceEffectSimpleDelaySettings), Get_Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Hash() { return 3921628888U; }
	DEFINE_FUNCTION(USourceEffectSimpleDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectSimpleDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectSimpleDelayPreset::StaticRegisterNativesUSourceEffectSimpleDelayPreset()
	{
		UClass* Class = USourceEffectSimpleDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectSimpleDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics
	{
		struct SourceEffectSimpleDelayPreset_eventSetSettings_Parms
		{
			FSourceEffectSimpleDelaySettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectSimpleDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectSimpleDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectSimpleDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister()
	{
		return USourceEffectSimpleDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectSimpleDelayPreset_SetSettings, "SetSettings" }, // 3263588061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectSimpleDelay.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectSimpleDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectSimpleDelayPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectSimpleDelayPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::ClassParams = {
		&USourceEffectSimpleDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectSimpleDelayPreset, 1326948279);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectSimpleDelayPreset>()
	{
		return USourceEffectSimpleDelayPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectSimpleDelayPreset(Z_Construct_UClass_USourceEffectSimpleDelayPreset, &USourceEffectSimpleDelayPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectSimpleDelayPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectSimpleDelayPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
