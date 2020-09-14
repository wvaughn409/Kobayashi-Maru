// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/SynthComponentWaveTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentWaveTable() {}
// Cross Module References
	SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthSamplePlayer_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthSamplePlayer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics
	{
		struct _Script_Synthesis_eventOnSamplePlaybackProgress_Parms
		{
			float ProgressPercent;
			float ProgressTimeSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressTimeSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressTimeSeconds = { "ProgressTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Synthesis_eventOnSamplePlaybackProgress_Parms, ProgressTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressPercent = { "ProgressPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Synthesis_eventOnSamplePlaybackProgress_Parms, ProgressPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called while a sample player is playing back. Indicates the playhead progress in percent and as absolute time value (within the file).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ToolTip", "Called while a sample player is playing back. Indicates the playhead progress in percent and as absolute time value (within the file)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnSamplePlaybackProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_Synthesis_eventOnSamplePlaybackProgress_Parms), Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when a sample has finished loading into the sample player\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ToolTip", "Called when a sample has finished loading into the sample player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnSampleLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESamplePlayerSeekType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESamplePlayerSeekType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESamplePlayerSeekType>()
	{
		return ESamplePlayerSeekType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESamplePlayerSeekType(ESamplePlayerSeekType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESamplePlayerSeekType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Hash() { return 2083024577U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESamplePlayerSeekType"), 0, Get_Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESamplePlayerSeekType::FromBeginning", (int64)ESamplePlayerSeekType::FromBeginning },
				{ "ESamplePlayerSeekType::FromCurrentPosition", (int64)ESamplePlayerSeekType::FromCurrentPosition },
				{ "ESamplePlayerSeekType::FromEnd", (int64)ESamplePlayerSeekType::FromEnd },
				{ "ESamplePlayerSeekType::Count", (int64)ESamplePlayerSeekType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESamplePlayerSeekType::Count" },
				{ "FromBeginning.Name", "ESamplePlayerSeekType::FromBeginning" },
				{ "FromCurrentPosition.Name", "ESamplePlayerSeekType::FromCurrentPosition" },
				{ "FromEnd.Name", "ESamplePlayerSeekType::FromEnd" },
				{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESamplePlayerSeekType",
				"ESamplePlayerSeekType",
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
	DEFINE_FUNCTION(USynthSamplePlayer::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execGetCurrentPlaybackProgressPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlaybackProgressPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execGetCurrentPlaybackProgressTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlaybackProgressTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execGetSampleDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSampleDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetScrubTimeWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InScrubTimeWidthSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrubTimeWidth(Z_Param_InScrubTimeWidthSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetScrubMode)
	{
		P_GET_UBOOL(Z_Param_bScrubMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrubMode(Z_Param_bScrubMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSeekToTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_GET_ENUM(ESamplePlayerSeekType,Z_Param_SeekType);
		P_GET_UBOOL(Z_Param_bWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekToTime(Z_Param_TimeSec,ESamplePlayerSeekType(Z_Param_SeekType),Z_Param_bWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_InPitch,Z_Param_TimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetSoundWave)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundWave(Z_Param_InSoundWave);
		P_NATIVE_END;
	}
	void USynthSamplePlayer::StaticRegisterNativesUSynthSamplePlayer()
	{
		UClass* Class = USynthSamplePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPlaybackProgressPercent", &USynthSamplePlayer::execGetCurrentPlaybackProgressPercent },
			{ "GetCurrentPlaybackProgressTime", &USynthSamplePlayer::execGetCurrentPlaybackProgressTime },
			{ "GetSampleDuration", &USynthSamplePlayer::execGetSampleDuration },
			{ "IsLoaded", &USynthSamplePlayer::execIsLoaded },
			{ "SeekToTime", &USynthSamplePlayer::execSeekToTime },
			{ "SetPitch", &USynthSamplePlayer::execSetPitch },
			{ "SetScrubMode", &USynthSamplePlayer::execSetScrubMode },
			{ "SetScrubTimeWidth", &USynthSamplePlayer::execSetScrubTimeWidth },
			{ "SetSoundWave", &USynthSamplePlayer::execSetSoundWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics
	{
		struct SynthSamplePlayer_eventGetCurrentPlaybackProgressPercent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventGetCurrentPlaybackProgressPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "GetCurrentPlaybackProgressPercent", nullptr, nullptr, sizeof(SynthSamplePlayer_eventGetCurrentPlaybackProgressPercent_Parms), Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics
	{
		struct SynthSamplePlayer_eventGetCurrentPlaybackProgressTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventGetCurrentPlaybackProgressTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "GetCurrentPlaybackProgressTime", nullptr, nullptr, sizeof(SynthSamplePlayer_eventGetCurrentPlaybackProgressTime_Parms), Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics
	{
		struct SynthSamplePlayer_eventGetSampleDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventGetSampleDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "GetSampleDuration", nullptr, nullptr, sizeof(SynthSamplePlayer_eventGetSampleDuration_Parms), Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics
	{
		struct SynthSamplePlayer_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SynthSamplePlayer_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SynthSamplePlayer_eventIsLoaded_Parms), &Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "IsLoaded", nullptr, nullptr, sizeof(SynthSamplePlayer_eventIsLoaded_Parms), Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics
	{
		struct SynthSamplePlayer_eventSeekToTime_Parms
		{
			float TimeSec;
			ESamplePlayerSeekType SeekType;
			bool bWrap;
		};
		static void NewProp_bWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SeekType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeekType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap_SetBit(void* Obj)
	{
		((SynthSamplePlayer_eventSeekToTime_Parms*)Obj)->bWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap = { "bWrap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SynthSamplePlayer_eventSeekToTime_Parms), &Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType = { "SeekType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventSeekToTime_Parms, SeekType), Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventSeekToTime_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_TimeSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_bWrap", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SeekToTime", nullptr, nullptr, sizeof(SynthSamplePlayer_eventSeekToTime_Parms), Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SeekToTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics
	{
		struct SynthSamplePlayer_eventSetPitch_Parms
		{
			float InPitch;
			float TimeSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventSetPitch_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_InPitch = { "InPitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventSetPitch_Parms, InPitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_InPitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetPitch", nullptr, nullptr, sizeof(SynthSamplePlayer_eventSetPitch_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics
	{
		struct SynthSamplePlayer_eventSetScrubMode_Parms
		{
			bool bScrubMode;
		};
		static void NewProp_bScrubMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScrubMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode_SetBit(void* Obj)
	{
		((SynthSamplePlayer_eventSetScrubMode_Parms*)Obj)->bScrubMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode = { "bScrubMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SynthSamplePlayer_eventSetScrubMode_Parms), &Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetScrubMode", nullptr, nullptr, sizeof(SynthSamplePlayer_eventSetScrubMode_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics
	{
		struct SynthSamplePlayer_eventSetScrubTimeWidth_Parms
		{
			float InScrubTimeWidthSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InScrubTimeWidthSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::NewProp_InScrubTimeWidthSec = { "InScrubTimeWidthSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventSetScrubTimeWidth_Parms, InScrubTimeWidthSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::NewProp_InScrubTimeWidthSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetScrubTimeWidth", nullptr, nullptr, sizeof(SynthSamplePlayer_eventSetScrubTimeWidth_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics
	{
		struct SynthSamplePlayer_eventSetSoundWave_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthSamplePlayer_eventSetSoundWave_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::NewProp_InSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// This will override the current sound wave if one is set, stop audio, and reload the new sound wave\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ToolTip", "This will override the current sound wave if one is set, stop audio, and reload the new sound wave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetSoundWave", nullptr, nullptr, sizeof(SynthSamplePlayer_eventSetSoundWave_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USynthSamplePlayer_NoRegister()
	{
		return USynthSamplePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USynthSamplePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSamplePlaybackProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSamplePlaybackProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSampleLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSampleLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthSamplePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthSamplePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent, "GetCurrentPlaybackProgressPercent" }, // 3265796921
		{ &Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime, "GetCurrentPlaybackProgressTime" }, // 3645206874
		{ &Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration, "GetSampleDuration" }, // 19502425
		{ &Z_Construct_UFunction_USynthSamplePlayer_IsLoaded, "IsLoaded" }, // 3598976014
		{ &Z_Construct_UFunction_USynthSamplePlayer_SeekToTime, "SeekToTime" }, // 309595403
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetPitch, "SetPitch" }, // 290366987
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode, "SetScrubMode" }, // 4062333735
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth, "SetScrubTimeWidth" }, // 1447972357
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave, "SetSoundWave" }, // 2710986241
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentWaveTable.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress_MetaData[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress = { "OnSamplePlaybackProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthSamplePlayer, OnSamplePlaybackProgress), Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded_MetaData[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded = { "OnSampleLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthSamplePlayer, OnSampleLoaded), Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthSamplePlayer, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthSamplePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthSamplePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthSamplePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USynthSamplePlayer_Statics::ClassParams = {
		&USynthSamplePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthSamplePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthSamplePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USynthSamplePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthSamplePlayer, 1007610571);
	template<> SYNTHESIS_API UClass* StaticClass<USynthSamplePlayer>()
	{
		return USynthSamplePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthSamplePlayer(Z_Construct_UClass_USynthSamplePlayer, &USynthSamplePlayer::StaticClass, TEXT("/Script/Synthesis"), TEXT("USynthSamplePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSamplePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
