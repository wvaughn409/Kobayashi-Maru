// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/ReverbSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverbSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ReverbPreset();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
// End Cross Module References
	static UEnum* ReverbPreset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ReverbPreset, Z_Construct_UPackage__Script_Engine(), TEXT("ReverbPreset"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ReverbPreset>()
	{
		return ReverbPreset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ReverbPreset(ReverbPreset_StaticEnum, TEXT("/Script/Engine"), TEXT("ReverbPreset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ReverbPreset_Hash() { return 189641104U; }
	UEnum* Z_Construct_UEnum_Engine_ReverbPreset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ReverbPreset"), 0, Get_Z_Construct_UEnum_Engine_ReverbPreset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "REVERB_Default", (int64)REVERB_Default },
				{ "REVERB_Bathroom", (int64)REVERB_Bathroom },
				{ "REVERB_StoneRoom", (int64)REVERB_StoneRoom },
				{ "REVERB_Auditorium", (int64)REVERB_Auditorium },
				{ "REVERB_ConcertHall", (int64)REVERB_ConcertHall },
				{ "REVERB_Cave", (int64)REVERB_Cave },
				{ "REVERB_Hallway", (int64)REVERB_Hallway },
				{ "REVERB_StoneCorridor", (int64)REVERB_StoneCorridor },
				{ "REVERB_Alley", (int64)REVERB_Alley },
				{ "REVERB_Forest", (int64)REVERB_Forest },
				{ "REVERB_City", (int64)REVERB_City },
				{ "REVERB_Mountains", (int64)REVERB_Mountains },
				{ "REVERB_Quarry", (int64)REVERB_Quarry },
				{ "REVERB_Plain", (int64)REVERB_Plain },
				{ "REVERB_ParkingLot", (int64)REVERB_ParkingLot },
				{ "REVERB_SewerPipe", (int64)REVERB_SewerPipe },
				{ "REVERB_Underwater", (int64)REVERB_Underwater },
				{ "REVERB_SmallRoom", (int64)REVERB_SmallRoom },
				{ "REVERB_MediumRoom", (int64)REVERB_MediumRoom },
				{ "REVERB_LargeRoom", (int64)REVERB_LargeRoom },
				{ "REVERB_MediumHall", (int64)REVERB_MediumHall },
				{ "REVERB_LargeHall", (int64)REVERB_LargeHall },
				{ "REVERB_Plate", (int64)REVERB_Plate },
				{ "REVERB_MAX", (int64)REVERB_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * DEPRECATED: Exists for backwards compatibility\n * Indicates a reverb preset to use.\n *\n */" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
				{ "REVERB_Alley.Name", "REVERB_Alley" },
				{ "REVERB_Auditorium.Name", "REVERB_Auditorium" },
				{ "REVERB_Bathroom.Name", "REVERB_Bathroom" },
				{ "REVERB_Cave.Name", "REVERB_Cave" },
				{ "REVERB_City.Name", "REVERB_City" },
				{ "REVERB_ConcertHall.Name", "REVERB_ConcertHall" },
				{ "REVERB_Default.Name", "REVERB_Default" },
				{ "REVERB_Forest.Name", "REVERB_Forest" },
				{ "REVERB_Hallway.Name", "REVERB_Hallway" },
				{ "REVERB_LargeHall.Name", "REVERB_LargeHall" },
				{ "REVERB_LargeRoom.Name", "REVERB_LargeRoom" },
				{ "REVERB_MAX.Name", "REVERB_MAX" },
				{ "REVERB_MediumHall.Name", "REVERB_MediumHall" },
				{ "REVERB_MediumRoom.Name", "REVERB_MediumRoom" },
				{ "REVERB_Mountains.Name", "REVERB_Mountains" },
				{ "REVERB_ParkingLot.Name", "REVERB_ParkingLot" },
				{ "REVERB_Plain.Name", "REVERB_Plain" },
				{ "REVERB_Plate.Name", "REVERB_Plate" },
				{ "REVERB_Quarry.Name", "REVERB_Quarry" },
				{ "REVERB_SewerPipe.Name", "REVERB_SewerPipe" },
				{ "REVERB_SmallRoom.Name", "REVERB_SmallRoom" },
				{ "REVERB_StoneCorridor.Name", "REVERB_StoneCorridor" },
				{ "REVERB_StoneRoom.Name", "REVERB_StoneRoom" },
				{ "REVERB_Underwater.Name", "REVERB_Underwater" },
				{ "ToolTip", "DEPRECATED: Exists for backwards compatibility\nIndicates a reverb preset to use." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ReverbPreset",
				"ReverbPreset",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FReverbSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FReverbSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReverbSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ReverbSettings"), sizeof(FReverbSettings), Get_Z_Construct_UScriptStruct_FReverbSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FReverbSettings>()
{
	return FReverbSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReverbSettings(FReverbSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ReverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFReverbSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFReverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReverbSettings")),new UScriptStruct::TCppStructOps<FReverbSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFReverbSettings;
	struct Z_Construct_UScriptStruct_FReverbSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbEffect;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverbType;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyReverb_MetaData[];
#endif
		static void NewProp_bApplyReverb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyReverb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for reverb effects. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Struct encapsulating settings for reverb effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReverbSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** Time to fade from the current reverb settings into this setting, in seconds. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Time to fade from the current reverb settings into this setting, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReverbSettings, FadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** Volume level of the reverb affect. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Volume level of the reverb affect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReverbSettings, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** This is used to apply plugin-specific settings when a Reverb Plugin is being used. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "This is used to apply plugin-specific settings when a Reverb Plugin is being used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect = { "ReverbPluginEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReverbSettings, ReverbPluginEffect), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** The reverb asset to employ. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "The reverb asset to employ." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect = { "ReverbEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReverbSettings, ReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData[] = {
		{ "Comment", "/** The reverb preset to employ. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "The reverb preset to employ." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType = { "ReverbType", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReverbSettings, ReverbType_DEPRECATED), Z_Construct_UEnum_Engine_ReverbPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/* Whether to apply the reverb settings below. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Whether to apply the reverb settings below." },
	};
#endif
	void Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_SetBit(void* Obj)
	{
		((FReverbSettings*)Obj)->bApplyReverb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb = { "bApplyReverb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FReverbSettings), &Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ReverbSettings",
		sizeof(FReverbSettings),
		alignof(FReverbSettings),
		Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReverbSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReverbSettings"), sizeof(FReverbSettings), Get_Z_Construct_UScriptStruct_FReverbSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReverbSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReverbSettings_Hash() { return 391567114U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
