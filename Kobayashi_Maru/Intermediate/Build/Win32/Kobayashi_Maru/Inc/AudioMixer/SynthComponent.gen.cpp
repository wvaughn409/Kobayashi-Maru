// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Public/Components/SynthComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponent() {}
// Cross Module References
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnSynthEnvelopeValue_Parms
		{
			float EnvelopeValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms, EnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called by a synth component and returns the sound's envelope value (using an envelope follower in the audio renderer).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Called by a synth component and returns the sound's envelope value (using an envelope follower in the audio renderer).\nThis only works in the audio mixer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnSynthEnvelopeValue__DelegateSignature", nullptr, nullptr, sizeof(_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USynthSound::StaticRegisterNativesUSynthSound()
	{
	}
	UClass* Z_Construct_UClass_USynthSound_NoRegister()
	{
		return USynthSound::StaticClass();
	}
	struct Z_Construct_UClass_USynthSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningSynthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningSynthComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Components/SynthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent = { "OwningSynthComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthSound, OwningSynthComponent), Z_Construct_UClass_USynthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USynthSound_Statics::ClassParams = {
		&USynthSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USynthSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USynthSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthSound, 4293260327);
	template<> AUDIOMIXER_API UClass* StaticClass<USynthSound>()
	{
		return USynthSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthSound(Z_Construct_UClass_USynthSound, &USynthSound::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USynthSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSound);
	DEFINE_FUNCTION(USynthComponent::execSetSubmixSend)
	{
		P_GET_OBJECT(USoundSubmixBase,Z_Param_Submix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void USynthComponent::StaticRegisterNativesUSynthComponent()
	{
		UClass* Class = USynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPlaying", &USynthComponent::execIsPlaying },
			{ "SetSubmixSend", &USynthComponent::execSetSubmixSend },
			{ "SetVolumeMultiplier", &USynthComponent::execSetVolumeMultiplier },
			{ "Start", &USynthComponent::execStart },
			{ "Stop", &USynthComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthComponent_IsPlaying_Statics
	{
		struct SynthComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SynthComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SynthComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/** Returns true if this component is currently playing. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Returns true if this component is currently playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(SynthComponent_eventIsPlaying_Parms), Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics
	{
		struct SynthComponent_eventSetSubmixSend_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_Submix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given submix. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetSubmixSend", nullptr, nullptr, sizeof(SynthComponent_eventSetSubmixSend_Parms), Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics
	{
		struct SynthComponent_eventSetVolumeMultiplier_Parms
		{
			float VolumeMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponent_eventSetVolumeMultiplier_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given submix. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, sizeof(SynthComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Starts the synth generating audio.\n" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Starts the synth generating audio." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Stops the synth generating audio.\n" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Stops the synth generating audio." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USynthComponent_NoRegister()
	{
		return USynthComponent::StaticClass();
	}
	struct Z_Construct_UClass_USynthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Synth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Synth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioEnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewSound_MetaData[];
#endif
		static void NewProp_bIsPreviewSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreEffectBusSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreEffectBusSends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreEffectBusSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[];
#endif
		static void NewProp_bOutputToBusOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponent_IsPlaying, "IsPlaying" }, // 1789234399
		{ &Z_Construct_UFunction_USynthComponent_SetSubmixSend, "SetSubmixSend" }, // 1800540715
		{ &Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 3263158623
		{ &Z_Construct_UFunction_USynthComponent_Start, "Start" }, // 915962700
		{ &Z_Construct_UFunction_USynthComponent_Stop, "Stop" }, // 2532666574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SynthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth = { "Synth", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, Synth), Z_Construct_UClass_USynthSound_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue = { "OnAudioEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, OnAudioEnvelopeValue), Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_MetaData[] = {
		{ "Comment", "/** Whether or not this synth is playing as a preview sound */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not this synth is playing as a preview sound" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bIsPreviewSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound = { "bIsPreviewSound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed.  */" },
		{ "DisplayName", "Pre-Effect Bus Sends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, PreEffectBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_Inner = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_Modulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Modulation for the sound */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Modulation for the sound" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_Modulation = { "Modulation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, Modulation), Z_Construct_UScriptStruct_FSoundModulation, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_Modulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_Modulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed.  */" },
		{ "DisplayName", "Post-Effect Bus Sends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends = { "BusSends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, BusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_Inner = { "BusSends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** An array of submix sends. Audio from this sound will send a portion of its audio to these effects.  */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, SoundSubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_Inner = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Submix this sound belongs to */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Submix this sound belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** The source effect chain to use for this sound. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The source effect chain to use for this sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings_MetaData[] = {
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, ConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends." },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bOutputToBusOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly = { "bOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Is this audio component allowed to be spatialized? */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Is this audio component allowed to be spatialized?" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_Modulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USynthComponent_Statics::ClassParams = {
		&USynthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USynthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthComponent, 2175761643);
	template<> AUDIOMIXER_API UClass* StaticClass<USynthComponent>()
	{
		return USynthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthComponent(Z_Construct_UClass_USynthComponent, &USynthComponent::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USynthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USynthComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
