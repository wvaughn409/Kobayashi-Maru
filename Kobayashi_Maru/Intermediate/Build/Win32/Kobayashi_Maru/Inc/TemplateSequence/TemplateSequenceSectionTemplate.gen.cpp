// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Evaluation/TemplateSequenceSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceSectionTemplate() {}
// Cross Module References
	TEMPLATESEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FTemplateSequenceSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TEMPLATESEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate, Z_Construct_UPackage__Script_TemplateSequence(), TEXT("TemplateSequenceSectionTemplate"), sizeof(FTemplateSequenceSectionTemplate), Get_Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Hash());
	}
	return Singleton;
}
template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<FTemplateSequenceSectionTemplate>()
{
	return FTemplateSequenceSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateSequenceSectionTemplate(FTemplateSequenceSectionTemplate::StaticStruct, TEXT("/Script/TemplateSequence"), TEXT("TemplateSequenceSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceSectionTemplate
{
	FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TemplateSequenceSectionTemplate")),new UScriptStruct::TCppStructOps<FTemplateSequenceSectionTemplate>);
	}
} ScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceSectionTemplate;
	struct Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerOperand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerOperand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterBindingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterBindingId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/TemplateSequenceSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateSequenceSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_InnerOperand_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/TemplateSequenceSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_InnerOperand = { "InnerOperand", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSequenceSectionTemplate, InnerOperand), Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_InnerOperand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_InnerOperand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_OuterBindingId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/TemplateSequenceSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_OuterBindingId = { "OuterBindingId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSequenceSectionTemplate, OuterBindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_OuterBindingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_OuterBindingId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/TemplateSequenceSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSequenceSectionTemplate, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_SectionStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_InnerOperand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_OuterBindingId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::NewProp_SectionStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"TemplateSequenceSectionTemplate",
		sizeof(FTemplateSequenceSectionTemplate),
		alignof(FTemplateSequenceSectionTemplate),
		Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TemplateSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateSequenceSectionTemplate"), sizeof(FTemplateSequenceSectionTemplate), Get_Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceSectionTemplate_Hash() { return 2327760414U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
