// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Evaluation/TemplateSequenceInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceInstanceData() {}
// Cross Module References
	TEMPLATESEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceInstanceData();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
// End Cross Module References
class UScriptStruct* FTemplateSequenceInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TEMPLATESEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSequenceInstanceData, Z_Construct_UPackage__Script_TemplateSequence(), TEXT("TemplateSequenceInstanceData"), sizeof(FTemplateSequenceInstanceData), Get_Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Hash());
	}
	return Singleton;
}
template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<FTemplateSequenceInstanceData>()
{
	return FTemplateSequenceInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateSequenceInstanceData(FTemplateSequenceInstanceData::StaticStruct, TEXT("/Script/TemplateSequence"), TEXT("TemplateSequenceInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceInstanceData
{
	FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TemplateSequenceInstanceData")),new UScriptStruct::TCppStructOps<FTemplateSequenceInstanceData>);
	}
} ScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceInstanceData;
	struct Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Operand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/TemplateSequenceInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateSequenceInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::NewProp_Operand_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/TemplateSequenceInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSequenceInstanceData, Operand), Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::NewProp_Operand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::NewProp_Operand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::NewProp_Operand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
		Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData,
		&NewStructOps,
		"TemplateSequenceInstanceData",
		sizeof(FTemplateSequenceInstanceData),
		alignof(FTemplateSequenceInstanceData),
		Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TemplateSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateSequenceInstanceData"), sizeof(FTemplateSequenceInstanceData), Get_Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceInstanceData_Hash() { return 2602063138U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
