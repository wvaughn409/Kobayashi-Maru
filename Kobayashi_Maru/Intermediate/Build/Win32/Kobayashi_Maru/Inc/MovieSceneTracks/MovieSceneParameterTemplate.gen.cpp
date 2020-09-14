// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Evaluation/MovieSceneParameterTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneComponentMaterialSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneComponentMaterialSectionTemplate"), sizeof(FMovieSceneComponentMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneComponentMaterialSectionTemplate>()
{
	return FMovieSceneComponentMaterialSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate(FMovieSceneComponentMaterialSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneComponentMaterialSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentMaterialSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentMaterialSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneComponentMaterialSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneComponentMaterialSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentMaterialSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Evaluation template for primitive component materials */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "Evaluation template for primitive component materials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComponentMaterialSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneComponentMaterialSectionTemplate, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::NewProp_MaterialIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneComponentMaterialSectionTemplate",
		sizeof(FMovieSceneComponentMaterialSectionTemplate),
		alignof(FMovieSceneComponentMaterialSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneComponentMaterialSectionTemplate"), sizeof(FMovieSceneComponentMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Hash() { return 4248262833U; }
class UScriptStruct* FMovieSceneParameterSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneParameterSectionTemplate"), sizeof(FMovieSceneParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneParameterSectionTemplate>()
{
	return FMovieSceneParameterSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneParameterSectionTemplate(FMovieSceneParameterSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneParameterSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParameterSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParameterSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneParameterSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneParameterSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParameterSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector2Ds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vector2Ds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector2Ds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bools;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scalars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scalars_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Template that performs evaluation of parameter sections */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "Template that performs evaluation of parameter sections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_MetaData[] = {
		{ "Comment", "/** The color parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The color parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_MetaData[] = {
		{ "Comment", "/** The vector parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_MetaData[] = {
		{ "Comment", "/** The vector parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds = { "Vector2Ds", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Vector2Ds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_Inner = { "Vector2Ds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_MetaData[] = {
		{ "Comment", "/** The bool parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The bool parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools = { "Bools", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Bools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_Inner = { "Bools", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_MetaData[] = {
		{ "Comment", "/** The scalar parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The scalar parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars = { "Scalars", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Scalars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_Inner = { "Scalars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneParameterSectionTemplate",
		sizeof(FMovieSceneParameterSectionTemplate),
		alignof(FMovieSceneParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneParameterSectionTemplate"), sizeof(FMovieSceneParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Hash() { return 2548119127U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
