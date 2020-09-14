// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionShadingModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShadingModel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
// End Cross Module References
	void UMaterialExpressionShadingModel::StaticRegisterNativesUMaterialExpressionShadingModel()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister()
	{
		return UMaterialExpressionShadingModel::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionShadingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionShadingModel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadingModel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "ShadingModel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadingModel.h" },
		{ "ValidEnumValues", "MSM_DefaultLit, MSM_Subsurface, MSM_PreintegratedSkin, MSM_ClearCoat, MSM_SubsurfaceProfile, MSM_TwoSidedFoliage, MSM_Hair, MSM_Cloth, MSM_Eye" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionShadingModel, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShadingModel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::ClassParams = {
		&UMaterialExpressionShadingModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionShadingModel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionShadingModel, 133804414);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShadingModel>()
	{
		return UMaterialExpressionShadingModel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionShadingModel(Z_Construct_UClass_UMaterialExpressionShadingModel, &UMaterialExpressionShadingModel::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionShadingModel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShadingModel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
