// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemSpawnSection() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
// End Cross Module References
	static UEnum* ENiagaraSystemSpawnSectionEndBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemSpawnSectionEndBehavior"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEndBehavior>()
	{
		return ENiagaraSystemSpawnSectionEndBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSystemSpawnSectionEndBehavior(ENiagaraSystemSpawnSectionEndBehavior_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSystemSpawnSectionEndBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Hash() { return 4143454550U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSystemSpawnSectionEndBehavior"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive", (int64)ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive },
				{ "ENiagaraSystemSpawnSectionEndBehavior::Deactivate", (int64)ENiagaraSystemSpawnSectionEndBehavior::Deactivate },
				{ "ENiagaraSystemSpawnSectionEndBehavior::None", (int64)ENiagaraSystemSpawnSectionEndBehavior::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines options for system life cycle for the time after the section. */" },
				{ "Deactivate.Comment", "//** When the section ends the system's component is deactivated which will kill all existing particles.\n" },
				{ "Deactivate.Name", "ENiagaraSystemSpawnSectionEndBehavior::Deactivate" },
				{ "Deactivate.ToolTip", "/ When the section ends the system's component is deactivated which will kill all existing particles." },
				{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
				{ "None.Comment", "//** Does nothing when the section ends and allows the system to continue to run as normal.\n" },
				{ "None.Name", "ENiagaraSystemSpawnSectionEndBehavior::None" },
				{ "None.ToolTip", "/ Does nothing when the section ends and allows the system to continue to run as normal." },
				{ "SetSystemInactive.Comment", "//** When the section ends the system is set to inactive which stops spawning but lets existing particles simulate until death.\n" },
				{ "SetSystemInactive.Name", "ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive" },
				{ "SetSystemInactive.ToolTip", "/ When the section ends the system is set to inactive which stops spawning but lets existing particles simulate until death." },
				{ "ToolTip", "Defines options for system life cycle for the time after the section." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSystemSpawnSectionEndBehavior",
				"ENiagaraSystemSpawnSectionEndBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENiagaraSystemSpawnSectionEvaluateBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemSpawnSectionEvaluateBehavior"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEvaluateBehavior>()
	{
		return ENiagaraSystemSpawnSectionEvaluateBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior(ENiagaraSystemSpawnSectionEvaluateBehavior_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSystemSpawnSectionEvaluateBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Hash() { return 1036965276U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSystemSpawnSectionEvaluateBehavior"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive", (int64)ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive },
				{ "ENiagaraSystemSpawnSectionEvaluateBehavior::None", (int64)ENiagaraSystemSpawnSectionEvaluateBehavior::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActivateIfInactive.Comment", "/** The system's component will be activated on any frame where it is inactive.  This is useful for continuous emitters, especially if the sequencer will start in the middle of the section. */" },
				{ "ActivateIfInactive.Name", "ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive" },
				{ "ActivateIfInactive.ToolTip", "The system's component will be activated on any frame where it is inactive.  This is useful for continuous emitters, especially if the sequencer will start in the middle of the section." },
				{ "Comment", "/** Defines options for system life cycle for when the section is evaluating from the 2nd frame until the last frame of the section. */" },
				{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
				{ "None.Comment", "/** There sill be no changes to the system life cycle while the section is evaluating. */" },
				{ "None.Name", "ENiagaraSystemSpawnSectionEvaluateBehavior::None" },
				{ "None.ToolTip", "There sill be no changes to the system life cycle while the section is evaluating." },
				{ "ToolTip", "Defines options for system life cycle for when the section is evaluating from the 2nd frame until the last frame of the section." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSystemSpawnSectionEvaluateBehavior",
				"ENiagaraSystemSpawnSectionEvaluateBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENiagaraSystemSpawnSectionStartBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemSpawnSectionStartBehavior"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionStartBehavior>()
	{
		return ENiagaraSystemSpawnSectionStartBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSystemSpawnSectionStartBehavior(ENiagaraSystemSpawnSectionStartBehavior_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSystemSpawnSectionStartBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Hash() { return 3509983122U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSystemSpawnSectionStartBehavior"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSystemSpawnSectionStartBehavior::Activate", (int64)ENiagaraSystemSpawnSectionStartBehavior::Activate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Activate.Comment", "/** When the time before the section evaluates the particle system's component will be deactivated and on the first frame of the section the\n\x09 system's component will be activated. */" },
				{ "Activate.Name", "ENiagaraSystemSpawnSectionStartBehavior::Activate" },
				{ "Activate.ToolTip", "When the time before the section evaluates the particle system's component will be deactivated and on the first frame of the section the\n       system's component will be activated." },
				{ "Comment", "/** Defines options for system life cycle for before the section is evaluating up to the first frame the section evaluates. */" },
				{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
				{ "ToolTip", "Defines options for system life cycle for before the section is evaluating up to the first frame the section evaluates." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSystemSpawnSectionStartBehavior",
				"ENiagaraSystemSpawnSectionStartBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneNiagaraSystemSpawnSection::StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister()
	{
		return UMovieSceneNiagaraSystemSpawnSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgeUpdateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgeUpdateMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgeUpdateMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEndBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SectionEndBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionEndBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEvaluateBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SectionEvaluateBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionEvaluateBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SectionStartBehavior;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionStartBehavior_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies how sequencer should update the age of the controlled niagara system. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies how sequencer should update the age of the controlled niagara system." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode = { "AgeUpdateMode", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies what should happen to the niagara system when section evaluation finishes. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies what should happen to the niagara system when section evaluation finishes." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior = { "SectionEndBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies what should happen to the niagara system when section is evaluating from the 2nd frame until the last frame. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies what should happen to the niagara system when section is evaluating from the 2nd frame until the last frame." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior = { "SectionEvaluateBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies what should happen to the niagara system from before the section evaluates up until the first frame of the section. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies what should happen to the niagara system from before the section evaluates up until the first frame of the section." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior = { "SectionStartBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraSystemSpawnSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::ClassParams = {
		&UMovieSceneNiagaraSystemSpawnSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNiagaraSystemSpawnSection, 3069413443);
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraSystemSpawnSection>()
	{
		return UMovieSceneNiagaraSystemSpawnSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNiagaraSystemSpawnSection(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection, &UMovieSceneNiagaraSystemSpawnSection::StaticClass, TEXT("/Script/Niagara"), TEXT("UMovieSceneNiagaraSystemSpawnSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraSystemSpawnSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
