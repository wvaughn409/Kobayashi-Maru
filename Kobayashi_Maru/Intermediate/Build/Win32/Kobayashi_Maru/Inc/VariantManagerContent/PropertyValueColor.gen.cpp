// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/PropertyValueColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueColor() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueColor_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueColor();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
// End Cross Module References
	void UPropertyValueColor::StaticRegisterNativesUPropertyValueColor()
	{
	}
	UClass* Z_Construct_UClass_UPropertyValueColor_NoRegister()
	{
		return UPropertyValueColor::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Keeps an FLinearColor interface by using the property setter/getter functions,\n// even though the property itself is of FColor type\n" },
		{ "IncludePath", "PropertyValueColor.h" },
		{ "ModuleRelativePath", "Public/PropertyValueColor.h" },
		{ "ToolTip", "Keeps an FLinearColor interface by using the property setter/getter functions,\neven though the property itself is of FColor type" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueColor_Statics::ClassParams = {
		&UPropertyValueColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyValueColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyValueColor, 1725824005);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueColor>()
	{
		return UPropertyValueColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyValueColor(Z_Construct_UClass_UPropertyValueColor, &UPropertyValueColor::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UPropertyValueColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
