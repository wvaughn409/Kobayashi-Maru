// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaPlayerPropertyTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTrack() {}
// Cross Module References
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_NoRegister();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References
	void UMovieSceneMediaPlayerPropertyTrack::StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_NoRegister()
	{
		return UMovieSceneMediaPlayerPropertyTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneMediaPlayerPropertyTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertyTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaPlayerPropertyTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::ClassParams = {
		&UMovieSceneMediaPlayerPropertyTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMediaPlayerPropertyTrack, 1179593837);
	template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaPlayerPropertyTrack>()
	{
		return UMovieSceneMediaPlayerPropertyTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMediaPlayerPropertyTrack(Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack, &UMovieSceneMediaPlayerPropertyTrack::StaticClass, TEXT("/Script/MediaCompositing"), TEXT("UMovieSceneMediaPlayerPropertyTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaPlayerPropertyTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
