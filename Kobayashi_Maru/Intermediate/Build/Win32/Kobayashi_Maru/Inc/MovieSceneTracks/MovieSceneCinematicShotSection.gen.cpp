// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCinematicShotSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneCinematicShotSection::execSetShotDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InShotDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShotDisplayName(Z_Param_InShotDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCinematicShotSection::execGetShotDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetShotDisplayName();
		P_NATIVE_END;
	}
	void UMovieSceneCinematicShotSection::StaticRegisterNativesUMovieSceneCinematicShotSection()
	{
		UClass* Class = UMovieSceneCinematicShotSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShotDisplayName", &UMovieSceneCinematicShotSection::execGetShotDisplayName },
			{ "SetShotDisplayName", &UMovieSceneCinematicShotSection::execSetShotDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics
	{
		struct MovieSceneCinematicShotSection_eventGetShotDisplayName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCinematicShotSection_eventGetShotDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** @return The shot display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "@return The shot display name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinematicShotSection, nullptr, "GetShotDisplayName", nullptr, nullptr, sizeof(MovieSceneCinematicShotSection_eventGetShotDisplayName_Parms), Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics
	{
		struct MovieSceneCinematicShotSection_eventSetShotDisplayName_Parms
		{
			FString InShotDisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InShotDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InShotDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName = { "InShotDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCinematicShotSection_eventSetShotDisplayName_Parms, InShotDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Set the shot display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "Set the shot display name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinematicShotSection, nullptr, "SetShotDisplayName", nullptr, nullptr, sizeof(MovieSceneCinematicShotSection_eventSetShotDisplayName_Parms), Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister()
	{
		return UMovieSceneCinematicShotSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShotDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName, "GetShotDisplayName" }, // 2904495985
		{ &Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName, "SetShotDisplayName" }, // 3144004062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a cinematic shot section.\n */" },
		{ "IncludePath", "Sections/MovieSceneCinematicShotSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "Implements a cinematic shot section." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "Comment", "/** The shot's reference frame offset for single thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The shot's reference frame offset for single thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ThumbnailReferenceOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The Shot's display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The Shot's display name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCinematicShotSection, DisplayName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData[] = {
		{ "Comment", "/** The Shot's display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The Shot's display name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName = { "ShotDisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ShotDisplayName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinematicShotSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::ClassParams = {
		&UMovieSceneCinematicShotSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCinematicShotSection, 2053519909);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCinematicShotSection>()
	{
		return UMovieSceneCinematicShotSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCinematicShotSection(Z_Construct_UClass_UMovieSceneCinematicShotSection, &UMovieSceneCinematicShotSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCinematicShotSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
