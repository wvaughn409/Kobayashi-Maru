// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceAudioOscilloscope.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudioOscilloscope() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceAudioOscilloscope::StaticRegisterNativesUNiagaraDataInterfaceAudioOscilloscope()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_NoRegister()
	{
		return UNiagaraDataInterfaceAudioOscilloscope::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeInMilliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScopeInMilliseconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Data Interface allowing sampling of recent audio data. */" },
		{ "DisplayName", "Audio Oscilloscope" },
		{ "IncludePath", "NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ToolTip", "Data Interface allowing sampling of recent audio data." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds_MetaData[] = {
		{ "Category", "Oscilloscope" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// The number of milliseconds of audio to show.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ToolTip", "The number of milliseconds of audio to show." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds = { "ScopeInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioOscilloscope, ScopeInMilliseconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Oscilloscope" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "64" },
		{ "Comment", "// The number of samples of audio to pass to the GPU. Audio will be resampled to fit this resolution.\n// Increasing this number will increase the resolution of the waveform, but will also increase usage of the GPU memory bus,\n// potentially causing issues across the application.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ToolTip", "The number of samples of audio to pass to the GPU. Audio will be resampled to fit this resolution.\nIncreasing this number will increase the resolution of the waveform, but will also increase usage of the GPU memory bus,\npotentially causing issues across the application." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioOscilloscope, Resolution), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "Oscilloscope" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioOscilloscope, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioOscilloscope>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioOscilloscope::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceAudioOscilloscope, 4090090284);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioOscilloscope>()
	{
		return UNiagaraDataInterfaceAudioOscilloscope::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceAudioOscilloscope(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope, &UNiagaraDataInterfaceAudioOscilloscope::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceAudioOscilloscope"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioOscilloscope);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
