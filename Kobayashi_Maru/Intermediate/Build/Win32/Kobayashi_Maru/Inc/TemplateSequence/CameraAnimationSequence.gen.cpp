// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/CameraAnimationSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequence() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UCameraAnimationSequence::StaticRegisterNativesUCameraAnimationSequence()
	{
	}
	UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister()
	{
		return UCameraAnimationSequence::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTemplateSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * A template sequence specifically designed for playing on cameras.\n */" },
		{ "IncludePath", "CameraAnimationSequence.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* A template sequence specifically designed for playing on cameras." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequence_Statics::ClassParams = {
		&UCameraAnimationSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAnimationSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnimationSequence, 3538330619);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequence>()
	{
		return UCameraAnimationSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnimationSequence(Z_Construct_UClass_UCameraAnimationSequence, &UCameraAnimationSequence::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UCameraAnimationSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
