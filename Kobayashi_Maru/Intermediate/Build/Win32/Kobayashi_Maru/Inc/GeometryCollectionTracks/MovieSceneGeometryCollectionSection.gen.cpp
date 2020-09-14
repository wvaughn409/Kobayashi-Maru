// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionTracks/Public/MovieSceneGeometryCollectionSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCollectionSection() {}
// Cross Module References
	GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection_NoRegister();
	GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FMovieSceneGeometryCollectionParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONTRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams, Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionParams"), sizeof(FMovieSceneGeometryCollectionParams), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionParams>()
{
	return FMovieSceneGeometryCollectionParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneGeometryCollectionParams(FMovieSceneGeometryCollectionParams::StaticStruct, TEXT("/Script/GeometryCollectionTracks"), TEXT("MovieSceneGeometryCollectionParams"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionParams
{
	FScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneGeometryCollectionParams")),new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionParams>);
	}
} ScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionParams;
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryCollectionCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache_MetaData[] = {
		{ "AllowedClasses", "GeometryCollectionCache" },
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache = { "GeometryCollectionCache", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, GeometryCollectionCache), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneGeometryCollectionParams",
		sizeof(FMovieSceneGeometryCollectionParams),
		alignof(FMovieSceneGeometryCollectionParams),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneGeometryCollectionParams"), sizeof(FMovieSceneGeometryCollectionParams), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Hash() { return 3852777622U; }
	void UMovieSceneGeometryCollectionSection::StaticRegisterNativesUMovieSceneGeometryCollectionSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection_NoRegister()
	{
		return UMovieSceneGeometryCollectionSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control geometry cache playback\n */" },
		{ "IncludePath", "MovieSceneGeometryCollectionSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "Movie scene section that control geometry cache playback" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneGeometryCollectionSection, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCollectionSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::ClassParams = {
		&UMovieSceneGeometryCollectionSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneGeometryCollectionSection, 74660454);
	template<> GEOMETRYCOLLECTIONTRACKS_API UClass* StaticClass<UMovieSceneGeometryCollectionSection>()
	{
		return UMovieSceneGeometryCollectionSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneGeometryCollectionSection(Z_Construct_UClass_UMovieSceneGeometryCollectionSection, &UMovieSceneGeometryCollectionSection::StaticClass, TEXT("/Script/GeometryCollectionTracks"), TEXT("UMovieSceneGeometryCollectionSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCollectionSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
