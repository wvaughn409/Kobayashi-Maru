// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemTrackTemplate() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
// End Cross Module References
class UScriptStruct* FMovieSceneNiagaraSystemTrackImplementation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation, Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraSystemTrackImplementation"), sizeof(FMovieSceneNiagaraSystemTrackImplementation), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSystemTrackImplementation>()
{
	return FMovieSceneNiagaraSystemTrackImplementation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation(FMovieSceneNiagaraSystemTrackImplementation::StaticStruct, TEXT("/Script/Niagara"), TEXT("MovieSceneNiagaraSystemTrackImplementation"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraSystemTrackImplementation
{
	FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraSystemTrackImplementation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneNiagaraSystemTrackImplementation")),new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackImplementation>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraSystemTrackImplementation;
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgeUpdateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgeUpdateMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgeUpdateMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEndBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionEndBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnSectionEndBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEvaluateBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionEvaluateBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnSectionEvaluateBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionStartBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionStartBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnSectionStartBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnSectionEndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnSectionStartFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackImplementation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode = { "AgeUpdateMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior = { "SpawnSectionEndBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior = { "SpawnSectionEvaluateBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior = { "SpawnSectionStartBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame = { "SpawnSectionEndFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame = { "SpawnSectionStartFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneTrackImplementation,
		&NewStructOps,
		"MovieSceneNiagaraSystemTrackImplementation",
		sizeof(FMovieSceneNiagaraSystemTrackImplementation),
		alignof(FMovieSceneNiagaraSystemTrackImplementation),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneNiagaraSystemTrackImplementation"), sizeof(FMovieSceneNiagaraSystemTrackImplementation), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Hash() { return 1232429553U; }
class UScriptStruct* FMovieSceneNiagaraSystemTrackTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate, Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraSystemTrackTemplate"), sizeof(FMovieSceneNiagaraSystemTrackTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSystemTrackTemplate>()
{
	return FMovieSceneNiagaraSystemTrackTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate(FMovieSceneNiagaraSystemTrackTemplate::StaticStruct, TEXT("/Script/Niagara"), TEXT("MovieSceneNiagaraSystemTrackTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraSystemTrackTemplate
{
	FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraSystemTrackTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneNiagaraSystemTrackTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackTemplate>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraSystemTrackTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackTemplate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneNiagaraSystemTrackTemplate",
		sizeof(FMovieSceneNiagaraSystemTrackTemplate),
		alignof(FMovieSceneNiagaraSystemTrackTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneNiagaraSystemTrackTemplate"), sizeof(FMovieSceneNiagaraSystemTrackTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Hash() { return 1465351498U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
