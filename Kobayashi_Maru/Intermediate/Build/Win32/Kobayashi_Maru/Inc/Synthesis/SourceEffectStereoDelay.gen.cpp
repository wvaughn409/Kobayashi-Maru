// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectStereoDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectStereoDelay() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	static UEnum* EStereoDelaySourceEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, Z_Construct_UPackage__Script_Synthesis(), TEXT("EStereoDelaySourceEffect"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EStereoDelaySourceEffect>()
	{
		return EStereoDelaySourceEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoDelaySourceEffect(EStereoDelaySourceEffect_StaticEnum, TEXT("/Script/Synthesis"), TEXT("EStereoDelaySourceEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Hash() { return 2096320333U; }
	UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoDelaySourceEffect"), 0, Get_Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStereoDelaySourceEffect::Normal", (int64)EStereoDelaySourceEffect::Normal },
				{ "EStereoDelaySourceEffect::Cross", (int64)EStereoDelaySourceEffect::Cross },
				{ "EStereoDelaySourceEffect::PingPong", (int64)EStereoDelaySourceEffect::PingPong },
				{ "EStereoDelaySourceEffect::Count", (int64)EStereoDelaySourceEffect::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EStereoDelaySourceEffect::Count" },
				{ "Cross.Comment", "// Left input mixes right delay line output and feeds to right output.\n// Right input mixes with left delay line output and feeds to left output.\n" },
				{ "Cross.Name", "EStereoDelaySourceEffect::Cross" },
				{ "Cross.ToolTip", "Left input mixes right delay line output and feeds to right output.\nRight input mixes with left delay line output and feeds to left output." },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
				{ "Normal.Comment", "// Left input mixes with left delay line output and feeds to left output. \n// Right input mixes with right delay line output and feeds to right output.\n" },
				{ "Normal.Name", "EStereoDelaySourceEffect::Normal" },
				{ "Normal.ToolTip", "Left input mixes with left delay line output and feeds to left output.\nRight input mixes with right delay line output and feeds to right output." },
				{ "PingPong.Comment", "// Left input mixes with left delay line output and feeds to right output.\n// Right input mixes with right delay line output and feeds to left output.\n" },
				{ "PingPong.Name", "EStereoDelaySourceEffect::PingPong" },
				{ "PingPong.ToolTip", "Left input mixes with left delay line output and feeds to right output.\nRight input mixes with right delay line output and feeds to left output." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"EStereoDelaySourceEffect",
				"EStereoDelaySourceEffect",
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
class UScriptStruct* FSourceEffectStereoDelaySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectStereoDelaySettings"), sizeof(FSourceEffectStereoDelaySettings), Get_Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectStereoDelaySettings>()
{
	return FSourceEffectStereoDelaySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectStereoDelaySettings(FSourceEffectStereoDelaySettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectStereoDelaySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectStereoDelaySettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectStereoDelaySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectStereoDelaySettings")),new UScriptStruct::TCppStructOps<FSourceEffectStereoDelaySettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectStereoDelaySettings;
	struct Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DelayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DelayMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectStereoDelaySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of delay effect to mix with the dry input signal into the effect.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The amount of delay effect to mix with the dry input signal into the effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DelayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of audio to feedback into the delay line once the delay has been tapped.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The amount of audio to feedback into the delay line once the delay has been tapped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The base amount of delay in the left and right channels of the delay line.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The base amount of delay in the left and right channels of the delay line." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DelayTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// What mode to set the stereo delay effect.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "What mode to set the stereo delay effect." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode = { "DelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DelayMode), Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectStereoDelaySettings",
		sizeof(FSourceEffectStereoDelaySettings),
		alignof(FSourceEffectStereoDelaySettings),
		Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectStereoDelaySettings"), sizeof(FSourceEffectStereoDelaySettings), Get_Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Hash() { return 2987815890U; }
	DEFINE_FUNCTION(USourceEffectStereoDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectStereoDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectStereoDelayPreset::StaticRegisterNativesUSourceEffectStereoDelayPreset()
	{
		UClass* Class = USourceEffectStereoDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectStereoDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics
	{
		struct SourceEffectStereoDelayPreset_eventSetSettings_Parms
		{
			FSourceEffectStereoDelaySettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectStereoDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectStereoDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectStereoDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister()
	{
		return USourceEffectStereoDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings, "SetSettings" }, // 2884359949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectStereoDelay.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectStereoDelayPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectStereoDelayPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::ClassParams = {
		&USourceEffectStereoDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectStereoDelayPreset, 1528222827);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectStereoDelayPreset>()
	{
		return USourceEffectStereoDelayPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectStereoDelayPreset(Z_Construct_UClass_USourceEffectStereoDelayPreset, &USourceEffectStereoDelayPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectStereoDelayPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectStereoDelayPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
