// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/AudioComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioComponentPlayState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioMultiEnvelopeValue_Parms
		{
			float AverageEnvelopeValue;
			float MaxEnvelope;
			int32 NumWaveInstances;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumWaveInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumWaveInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnvelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnvelope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageEnvelopeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances = { "NumWaveInstances", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, NumWaveInstances), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope = { "MaxEnvelope", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, MaxEnvelope), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue = { "AverageEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, AverageEnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called while a sound plays and returns the sound's average and max envelope value (using an envelope follower in the audio renderer per wave instance).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called while a sound plays and returns the sound's average and max envelope value (using an envelope follower in the audio renderer per wave instance).\nThis only works in the audio mixer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioMultiEnvelopeValue__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioSingleEnvelopeValue_Parms
		{
			const USoundWave* PlayingSoundWave;
			float EnvelopeValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms, EnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called while a sound plays and returns the sound's envelope value (using an envelope follower in the audio renderer).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called while a sound plays and returns the sound's envelope value (using an envelope follower in the audio renderer).\nThis only works in the audio mixer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioSingleEnvelopeValue__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioPlaybackPercent_Parms
		{
			const USoundWave* PlayingSoundWave;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\n* Computed as samples played divided by total samples, taking into account pitch.\n* Not currently implemented on all platforms.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioPlaybackPercent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnAudioPlaybackPercent_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQueueSubtitles_Parms
		{
			TArray<FSubtitleCue> Subtitles;
			float CueDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_CueDuration = { "CueDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, Subtitles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_Inner = { "Subtitles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_CueDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQueueSubtitles__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnQueueSubtitles_Parms), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAudioFaderCurve_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioFaderCurve, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioFaderCurve"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioFaderCurve>()
	{
		return EAudioFaderCurve_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioFaderCurve(EAudioFaderCurve_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioFaderCurve"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioFaderCurve_Hash() { return 2327749801U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioFaderCurve"), 0, Get_Z_Construct_UEnum_Engine_EAudioFaderCurve_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioFaderCurve::Linear", (int64)EAudioFaderCurve::Linear },
				{ "EAudioFaderCurve::Logarithmic", (int64)EAudioFaderCurve::Logarithmic },
				{ "EAudioFaderCurve::SCurve", (int64)EAudioFaderCurve::SCurve },
				{ "EAudioFaderCurve::Sin", (int64)EAudioFaderCurve::Sin },
				{ "EAudioFaderCurve::Count", (int64)EAudioFaderCurve::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Type of fade to use when adjusting the audio component's volume. */" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EAudioFaderCurve::Count" },
				{ "Linear.Comment", "// Linear Fade\n" },
				{ "Linear.Name", "EAudioFaderCurve::Linear" },
				{ "Linear.ToolTip", "Linear Fade" },
				{ "Logarithmic.Comment", "// Logarithmic Fade\n" },
				{ "Logarithmic.Name", "EAudioFaderCurve::Logarithmic" },
				{ "Logarithmic.ToolTip", "Logarithmic Fade" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "SCurve.Comment", "// S-Curve, Sinusoidal Fade\n" },
				{ "SCurve.DisplayName", "Sin (S-Curve)" },
				{ "SCurve.Name", "EAudioFaderCurve::SCurve" },
				{ "SCurve.ToolTip", "S-Curve, Sinusoidal Fade" },
				{ "Sin.Comment", "// Equal Power, Sinusoidal Fade\n" },
				{ "Sin.DisplayName", "Sin (Equal Power)" },
				{ "Sin.Name", "EAudioFaderCurve::Sin" },
				{ "Sin.ToolTip", "Equal Power, Sinusoidal Fade" },
				{ "ToolTip", "Type of fade to use when adjusting the audio component's volume." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioFaderCurve",
				"EAudioFaderCurve",
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
	static UEnum* EAudioComponentPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioComponentPlayState, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioComponentPlayState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioComponentPlayState>()
	{
		return EAudioComponentPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioComponentPlayState(EAudioComponentPlayState_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioComponentPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioComponentPlayState_Hash() { return 1744770736U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioComponentPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioComponentPlayState"), 0, Get_Z_Construct_UEnum_Engine_EAudioComponentPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioComponentPlayState::Playing", (int64)EAudioComponentPlayState::Playing },
				{ "EAudioComponentPlayState::Stopped", (int64)EAudioComponentPlayState::Stopped },
				{ "EAudioComponentPlayState::Paused", (int64)EAudioComponentPlayState::Paused },
				{ "EAudioComponentPlayState::FadingIn", (int64)EAudioComponentPlayState::FadingIn },
				{ "EAudioComponentPlayState::FadingOut", (int64)EAudioComponentPlayState::FadingOut },
				{ "EAudioComponentPlayState::Count", (int64)EAudioComponentPlayState::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enum describing the audio component play state\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EAudioComponentPlayState::Count" },
				{ "FadingIn.Comment", "// If the sound is playing and fading in\n" },
				{ "FadingIn.Name", "EAudioComponentPlayState::FadingIn" },
				{ "FadingIn.ToolTip", "If the sound is playing and fading in" },
				{ "FadingOut.Comment", "// If the sound is playing and fading out\n" },
				{ "FadingOut.Name", "EAudioComponentPlayState::FadingOut" },
				{ "FadingOut.ToolTip", "If the sound is playing and fading out" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "Paused.Comment", "// If the sound is playing but paused\n" },
				{ "Paused.Name", "EAudioComponentPlayState::Paused" },
				{ "Paused.ToolTip", "If the sound is playing but paused" },
				{ "Playing.Comment", "// If the sound is playing (i.e. not fading in, not fading out, not paused)\n" },
				{ "Playing.Name", "EAudioComponentPlayState::Playing" },
				{ "Playing.ToolTip", "If the sound is playing (i.e. not fading in, not fading out, not paused)" },
				{ "Stopped.Comment", "// If the sound is not playing\n" },
				{ "Stopped.Name", "EAudioComponentPlayState::Stopped" },
				{ "Stopped.ToolTip", "If the sound is not playing" },
				{ "ToolTip", "Enum describing the audio component play state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioComponentPlayState",
				"EAudioComponentPlayState",
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
class UScriptStruct* FAudioComponentParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioComponentParam, Z_Construct_UPackage__Script_Engine(), TEXT("AudioComponentParam"), sizeof(FAudioComponentParam), Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioComponentParam>()
{
	return FAudioComponentParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioComponentParam(FAudioComponentParam::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioComponentParam"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioComponentParam")),new UScriptStruct::TCppStructOps<FAudioComponentParam>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam;
	struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParam_MetaData[];
#endif
		static void NewProp_BoolParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Struct used for storing one per-instance named parameter for this AudioComponent.\n *\x09""Certain nodes in the SoundCue may reference parameters by name so they can be adjusted per-instance.\n */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Struct used for storing one per-instance named parameter for this AudioComponent.\nCertain nodes in the SoundCue may reference parameters by name so they can be adjusted per-instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioComponentParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "Comment", "// Value of the parameter when used as a sound wave\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as a sound wave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam = { "SoundWaveParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, SoundWaveParam), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "Comment", "// Value of the parameter when used as an integer\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as an integer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam = { "IntParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, IntParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "Comment", "// Value of the parameter when used as a boolean\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as a boolean" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_SetBit(void* Obj)
	{
		((FAudioComponentParam*)Obj)->BoolParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam = { "BoolParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioComponentParam), &Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "Comment", "// Value of the parameter when used as a float\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as a float" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam = { "FloatParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, FloatParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "Comment", "// Name of the parameter\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Name of the parameter" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioComponentParam",
		sizeof(FAudioComponentParam),
		alignof(FAudioComponentParam),
		Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioComponentParam"), sizeof(FAudioComponentParam), Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioComponentParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash() { return 4150264185U; }
	DEFINE_FUNCTION(UAudioComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedEnvelopeDataForAllPlayingSounds)
	{
		P_GET_TARRAY_REF(FSoundWaveEnvelopeDataPerSound,Z_Param_Out_OutEnvelopeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedEnvelopeDataForAllPlayingSounds(Z_Param_Out_OutEnvelopeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedEnvelopeData)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutEnvelopeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedEnvelopeData(Z_Param_Out_OutEnvelopeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedFFTDataForAllPlayingSounds)
	{
		P_GET_TARRAY_REF(FSoundWaveSpectralDataPerSound,Z_Param_Out_OutSoundWaveSpectralData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedFFTDataForAllPlayingSounds(Z_Param_Out_OutSoundWaveSpectralData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedFFTData)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_FrequenciesToGet);
		P_GET_TARRAY_REF(FSoundWaveSpectralData,Z_Param_Out_OutSoundWaveSpectralData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedFFTData(Z_Param_Out_FrequenciesToGet,Z_Param_Out_OutSoundWaveSpectralData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execHasCookedAmplitudeEnvelopeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCookedAmplitudeEnvelopeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execHasCookedFFTData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCookedFFTData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetLowPassFilterFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLowPassFilterFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetLowPassFilterEnabled)
	{
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSourceBusSendPostEffect)
	{
		P_GET_OBJECT(USoundSourceBus,Z_Param_SoundSourceBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SourceBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBusSendPostEffect(Z_Param_SoundSourceBus,Z_Param_SourceBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSourceBusSendPreEffect)
	{
		P_GET_OBJECT(USoundSourceBus,Z_Param_SoundSourceBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SourceBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBusSendPreEffect(Z_Param_SoundSourceBus,Z_Param_SourceBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSubmixSend)
	{
		P_GET_OBJECT(USoundSubmixBase,Z_Param_Submix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execAdjustAttenuation)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_InAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetUISound)
	{
		P_GET_UBOOL(Z_Param_bInUISound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUISound(Z_Param_bInUISound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetPitchMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchMultiplier(Z_Param_NewPitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_NewVolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetIntParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameter(Z_Param_InName,Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetBoolParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_InBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameter(Z_Param_InName,Z_Param_InBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetWaveParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_OBJECT(USoundWave,Z_Param_InWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaveParameter(Z_Param_InName,Z_Param_InWave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetFloatParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_InName,Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetPlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAudioComponentPlayState*)Z_Param__Result=P_THIS->GetPlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execStopDelayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDelayed(Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	void UAudioComponent::StaticRegisterNativesUAudioComponent()
	{
		UClass* Class = UAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UAudioComponent::execAdjustAttenuation },
			{ "AdjustVolume", &UAudioComponent::execAdjustVolume },
			{ "BP_GetAttenuationSettingsToApply", &UAudioComponent::execBP_GetAttenuationSettingsToApply },
			{ "FadeIn", &UAudioComponent::execFadeIn },
			{ "FadeOut", &UAudioComponent::execFadeOut },
			{ "GetCookedEnvelopeData", &UAudioComponent::execGetCookedEnvelopeData },
			{ "GetCookedEnvelopeDataForAllPlayingSounds", &UAudioComponent::execGetCookedEnvelopeDataForAllPlayingSounds },
			{ "GetCookedFFTData", &UAudioComponent::execGetCookedFFTData },
			{ "GetCookedFFTDataForAllPlayingSounds", &UAudioComponent::execGetCookedFFTDataForAllPlayingSounds },
			{ "GetPlayState", &UAudioComponent::execGetPlayState },
			{ "HasCookedAmplitudeEnvelopeData", &UAudioComponent::execHasCookedAmplitudeEnvelopeData },
			{ "HasCookedFFTData", &UAudioComponent::execHasCookedFFTData },
			{ "IsPlaying", &UAudioComponent::execIsPlaying },
			{ "Play", &UAudioComponent::execPlay },
			{ "SetBoolParameter", &UAudioComponent::execSetBoolParameter },
			{ "SetFloatParameter", &UAudioComponent::execSetFloatParameter },
			{ "SetIntParameter", &UAudioComponent::execSetIntParameter },
			{ "SetLowPassFilterEnabled", &UAudioComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", &UAudioComponent::execSetLowPassFilterFrequency },
			{ "SetPaused", &UAudioComponent::execSetPaused },
			{ "SetPitchMultiplier", &UAudioComponent::execSetPitchMultiplier },
			{ "SetSound", &UAudioComponent::execSetSound },
			{ "SetSourceBusSendPostEffect", &UAudioComponent::execSetSourceBusSendPostEffect },
			{ "SetSourceBusSendPreEffect", &UAudioComponent::execSetSourceBusSendPreEffect },
			{ "SetSubmixSend", &UAudioComponent::execSetSubmixSend },
			{ "SetUISound", &UAudioComponent::execSetUISound },
			{ "SetVolumeMultiplier", &UAudioComponent::execSetVolumeMultiplier },
			{ "SetWaveParameter", &UAudioComponent::execSetWaveParameter },
			{ "Stop", &UAudioComponent::execStop },
			{ "StopDelayed", &UAudioComponent::execStopDelayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics
	{
		struct AudioComponent_eventAdjustAttenuation_Parms
		{
			FSoundAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Modify the attenuation settings of the audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Modify the attenuation settings of the audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, sizeof(AudioComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics
	{
		struct AudioComponent_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
			EAudioFaderCurve FadeCurve;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** This will allow one to adjust the volume of an AudioComponent on the fly */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This will allow one to adjust the volume of an AudioComponent on the fly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(AudioComponent_eventAdjustVolume_Parms), Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_FadeIn_Statics
	{
		struct AudioComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
			EAudioFaderCurve FadeCurve;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeInDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This can be used in place of \"play\" when it is desired to fade in the sound over time.\n\x09 *\n\x09 * If FadeTime is 0.0, the change in volume is instant.\n\x09 * If FadeTime is > 0.0, the multiplier will be increased from 0 to FadeVolumeLevel over FadeIn seconds.\n\x09 *\n\x09 * @param FadeInDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AudioComponents's calculated volume to fade to\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This can be used in place of \"play\" when it is desired to fade in the sound over time.\n\nIf FadeTime is 0.0, the change in volume is instant.\nIf FadeTime is > 0.0, the multiplier will be increased from 0 to FadeVolumeLevel over FadeIn seconds.\n\n@param FadeInDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume to fade to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(AudioComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_FadeOut_Statics
	{
		struct AudioComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
			EAudioFaderCurve FadeCurve;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This is used in place of \"stop\" when it is desired to fade the volume of the sound before stopping.\n\x09 *\n\x09 * If FadeTime is 0.0, this is the same as calling Stop().\n\x09 * If FadeTime is > 0.0, this will adjust the volume multiplier to FadeVolumeLevel over FadeInTime seconds\n\x09 * and then stop the sound.\n\x09 *\n\x09 * @param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This is used in place of \"stop\" when it is desired to fade the volume of the sound before stopping.\n\nIf FadeTime is 0.0, this is the same as calling Stop().\nIf FadeTime is > 0.0, this will adjust the volume multiplier to FadeVolumeLevel over FadeInTime seconds\nand then stop the sound.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(AudioComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics
	{
		struct AudioComponent_eventGetCookedEnvelopeData_Parms
		{
			float OutEnvelopeData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutEnvelopeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedEnvelopeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventGetCookedEnvelopeData_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_OutEnvelopeData = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedEnvelopeData_Parms, OutEnvelopeData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_OutEnvelopeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time cooked envelope data of the playing audio component.\n\x09* Cooked data is interpolated and averaged across all playing sound waves.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time cooked envelope data of the playing audio component.\nCooked data is interpolated and averaged across all playing sound waves.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedEnvelopeData", nullptr, nullptr, sizeof(AudioComponent_eventGetCookedEnvelopeData_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics
	{
		struct AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms
		{
			TArray<FSoundWaveEnvelopeDataPerSound> OutEnvelopeData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutEnvelopeData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEnvelopeData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms, OutEnvelopeData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData_Inner = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time envelope data of the sounds playing audio component.\n\x09* Envelope data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time envelope data of the sounds playing audio component.\nEnvelope data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedEnvelopeDataForAllPlayingSounds", nullptr, nullptr, sizeof(AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics
	{
		struct AudioComponent_eventGetCookedFFTData_Parms
		{
			TArray<float> FrequenciesToGet;
			TArray<FSoundWaveSpectralData> OutSoundWaveSpectralData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSoundWaveSpectralData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSoundWaveSpectralData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequenciesToGet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FrequenciesToGet;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequenciesToGet_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedFFTData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventGetCookedFFTData_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTData_Parms, OutSoundWaveSpectralData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData_Inner = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet = { "FrequenciesToGet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTData_Parms, FrequenciesToGet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_Inner = { "FrequenciesToGet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time cooked spectral data of the sounds playing on the audio component.\n\x09* Spectral data is averaged and interpolated for all playing sounds on this audio component.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time cooked spectral data of the sounds playing on the audio component.\nSpectral data is averaged and interpolated for all playing sounds on this audio component.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedFFTData", nullptr, nullptr, sizeof(AudioComponent_eventGetCookedFFTData_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedFFTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics
	{
		struct AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms
		{
			TArray<FSoundWaveSpectralDataPerSound> OutSoundWaveSpectralData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSoundWaveSpectralData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSoundWaveSpectralData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms, OutSoundWaveSpectralData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData_Inner = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time cooked spectral data of the sounds playing audio component.\n\x09* Spectral data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time cooked spectral data of the sounds playing audio component.\nSpectral data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedFFTDataForAllPlayingSounds", nullptr, nullptr, sizeof(AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics
	{
		struct AudioComponent_eventGetPlayState_Parms
		{
			EAudioComponentPlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EAudioComponentPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Returns the enumerated play states of the audio component. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns the enumerated play states of the audio component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetPlayState", nullptr, nullptr, sizeof(AudioComponent_eventGetPlayState_Parms), Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics
	{
		struct AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms
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
	void Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms), &Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Queries if the sound wave playing in this audio component has cooked amplitude analyses. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Queries if the sound wave playing in this audio component has cooked amplitude analyses." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "HasCookedAmplitudeEnvelopeData", nullptr, nullptr, sizeof(AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms), Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics
	{
		struct AudioComponent_eventHasCookedFFTData_Parms
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
	void Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventHasCookedFFTData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventHasCookedFFTData_Parms), &Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Queries if the sound wave playing in this audio component has cooked FFT data. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Queries if the sound wave playing in this audio component has cooked FFT data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "HasCookedFFTData", nullptr, nullptr, sizeof(AudioComponent_eventHasCookedFFTData_Parms), Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedFFTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics
	{
		struct AudioComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Returns if the sound playing any audio. Doesn't indicate the play state. Use GetPlayState() to get the actual play state. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns if the sound playing any audio. Doesn't indicate the play state. Use GetPlayState() to get the actual play state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(AudioComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_Play_Statics
	{
		struct AudioComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Start a sound playing on an audio component */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Start a sound playing on an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "Play", nullptr, nullptr, sizeof(AudioComponent_eventPlay_Parms), Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics
	{
		struct AudioComponent_eventSetBoolParameter_Parms
		{
			FName InName;
			bool InBool;
		};
		static void NewProp_InBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((AudioComponent_eventSetBoolParameter_Parms*)Obj)->InBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetBoolParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a boolean instance parameter for use in sound cues played by this audio component */" },
		{ "DisplayName", "Set Boolean Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a boolean instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetBoolParameter", nullptr, nullptr, sizeof(AudioComponent_eventSetBoolParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics
	{
		struct AudioComponent_eventSetFloatParameter_Parms
		{
			FName InName;
			float InFloat;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**  Set a float instance parameter for use in sound cues played by this audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a float instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(AudioComponent_eventSetFloatParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics
	{
		struct AudioComponent_eventSetIntParameter_Parms
		{
			FName InName;
			int32 InInt;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set an integer instance parameter for use in sound cues played by this audio component */" },
		{ "DisplayName", "Set Integer Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set an integer instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetIntParameter", nullptr, nullptr, sizeof(AudioComponent_eventSetIntParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics
	{
		struct AudioComponent_eventSetLowPassFilterEnabled_Parms
		{
			bool InLowPassFilterEnabled;
		};
		static void NewProp_InLowPassFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InLowPassFilterEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
	{
		((AudioComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets whether or not the low pass filter is enabled on the audio component. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets whether or not the low pass filter is enabled on the audio component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetLowPassFilterEnabled", nullptr, nullptr, sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics
	{
		struct AudioComponent_eventSetLowPassFilterFrequency_Parms
		{
			float InLowPassFilterFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLowPassFilterFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets lowpass filter frequency of the audio component. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets lowpass filter frequency of the audio component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetLowPassFilterFrequency", nullptr, nullptr, sizeof(AudioComponent_eventSetLowPassFilterFrequency_Parms), Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetPaused_Statics
	{
		struct AudioComponent_eventSetPaused_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AudioComponent_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Pause an audio component playing its sound cue, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Pause an audio component playing its sound cue, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetPaused", nullptr, nullptr, sizeof(AudioComponent_eventSetPaused_Parms), Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics
	{
		struct AudioComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier = { "NewPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a new pitch multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a new pitch multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetPitchMultiplier", nullptr, nullptr, sizeof(AudioComponent_eventSetPitchMultiplier_Parms), Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSound_Statics
	{
		struct AudioComponent_eventSetSound_Parms
		{
			USoundBase* NewSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "// Set what sound is played by this component\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set what sound is played by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSound", nullptr, nullptr, sizeof(AudioComponent_eventSetSound_Parms), Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics
	{
		struct AudioComponent_eventSetSourceBusSendPostEffect_Parms
		{
			USoundSourceBus* SoundSourceBus;
			float SourceBusSendLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceBusSendLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SourceBusSendLevel = { "SourceBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPostEffect_Parms, SourceBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPostEffect_Parms, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SourceBusSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SoundSourceBus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given Source Bus (POST Source Effects).\n\x09\x09if the Bus Send doesn't already exist, it will be added to the overrides on the active sound */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given Source Bus (POST Source Effects).\n              if the Bus Send doesn't already exist, it will be added to the overrides on the active sound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSourceBusSendPostEffect", nullptr, nullptr, sizeof(AudioComponent_eventSetSourceBusSendPostEffect_Parms), Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics
	{
		struct AudioComponent_eventSetSourceBusSendPreEffect_Parms
		{
			USoundSourceBus* SoundSourceBus;
			float SourceBusSendLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceBusSendLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SourceBusSendLevel = { "SourceBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPreEffect_Parms, SourceBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPreEffect_Parms, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SourceBusSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SoundSourceBus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given Source Bus (PRE Source Effects).\n\x09\x09if the Bus Send doesn't already exist, it will be added to the overrides on the active sound */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given Source Bus (PRE Source Effects).\n              if the Bus Send doesn't already exist, it will be added to the overrides on the active sound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSourceBusSendPreEffect", nullptr, nullptr, sizeof(AudioComponent_eventSetSourceBusSendPreEffect_Parms), Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics
	{
		struct AudioComponent_eventSetSubmixSend_Parms
		{
			USoundSubmixBase* Submix;
			float SendLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_Submix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given submix. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSubmixSend", nullptr, nullptr, sizeof(AudioComponent_eventSetSubmixSend_Parms), Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSubmixSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetUISound_Statics
	{
		struct AudioComponent_eventSetUISound_Parms
		{
			bool bInUISound;
		};
		static void NewProp_bInUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUISound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound_SetBit(void* Obj)
	{
		((AudioComponent_eventSetUISound_Parms*)Obj)->bInUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound = { "bInUISound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetUISound_Parms), &Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set whether sounds generated by this audio component should be considered UI sounds */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set whether sounds generated by this audio component should be considered UI sounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetUISound", nullptr, nullptr, sizeof(AudioComponent_eventSetUISound_Parms), Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetUISound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics
	{
		struct AudioComponent_eventSetVolumeMultiplier_Parms
		{
			float NewVolumeMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVolumeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier = { "NewVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetVolumeMultiplier_Parms, NewVolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a new volume multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, sizeof(AudioComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics
	{
		struct AudioComponent_eventSetWaveParameter_Parms
		{
			FName InName;
			USoundWave* InWave;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWave;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InWave = { "InWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**  Set a sound wave instance parameter for use in sound cues played by this audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a sound wave instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetWaveParameter", nullptr, nullptr, sizeof(AudioComponent_eventSetWaveParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetWaveParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Stop an audio component's sound, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Stop an audio component's sound, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics
	{
		struct AudioComponent_eventStopDelayed_Parms
		{
			float DelayTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "StopDelayed", nullptr, nullptr, sizeof(AudioComponent_eventStopDelayed_Parms), Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_StopDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioComponent_NoRegister()
	{
		return UAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioMultiEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioMultiEnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioSingleEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioSingleEnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyGainMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighFrequencyGainMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeWeightedPriorityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeWeightedPriorityScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponentUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioComponentUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridePriority_MetaData[];
#endif
		static void NewProp_bOverridePriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLowPassFilter_MetaData[];
#endif
		static void NewProp_bEnableLowPassFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLowPassFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubtitlePriority_MetaData[];
#endif
		static void NewProp_bOverrideSubtitlePriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubtitlePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[];
#endif
		static void NewProp_bAllowSpatialization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRemainActiveIfDropped_MetaData[];
#endif
		static void NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRemainActiveIfDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioComponent_AdjustAttenuation, "AdjustAttenuation" }, // 560346788
		{ &Z_Construct_UFunction_UAudioComponent_AdjustVolume, "AdjustVolume" }, // 1015954591
		{ &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 393629272
		{ &Z_Construct_UFunction_UAudioComponent_FadeIn, "FadeIn" }, // 4050184098
		{ &Z_Construct_UFunction_UAudioComponent_FadeOut, "FadeOut" }, // 843945433
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData, "GetCookedEnvelopeData" }, // 1341144557
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds, "GetCookedEnvelopeDataForAllPlayingSounds" }, // 3269514283
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedFFTData, "GetCookedFFTData" }, // 1548281250
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds, "GetCookedFFTDataForAllPlayingSounds" }, // 2583196931
		{ &Z_Construct_UFunction_UAudioComponent_GetPlayState, "GetPlayState" }, // 2832089955
		{ &Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData, "HasCookedAmplitudeEnvelopeData" }, // 4064872816
		{ &Z_Construct_UFunction_UAudioComponent_HasCookedFFTData, "HasCookedFFTData" }, // 3575911590
		{ &Z_Construct_UFunction_UAudioComponent_IsPlaying, "IsPlaying" }, // 1637523078
		{ &Z_Construct_UFunction_UAudioComponent_Play, "Play" }, // 1110728222
		{ &Z_Construct_UFunction_UAudioComponent_SetBoolParameter, "SetBoolParameter" }, // 1887825505
		{ &Z_Construct_UFunction_UAudioComponent_SetFloatParameter, "SetFloatParameter" }, // 1144000633
		{ &Z_Construct_UFunction_UAudioComponent_SetIntParameter, "SetIntParameter" }, // 3499448464
		{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 132898751
		{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 2935710577
		{ &Z_Construct_UFunction_UAudioComponent_SetPaused, "SetPaused" }, // 3759141949
		{ &Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 3398464054
		{ &Z_Construct_UFunction_UAudioComponent_SetSound, "SetSound" }, // 538085833
		{ &Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect, "SetSourceBusSendPostEffect" }, // 1941101408
		{ &Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect, "SetSourceBusSendPreEffect" }, // 2769259306
		{ &Z_Construct_UFunction_UAudioComponent_SetSubmixSend, "SetSubmixSend" }, // 3566598452
		{ &Z_Construct_UFunction_UAudioComponent_SetUISound, "SetUISound" }, // 2907956661
		{ &Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 675278845
		{ &Z_Construct_UFunction_UAudioComponent_SetWaveParameter, "SetWaveParameter" }, // 3753951731
		{ &Z_Construct_UFunction_UAudioComponent_Stop, "Stop" }, // 3452359505
		{ &Z_Construct_UFunction_UAudioComponent_StopDelayed, "StopDelayed" }, // 249045332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "Comment", "/**\n * AudioComponent is used to play a Sound\n *\n * @see https://docs.unrealengine.com/latest/INT/Audio/Overview/index.html\n * @see USoundBase\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/AudioComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "AudioComponent is used to play a Sound\n\n@see https://docs.unrealengine.com/latest/INT/Audio/Overview/index.html\n@see USoundBase" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData[] = {
		{ "Comment", "/** Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Modulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Modulation for the sound */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Modulation for the sound" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Modulation = { "Modulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, Modulation), Z_Construct_UScriptStruct_FSoundModulation, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Modulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Modulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue = { "OnAudioMultiEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioMultiEnvelopeValue), Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue = { "OnAudioSingleEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioSingleEnvelopeValue), Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "Comment", "/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\n\x09* Computed as samples played divided by total samples, taking into account pitch.\n\x09* Not currently implemented on all platforms.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency rules to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "What sound concurrency rules to use for sounds generated by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData[] = {
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, ConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "AttenuationSettings" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The frequency of the lowpass filter (in hertz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter. */" },
		{ "EditCondition", "bEnableLowPassFilter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The frequency of the lowpass filter (in hertz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** A pitch multiplier to apply to sounds generated by this component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A pitch multiplier to apply to sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier = { "HighFrequencyGainMultiplier", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, HighFrequencyGainMultiplier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale = { "VolumeWeightedPriorityScale", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeWeightedPriorityScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Used by the subtitle manager to prioritize subtitles wave instances spawned by this component. */" },
		{ "EditCondition", "bOverrideSubtitlePriority" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Used by the subtitle manager to prioritize subtitles wave instances spawned by this component." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority = { "SubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, SubtitlePriority), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** A priority value that is used for sounds that play on this component that scales against final output volume. */" },
		{ "EditCondition", "bOverridePriority" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A priority value that is used for sounds that play on this component that scales against final output volume." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** A volume multiplier to apply to sounds generated by this component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A volume multiplier to apply to sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** The upper bound to use when randomly determining a volume multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax = { "VolumeModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** The lower bound to use when randomly determining a volume multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin = { "VolumeModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** The upper bound to use when randomly determining a pitch multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax = { "PitchModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, PitchModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** The lower bound to use when randomly determining a pitch multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin = { "PitchModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, PitchModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData[] = {
		{ "Comment", "/** Configurable, serialized ID for audio plugins */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Configurable, serialized ID for audio plugins" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID = { "AudioComponentUserID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AudioComponentUserID), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09* True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\n\x09* This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09* If enabled, this AudioComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be detached/attached along with it.\n\x09* When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09* This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09* @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nIf enabled, this AudioComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be detached/attached along with it.\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If true, subtitles in the sound data will be ignored. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If true, subtitles in the sound data will be ignored." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bSuppressSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverridePriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority = { "bOverridePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Whether or not to apply a low-pass filter to the sound that plays in this audio component. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to apply a low-pass filter to the sound that plays in this audio component." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bEnableLowPassFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter = { "bEnableLowPassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not to override the sound's subtitle priority. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to override the sound's subtitle priority." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverrideSubtitlePriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority = { "bOverrideSubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Allows defining attenuation settings directly on this audio component without using an attenuation settings asset. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Allows defining attenuation settings directly on this audio component without using an attenuation settings asset." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData[] = {
		{ "Comment", "/** Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bShouldRemainActiveIfDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped = { "bShouldRemainActiveIfDropped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional sound group this AudioComponent belongs to */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Optional sound group this AudioComponent belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Array of per-instance parameters for this AudioComponent. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Array of per-instance parameters for this AudioComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters = { "InstanceParameters", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, InstanceParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_Inner = { "InstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioComponentParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The sound to be played */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The sound to be played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Modulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioComponent_Statics::ClassParams = {
		&UAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioComponent, 3671672407);
	template<> ENGINE_API UClass* StaticClass<UAudioComponent>()
	{
		return UAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioComponent(Z_Construct_UClass_UAudioComponent, &UAudioComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
