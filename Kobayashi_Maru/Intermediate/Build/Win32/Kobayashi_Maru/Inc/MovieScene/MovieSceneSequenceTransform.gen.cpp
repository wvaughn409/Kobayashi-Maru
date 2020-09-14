// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarping();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceTransform"), sizeof(FMovieSceneSequenceTransform), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceTransform>()
{
	return FMovieSceneSequenceTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceTransform(FMovieSceneSequenceTransform::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceTransform"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceTransform
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceTransform")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceTransform;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NestedTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NestedTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NestedTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms = { "NestedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceTransform, NestedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner = { "NestedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceTransform",
		sizeof(FMovieSceneSequenceTransform),
		alignof(FMovieSceneSequenceTransform),
		Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceTransform"), sizeof(FMovieSceneSequenceTransform), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Hash() { return 646844021U; }
class UScriptStruct* FMovieSceneNestedSequenceTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneNestedSequenceTransform"), sizeof(FMovieSceneNestedSequenceTransform), Get_Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneNestedSequenceTransform>()
{
	return FMovieSceneNestedSequenceTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneNestedSequenceTransform(FMovieSceneNestedSequenceTransform::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneNestedSequenceTransform"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneNestedSequenceTransform
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneNestedSequenceTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneNestedSequenceTransform")),new UScriptStruct::TCppStructOps<FMovieSceneNestedSequenceTransform>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneNestedSequenceTransform;
	struct Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Warping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Warping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Time transform information for a nested sequence.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time transform information for a nested sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNestedSequenceTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time warping information for this sub-sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time warping information for this sub-sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping = { "Warping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, Warping), Z_Construct_UScriptStruct_FMovieSceneTimeWarping, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Linear time transform for this sub-sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Linear time transform for this sub-sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneNestedSequenceTransform",
		sizeof(FMovieSceneNestedSequenceTransform),
		alignof(FMovieSceneNestedSequenceTransform),
		Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneNestedSequenceTransform"), sizeof(FMovieSceneNestedSequenceTransform), Get_Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Hash() { return 3012314923U; }
class UScriptStruct* FMovieSceneWarpCounter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWarpCounter, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneWarpCounter"), sizeof(FMovieSceneWarpCounter), Get_Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneWarpCounter>()
{
	return FMovieSceneWarpCounter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneWarpCounter(FMovieSceneWarpCounter::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneWarpCounter"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneWarpCounter
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneWarpCounter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneWarpCounter")),new UScriptStruct::TCppStructOps<FMovieSceneWarpCounter>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneWarpCounter;
	struct Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarpCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarpCounts;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WarpCounts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that tracks warp counts in a way that works with the FMovieSceneTimeWarping struct.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Struct that tracks warp counts in a way that works with the FMovieSceneTimeWarping struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWarpCounter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts = { "WarpCounts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneWarpCounter, WarpCounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_Inner = { "WarpCounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneWarpCounter",
		sizeof(FMovieSceneWarpCounter),
		alignof(FMovieSceneWarpCounter),
		Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneWarpCounter"), sizeof(FMovieSceneWarpCounter), Get_Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Hash() { return 2356444283U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
