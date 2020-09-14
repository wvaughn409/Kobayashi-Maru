// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraIntegerParameterSectionTemplate() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
// End Cross Module References
class UScriptStruct* FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate, Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"), sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraIntegerParameterSectionTemplate>()
{
	return FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate(FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct, TEXT("/Script/Niagara"), TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraIntegerParameterSectionTemplate
{
	FScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraIntegerParameterSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneNiagaraIntegerParameterSectionTemplate>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFMovieSceneNiagaraIntegerParameterSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntegerChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraIntegerParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel = { "IntegerChannel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneNiagaraIntegerParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate),
		alignof(FMovieSceneNiagaraIntegerParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"), sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Hash() { return 4255255374U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
