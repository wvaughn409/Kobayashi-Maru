// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraVectorParameterTrack() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraVectorParameterTrack::StaticRegisterNativesUMovieSceneNiagaraVectorParameterTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraVectorParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating float niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h" },
		{ "ToolTip", "A track for animating float niagara parameters." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed = { "ChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneNiagaraVectorParameterTrack, ChannelsUsed), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraVectorParameterTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraVectorParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNiagaraVectorParameterTrack, 1450195276);
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraVectorParameterTrack>()
	{
		return UMovieSceneNiagaraVectorParameterTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNiagaraVectorParameterTrack(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack, &UMovieSceneNiagaraVectorParameterTrack::StaticClass, TEXT("/Script/Niagara"), TEXT("UMovieSceneNiagaraVectorParameterTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraVectorParameterTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
