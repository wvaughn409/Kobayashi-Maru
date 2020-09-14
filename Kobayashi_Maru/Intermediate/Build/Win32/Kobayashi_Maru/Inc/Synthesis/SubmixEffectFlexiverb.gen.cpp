// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectFlexiverb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectFlexiverb() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
class UScriptStruct* FSubmixEffectFlexiverbSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectFlexiverbSettings"), sizeof(FSubmixEffectFlexiverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectFlexiverbSettings>()
{
	return FSubmixEffectFlexiverbSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectFlexiverbSettings(FSubmixEffectFlexiverbSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SubmixEffectFlexiverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectFlexiverbSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectFlexiverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectFlexiverbSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectFlexiverbSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectFlexiverbSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Complexity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Complexity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomDampening_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomDampening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectFlexiverbSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "6" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity = { "Complexity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, Complexity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "12000.0" },
		{ "ClampMin", "60.0" },
		{ "Comment", "/** Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens.*/" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening = { "RoomDampening", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, RoomDampening), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.4" },
		{ "Comment", "/** Time in seconds it will take for the impulse response to decay to -60 dB. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "Time in seconds it will take for the impulse response to decay to -60 dB." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "30" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay = { "PreDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, PreDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectFlexiverbSettings",
		sizeof(FSubmixEffectFlexiverbSettings),
		alignof(FSubmixEffectFlexiverbSettings),
		Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectFlexiverbSettings"), sizeof(FSubmixEffectFlexiverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Hash() { return 3938749238U; }
	DEFINE_FUNCTION(USubmixEffectFlexiverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectFlexiverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectFlexiverbPreset::StaticRegisterNativesUSubmixEffectFlexiverbPreset()
	{
		UClass* Class = USubmixEffectFlexiverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectFlexiverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics
	{
		struct SubmixEffectFlexiverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectFlexiverbSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectFlexiverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFlexiverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectFlexiverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister()
	{
		return USubmixEffectFlexiverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings, "SetSettings" }, // 4144005298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectFlexiverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectFlexiverbPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams = {
		&USubmixEffectFlexiverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectFlexiverbPreset, 2733084415);
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectFlexiverbPreset>()
	{
		return USubmixEffectFlexiverbPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectFlexiverbPreset(Z_Construct_UClass_USubmixEffectFlexiverbPreset, &USubmixEffectFlexiverbPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USubmixEffectFlexiverbPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectFlexiverbPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
