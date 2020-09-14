// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSkyAtmosphereViewLuminance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereViewLuminance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSkyAtmosphereViewLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereViewLuminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereViewLuminance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereViewLuminance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkyAtmosphereViewLuminance, 384874157);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereViewLuminance>()
	{
		return UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkyAtmosphereViewLuminance(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance, &UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkyAtmosphereViewLuminance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereViewLuminance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
