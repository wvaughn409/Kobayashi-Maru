// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectConvolutionReverb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectConvolutionReverb() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
	static UEnum* ESubmixEffectConvolutionReverbBlockSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESubmixEffectConvolutionReverbBlockSize"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixEffectConvolutionReverbBlockSize>()
	{
		return ESubmixEffectConvolutionReverbBlockSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectConvolutionReverbBlockSize(ESubmixEffectConvolutionReverbBlockSize_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESubmixEffectConvolutionReverbBlockSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Hash() { return 449834070U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectConvolutionReverbBlockSize"), 0, Get_Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectConvolutionReverbBlockSize::BlockSize256", (int64)ESubmixEffectConvolutionReverbBlockSize::BlockSize256 },
				{ "ESubmixEffectConvolutionReverbBlockSize::BlockSize512", (int64)ESubmixEffectConvolutionReverbBlockSize::BlockSize512 },
				{ "ESubmixEffectConvolutionReverbBlockSize::BlockSize1024", (int64)ESubmixEffectConvolutionReverbBlockSize::BlockSize1024 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockSize1024.Comment", "/** 1024 audio frames per a block. */" },
				{ "BlockSize1024.Name", "ESubmixEffectConvolutionReverbBlockSize::BlockSize1024" },
				{ "BlockSize1024.ToolTip", "1024 audio frames per a block." },
				{ "BlockSize256.Comment", "/** 256 audio frames per a block. */" },
				{ "BlockSize256.Name", "ESubmixEffectConvolutionReverbBlockSize::BlockSize256" },
				{ "BlockSize256.ToolTip", "256 audio frames per a block." },
				{ "BlockSize512.Comment", "/** 512 audio frames per a block. */" },
				{ "BlockSize512.Name", "ESubmixEffectConvolutionReverbBlockSize::BlockSize512" },
				{ "BlockSize512.ToolTip", "512 audio frames per a block." },
				{ "Comment", "/** Block size of convolution reverb algorithm. */" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
				{ "ToolTip", "Block size of convolution reverb algorithm." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESubmixEffectConvolutionReverbBlockSize",
				"ESubmixEffectConvolutionReverbBlockSize",
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
class UScriptStruct* FSubmixEffectConvolutionReverbSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectConvolutionReverbSettings"), sizeof(FSubmixEffectConvolutionReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectConvolutionReverbSettings>()
{
	return FSubmixEffectConvolutionReverbSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectConvolutionReverbSettings(FSubmixEffectConvolutionReverbSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SubmixEffectConvolutionReverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectConvolutionReverbSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectConvolutionReverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectConvolutionReverbSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectConvolutionReverbSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectConvolutionReverbSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowHardwareAcceleration_MetaData[];
#endif
		static void NewProp_AllowHardwareAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowHardwareAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpulseResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurroundRearChannelBleedAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurroundRearChannelBleedAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSurroundRearChannelFlip_MetaData[];
#endif
		static void NewProp_bSurroundRearChannelFlip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSurroundRearChannelFlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertRearChannelBleedPhase_MetaData[];
#endif
		static void NewProp_bInvertRearChannelBleedPhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertRearChannelBleedPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurroundRearChannelBleedDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurroundRearChannelBleedDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectConvolutionReverbSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->AllowHardwareAcceleration_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration = { "AllowHardwareAcceleration", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, ImpulseResponse_DEPRECATED), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount = { "SurroundRearChannelBleedAmount", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedAmount_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, send Surround Rear Channel Bleed Amount sends front left to back right and vice versa */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, send Surround Rear Channel Bleed Amount sends front left to back right and vice versa" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bSurroundRearChannelFlip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip = { "bSurroundRearChannelFlip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_MetaData[] = {
		{ "Category", "SumixEffectPreset" },
		{ "Comment", "/* If true, rear channel bleed sends will have their phase inverted. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, rear channel bleed sends will have their phase inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bInvertRearChannelBleedPhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase = { "bInvertRearChannelBleedPhase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "15.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "/* Amout of audio to be sent to rear channels in quad/surround configurations */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Amout of audio to be sent to rear channels in quad/surround configurations" },
		{ "UIMax", "15.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb = { "SurroundRearChannelBleedDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. \n\x09 * This value is not directly editable in the editor because it is copied from the \n\x09 * associated UAudioImpulseResponse. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses.\n       * This value is not directly editable in the editor because it is copied from the\n       * associated UAudioImpulseResponse." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, NormalizationVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectConvolutionReverbSettings",
		sizeof(FSubmixEffectConvolutionReverbSettings),
		alignof(FSubmixEffectConvolutionReverbSettings),
		Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectConvolutionReverbSettings"), sizeof(FSubmixEffectConvolutionReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Hash() { return 1029328903U; }
	void UAudioImpulseResponse::StaticRegisterNativesUAudioImpulseResponse()
	{
	}
	UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister()
	{
		return UAudioImpulseResponse::StaticClass();
	}
	struct Z_Construct_UClass_UAudioImpulseResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IRData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IRData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IRData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImpulseResponse;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseResponse_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioImpulseResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// UAudioImpulseResponse\n// UAsset used to represent Imported Impulse Responses\n// ========================================================================\n" },
		{ "IncludePath", "SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "UAudioImpulseResponse\nUAsset used to represent Imported Impulse Responses" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData = { "IRData", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioImpulseResponse, IRData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_Inner = { "IRData", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClamMin", "-60.0" },
		{ "ClampMax", "15.0" },
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioImpulseResponse, NormalizationVolumeDb), METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Comment", "/** The original sample rate of the impulse response. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "The original sample rate of the impulse response." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioImpulseResponse, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Comment", "/** The number of channels in impulse response. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "The number of channels in impulse response." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioImpulseResponse, NumChannels), METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "Comment", "/** The interleaved audio samples used in convolution. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "The interleaved audio samples used in convolution." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioImpulseResponse, ImpulseResponse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_Inner = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioImpulseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioImpulseResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioImpulseResponse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioImpulseResponse_Statics::ClassParams = {
		&UAudioImpulseResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioImpulseResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioImpulseResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioImpulseResponse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioImpulseResponse, 3879811661);
	template<> SYNTHESIS_API UClass* StaticClass<UAudioImpulseResponse>()
	{
		return UAudioImpulseResponse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioImpulseResponse(Z_Construct_UClass_UAudioImpulseResponse, &UAudioImpulseResponse::StaticClass, TEXT("/Script/Synthesis"), TEXT("UAudioImpulseResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioImpulseResponse);
	DEFINE_FUNCTION(USubmixEffectConvolutionReverbPreset::execSetImpulseResponse)
	{
		P_GET_OBJECT(UAudioImpulseResponse,Z_Param_InImpulseResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImpulseResponse(Z_Param_InImpulseResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectConvolutionReverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectConvolutionReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectConvolutionReverbPreset::StaticRegisterNativesUSubmixEffectConvolutionReverbPreset()
	{
		UClass* Class = USubmixEffectConvolutionReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetImpulseResponse", &USubmixEffectConvolutionReverbPreset::execSetImpulseResponse },
			{ "SetSettings", &USubmixEffectConvolutionReverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics
	{
		struct SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms
		{
			UAudioImpulseResponse* InImpulseResponse;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InImpulseResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse = { "InImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms, InImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb impulse response */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb impulse response" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, nullptr, "SetImpulseResponse", nullptr, nullptr, sizeof(SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms), Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics
	{
		struct SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectConvolutionReverbSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb settings */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister()
	{
		return USubmixEffectConvolutionReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHardwareAcceleration_MetaData[];
#endif
		static void NewProp_bEnableHardwareAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHardwareAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlockSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpulseResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse, "SetImpulseResponse" }, // 2424822007
		{ &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings, "SetSettings" }, // 4132748759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** Opt into hardware acceleration of the convolution reverb (if available) */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Opt into hardware acceleration of the convolution reverb (if available)" },
	};
#endif
	void Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit(void* Obj)
	{
		((USubmixEffectConvolutionReverbPreset*)Obj)->bEnableHardwareAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration = { "bEnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USubmixEffectConvolutionReverbPreset), &Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** Set the internal block size. This can effect latency and performance. Higher values will result in\n\x09 * lower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\n\x09 * on the interplay between audio engines buffer sizes and this effects block size. Generally, higher\n\x09 * values result in higher latency, and lower values result in lower latency. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the internal block size. This can effect latency and performance. Higher values will result in\nlower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\non the interplay between audio engines buffer sizes and this effects block size. Generally, higher\nvalues result in higher latency, and lower values result in lower latency." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, BlockSize), Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "BlueprintSetter", "SetImpulseResponse" },
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** The impulse response used for convolution. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "The impulse response used for convolution." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, ImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** ConvolutionReverbPreset Preset Settings. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "ConvolutionReverbPreset Preset Settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectConvolutionReverbPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams = {
		&USubmixEffectConvolutionReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectConvolutionReverbPreset, 1250635162);
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectConvolutionReverbPreset>()
	{
		return USubmixEffectConvolutionReverbPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectConvolutionReverbPreset(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, &USubmixEffectConvolutionReverbPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USubmixEffectConvolutionReverbPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectConvolutionReverbPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
