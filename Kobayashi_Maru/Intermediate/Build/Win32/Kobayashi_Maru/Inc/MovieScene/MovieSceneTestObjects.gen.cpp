// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Private/Tests/MovieSceneTestObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTestObjects() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
// End Cross Module References
class UScriptStruct* FTestMovieSceneEvalTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("TestMovieSceneEvalTemplate"), sizeof(FTestMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FTestMovieSceneEvalTemplate>()
{
	return FTestMovieSceneEvalTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestMovieSceneEvalTemplate(FTestMovieSceneEvalTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("TestMovieSceneEvalTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestMovieSceneEvalTemplate")),new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate;
	struct Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"TestMovieSceneEvalTemplate",
		sizeof(FTestMovieSceneEvalTemplate),
		alignof(FTestMovieSceneEvalTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestMovieSceneEvalTemplate"), sizeof(FTestMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Hash() { return 551210716U; }
	void UTestMovieSceneTrack::StaticRegisterNativesUTestMovieSceneTrack()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister()
	{
		return UTestMovieSceneTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPassFilter_MetaData[];
#endif
		static void NewProp_bHighPassFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPassFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestMovieSceneTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	void Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit(void* Obj)
	{
		((UTestMovieSceneTrack*)Obj)->bHighPassFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter = { "bHighPassFilter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTestMovieSceneTrack), &Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams = {
		&UTestMovieSceneTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneTrack, 596329292);
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneTrack>()
	{
		return UTestMovieSceneTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneTrack(Z_Construct_UClass_UTestMovieSceneTrack, &UTestMovieSceneTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneTrack);
	void UTestMovieSceneSection::StaticRegisterNativesUTestMovieSceneSection()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister()
	{
		return UTestMovieSceneSection::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams = {
		&UTestMovieSceneSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneSection, 4017884223);
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSection>()
	{
		return UTestMovieSceneSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneSection(Z_Construct_UClass_UTestMovieSceneSection, &UTestMovieSceneSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSection);
	void UTestMovieSceneSequence::StaticRegisterNativesUTestMovieSceneSequence()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister()
	{
		return UTestMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestMovieSceneSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams = {
		&UTestMovieSceneSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneSequence, 2553051254);
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSequence>()
	{
		return UTestMovieSceneSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneSequence(Z_Construct_UClass_UTestMovieSceneSequence, &UTestMovieSceneSequence::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSequence);
	void UTestMovieSceneSubTrack::StaticRegisterNativesUTestMovieSceneSubTrack()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister()
	{
		return UTestMovieSceneSubTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSubTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestMovieSceneSubTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSubTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::ClassParams = {
		&UTestMovieSceneSubTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSubTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneSubTrack, 126956244);
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSubTrack>()
	{
		return UTestMovieSceneSubTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneSubTrack(Z_Construct_UClass_UTestMovieSceneSubTrack, &UTestMovieSceneSubTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneSubTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSubTrack);
	void UTestMovieSceneSubSection::StaticRegisterNativesUTestMovieSceneSubSection()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister()
	{
		return UTestMovieSceneSubSection::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSubSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSubSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSubSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSubSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSubSection_Statics::ClassParams = {
		&UTestMovieSceneSubSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSubSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneSubSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneSubSection, 879139016);
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSubSection>()
	{
		return UTestMovieSceneSubSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneSubSection(Z_Construct_UClass_UTestMovieSceneSubSection, &UTestMovieSceneSubSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneSubSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSubSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
