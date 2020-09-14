// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Sections/MovieSceneSubSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSubSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneSubSection::execSetSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSubSection::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	void UMovieSceneSubSection::StaticRegisterNativesUMovieSceneSubSection()
	{
		UClass* Class = UMovieSceneSubSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSequence", &UMovieSceneSubSection::execGetSequence },
			{ "SetSequence", &UMovieSceneSubSection::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics
	{
		struct MovieSceneSubSection_eventGetSequence_Parms
		{
			UMovieSceneSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSubSection_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n\x09 * Get the sequence that is assigned to this section.\n\x09 *\n\x09 * @return The sequence.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Get the sequence that is assigned to this section.\n\n@return The sequence.\n@see SetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSubSection, nullptr, "GetSequence", nullptr, nullptr, sizeof(MovieSceneSubSection_eventGetSequence_Parms), Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSubSection_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics
	{
		struct MovieSceneSubSection_eventSetSequence_Parms
		{
			UMovieSceneSequence* Sequence;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSubSection_eventSetSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::NewProp_Sequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n\x09 * Sets the sequence played by this section.\n\x09 *\n\x09 * @param Sequence The sequence to play.\n\x09 * @see GetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Sets the sequence played by this section.\n\n@param Sequence The sequence to play.\n@see GetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSubSection, nullptr, "SetSequence", nullptr, nullptr, sizeof(MovieSceneSubSection_eventSetSequence_Parms), Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSubSection_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister()
	{
		return UMovieSceneSubSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSubSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPathToRecordTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPathToRecordTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSequenceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetSequenceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ActorToRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSubSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSubSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSubSection_GetSequence, "GetSequence" }, // 2268867062
		{ &Z_Construct_UFunction_UMovieSceneSubSection_SetSequence, "SetSequence" }, // 861868865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a section in sub-sequence tracks.\n */" },
		{ "IncludePath", "Sections/MovieSceneSubSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Implements a section in sub-sequence tracks." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Target path of sequence to record to */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Target path of sequence to record to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo = { "TargetPathToRecordTo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, TargetPathToRecordTo), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Target name of sequence to try to record to (will record automatically to another if this already exists) */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Target name of sequence to try to record to (will record automatically to another if this already exists)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName = { "TargetSequenceName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, TargetSequenceName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Target actor to record */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Target actor to record" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord = { "ActorToRecord", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, ActorToRecord), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/**\n\x09 * Movie scene being played by this section.\n\x09 *\n\x09 * @todo Sequencer: Should this be lazy loaded?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Movie scene being played by this section.\n\n@todo Sequencer: Should this be lazy loaded?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence = { "SubSequence", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, SubSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime = { "PrerollTime", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSubSection, Parameters), Z_Construct_UScriptStruct_FMovieSceneSectionParameters, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSubSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSubSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams = {
		&UMovieSceneSubSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSubSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSubSection, 1870886880);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSubSection>()
	{
		return UMovieSceneSubSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSubSection(Z_Construct_UClass_UMovieSceneSubSection, &UMovieSceneSubSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSubSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSubSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
