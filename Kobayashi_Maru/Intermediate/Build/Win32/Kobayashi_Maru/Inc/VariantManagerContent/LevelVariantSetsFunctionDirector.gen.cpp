// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/LevelVariantSetsFunctionDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsFunctionDirector() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
// End Cross Module References
	void ULevelVariantSetsFunctionDirector::StaticRegisterNativesULevelVariantSetsFunctionDirector()
	{
	}
	UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister()
	{
		return ULevelVariantSetsFunctionDirector::StaticClass();
	}
	struct Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelVariantSetsFunctionDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsFunctionDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSetsFunctionDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams = {
		&ULevelVariantSetsFunctionDirector::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelVariantSetsFunctionDirector, 3611534751);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ULevelVariantSetsFunctionDirector>()
	{
		return ULevelVariantSetsFunctionDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelVariantSetsFunctionDirector(Z_Construct_UClass_ULevelVariantSetsFunctionDirector, &ULevelVariantSetsFunctionDirector::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("ULevelVariantSetsFunctionDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSetsFunctionDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
