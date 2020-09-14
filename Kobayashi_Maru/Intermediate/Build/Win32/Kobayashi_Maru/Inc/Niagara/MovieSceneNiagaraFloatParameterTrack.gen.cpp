// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraFloatParameterTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraFloatParameterTrack() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraFloatParameterTrack::StaticRegisterNativesUMovieSceneNiagaraFloatParameterTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraFloatParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating float niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraFloatParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraFloatParameterTrack.h" },
		{ "ToolTip", "A track for animating float niagara parameters." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraFloatParameterTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraFloatParameterTrack::StaticClass,
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
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNiagaraFloatParameterTrack, 732019808);
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraFloatParameterTrack>()
	{
		return UMovieSceneNiagaraFloatParameterTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNiagaraFloatParameterTrack(Z_Construct_UClass_UMovieSceneNiagaraFloatParameterTrack, &UMovieSceneNiagaraFloatParameterTrack::StaticClass, TEXT("/Script/Niagara"), TEXT("UMovieSceneNiagaraFloatParameterTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraFloatParameterTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
