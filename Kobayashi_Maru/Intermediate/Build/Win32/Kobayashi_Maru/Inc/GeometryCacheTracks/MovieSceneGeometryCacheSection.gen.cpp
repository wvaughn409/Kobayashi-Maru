// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTracks/Classes/MovieSceneGeometryCacheSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheSection() {}
// Cross Module References
	GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister();
	GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FMovieSceneGeometryCacheParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams, Z_Construct_UPackage__Script_GeometryCacheTracks(), TEXT("MovieSceneGeometryCacheParams"), sizeof(FMovieSceneGeometryCacheParams), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCacheParams>()
{
	return FMovieSceneGeometryCacheParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneGeometryCacheParams(FMovieSceneGeometryCacheParams::StaticStruct, TEXT("/Script/GeometryCacheTracks"), TEXT("MovieSceneGeometryCacheParams"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheParams
{
	FScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneGeometryCacheParams")),new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheParams>);
	}
} ScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheParams;
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCacheAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, GeometryCache_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, EndOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieSceneGeometryCacheParams*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneGeometryCacheParams), &Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The offset for the first loop of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The offset for the first loop of the animation clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The animation this section plays */" },
		{ "DisplayName", "Geometry Cache" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset = { "GeometryCacheAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, GeometryCacheAsset), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneGeometryCacheParams",
		sizeof(FMovieSceneGeometryCacheParams),
		alignof(FMovieSceneGeometryCacheParams),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCacheTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneGeometryCacheParams"), sizeof(FMovieSceneGeometryCacheParams), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Hash() { return 229770340U; }
	void UMovieSceneGeometryCacheSection::StaticRegisterNativesUMovieSceneGeometryCacheSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister()
	{
		return UMovieSceneGeometryCacheSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control geometry cache playback\n */" },
		{ "IncludePath", "MovieSceneGeometryCacheSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "Movie scene section that control geometry cache playback" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneGeometryCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCacheSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::ClassParams = {
		&UMovieSceneGeometryCacheSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneGeometryCacheSection, 4275371523);
	template<> GEOMETRYCACHETRACKS_API UClass* StaticClass<UMovieSceneGeometryCacheSection>()
	{
		return UMovieSceneGeometryCacheSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneGeometryCacheSection(Z_Construct_UClass_UMovieSceneGeometryCacheSection, &UMovieSceneGeometryCacheSection::StaticClass, TEXT("/Script/GeometryCacheTracks"), TEXT("UMovieSceneGeometryCacheSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCacheSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneGeometryCacheSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
