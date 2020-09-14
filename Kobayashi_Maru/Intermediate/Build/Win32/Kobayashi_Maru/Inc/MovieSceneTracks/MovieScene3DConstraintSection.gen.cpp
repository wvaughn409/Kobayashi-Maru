// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScene3DConstraintSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UMovieScene3DConstraintSection::execSetConstraintBindingID)
	{
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InConstraintBindingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintBindingID(Z_Param_Out_InConstraintBindingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScene3DConstraintSection::execGetConstraintBindingID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetConstraintBindingID();
		P_NATIVE_END;
	}
	void UMovieScene3DConstraintSection::StaticRegisterNativesUMovieScene3DConstraintSection()
	{
		UClass* Class = UMovieScene3DConstraintSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConstraintBindingID", &UMovieScene3DConstraintSection::execGetConstraintBindingID },
			{ "SetConstraintBindingID", &UMovieScene3DConstraintSection::execSetConstraintBindingID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics
	{
		struct MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms
		{
			FMovieSceneObjectBindingID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Gets the constraint binding for this Constraint section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Gets the constraint binding for this Constraint section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScene3DConstraintSection, nullptr, "GetConstraintBindingID", nullptr, nullptr, sizeof(MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms), Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics
	{
		struct MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms
		{
			FMovieSceneObjectBindingID InConstraintBindingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConstraintBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConstraintBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID = { "InConstraintBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms, InConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Sets the constraint binding for this Constraint section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Sets the constraint binding for this Constraint section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScene3DConstraintSection, nullptr, "SetConstraintBindingID", nullptr, nullptr, sizeof(MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms), Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister()
	{
		return UMovieScene3DConstraintSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintBindingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID, "GetConstraintBindingID" }, // 196889429
		{ &Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID, "SetConstraintBindingID" }, // 2505107433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for 3D constraint section\n */" },
		{ "IncludePath", "Sections/MovieScene3DConstraintSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Base class for 3D constraint section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The constraint binding that this movie Constraint uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The constraint binding that this movie Constraint uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID = { "ConstraintBindingID", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData[] = {
		{ "Comment", "/** The possessable guid that this constraint uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The possessable guid that this constraint uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId = { "ConstraintId", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DConstraintSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams = {
		&UMovieScene3DConstraintSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DConstraintSection, 2081155214);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DConstraintSection>()
	{
		return UMovieScene3DConstraintSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DConstraintSection(Z_Construct_UClass_UMovieScene3DConstraintSection, &UMovieScene3DConstraintSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DConstraintSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
