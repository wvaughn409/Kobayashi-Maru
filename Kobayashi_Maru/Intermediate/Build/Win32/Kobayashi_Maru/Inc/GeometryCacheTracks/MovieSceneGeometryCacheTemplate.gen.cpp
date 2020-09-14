// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTracks/Private/MovieSceneGeometryCacheTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTemplate() {}
// Cross Module References
	GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters();
	GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneGeometryCacheSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate, Z_Construct_UPackage__Script_GeometryCacheTracks(), TEXT("MovieSceneGeometryCacheSectionTemplate"), sizeof(FMovieSceneGeometryCacheSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCacheSectionTemplate>()
{
	return FMovieSceneGeometryCacheSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate(FMovieSceneGeometryCacheSectionTemplate::StaticStruct, TEXT("/Script/GeometryCacheTracks"), TEXT("MovieSceneGeometryCacheSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheSectionTemplate
{
	FScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneGeometryCacheSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplate>);
	}
} ScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneGeometryCacheSectionTemplate",
		sizeof(FMovieSceneGeometryCacheSectionTemplate),
		alignof(FMovieSceneGeometryCacheSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCacheTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneGeometryCacheSectionTemplate"), sizeof(FMovieSceneGeometryCacheSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Hash() { return 3541713174U; }
class UScriptStruct* FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters, Z_Construct_UPackage__Script_GeometryCacheTracks(), TEXT("MovieSceneGeometryCacheSectionTemplateParameters"), sizeof(FMovieSceneGeometryCacheSectionTemplateParameters), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCacheSectionTemplateParameters>()
{
	return FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters(FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct, TEXT("/Script/GeometryCacheTracks"), TEXT("MovieSceneGeometryCacheSectionTemplateParameters"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheSectionTemplateParameters
{
	FScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheSectionTemplateParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneGeometryCacheSectionTemplateParameters")),new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplateParameters>);
	}
} ScriptStruct_GeometryCacheTracks_StaticRegisterNativesFMovieSceneGeometryCacheSectionTemplateParameters;
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplateParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
		Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams,
		&NewStructOps,
		"MovieSceneGeometryCacheSectionTemplateParameters",
		sizeof(FMovieSceneGeometryCacheSectionTemplateParameters),
		alignof(FMovieSceneGeometryCacheSectionTemplateParameters),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCacheTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneGeometryCacheSectionTemplateParameters"), sizeof(FMovieSceneGeometryCacheSectionTemplateParameters), Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Hash() { return 981406574U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
