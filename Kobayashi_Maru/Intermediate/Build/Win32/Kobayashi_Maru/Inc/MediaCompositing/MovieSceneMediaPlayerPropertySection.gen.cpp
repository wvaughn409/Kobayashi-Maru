// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaPlayerPropertySection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertySection() {}
// Cross Module References
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_NoRegister();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
// End Cross Module References
	void UMovieSceneMediaPlayerPropertySection::StaticRegisterNativesUMovieSceneMediaPlayerPropertySection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_NoRegister()
	{
		return UMovieSceneMediaPlayerPropertySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene section for media playback on a UMediaPlayer.\n */" },
		{ "IncludePath", "MovieSceneMediaPlayerPropertySection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertySection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene section for media playback on a UMediaPlayer." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Whether to loop this video. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertySection.h" },
		{ "ToolTip", "Whether to loop this video." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UMovieSceneMediaPlayerPropertySection*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneMediaPlayerPropertySection), &Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The source to play with this video track. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertySection.h" },
		{ "ToolTip", "The source to play with this video track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaPlayerPropertySection, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaPlayerPropertySection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::ClassParams = {
		&UMovieSceneMediaPlayerPropertySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMediaPlayerPropertySection, 3860097887);
	template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaPlayerPropertySection>()
	{
		return UMovieSceneMediaPlayerPropertySection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMediaPlayerPropertySection(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection, &UMovieSceneMediaPlayerPropertySection::StaticClass, TEXT("/Script/MediaCompositing"), TEXT("UMovieSceneMediaPlayerPropertySection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaPlayerPropertySection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
