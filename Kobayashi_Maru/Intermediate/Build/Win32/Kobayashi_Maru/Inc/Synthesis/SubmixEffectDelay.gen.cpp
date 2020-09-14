// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectDelay() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDelaySettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
class UScriptStruct* FSubmixEffectDelaySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectDelaySettings"), sizeof(FSubmixEffectDelaySettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectDelaySettings>()
{
	return FSubmixEffectDelaySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectDelaySettings(FSubmixEffectDelaySettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SubmixEffectDelaySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectDelaySettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectDelaySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectDelaySettings")),new UScriptStruct::TCppStructOps<FSubmixEffectDelaySettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectDelaySettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDelayLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSubmixEffectDelaySettings\n// UStruct used to define user-exposed params for use with your effect.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "FSubmixEffectDelaySettings\nUStruct used to define user-exposed params for use with your effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDelaySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Number of milliseconds of delay.  Caps at max delay at runtime.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Number of milliseconds of delay.  Caps at max delay at runtime." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength = { "DelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDelaySettings, DelayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDelaySettings, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength = { "MaximumDelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDelaySettings, MaximumDelayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectDelaySettings",
		sizeof(FSubmixEffectDelaySettings),
		alignof(FSubmixEffectDelaySettings),
		Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDelaySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectDelaySettings"), sizeof(FSubmixEffectDelaySettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Hash() { return 4181238424U; }
	DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelay(Z_Param_Length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetInterpolationTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolationTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDelayPreset::execGetMaxDelayInMilliseconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayInMilliseconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectDelayPreset::StaticRegisterNativesUSubmixEffectDelayPreset()
	{
		UClass* Class = USubmixEffectDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDelayInMilliseconds", &USubmixEffectDelayPreset::execGetMaxDelayInMilliseconds },
			{ "SetDelay", &USubmixEffectDelayPreset::execSetDelay },
			{ "SetInterpolationTime", &USubmixEffectDelayPreset::execSetInterpolationTime },
			{ "SetSettings", &USubmixEffectDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics
	{
		struct SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Get the maximum delay possible.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Get the maximum delay possible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "GetMaxDelayInMilliseconds", nullptr, nullptr, sizeof(SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms), Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics
	{
		struct SubmixEffectDelayPreset_eventSetDelay_Parms
		{
			float Length;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetDelay_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set how long the delay actually is, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Set how long the delay actually is, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetDelay", nullptr, nullptr, sizeof(SubmixEffectDelayPreset_eventSetDelay_Parms), Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics
	{
		struct SubmixEffectDelayPreset_eventSetInterpolationTime_Parms
		{
			float Time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetInterpolationTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set the time it takes to interpolate between parameters, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Set the time it takes to interpolate between parameters, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetInterpolationTime", nullptr, nullptr, sizeof(SubmixEffectDelayPreset_eventSetInterpolationTime_Parms), Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics
	{
		struct SubmixEffectDelayPreset_eventSetSettings_Parms
		{
			FSubmixEffectDelaySettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set all tap delay setting. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Set all tap delay setting. This will replace any dynamically added or modified taps." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister()
	{
		return USubmixEffectDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectDelayPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds, "GetMaxDelayInMilliseconds" }, // 1486277706
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay, "SetDelay" }, // 3422097838
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime, "SetInterpolationTime" }, // 6113073
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings, "SetSettings" }, // 2961048582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectDelayPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "USubmixEffectDelayPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectDelayPreset, DynamicSettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDelayPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDelayPreset_Statics::ClassParams = {
		&USubmixEffectDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectDelayPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectDelayPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectDelayPreset, 3272056962);
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectDelayPreset>()
	{
		return USubmixEffectDelayPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectDelayPreset(Z_Construct_UClass_USubmixEffectDelayPreset, &USubmixEffectDelayPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USubmixEffectDelayPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDelayPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
