// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Classes/Generators/AudioGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGenerator() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	void UAudioGenerator::StaticRegisterNativesUAudioGenerator()
	{
	}
	UClass* Z_Construct_UClass_UAudioGenerator_NoRegister()
	{
		return UAudioGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Generators/AudioGenerator.h" },
		{ "ModuleRelativePath", "Classes/Generators/AudioGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioGenerator_Statics::ClassParams = {
		&UAudioGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioGenerator, 1825186757);
	template<> AUDIOMIXER_API UClass* StaticClass<UAudioGenerator>()
	{
		return UAudioGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioGenerator(Z_Construct_UClass_UAudioGenerator, &UAudioGenerator::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UAudioGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
