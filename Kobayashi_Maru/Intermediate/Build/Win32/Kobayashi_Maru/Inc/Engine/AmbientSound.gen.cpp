// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/AmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientSound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AAmbientSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAmbientSound::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmbientSound::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmbientSound::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmbientSound::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmbientSound::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel);
		P_NATIVE_END;
	}
	void AAmbientSound::StaticRegisterNativesAAmbientSound()
	{
		UClass* Class = AAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", &AAmbientSound::execAdjustVolume },
			{ "FadeIn", &AAmbientSound::execFadeIn },
			{ "FadeOut", &AAmbientSound::execFadeOut },
			{ "Play", &AAmbientSound::execPlay },
			{ "Stop", &AAmbientSound::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics
	{
		struct AmbientSound_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(AmbientSound_eventAdjustVolume_Parms), Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmbientSound_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmbientSound_FadeIn_Statics
	{
		struct AmbientSound_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeInDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "FadeIn", nullptr, nullptr, sizeof(AmbientSound_eventFadeIn_Parms), Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmbientSound_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmbientSound_FadeOut_Statics
	{
		struct AmbientSound_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "FadeOut", nullptr, nullptr, sizeof(AmbientSound_eventFadeOut_Parms), Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmbientSound_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmbientSound_Play_Statics
	{
		struct AmbientSound_eventPlay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientSound_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmbientSound_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "Play", nullptr, nullptr, sizeof(AmbientSound_eventPlay_Parms), Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmbientSound_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmbientSound_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmbientSound_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmbientSound_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmbientSound_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmbientSound_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmbientSound_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmbientSound_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAmbientSound_NoRegister()
	{
		return AAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AAmbientSound_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAmbientSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmbientSound_AdjustVolume, "AdjustVolume" }, // 1729904734
		{ &Z_Construct_UFunction_AAmbientSound_FadeIn, "FadeIn" }, // 998471868
		{ &Z_Construct_UFunction_AAmbientSound_FadeOut, "FadeOut" }, // 1246917711
		{ &Z_Construct_UFunction_AAmbientSound_Play, "Play" }, // 3997399660
		{ &Z_Construct_UFunction_AAmbientSound_Stop, "Stop" }, // 4133484929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Audio" },
		{ "ClassGroupNames", "Sounds" },
		{ "Comment", "/** A sound actor that can be placed in a level */" },
		{ "HideCategories", "Collision Input Game" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Sound/AmbientSound.h" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
		{ "ToolTip", "A sound actor that can be placed in a level" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "Comment", "/** Audio component that handles sound playing */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sound,Audio,Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
		{ "ToolTip", "Audio component that handles sound playing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmbientSound, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmbientSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmbientSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmbientSound_Statics::ClassParams = {
		&AAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmbientSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmbientSound, 986968387);
	template<> ENGINE_API UClass* StaticClass<AAmbientSound>()
	{
		return AAmbientSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmbientSound(Z_Construct_UClass_AAmbientSound, &AAmbientSound::StaticClass, TEXT("/Script/Engine"), TEXT("AAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
