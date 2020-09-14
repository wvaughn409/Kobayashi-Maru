// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeTransform() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
// End Cross Module References
class UScriptStruct* FMovieSceneTimeTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeTransform, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeTransform"), sizeof(FMovieSceneTimeTransform), Get_Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeTransform>()
{
	return FMovieSceneTimeTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTimeTransform(FMovieSceneTimeTransform::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTimeTransform"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTimeTransform
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTimeTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTimeTransform")),new UScriptStruct::TCppStructOps<FMovieSceneTimeTransform>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTimeTransform;
	struct Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another.\n *\n * @note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n * \x09\x09\x09| TimeScale\x09Offset\x09|\n *\x09\x09\x09| 0\x09\x09\x09""1\x09\x09|\n *\n * As such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\n *\n * Transforms apply time scale first, and then offset.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another.\n\n@note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n                    | TimeScale     Offset  |\n                    | 0                     1               |\n\nAs such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\n\nTransforms apply time scale first, and then offset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Scalar frame offset applied after the scale */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "Scalar frame offset applied after the scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTimeTransform, Offset), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/** The sequence's time scale (or play rate) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "The sequence's time scale (or play rate)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTimeTransform, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTimeTransform",
		sizeof(FMovieSceneTimeTransform),
		alignof(FMovieSceneTimeTransform),
		Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTimeTransform"), sizeof(FMovieSceneTimeTransform), Get_Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Hash() { return 1188148416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
