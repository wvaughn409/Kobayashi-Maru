// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSkyAtmosphereLightDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereLightDirection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSkyAtmosphereLightDirection::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDirection()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereLightDirection::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightDirection.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightDirection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightDirection.h" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightDirection, LightIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightDirection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereLightDirection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkyAtmosphereLightDirection, 3087870478);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightDirection>()
	{
		return UMaterialExpressionSkyAtmosphereLightDirection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkyAtmosphereLightDirection(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection, &UMaterialExpressionSkyAtmosphereLightDirection::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkyAtmosphereLightDirection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightDirection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
