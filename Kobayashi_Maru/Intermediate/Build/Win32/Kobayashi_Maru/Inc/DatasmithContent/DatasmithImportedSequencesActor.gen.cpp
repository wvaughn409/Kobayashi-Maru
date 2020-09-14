// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithImportedSequencesActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithImportedSequencesActor() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADatasmithImportedSequencesActor::execPlayLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_SequenceToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLevelSequence(Z_Param_SequenceToPlay);
		P_NATIVE_END;
	}
	void ADatasmithImportedSequencesActor::StaticRegisterNativesADatasmithImportedSequencesActor()
	{
		UClass* Class = ADatasmithImportedSequencesActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayLevelSequence", &ADatasmithImportedSequencesActor::execPlayLevelSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics
	{
		struct DatasmithImportedSequencesActor_eventPlayLevelSequence_Parms
		{
			ULevelSequence* SequenceToPlay;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequenceToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::NewProp_SequenceToPlay = { "SequenceToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatasmithImportedSequencesActor_eventPlayLevelSequence_Parms, SequenceToPlay), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::NewProp_SequenceToPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImportedSequences" },
		{ "ModuleRelativePath", "Public/DatasmithImportedSequencesActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithImportedSequencesActor, nullptr, "PlayLevelSequence", nullptr, nullptr, sizeof(DatasmithImportedSequencesActor_eventPlayLevelSequence_Parms), Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor_NoRegister()
	{
		return ADatasmithImportedSequencesActor::StaticClass();
	}
	struct Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportedSequences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportedSequences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence, "PlayLevelSequence" }, // 2636032693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithImportedSequencesActor.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportedSequencesActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_MetaData[] = {
		{ "Category", "ImportedSequences" },
		{ "ModuleRelativePath", "Public/DatasmithImportedSequencesActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences = { "ImportedSequences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithImportedSequencesActor, ImportedSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_Inner = { "ImportedSequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithImportedSequencesActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::ClassParams = {
		&ADatasmithImportedSequencesActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADatasmithImportedSequencesActor, 2482022186);
	template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithImportedSequencesActor>()
	{
		return ADatasmithImportedSequencesActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADatasmithImportedSequencesActor(Z_Construct_UClass_ADatasmithImportedSequencesActor, &ADatasmithImportedSequencesActor::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("ADatasmithImportedSequencesActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithImportedSequencesActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
