// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraIntegerParameterTrack() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraIntegerParameterTrack::StaticRegisterNativesUMovieSceneNiagaraIntegerParameterTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraIntegerParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating integer niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraIntegerParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterTrack.h" },
		{ "ToolTip", "A track for animating integer niagara parameters." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraIntegerParameterTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraIntegerParameterTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNiagaraIntegerParameterTrack, 1936426043);
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraIntegerParameterTrack>()
	{
		return UMovieSceneNiagaraIntegerParameterTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNiagaraIntegerParameterTrack(Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack, &UMovieSceneNiagaraIntegerParameterTrack::StaticClass, TEXT("/Script/Niagara"), TEXT("UMovieSceneNiagaraIntegerParameterTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraIntegerParameterTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
