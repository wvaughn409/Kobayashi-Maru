// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSourceBusSend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBusSend() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
// End Cross Module References
	static UEnum* ESourceBusSendLevelControlMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusSendLevelControlMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESourceBusSendLevelControlMethod>()
	{
		return ESourceBusSendLevelControlMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceBusSendLevelControlMethod(ESourceBusSendLevelControlMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ESourceBusSendLevelControlMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Hash() { return 754940568U; }
	UEnum* Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceBusSendLevelControlMethod"), 0, Get_Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceBusSendLevelControlMethod::Linear", (int64)ESourceBusSendLevelControlMethod::Linear },
				{ "ESourceBusSendLevelControlMethod::CustomCurve", (int64)ESourceBusSendLevelControlMethod::CustomCurve },
				{ "ESourceBusSendLevelControlMethod::Manual", (int64)ESourceBusSendLevelControlMethod::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCurve.Comment", "// A send based on a supplied curve\n" },
				{ "CustomCurve.Name", "ESourceBusSendLevelControlMethod::CustomCurve" },
				{ "CustomCurve.ToolTip", "A send based on a supplied curve" },
				{ "Linear.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
				{ "Linear.Name", "ESourceBusSendLevelControlMethod::Linear" },
				{ "Linear.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
				{ "Manual.Comment", "// A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
				{ "Manual.Name", "ESourceBusSendLevelControlMethod::Manual" },
				{ "Manual.ToolTip", "A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESourceBusSendLevelControlMethod",
				"ESourceBusSendLevelControlMethod",
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
class UScriptStruct* FSoundSourceBusSendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SoundSourceBusSendInfo"), sizeof(FSoundSourceBusSendInfo), Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSourceBusSendInfo>()
{
	return FSoundSourceBusSendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSourceBusSendInfo(FSoundSourceBusSendInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundSourceBusSendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundSourceBusSendInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundSourceBusSendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundSourceBusSendInfo")),new UScriptStruct::TCppStructOps<FSoundSourceBusSendInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundSourceBusSendInfo;
	struct Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSendLevelCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSendLevelCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSourceBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusSendLevelControlMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceBusSendLevelControlMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceBusSendLevelControlMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSourceBusSendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The custom curve to use for distance-based Source Bus send level.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The custom curve to use for distance-based Source Bus send level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve = { "CustomSendLevelCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, CustomSendLevelCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The distance at which the Max Send Level is sent to the source bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The distance at which the Max Send Level is sent to the source bus" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance = { "MaxSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MaxSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The distance at which the Min Send Level is sent to the source bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The distance at which the Min Send Level is sent to the source bus" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance = { "MinSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MinSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The amount to send to the Source Bus when sound is located at a distance equal to value specified in the max send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount to send to the Source Bus when sound is located at a distance equal to value specified in the max send distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel = { "MaxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MaxSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The amount to send to the Source Bus when sound is located at a distance equal to value specified in the min send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount to send to the Source Bus when sound is located at a distance equal to value specified in the min send distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel = { "MinSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MinSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The amount of audio to send to the source bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount of audio to send to the source bus" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "// The Source Bus to send the audio to\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The Source Bus to send the audio to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "Comment", "/*\n\x09\x09Manual: Use Send Level only\n\x09\x09Linear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\n\x09\x09""Custom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "Manual: Use Send Level only\nLinear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\nCustom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod = { "SourceBusSendLevelControlMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, SourceBusSendLevelControlMethod), Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSourceBusSendInfo",
		sizeof(FSoundSourceBusSendInfo),
		alignof(FSoundSourceBusSendInfo),
		Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSourceBusSendInfo"), sizeof(FSoundSourceBusSendInfo), Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Hash() { return 3231027749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
