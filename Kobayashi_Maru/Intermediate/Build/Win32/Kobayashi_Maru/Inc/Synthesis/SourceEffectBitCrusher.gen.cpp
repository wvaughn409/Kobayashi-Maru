// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectBitCrusher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectBitCrusher() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
class UScriptStruct* FSourceEffectBitCrusherSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectBitCrusherSettings"), sizeof(FSourceEffectBitCrusherSettings), Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectBitCrusherSettings>()
{
	return FSourceEffectBitCrusherSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectBitCrusherSettings(FSourceEffectBitCrusherSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectBitCrusherSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectBitCrusherSettings")),new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrushedBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrushedBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrushedSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrushedSampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The reduced bit depth to use for the audio stream\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced bit depth to use for the audio stream" },
		{ "UIMax", "16.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits = { "CrushedBits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, CrushedBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The reduced frequency to use for the audio stream. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced frequency to use for the audio stream." },
		{ "UIMax", "15000.0" },
		{ "UIMin", "500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate = { "CrushedSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, CrushedSampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectBitCrusherSettings",
		sizeof(FSourceEffectBitCrusherSettings),
		alignof(FSourceEffectBitCrusherSettings),
		Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectBitCrusherSettings"), sizeof(FSourceEffectBitCrusherSettings), Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash() { return 1927556207U; }
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectBitCrusherSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectBitCrusherPreset::StaticRegisterNativesUSourceEffectBitCrusherPreset()
	{
		UClass* Class = USourceEffectBitCrusherPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectBitCrusherPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetSettings_Parms
		{
			FSourceEffectBitCrusherSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister()
	{
		return USourceEffectBitCrusherPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings, "SetSettings" }, // 3833118654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectBitCrusher.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectBitCrusherPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectBitCrusherPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams = {
		&USourceEffectBitCrusherPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectBitCrusherPreset, 2622013918);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectBitCrusherPreset>()
	{
		return USourceEffectBitCrusherPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectBitCrusherPreset(Z_Construct_UClass_USourceEffectBitCrusherPreset, &USourceEffectBitCrusherPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectBitCrusherPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectBitCrusherPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
