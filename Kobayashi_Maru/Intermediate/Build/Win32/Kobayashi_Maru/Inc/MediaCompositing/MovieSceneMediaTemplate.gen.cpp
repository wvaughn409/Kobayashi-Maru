// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Private/MovieScene/MovieSceneMediaTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTemplate() {}
// Cross Module References
	MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneMediaSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIACOMPOSITING_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate, Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaSectionTemplate"), sizeof(FMovieSceneMediaSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaSectionTemplate>()
{
	return FMovieSceneMediaSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneMediaSectionTemplate(FMovieSceneMediaSectionTemplate::StaticStruct, TEXT("/Script/MediaCompositing"), TEXT("MovieSceneMediaSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaSectionTemplate
{
	FScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneMediaSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionTemplate>);
	}
} ScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneMediaSectionTemplate",
		sizeof(FMovieSceneMediaSectionTemplate),
		alignof(FMovieSceneMediaSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaCompositing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneMediaSectionTemplate"), sizeof(FMovieSceneMediaSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Hash() { return 4199312490U; }
class UScriptStruct* FMovieSceneMediaSectionParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIACOMPOSITING_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams, Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaSectionParams"), sizeof(FMovieSceneMediaSectionParams), Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Hash());
	}
	return Singleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaSectionParams>()
{
	return FMovieSceneMediaSectionParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneMediaSectionParams(FMovieSceneMediaSectionParams::StaticStruct, TEXT("/Script/MediaCompositing"), TEXT("MovieSceneMediaSectionParams"), false, nullptr, nullptr);
static struct FScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaSectionParams
{
	FScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaSectionParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneMediaSectionParams")),new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionParams>);
	}
} ScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaSectionParams;
	struct Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionEndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSoundComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FMovieSceneMediaSectionParams*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneMediaSectionParams), &Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame = { "SectionEndFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, SectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
		nullptr,
		&NewStructOps,
		"MovieSceneMediaSectionParams",
		sizeof(FMovieSceneMediaSectionParams),
		alignof(FMovieSceneMediaSectionParams),
		Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaCompositing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneMediaSectionParams"), sizeof(FMovieSceneMediaSectionParams), Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Hash() { return 588371796U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
