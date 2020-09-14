// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/SynthComponentGranulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentGranulator() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthSeekType();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType();
	SYNTHESIS_API UClass* Z_Construct_UClass_UGranularSynth_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_UGranularSynth();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	static UEnum* EGranularSynthSeekType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthSeekType, Z_Construct_UPackage__Script_Synthesis(), TEXT("EGranularSynthSeekType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EGranularSynthSeekType>()
	{
		return EGranularSynthSeekType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGranularSynthSeekType(EGranularSynthSeekType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("EGranularSynthSeekType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Hash() { return 1229951883U; }
	UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthSeekType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGranularSynthSeekType"), 0, Get_Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGranularSynthSeekType::FromBeginning", (int64)EGranularSynthSeekType::FromBeginning },
				{ "EGranularSynthSeekType::FromCurrentPosition", (int64)EGranularSynthSeekType::FromCurrentPosition },
				{ "EGranularSynthSeekType::Count", (int64)EGranularSynthSeekType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EGranularSynthSeekType::Count" },
				{ "FromBeginning.Name", "EGranularSynthSeekType::FromBeginning" },
				{ "FromCurrentPosition.Name", "EGranularSynthSeekType::FromCurrentPosition" },
				{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"EGranularSynthSeekType",
				"EGranularSynthSeekType",
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
	static UEnum* EGranularSynthEnvelopeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType, Z_Construct_UPackage__Script_Synthesis(), TEXT("EGranularSynthEnvelopeType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EGranularSynthEnvelopeType>()
	{
		return EGranularSynthEnvelopeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGranularSynthEnvelopeType(EGranularSynthEnvelopeType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("EGranularSynthEnvelopeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Hash() { return 635248771U; }
	UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGranularSynthEnvelopeType"), 0, Get_Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGranularSynthEnvelopeType::Rectangular", (int64)EGranularSynthEnvelopeType::Rectangular },
				{ "EGranularSynthEnvelopeType::Triangle", (int64)EGranularSynthEnvelopeType::Triangle },
				{ "EGranularSynthEnvelopeType::DownwardTriangle", (int64)EGranularSynthEnvelopeType::DownwardTriangle },
				{ "EGranularSynthEnvelopeType::UpwardTriangle", (int64)EGranularSynthEnvelopeType::UpwardTriangle },
				{ "EGranularSynthEnvelopeType::ExponentialDecay", (int64)EGranularSynthEnvelopeType::ExponentialDecay },
				{ "EGranularSynthEnvelopeType::ExponentialIncrease", (int64)EGranularSynthEnvelopeType::ExponentialIncrease },
				{ "EGranularSynthEnvelopeType::Gaussian", (int64)EGranularSynthEnvelopeType::Gaussian },
				{ "EGranularSynthEnvelopeType::Hanning", (int64)EGranularSynthEnvelopeType::Hanning },
				{ "EGranularSynthEnvelopeType::Lanczos", (int64)EGranularSynthEnvelopeType::Lanczos },
				{ "EGranularSynthEnvelopeType::Cosine", (int64)EGranularSynthEnvelopeType::Cosine },
				{ "EGranularSynthEnvelopeType::CosineSquared", (int64)EGranularSynthEnvelopeType::CosineSquared },
				{ "EGranularSynthEnvelopeType::Welch", (int64)EGranularSynthEnvelopeType::Welch },
				{ "EGranularSynthEnvelopeType::Blackman", (int64)EGranularSynthEnvelopeType::Blackman },
				{ "EGranularSynthEnvelopeType::BlackmanHarris", (int64)EGranularSynthEnvelopeType::BlackmanHarris },
				{ "EGranularSynthEnvelopeType::Count", (int64)EGranularSynthEnvelopeType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blackman.Name", "EGranularSynthEnvelopeType::Blackman" },
				{ "BlackmanHarris.Name", "EGranularSynthEnvelopeType::BlackmanHarris" },
				{ "BlueprintType", "true" },
				{ "Cosine.Name", "EGranularSynthEnvelopeType::Cosine" },
				{ "CosineSquared.Name", "EGranularSynthEnvelopeType::CosineSquared" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EGranularSynthEnvelopeType::Count" },
				{ "DownwardTriangle.Name", "EGranularSynthEnvelopeType::DownwardTriangle" },
				{ "ExponentialDecay.Name", "EGranularSynthEnvelopeType::ExponentialDecay" },
				{ "ExponentialIncrease.Name", "EGranularSynthEnvelopeType::ExponentialIncrease" },
				{ "Gaussian.Name", "EGranularSynthEnvelopeType::Gaussian" },
				{ "Hanning.Name", "EGranularSynthEnvelopeType::Hanning" },
				{ "Lanczos.Name", "EGranularSynthEnvelopeType::Lanczos" },
				{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
				{ "Rectangular.Name", "EGranularSynthEnvelopeType::Rectangular" },
				{ "Triangle.Name", "EGranularSynthEnvelopeType::Triangle" },
				{ "UpwardTriangle.Name", "EGranularSynthEnvelopeType::UpwardTriangle" },
				{ "Welch.Name", "EGranularSynthEnvelopeType::Welch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"EGranularSynthEnvelopeType",
				"EGranularSynthEnvelopeType",
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
	DEFINE_FUNCTION(UGranularSynth::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execGetCurrentPlayheadTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlayheadTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetPlayheadTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPositionSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpTimeSec);
		P_GET_ENUM(EGranularSynthSeekType,Z_Param_SeekType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayheadTime(Z_Param_InPositionSec,Z_Param_LerpTimeSec,EGranularSynthSeekType(Z_Param_SeekType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetScrubMode)
	{
		P_GET_UBOOL(Z_Param_bScrubMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrubMode(Z_Param_bScrubMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execGetSampleDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSampleDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDurationMsec);
		P_GET_STRUCT(FVector2D,Z_Param_DurationRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainDuration(Z_Param_BaseDurationMsec,Z_Param_DurationRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainPan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BasePan);
		P_GET_STRUCT(FVector2D,Z_Param_PanRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainPan(Z_Param_BasePan,Z_Param_PanRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseVolume);
		P_GET_STRUCT(FVector2D,Z_Param_VolumeRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainVolume(Z_Param_BaseVolume,Z_Param_VolumeRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BasePitch);
		P_GET_STRUCT(FVector2D,Z_Param_PitchRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainPitch(Z_Param_BasePitch,Z_Param_PitchRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayheadRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackSpeed(Z_Param_InPlayheadRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainEnvelopeType)
	{
		P_GET_ENUM(EGranularSynthEnvelopeType,Z_Param_EnvelopeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainEnvelopeType(EGranularSynthEnvelopeType(Z_Param_EnvelopeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainProbability)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGrainProbability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainProbability(Z_Param_InGrainProbability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetGrainsPerSecond)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGrainsPerSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrainsPerSecond(Z_Param_InGrainsPerSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execNoteOff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
		P_GET_UBOOL(Z_Param_bKill);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoteOff(Z_Param_Note,Z_Param_bKill);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execNoteOn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
		P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoteOn(Z_Param_Note,Z_Param_Velocity,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetReleaseTimeMsec)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReleaseTimeMsec(Z_Param_ReleaseTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetSustainGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SustainGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSustainGain(Z_Param_SustainGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetDecayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecayTime(Z_Param_DecayTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetAttackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackTime(Z_Param_AttackTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGranularSynth::execSetSoundWave)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundWave(Z_Param_InSoundWave);
		P_NATIVE_END;
	}
	void UGranularSynth::StaticRegisterNativesUGranularSynth()
	{
		UClass* Class = UGranularSynth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPlayheadTime", &UGranularSynth::execGetCurrentPlayheadTime },
			{ "GetSampleDuration", &UGranularSynth::execGetSampleDuration },
			{ "IsLoaded", &UGranularSynth::execIsLoaded },
			{ "NoteOff", &UGranularSynth::execNoteOff },
			{ "NoteOn", &UGranularSynth::execNoteOn },
			{ "SetAttackTime", &UGranularSynth::execSetAttackTime },
			{ "SetDecayTime", &UGranularSynth::execSetDecayTime },
			{ "SetGrainDuration", &UGranularSynth::execSetGrainDuration },
			{ "SetGrainEnvelopeType", &UGranularSynth::execSetGrainEnvelopeType },
			{ "SetGrainPan", &UGranularSynth::execSetGrainPan },
			{ "SetGrainPitch", &UGranularSynth::execSetGrainPitch },
			{ "SetGrainProbability", &UGranularSynth::execSetGrainProbability },
			{ "SetGrainsPerSecond", &UGranularSynth::execSetGrainsPerSecond },
			{ "SetGrainVolume", &UGranularSynth::execSetGrainVolume },
			{ "SetPlaybackSpeed", &UGranularSynth::execSetPlaybackSpeed },
			{ "SetPlayheadTime", &UGranularSynth::execSetPlayheadTime },
			{ "SetReleaseTimeMsec", &UGranularSynth::execSetReleaseTimeMsec },
			{ "SetScrubMode", &UGranularSynth::execSetScrubMode },
			{ "SetSoundWave", &UGranularSynth::execSetSoundWave },
			{ "SetSustainGain", &UGranularSynth::execSetSustainGain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics
	{
		struct GranularSynth_eventGetCurrentPlayheadTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventGetCurrentPlayheadTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "GetCurrentPlayheadTime", nullptr, nullptr, sizeof(GranularSynth_eventGetCurrentPlayheadTime_Parms), Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics
	{
		struct GranularSynth_eventGetSampleDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventGetSampleDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "GetSampleDuration", nullptr, nullptr, sizeof(GranularSynth_eventGetSampleDuration_Parms), Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_GetSampleDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics
	{
		struct GranularSynth_eventIsLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GranularSynth_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GranularSynth_eventIsLoaded_Parms), &Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "IsLoaded", nullptr, nullptr, sizeof(GranularSynth_eventIsLoaded_Parms), Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_NoteOff_Statics
	{
		struct GranularSynth_eventNoteOff_Parms
		{
			float Note;
			bool bKill;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKill_MetaData[];
#endif
		static void NewProp_bKill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Note;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_SetBit(void* Obj)
	{
		((GranularSynth_eventNoteOff_Parms*)Obj)->bKill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill = { "bKill", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GranularSynth_eventNoteOff_Parms), &Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventNoteOff_Parms, Note), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_bKill", "false" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "NoteOff", nullptr, nullptr, sizeof(GranularSynth_eventNoteOff_Parms), Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_NoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_NoteOn_Statics
	{
		struct GranularSynth_eventNoteOn_Parms
		{
			float Note;
			int32 Velocity;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Note;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventNoteOn_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventNoteOn_Parms, Velocity), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventNoteOn_Parms, Note), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_Duration", "-1.000000" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "NoteOn", nullptr, nullptr, sizeof(GranularSynth_eventNoteOn_Parms), Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_NoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics
	{
		struct GranularSynth_eventSetAttackTime_Parms
		{
			float AttackTimeMsec;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetAttackTime_Parms, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetAttackTime", nullptr, nullptr, sizeof(GranularSynth_eventSetAttackTime_Parms), Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics
	{
		struct GranularSynth_eventSetDecayTime_Parms
		{
			float DecayTimeMsec;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec = { "DecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetDecayTime_Parms, DecayTimeMsec), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetDecayTime", nullptr, nullptr, sizeof(GranularSynth_eventSetDecayTime_Parms), Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetDecayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics
	{
		struct GranularSynth_eventSetGrainDuration_Parms
		{
			float BaseDurationMsec;
			FVector2D DurationRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DurationRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDurationMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDurationMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange = { "DurationRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainDuration_Parms, DurationRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec = { "BaseDurationMsec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainDuration_Parms, BaseDurationMsec), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_DurationRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainDuration", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainDuration_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics
	{
		struct GranularSynth_eventSetGrainEnvelopeType_Parms
		{
			EGranularSynthEnvelopeType EnvelopeType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvelopeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvelopeType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType = { "EnvelopeType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainEnvelopeType_Parms, EnvelopeType), Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainEnvelopeType", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainEnvelopeType_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics
	{
		struct GranularSynth_eventSetGrainPan_Parms
		{
			float BasePan;
			FVector2D PanRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PanRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange = { "PanRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPan_Parms, PanRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan = { "BasePan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPan_Parms, BasePan), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_PanRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainPan", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainPan_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainPan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics
	{
		struct GranularSynth_eventSetGrainPitch_Parms
		{
			float BasePitch;
			FVector2D PitchRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPitch_Parms, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch = { "BasePitch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPitch_Parms, BasePitch), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_PitchRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainPitch", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainPitch_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics
	{
		struct GranularSynth_eventSetGrainProbability_Parms
		{
			float InGrainProbability;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGrainProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InGrainProbability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability = { "InGrainProbability", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainProbability_Parms, InGrainProbability), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainProbability", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainProbability_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics
	{
		struct GranularSynth_eventSetGrainsPerSecond_Parms
		{
			float InGrainsPerSecond;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGrainsPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InGrainsPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond = { "InGrainsPerSecond", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainsPerSecond_Parms, InGrainsPerSecond), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainsPerSecond", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainsPerSecond_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics
	{
		struct GranularSynth_eventSetGrainVolume_Parms
		{
			float BaseVolume;
			FVector2D VolumeRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange = { "VolumeRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainVolume_Parms, VolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume = { "BaseVolume", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainVolume_Parms, BaseVolume), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_VolumeRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainVolume", nullptr, nullptr, sizeof(GranularSynth_eventSetGrainVolume_Parms), Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics
	{
		struct GranularSynth_eventSetPlaybackSpeed_Parms
		{
			float InPlayheadRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayheadRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayheadRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate = { "InPlayheadRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetPlaybackSpeed_Parms, InPlayheadRate), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetPlaybackSpeed", nullptr, nullptr, sizeof(GranularSynth_eventSetPlaybackSpeed_Parms), Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics
	{
		struct GranularSynth_eventSetPlayheadTime_Parms
		{
			float InPositionSec;
			float LerpTimeSec;
			EGranularSynthSeekType SeekType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SeekType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeekType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPositionSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPositionSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType = { "SeekType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetPlayheadTime_Parms, SeekType), Z_Construct_UEnum_Synthesis_EGranularSynthSeekType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec = { "LerpTimeSec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetPlayheadTime_Parms, LerpTimeSec), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec = { "InPositionSec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetPlayheadTime_Parms, InPositionSec), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_LerpTimeSec", "0.000000" },
		{ "CPP_Default_SeekType", "FromBeginning" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetPlayheadTime", nullptr, nullptr, sizeof(GranularSynth_eventSetPlayheadTime_Parms), Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetPlayheadTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics
	{
		struct GranularSynth_eventSetReleaseTimeMsec_Parms
		{
			float ReleaseTimeMsec;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetReleaseTimeMsec_Parms, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetReleaseTimeMsec", nullptr, nullptr, sizeof(GranularSynth_eventSetReleaseTimeMsec_Parms), Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics
	{
		struct GranularSynth_eventSetScrubMode_Parms
		{
			bool bScrubMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScrubMode_MetaData[];
#endif
		static void NewProp_bScrubMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScrubMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_SetBit(void* Obj)
	{
		((GranularSynth_eventSetScrubMode_Parms*)Obj)->bScrubMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode = { "bScrubMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GranularSynth_eventSetScrubMode_Parms), &Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetScrubMode", nullptr, nullptr, sizeof(GranularSynth_eventSetScrubMode_Parms), Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetScrubMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics
	{
		struct GranularSynth_eventSetSoundWave_Parms
		{
			USoundWave* InSoundWave;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetSoundWave_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::NewProp_InSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// This will override the current sound wave if one is set, stop audio, and reload the new sound wave\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
		{ "ToolTip", "This will override the current sound wave if one is set, stop audio, and reload the new sound wave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetSoundWave", nullptr, nullptr, sizeof(GranularSynth_eventSetSoundWave_Parms), Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics
	{
		struct GranularSynth_eventSetSustainGain_Parms
		{
			float SustainGain;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GranularSynth_eventSetSustainGain_Parms, SustainGain), METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetSustainGain", nullptr, nullptr, sizeof(GranularSynth_eventSetSustainGain_Parms), Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGranularSynth_SetSustainGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGranularSynth_NoRegister()
	{
		return UGranularSynth::StaticClass();
	}
	struct Z_Construct_UClass_UGranularSynth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GranulatedSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GranulatedSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGranularSynth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGranularSynth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime, "GetCurrentPlayheadTime" }, // 4122077643
		{ &Z_Construct_UFunction_UGranularSynth_GetSampleDuration, "GetSampleDuration" }, // 907522454
		{ &Z_Construct_UFunction_UGranularSynth_IsLoaded, "IsLoaded" }, // 3990276649
		{ &Z_Construct_UFunction_UGranularSynth_NoteOff, "NoteOff" }, // 198835487
		{ &Z_Construct_UFunction_UGranularSynth_NoteOn, "NoteOn" }, // 3706804809
		{ &Z_Construct_UFunction_UGranularSynth_SetAttackTime, "SetAttackTime" }, // 2033170501
		{ &Z_Construct_UFunction_UGranularSynth_SetDecayTime, "SetDecayTime" }, // 3541861003
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainDuration, "SetGrainDuration" }, // 1655992600
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType, "SetGrainEnvelopeType" }, // 4208785192
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainPan, "SetGrainPan" }, // 4070593704
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainPitch, "SetGrainPitch" }, // 3433193035
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainProbability, "SetGrainProbability" }, // 2863280235
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond, "SetGrainsPerSecond" }, // 1956266381
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainVolume, "SetGrainVolume" }, // 1854254153
		{ &Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 4233779811
		{ &Z_Construct_UFunction_UGranularSynth_SetPlayheadTime, "SetPlayheadTime" }, // 3666948550
		{ &Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec, "SetReleaseTimeMsec" }, // 226118375
		{ &Z_Construct_UFunction_UGranularSynth_SetScrubMode, "SetScrubMode" }, // 3299528893
		{ &Z_Construct_UFunction_UGranularSynth_SetSoundWave, "SetSoundWave" }, // 1752049097
		{ &Z_Construct_UFunction_UGranularSynth_SetSustainGain, "SetSustainGain" }, // 2582011919
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGranularSynth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentGranulator.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave = { "GranulatedSoundWave", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGranularSynth, GranulatedSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGranularSynth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGranularSynth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGranularSynth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGranularSynth_Statics::ClassParams = {
		&UGranularSynth::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGranularSynth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGranularSynth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGranularSynth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGranularSynth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGranularSynth, 4261391703);
	template<> SYNTHESIS_API UClass* StaticClass<UGranularSynth>()
	{
		return UGranularSynth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGranularSynth(Z_Construct_UClass_UGranularSynth, &UGranularSynth::StaticClass, TEXT("/Script/Synthesis"), TEXT("UGranularSynth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGranularSynth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
