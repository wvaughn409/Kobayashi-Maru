// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Public/AudioMixerBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerBlueprintLibrary() {}
// Cross Module References
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EAudioSpectrumType();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EFFTWindowType();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EFFTSize();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnSoundLoadComplete_Parms
		{
			const USoundWave* LoadedSoundWave;
			bool WasCancelled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasCancelled_MetaData[];
#endif
		static void NewProp_WasCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit(void* Obj)
	{
		((_Script_AudioMixer_eventOnSoundLoadComplete_Parms*)Obj)->WasCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled = { "WasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AudioMixer_eventOnSoundLoadComplete_Parms), &Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave = { "LoadedSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnSoundLoadComplete_Parms, LoadedSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n* Called when a load request for a sound has completed.\n*/" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Called when a load request for a sound has completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnSoundLoadComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_AudioMixer_eventOnSoundLoadComplete_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAudioSpectrumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioSpectrumType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EAudioSpectrumType"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioSpectrumType>()
	{
		return EAudioSpectrumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioSpectrumType(EAudioSpectrumType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EAudioSpectrumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EAudioSpectrumType_Hash() { return 2790993144U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EAudioSpectrumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioSpectrumType"), 0, Get_Z_Construct_UEnum_AudioMixer_EAudioSpectrumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioSpectrumType::MagnitudeSpectrum", (int64)EAudioSpectrumType::MagnitudeSpectrum },
				{ "EAudioSpectrumType::PowerSpectrum", (int64)EAudioSpectrumType::PowerSpectrum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MagnitudeSpectrum.Comment", "// Spectrum frequency values are equal to magnitude of frequency.\n" },
				{ "MagnitudeSpectrum.Name", "EAudioSpectrumType::MagnitudeSpectrum" },
				{ "MagnitudeSpectrum.ToolTip", "Spectrum frequency values are equal to magnitude of frequency." },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "PowerSpectrum.Comment", "// Spectrum frequency values are equal to magnitude squared.\n" },
				{ "PowerSpectrum.Name", "EAudioSpectrumType::PowerSpectrum" },
				{ "PowerSpectrum.ToolTip", "Spectrum frequency values are equal to magnitude squared." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EAudioSpectrumType",
				"EAudioSpectrumType",
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
	static UEnum* EFFTWindowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EFFTWindowType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EFFTWindowType"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTWindowType>()
	{
		return EFFTWindowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFFTWindowType(EFFTWindowType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EFFTWindowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EFFTWindowType_Hash() { return 2743753534U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EFFTWindowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFFTWindowType"), 0, Get_Z_Construct_UEnum_AudioMixer_EFFTWindowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFFTWindowType::None", (int64)EFFTWindowType::None },
				{ "EFFTWindowType::Hamming", (int64)EFFTWindowType::Hamming },
				{ "EFFTWindowType::Hann", (int64)EFFTWindowType::Hann },
				{ "EFFTWindowType::Blackman", (int64)EFFTWindowType::Blackman },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blackman.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA.\n" },
				{ "Blackman.Name", "EFFTWindowType::Blackman" },
				{ "Blackman.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA." },
				{ "Hamming.Comment", "// Mainlobe width of -3 dB and sidelove attenuation of ~-40 dB. Good for COLA.\n" },
				{ "Hamming.Name", "EFFTWindowType::Hamming" },
				{ "Hamming.ToolTip", "Mainlobe width of -3 dB and sidelove attenuation of ~-40 dB. Good for COLA." },
				{ "Hann.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA.\n" },
				{ "Hann.Name", "EFFTWindowType::Hann" },
				{ "Hann.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA." },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "None.Comment", "// No window is applied. Technically a boxcar window.\n" },
				{ "None.Name", "EFFTWindowType::None" },
				{ "None.ToolTip", "No window is applied. Technically a boxcar window." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EFFTWindowType",
				"EFFTWindowType",
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
	static UEnum* EFFTPeakInterpolationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EFFTPeakInterpolationMethod"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>()
	{
		return EFFTPeakInterpolationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFFTPeakInterpolationMethod(EFFTPeakInterpolationMethod_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EFFTPeakInterpolationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod_Hash() { return 198544064U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFFTPeakInterpolationMethod"), 0, Get_Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFFTPeakInterpolationMethod::NearestNeighbor", (int64)EFFTPeakInterpolationMethod::NearestNeighbor },
				{ "EFFTPeakInterpolationMethod::Linear", (int64)EFFTPeakInterpolationMethod::Linear },
				{ "EFFTPeakInterpolationMethod::Quadratic", (int64)EFFTPeakInterpolationMethod::Quadratic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Linear.Name", "EFFTPeakInterpolationMethod::Linear" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "NearestNeighbor.Name", "EFFTPeakInterpolationMethod::NearestNeighbor" },
				{ "Quadratic.Name", "EFFTPeakInterpolationMethod::Quadratic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EFFTPeakInterpolationMethod",
				"EFFTPeakInterpolationMethod",
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
	static UEnum* EFFTSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EFFTSize, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EFFTSize"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTSize>()
	{
		return EFFTSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFFTSize(EFFTSize_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EFFTSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EFFTSize_Hash() { return 1812743379U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EFFTSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFFTSize"), 0, Get_Z_Construct_UEnum_AudioMixer_EFFTSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFFTSize::DefaultSize", (int64)EFFTSize::DefaultSize },
				{ "EFFTSize::Min", (int64)EFFTSize::Min },
				{ "EFFTSize::Small", (int64)EFFTSize::Small },
				{ "EFFTSize::Medium", (int64)EFFTSize::Medium },
				{ "EFFTSize::Large", (int64)EFFTSize::Large },
				{ "EFFTSize::Max", (int64)EFFTSize::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DefaultSize.Comment", "// 512\n" },
				{ "DefaultSize.Name", "EFFTSize::DefaultSize" },
				{ "DefaultSize.ToolTip", "512" },
				{ "Large.Comment", "// 1024\n" },
				{ "Large.Name", "EFFTSize::Large" },
				{ "Large.ToolTip", "1024" },
				{ "Max.Comment", "// 4096\n" },
				{ "Max.Name", "EFFTSize::Max" },
				{ "Max.ToolTip", "4096" },
				{ "Medium.Comment", "// 512\n" },
				{ "Medium.Name", "EFFTSize::Medium" },
				{ "Medium.ToolTip", "512" },
				{ "Min.Comment", "// 64\n" },
				{ "Min.Name", "EFFTSize::Min" },
				{ "Min.ToolTip", "64" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "Small.Comment", "// 256\n" },
				{ "Small.Name", "EFFTSize::Small" },
				{ "Small.ToolTip", "256" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EFFTSize",
				"EFFTSize",
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
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execTrimAudioCache)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMegabytesToFree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAudioMixerBlueprintLibrary::TrimAudioCache(Z_Param_InMegabytesToFree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execPrimeSoundCueForPlayback)
	{
		P_GET_OBJECT(USoundCue,Z_Param_SoundCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(Z_Param_SoundCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execPrimeSoundForPlayback)
	{
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLoadCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(Z_Param_SoundWave,FOnSoundLoadComplete(Z_Param_OnLoadCompletion));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(Z_Param_WorldContextObject,Z_Param_PresetChain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_GET_PROPERTY(FIntProperty,Z_Param_EntryIndex);
		P_GET_UBOOL(Z_Param_bBypassed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex,Z_Param_bBypassed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_GET_PROPERTY(FIntProperty,Z_Param_EntryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_GET_STRUCT(FSourceEffectChainEntry,Z_Param_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetPhaseForFrequencies)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies);
		P_GET_TARRAY_REF(float,Z_Param_Out_Phases);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Phases,Z_Param_SubmixToAnalyze);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetMagnitudeForFrequencies)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies);
		P_GET_TARRAY_REF(float,Z_Param_Out_Magnitudes);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Magnitudes,Z_Param_SubmixToAnalyze);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStopAnalyzingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToStopAnalyzing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StopAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToStopAnalyzing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStartAnalyzingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze);
		P_GET_ENUM(EFFTSize,Z_Param_FFTSize);
		P_GET_ENUM(EFFTPeakInterpolationMethod,Z_Param_InterpolationMethod);
		P_GET_ENUM(EFFTWindowType,Z_Param_WindowType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HopSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StartAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToAnalyze,EFFTSize(Z_Param_FFTSize),EFFTPeakInterpolationMethod(Z_Param_InterpolationMethod),EFFTWindowType(Z_Param_WindowType),Z_Param_HopSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execResumeRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execPauseRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStopRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord);
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=UAudioMixerBlueprintLibrary::StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_SubmixToRecord,Z_Param_ExistingSoundWaveToOverwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStartRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedDuration);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration,Z_Param_SubmixToRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execClearSubmixEffects)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ClearSubmixEffects(Z_Param_WorldContextObject,Z_Param_SoundSubmix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execReplaceSoundEffectSubmix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_InSoundSubmix);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubmixChainIndex);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(Z_Param_WorldContextObject,Z_Param_InSoundSubmix,Z_Param_SubmixChainIndex,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPresetAtIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubmixChainIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixChainIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execAddSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::AddSubmixEffect(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	void UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary()
	{
		UClass* Class = UAudioMixerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMasterSubmixEffect", &UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect },
			{ "AddSourceEffectToPresetChain", &UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain },
			{ "AddSubmixEffect", &UAudioMixerBlueprintLibrary::execAddSubmixEffect },
			{ "ClearMasterSubmixEffects", &UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects },
			{ "ClearSubmixEffects", &UAudioMixerBlueprintLibrary::execClearSubmixEffects },
			{ "GetMagnitudeForFrequencies", &UAudioMixerBlueprintLibrary::execGetMagnitudeForFrequencies },
			{ "GetNumberOfEntriesInSourceEffectChain", &UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain },
			{ "GetPhaseForFrequencies", &UAudioMixerBlueprintLibrary::execGetPhaseForFrequencies },
			{ "PauseRecordingOutput", &UAudioMixerBlueprintLibrary::execPauseRecordingOutput },
			{ "PrimeSoundCueForPlayback", &UAudioMixerBlueprintLibrary::execPrimeSoundCueForPlayback },
			{ "PrimeSoundForPlayback", &UAudioMixerBlueprintLibrary::execPrimeSoundForPlayback },
			{ "RemoveMasterSubmixEffect", &UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect },
			{ "RemoveSourceEffectFromPresetChain", &UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain },
			{ "RemoveSubmixEffectPreset", &UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPreset },
			{ "RemoveSubmixEffectPresetAtIndex", &UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPresetAtIndex },
			{ "ReplaceSoundEffectSubmix", &UAudioMixerBlueprintLibrary::execReplaceSoundEffectSubmix },
			{ "ResumeRecordingOutput", &UAudioMixerBlueprintLibrary::execResumeRecordingOutput },
			{ "SetBypassSourceEffectChainEntry", &UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry },
			{ "StartAnalyzingOutput", &UAudioMixerBlueprintLibrary::execStartAnalyzingOutput },
			{ "StartRecordingOutput", &UAudioMixerBlueprintLibrary::execStartRecordingOutput },
			{ "StopAnalyzingOutput", &UAudioMixerBlueprintLibrary::execStopAnalyzingOutput },
			{ "StopRecordingOutput", &UAudioMixerBlueprintLibrary::execStopRecordingOutput },
			{ "TrimAudioCache", &UAudioMixerBlueprintLibrary::execTrimAudioCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds a submix effect preset to the master submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds a submix effect preset to the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddMasterSubmixEffect", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			FSourceEffectChainEntry Entry;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, Entry), Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_Entry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds source effect entry to preset chain. Only effects the instance of the preset chain */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds source effect entry to preset chain. Only effects the instance of the preset chain" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddSourceEffectToPresetChain", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			USoundEffectSubmixPreset* SubmixEffectPreset;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds a submix effect preset to the given submix at the end of its submix effect chain. Returns the number of submix effects. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds a submix effect preset to the given submix at the end of its submix effect chain. Returns the number of submix effects." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddSubmixEffect", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics
	{
		struct AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Clears all master submix effects. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Clears all master submix effects." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ClearMasterSubmixEffects", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics
	{
		struct AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Clears all submix effects on the given submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Clears all submix effects on the given submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ClearSubmixEffects", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> Frequencies;
			TArray<float> Magnitudes;
			USoundSubmix* SubmixToAnalyze;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Magnitudes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitudes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Frequencies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes = { "Magnitudes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, Magnitudes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes_Inner = { "Magnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, Frequencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_Inner = { "Frequencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_SubmixToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game. */" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetMagnitudeForFrequencies", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Returns the number of effect chain entries in the given source effect chain. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Returns the number of effect chain entries in the given source effect chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetNumberOfEntriesInSourceEffectChain", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> Frequencies;
			TArray<float> Phases;
			USoundSubmix* SubmixToAnalyze;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Phases;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Phases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Frequencies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases = { "Phases", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, Phases), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases_Inner = { "Phases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, Frequencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_Inner = { "Frequencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_SubmixToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game. */" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetPhaseForFrequencies", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToPause;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_SubmixToPause = { "SubmixToPause", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms, SubmixToPause), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_SubmixToPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio" },
		{ "Comment", "/** Pause recording audio, without finalizing the recording to disk. By leaving the Submix To Record field blank, you can record the master output of the game. */" },
		{ "CPP_Default_SubmixToPause", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Pause recording audio, without finalizing the recording to disk. By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PauseRecordingOutput", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPrimeSoundCueForPlayback_Parms
		{
			USoundCue* SoundCue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::NewProp_SoundCue = { "SoundCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPrimeSoundCueForPlayback_Parms, SoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::NewProp_SoundCue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Begin loading any sounds referenced by a sound cue into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading any sounds referenced by a sound cue into the cache so that it can be played immediately." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PrimeSoundCueForPlayback", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventPrimeSoundCueForPlayback_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms
		{
			USoundWave* SoundWave;
			FScriptDelegate OnLoadCompletion;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompletion_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompletion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion = { "OnLoadCompletion", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms, OnLoadCompletion), Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Begin loading a sound into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading a sound into the cache so that it can be played immediately." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PrimeSoundForPlayback", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes a submix effect preset from the master submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes a submix effect preset from the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveMasterSubmixEffect", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_EntryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds source effect entry to preset chain. Only affects the instance of preset chain. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds source effect entry to preset chain. Only affects the instance of preset chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSourceEffectFromPresetChain", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes all instances of a submix effect preset from the given submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes all instances of a submix effect preset from the given submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSubmixEffectPreset", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			int32 SubmixChainIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubmixChainIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SubmixChainIndex = { "SubmixChainIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms, SubmixChainIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SubmixChainIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes the submix effect at the given submix chain index, if there is a submix effect at that index. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes the submix effect at the given submix chain index, if there is a submix effect at that index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSubmixEffectPresetAtIndex", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics
	{
		struct AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* InSoundSubmix;
			int32 SubmixChainIndex;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubmixChainIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixChainIndex = { "SubmixChainIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, SubmixChainIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_InSoundSubmix = { "InSoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, InSoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixChainIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_InSoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Replaces the submix effect at the given submix chain index, adds the effect if there is none at that index. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Replaces the submix effect at the given submix chain index, adds the effect if there is none at that index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ReplaceSoundEffectSubmix", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToPause;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_SubmixToPause = { "SubmixToPause", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms, SubmixToPause), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_SubmixToPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio" },
		{ "Comment", "/** Resume recording audio after pausing. By leaving the Submix To Pause field blank, you can record the master output of the game. */" },
		{ "CPP_Default_SubmixToPause", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Resume recording audio after pausing. By leaving the Submix To Pause field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ResumeRecordingOutput", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics
	{
		struct AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
			bool bBypassed;
		};
		static void NewProp_bBypassed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBypassed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed_SetBit(void* Obj)
	{
		((AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms*)Obj)->bBypassed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed = { "bBypassed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_EntryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set whether or not to bypass the effect at the source effect chain index. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Set whether or not to bypass the effect at the source effect chain index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "SetBypassSourceEffectChainEntry", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToAnalyze;
			EFFTSize FFTSize;
			EFFTPeakInterpolationMethod InterpolationMethod;
			EFFTWindowType WindowType;
			float HopSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HopSize;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindowType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InterpolationMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_HopSize = { "HopSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, HopSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, WindowType), Z_Construct_UEnum_AudioMixer_EFFTWindowType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, InterpolationMethod), Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, FFTSize), Z_Construct_UEnum_AudioMixer_EFFTSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_HopSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SubmixToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game. */" },
		{ "CPP_Default_FFTSize", "DefaultSize" },
		{ "CPP_Default_HopSize", "0.000000" },
		{ "CPP_Default_InterpolationMethod", "Linear" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "CPP_Default_WindowType", "Hann" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartAnalyzingOutput", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			float ExpectedDuration;
			USoundSubmix* SubmixToRecord;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio" },
		{ "Comment", "/** Start recording audio. By leaving the Submix To Record field blank, you can record the master output of the game. */" },
		{ "CPP_Default_SubmixToRecord", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start recording audio. By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartRecordingOutput", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToStopAnalyzing;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToStopAnalyzing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_SubmixToStopAnalyzing = { "SubmixToStopAnalyzing", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms, SubmixToStopAnalyzing), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_SubmixToStopAnalyzing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. By leaving the Submix To Stop Analyzing blank, you can analyze the master output of the game. */" },
		{ "CPP_Default_SubmixToStopAnalyzing", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Stop Analyzing blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopAnalyzingOutput", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			EAudioRecordingExportType ExportType;
			FString Name;
			FString Path;
			USoundSubmix* SubmixToRecord;
			USoundWave* ExistingSoundWaveToOverwrite;
			USoundWave* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExportType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audio" },
		{ "Comment", "/** Stop recording audio. Path can be absolute, or relative (to the /Saved/BouncedWavFiles folder). By leaving the Submix To Record field blank, you can record the master output of the game.  */" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "CPP_Default_SubmixToRecord", "None" },
		{ "DisplayName", "Finish Recording Output" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Stop recording audio. Path can be absolute, or relative (to the /Saved/BouncedWavFiles folder). By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopRecordingOutput", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics
	{
		struct AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms
		{
			float InMegabytesToFree;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMegabytesToFree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_InMegabytesToFree = { "InMegabytesToFree", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms, InMegabytesToFree), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_InMegabytesToFree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Trim memory used by the audio cache. Returns the number of megabytes freed. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Trim memory used by the audio cache. Returns the number of megabytes freed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "TrimAudioCache", nullptr, nullptr, sizeof(AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect, "AddMasterSubmixEffect" }, // 2537390821
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, "AddSourceEffectToPresetChain" }, // 670231274
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect, "AddSubmixEffect" }, // 2391357764
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects, "ClearMasterSubmixEffects" }, // 4159130771
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects, "ClearSubmixEffects" }, // 3063589010
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, "GetMagnitudeForFrequencies" }, // 77683690
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, "GetNumberOfEntriesInSourceEffectChain" }, // 2832774357
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies, "GetPhaseForFrequencies" }, // 2122629543
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput, "PauseRecordingOutput" }, // 4202319010
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback, "PrimeSoundCueForPlayback" }, // 2420340429
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback, "PrimeSoundForPlayback" }, // 2555301391
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, "RemoveMasterSubmixEffect" }, // 3079587090
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, "RemoveSourceEffectFromPresetChain" }, // 1852181194
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset, "RemoveSubmixEffectPreset" }, // 4222744021
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex, "RemoveSubmixEffectPresetAtIndex" }, // 164357549
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix, "ReplaceSoundEffectSubmix" }, // 647333419
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput, "ResumeRecordingOutput" }, // 1470034154
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, "SetBypassSourceEffectChainEntry" }, // 348807099
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput, "StartAnalyzingOutput" }, // 3270902313
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput, "StartRecordingOutput" }, // 2028321748
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput, "StopAnalyzingOutput" }, // 2838782992
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput, "StopRecordingOutput" }, // 3798450925
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache, "TrimAudioCache" }, // 1322432523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioMixerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ScriptName", "AudioMixerLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMixerBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams = {
		&UAudioMixerBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioMixerBlueprintLibrary, 1319423888);
	template<> AUDIOMIXER_API UClass* StaticClass<UAudioMixerBlueprintLibrary>()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioMixerBlueprintLibrary(Z_Construct_UClass_UAudioMixerBlueprintLibrary, &UAudioMixerBlueprintLibrary::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UAudioMixerBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMixerBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
