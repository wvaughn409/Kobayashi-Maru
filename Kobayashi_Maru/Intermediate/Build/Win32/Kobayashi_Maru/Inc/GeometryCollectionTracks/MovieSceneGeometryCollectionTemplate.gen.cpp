// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionTracks/Public/MovieSceneGeometryCollectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCollectionTemplate() {}
// Cross Module References
	GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters();
	GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneGeometryCollectionSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONTRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate, Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionSectionTemplate"), sizeof(FMovieSceneGeometryCollectionSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionSectionTemplate>()
{
	return FMovieSceneGeometryCollectionSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate(FMovieSceneGeometryCollectionSectionTemplate::StaticStruct, TEXT("/Script/GeometryCollectionTracks"), TEXT("MovieSceneGeometryCollectionSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionSectionTemplate
{
	FScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneGeometryCollectionSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionSectionTemplate>);
	}
} ScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneGeometryCollectionSectionTemplate",
		sizeof(FMovieSceneGeometryCollectionSectionTemplate),
		alignof(FMovieSceneGeometryCollectionSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneGeometryCollectionSectionTemplate"), sizeof(FMovieSceneGeometryCollectionSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Hash() { return 186123247U; }
class UScriptStruct* FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONTRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters, Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionSectionTemplateParameters"), sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionSectionTemplateParameters>()
{
	return FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters(FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct, TEXT("/Script/GeometryCollectionTracks"), TEXT("MovieSceneGeometryCollectionSectionTemplateParameters"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionSectionTemplateParameters
{
	FScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionSectionTemplateParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneGeometryCollectionSectionTemplateParameters")),new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionSectionTemplateParameters>);
	}
} ScriptStruct_GeometryCollectionTracks_StaticRegisterNativesFMovieSceneGeometryCollectionSectionTemplateParameters;
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionSectionTemplateParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
		Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams,
		&NewStructOps,
		"MovieSceneGeometryCollectionSectionTemplateParameters",
		sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters),
		alignof(FMovieSceneGeometryCollectionSectionTemplateParameters),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneGeometryCollectionSectionTemplateParameters"), sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Hash() { return 2760445024U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
