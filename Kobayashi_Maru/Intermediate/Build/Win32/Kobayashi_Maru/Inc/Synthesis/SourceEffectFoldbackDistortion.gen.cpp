// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectFoldbackDistortion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectFoldbackDistortion() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
class UScriptStruct* FSourceEffectFoldbackDistortionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectFoldbackDistortionSettings"), sizeof(FSourceEffectFoldbackDistortionSettings), Get_Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectFoldbackDistortionSettings>()
{
	return FSourceEffectFoldbackDistortionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectFoldbackDistortionSettings(FSourceEffectFoldbackDistortionSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectFoldbackDistortionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFoldbackDistortionSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFoldbackDistortionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectFoldbackDistortionSettings")),new UScriptStruct::TCppStructOps<FSourceEffectFoldbackDistortionSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFoldbackDistortionSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectFoldbackDistortionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// The amount of gain to apply to the output\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ToolTip", "The amount of gain to apply to the output" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFoldbackDistortionSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// If the audio amplitude is higher than this, it will fold back\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ToolTip", "If the audio amplitude is higher than this, it will fold back" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFoldbackDistortionSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of gain to add to input to allow forcing the triggering of the threshold\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ToolTip", "The amount of gain to add to input to allow forcing the triggering of the threshold" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFoldbackDistortionSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectFoldbackDistortionSettings",
		sizeof(FSourceEffectFoldbackDistortionSettings),
		alignof(FSourceEffectFoldbackDistortionSettings),
		Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectFoldbackDistortionSettings"), sizeof(FSourceEffectFoldbackDistortionSettings), Get_Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Hash() { return 3711651361U; }
	DEFINE_FUNCTION(USourceEffectFoldbackDistortionPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectFoldbackDistortionSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectFoldbackDistortionPreset::StaticRegisterNativesUSourceEffectFoldbackDistortionPreset()
	{
		UClass* Class = USourceEffectFoldbackDistortionPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectFoldbackDistortionPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics
	{
		struct SourceEffectFoldbackDistortionPreset_eventSetSettings_Parms
		{
			FSourceEffectFoldbackDistortionSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectFoldbackDistortionPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectFoldbackDistortionPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectFoldbackDistortionPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister()
	{
		return USourceEffectFoldbackDistortionPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings, "SetSettings" }, // 2828408626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectFoldbackDistortionPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectFoldbackDistortionPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::ClassParams = {
		&USourceEffectFoldbackDistortionPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectFoldbackDistortionPreset, 588815787);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectFoldbackDistortionPreset>()
	{
		return USourceEffectFoldbackDistortionPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectFoldbackDistortionPreset(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset, &USourceEffectFoldbackDistortionPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectFoldbackDistortionPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectFoldbackDistortionPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
