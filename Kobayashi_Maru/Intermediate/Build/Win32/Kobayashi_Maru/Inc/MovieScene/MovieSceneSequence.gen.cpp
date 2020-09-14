// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSequence.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequence() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneSequence::execFindBindingsByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InBindingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->FindBindingsByTag(Z_Param_InBindingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequence::execFindBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InBindingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->FindBindingByTag(Z_Param_InBindingName);
		P_NATIVE_END;
	}
	void UMovieSceneSequence::StaticRegisterNativesUMovieSceneSequence()
	{
		UClass* Class = UMovieSceneSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindBindingByTag", &UMovieSceneSequence::execFindBindingByTag },
			{ "FindBindingsByTag", &UMovieSceneSequence::execFindBindingsByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics
	{
		struct MovieSceneSequence_eventFindBindingByTag_Parms
		{
			FName InBindingName;
			FMovieSceneObjectBindingID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBindingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingByTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingByTag_Parms, InBindingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_InBindingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Find the first object binding ID associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Find the first object binding ID associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequence, nullptr, "FindBindingByTag", nullptr, nullptr, sizeof(MovieSceneSequence_eventFindBindingByTag_Parms), Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics
	{
		struct MovieSceneSequence_eventFindBindingsByTag_Parms
		{
			FName InBindingName;
			TArray<FMovieSceneObjectBindingID> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBindingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingsByTag_Parms, InBindingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_InBindingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Find all object binding IDs associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Find all object binding IDs associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequence, nullptr, "FindBindingsByTag", nullptr, nullptr, sizeof(MovieSceneSequence_eventFindBindingsByTag_Parms), Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister()
	{
		return UMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayableDirectly_MetaData[];
#endif
		static void NewProp_bPlayableDirectly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayableDirectly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentContextsAreSignificant_MetaData[];
#endif
		static void NewProp_bParentContextsAreSignificant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentContextsAreSignificant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompletionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultCompletionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultCompletionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrecompiledEvaluationTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrecompiledEvaluationTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag, "FindBindingByTag" }, // 2945781810
		{ &Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag, "FindBindingsByTag" }, // 2514374347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for movie scene animations (C++ version).\n */" },
		{ "IncludePath", "MovieSceneSequence.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract base class for movie scene animations (C++ version)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_MetaData[] = {
		{ "Comment", "/**\n\x09 * When true, this sequence should be compiled as if it is playable directly (outside of a master sequence). When false, various compiled data will be omitted, preventing direct playback at runtime (although will still play as a sub sequence)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "When true, this sequence should be compiled as if it is playable directly (outside of a master sequence). When false, various compiled data will be omitted, preventing direct playback at runtime (although will still play as a sub sequence)" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_SetBit(void* Obj)
	{
		((UMovieSceneSequence*)Obj)->bPlayableDirectly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly = { "bPlayableDirectly", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSequence), &Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData[] = {
		{ "Comment", "/**\n\x09 * true if the result of GetParentObject is significant in object resolution for LocateBoundObjects.\n\x09 * When true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used\n\x09 * When false, the PlaybackContext will always be used for LocateBoundObjects\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "true if the result of GetParentObject is significant in object resolution for LocateBoundObjects.\nWhen true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used\nWhen false, the PlaybackContext will always be used for LocateBoundObjects" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit(void* Obj)
	{
		((UMovieSceneSequence*)Obj)->bParentContextsAreSignificant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant = { "bParentContextsAreSignificant", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSequence), &Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData[] = {
		{ "Comment", "/* The default completion mode for this movie scene when a section's completion mode is set to project default */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "The default completion mode for this movie scene when a section's completion mode is set to project default" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode = { "DefaultCompletionMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequence, DefaultCompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate = { "PrecompiledEvaluationTemplate", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequence, PrecompiledEvaluationTemplate), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams = {
		&UMovieSceneSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSequence, 2133435895);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequence>()
	{
		return UMovieSceneSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequence(Z_Construct_UClass_UMovieSceneSequence, &UMovieSceneSequence::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequence);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSequence)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
