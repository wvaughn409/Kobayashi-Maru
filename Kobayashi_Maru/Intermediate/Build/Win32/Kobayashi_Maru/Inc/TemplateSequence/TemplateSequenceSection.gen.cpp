// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Sections/TemplateSequenceSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceSection() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UTemplateSequenceSection::StaticRegisterNativesUTemplateSequenceSection()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister()
	{
		return UTemplateSequenceSection::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/TemplateSequenceSection.h" },
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams = {
		&UTemplateSequenceSection::StaticClass,
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
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequenceSection, 1994726022);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceSection>()
	{
		return UTemplateSequenceSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequenceSection(Z_Construct_UClass_UTemplateSequenceSection, &UTemplateSequenceSection::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequenceSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
