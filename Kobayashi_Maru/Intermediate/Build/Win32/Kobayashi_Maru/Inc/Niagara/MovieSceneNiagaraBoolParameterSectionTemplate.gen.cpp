// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraBoolParameterSectionTemplate() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
// End Cross Module References
class UScriptStruct* FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate, Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraBoolParameterSectionTemplate"), sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraBoolParameterSectionTemplate>()
{
	return FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate(FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct, TEXT("/Script/Niagara"), TEXT("MovieSceneNiagaraBoolParameterSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraBoolParameterSectionTemplate
{
	FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraBoolParameterSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneNiagaraBoolParameterSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneNiagaraBoolParameterSectionTemplate>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraBoolParameterSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraBoolParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel = { "BoolChannel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneNiagaraBoolParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate),
		alignof(FMovieSceneNiagaraBoolParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneNiagaraBoolParameterSectionTemplate"), sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Hash() { return 248835998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
