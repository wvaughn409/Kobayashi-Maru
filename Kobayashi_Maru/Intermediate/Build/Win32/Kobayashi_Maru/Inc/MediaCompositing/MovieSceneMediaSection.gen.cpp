// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaSection() {}
// Cross Module References
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
// End Cross Module References
	void UMovieSceneMediaSection::StaticRegisterNativesUMovieSceneMediaSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister()
	{
		return UMovieSceneMediaSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMediaSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalMediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalMediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExternalMediaPlayer_MetaData[];
#endif
		static void NewProp_bUseExternalMediaPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExternalMediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSoundComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMediaSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene section for media playback.\n */" },
		{ "IncludePath", "MovieSceneMediaSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene section for media playback." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "Comment", "/** The reference frame offset for single thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The reference frame offset for single thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaSection, ThumbnailReferenceOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The external media player this track should control. */" },
		{ "EditCondition", "bUseExternalMediaPlayer" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The external media player this track should control." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer = { "ExternalMediaPlayer", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaSection, ExternalMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** If true, this track will control a previously created media player instead of automatically creating one. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "If true, this track will control a previously created media player instead of automatically creating one." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_SetBit(void* Obj)
	{
		((UMovieSceneMediaSection*)Obj)->bUseExternalMediaPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer = { "bUseExternalMediaPlayer", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneMediaSection), &Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The media sound component that receives the track's audio output. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The media sound component that receives the track's audio output." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The media texture that receives the track's video output. */" },
		{ "EditCondition", "!bUseExternalMediaPlayer" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The media texture that receives the track's video output." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Offset into the source media. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "Offset into the source media." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Should the media player be set to loop? This can be helpful for media formats that can use this information (such as exr sequences) to pre-cache the starting data when nearing the end of playback. Does not cause the media to continue playing after the end of the section is reached. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "Should the media player be set to loop? This can be helpful for media formats that can use this information (such as exr sequences) to pre-cache the starting data when nearing the end of playback. Does not cause the media to continue playing after the end of the section is reached." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneMediaSection*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneMediaSection), &Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The source to play with this video track. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaSection.h" },
		{ "ToolTip", "The source to play with this video track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMediaSection, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_ExternalMediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_MediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMediaSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaSection_Statics::ClassParams = {
		&UMovieSceneMediaSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMediaSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMediaSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMediaSection, 98704893);
	template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaSection>()
	{
		return UMovieSceneMediaSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMediaSection(Z_Construct_UClass_UMovieSceneMediaSection, &UMovieSceneMediaSection::StaticClass, TEXT("/Script/MediaCompositing"), TEXT("UMovieSceneMediaSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
