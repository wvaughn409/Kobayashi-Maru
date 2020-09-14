// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Tracks/TemplateSequenceTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceTrack() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceTrack_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UTemplateSequenceTrack::StaticRegisterNativesUTemplateSequenceTrack()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequenceTrack_NoRegister()
	{
		return UTemplateSequenceTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/TemplateSequenceTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/TemplateSequenceTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams = {
		&UTemplateSequenceTrack::StaticClass,
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
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequenceTrack, 3235455533);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceTrack>()
	{
		return UTemplateSequenceTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequenceTrack(Z_Construct_UClass_UTemplateSequenceTrack, &UTemplateSequenceTrack::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequenceTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
