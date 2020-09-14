// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectMidSideSpreader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectMidSideSpreader() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoChannelMode();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	static UEnum* EStereoChannelMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoChannelMode, Z_Construct_UPackage__Script_Synthesis(), TEXT("EStereoChannelMode"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EStereoChannelMode>()
	{
		return EStereoChannelMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoChannelMode(EStereoChannelMode_StaticEnum, TEXT("/Script/Synthesis"), TEXT("EStereoChannelMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_EStereoChannelMode_Hash() { return 2558670538U; }
	UEnum* Z_Construct_UEnum_Synthesis_EStereoChannelMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoChannelMode"), 0, Get_Z_Construct_UEnum_Synthesis_EStereoChannelMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStereoChannelMode::MidSide", (int64)EStereoChannelMode::MidSide },
				{ "EStereoChannelMode::LeftRight", (int64)EStereoChannelMode::LeftRight },
				{ "EStereoChannelMode::count", (int64)EStereoChannelMode::count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Stereo channel mode\n" },
				{ "count.Hidden", "" },
				{ "count.Name", "EStereoChannelMode::count" },
				{ "LeftRight.Name", "EStereoChannelMode::LeftRight" },
				{ "MidSide.Name", "EStereoChannelMode::MidSide" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
				{ "ToolTip", "Stereo channel mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"EStereoChannelMode",
				"EStereoChannelMode",
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
class UScriptStruct* FSourceEffectMidSideSpreaderSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectMidSideSpreaderSettings"), sizeof(FSourceEffectMidSideSpreaderSettings), Get_Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectMidSideSpreaderSettings>()
{
	return FSourceEffectMidSideSpreaderSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectMidSideSpreaderSettings(FSourceEffectMidSideSpreaderSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectMidSideSpreaderSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectMidSideSpreaderSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectMidSideSpreaderSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectMidSideSpreaderSettings")),new UScriptStruct::TCppStructOps<FSourceEffectMidSideSpreaderSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectMidSideSpreaderSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEqualPower_MetaData[];
#endif
		static void NewProp_bEqualPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEqualPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSourceEffectMidSideSpreaderSettings\n// This is the source effect's setting struct. \n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "FSourceEffectMidSideSpreaderSettings\nThis is the source effect's setting struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectMidSideSpreaderSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate whether an equal power relationship between the mid and side channels should be maintained\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate whether an equal power relationship between the mid and side channels should be maintained" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit(void* Obj)
	{
		((FSourceEffectMidSideSpreaderSettings*)Obj)->bEqualPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower = { "bEqualPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSourceEffectMidSideSpreaderSettings), &Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate the channel mode of the output signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate the channel mode of the output signal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, OutputMode), Z_Construct_UEnum_Synthesis_EStereoChannelMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount = { "SpreadAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, SpreadAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate the channel mode of the input signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate the channel mode of the input signal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, InputMode), Z_Construct_UEnum_Synthesis_EStereoChannelMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectMidSideSpreaderSettings",
		sizeof(FSourceEffectMidSideSpreaderSettings),
		alignof(FSourceEffectMidSideSpreaderSettings),
		Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectMidSideSpreaderSettings"), sizeof(FSourceEffectMidSideSpreaderSettings), Get_Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Hash() { return 4130793281U; }
	DEFINE_FUNCTION(USourceEffectMidSideSpreaderPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectMidSideSpreaderSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectMidSideSpreaderPreset::StaticRegisterNativesUSourceEffectMidSideSpreaderPreset()
	{
		UClass* Class = USourceEffectMidSideSpreaderPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectMidSideSpreaderPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics
	{
		struct SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms
		{
			FSourceEffectMidSideSpreaderSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Change settings of your effect from blueprints. Will broadcast changes to active instances.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Change settings of your effect from blueprints. Will broadcast changes to active instances." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectMidSideSpreaderPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister()
	{
		return USourceEffectMidSideSpreaderPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings, "SetSettings" }, // 1901926728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "Comment", "// ========================================================================\n// USourceEffectMidSideSpreaderPreset\n// This code exposes your preset settings and effect class to the editor.\n// And allows for a handle to setting/updating effect settings dynamically.\n// ========================================================================\n" },
		{ "IncludePath", "SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "USourceEffectMidSideSpreaderPreset\nThis code exposes your preset settings and effect class to the editor.\nAnd allows for a handle to setting/updating effect settings dynamically." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// The copy of the settings struct. Can't be written to in BP, but can be read.\n// Note that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "The copy of the settings struct. Can't be written to in BP, but can be read.\nNote that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectMidSideSpreaderPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectMidSideSpreaderPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams = {
		&USourceEffectMidSideSpreaderPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectMidSideSpreaderPreset, 1699861972);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectMidSideSpreaderPreset>()
	{
		return USourceEffectMidSideSpreaderPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectMidSideSpreaderPreset(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset, &USourceEffectMidSideSpreaderPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectMidSideSpreaderPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectMidSideSpreaderPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
