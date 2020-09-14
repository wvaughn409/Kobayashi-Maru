// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTrack() {}
// Cross Module References
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneMediaTrack::StaticRegisterNativesUMovieSceneMediaTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister()
	{
		return UMovieSceneMediaTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMediaTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MediaSections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSections_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMediaTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track for media playback.\n */" },
		{ "IncludePath", "MovieSceneMediaTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene track for media playback." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_MetaData[] = {
		{ "Comment", "/** List of all master media sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaTrack.h" },
		{ "ToolTip", "List of all master media sections." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections = { "MediaSections", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaTrack, MediaSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_Inner = { "MediaSections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMediaTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams = {
		&UMovieSceneMediaTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMediaTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMediaTrack, 156845685);
	template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaTrack>()
	{
		return UMovieSceneMediaTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMediaTrack(Z_Construct_UClass_UMovieSceneMediaTrack, &UMovieSceneMediaTrack::StaticClass, TEXT("/Script/MediaCompositing"), TEXT("UMovieSceneMediaTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
