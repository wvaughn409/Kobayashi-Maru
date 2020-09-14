// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraColorParameterTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraColorParameterTrack() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraColorParameterTrack::StaticRegisterNativesUMovieSceneNiagaraColorParameterTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraColorParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating color niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraColorParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraColorParameterTrack.h" },
		{ "ToolTip", "A track for animating color niagara parameters." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraColorParameterTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraColorParameterTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNiagaraColorParameterTrack, 275183778);
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraColorParameterTrack>()
	{
		return UMovieSceneNiagaraColorParameterTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNiagaraColorParameterTrack(Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack, &UMovieSceneNiagaraColorParameterTrack::StaticClass, TEXT("/Script/Niagara"), TEXT("UMovieSceneNiagaraColorParameterTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraColorParameterTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
