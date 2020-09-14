// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTemplate() {}
// Cross Module References
	MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIACOMPOSITING_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate, Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaPlayerPropertySectionTemplate"), sizeof(FMovieSceneMediaPlayerPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaPlayerPropertySectionTemplate>()
{
	return FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate(FMovieSceneMediaPlayerPropertySectionTemplate::StaticStruct, TEXT("/Script/MediaCompositing"), TEXT("MovieSceneMediaPlayerPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaPlayerPropertySectionTemplate
{
	FScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaPlayerPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneMediaPlayerPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneMediaPlayerPropertySectionTemplate>);
	}
} ScriptStruct_MediaCompositing_StaticRegisterNativesFMovieSceneMediaPlayerPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaPlayerPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FMovieSceneMediaPlayerPropertySectionTemplate*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneMediaPlayerPropertySectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_SectionStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewProp_MediaSource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneMediaPlayerPropertySectionTemplate",
		sizeof(FMovieSceneMediaPlayerPropertySectionTemplate),
		alignof(FMovieSceneMediaPlayerPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaCompositing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneMediaPlayerPropertySectionTemplate"), sizeof(FMovieSceneMediaPlayerPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Hash() { return 1675121795U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
