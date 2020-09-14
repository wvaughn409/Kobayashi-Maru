// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/PropertyValueMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueMaterial() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
// End Cross Module References
	void UPropertyValueMaterial::StaticRegisterNativesUPropertyValueMaterial()
	{
	}
	UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister()
	{
		return UPropertyValueMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropertyValueMaterial.h" },
		{ "ModuleRelativePath", "Public/PropertyValueMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams = {
		&UPropertyValueMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyValueMaterial, 3885644916);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueMaterial>()
	{
		return UPropertyValueMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyValueMaterial(Z_Construct_UClass_UPropertyValueMaterial, &UPropertyValueMaterial::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UPropertyValueMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
