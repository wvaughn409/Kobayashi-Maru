// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraParameterTrack() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
// End Cross Module References
	void UMovieSceneNiagaraParameterTrack::StaticRegisterNativesUMovieSceneNiagaraParameterTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class for tracks that animate niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h" },
		{ "ToolTip", "A base class for tracks that animate niagara parameters." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** The parameter for the parameter this track animates. */" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h" },
		{ "ToolTip", "The parameter for the parameter this track animates." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneNiagaraParameterTrack, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraParameterTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNiagaraParameterTrack, 1008526773);
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraParameterTrack>()
	{
		return UMovieSceneNiagaraParameterTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNiagaraParameterTrack(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack, &UMovieSceneNiagaraParameterTrack::StaticClass, TEXT("/Script/Niagara"), TEXT("UMovieSceneNiagaraParameterTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraParameterTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
