// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionScalarParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScalarParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionScalarParameter::StaticRegisterNativesUMaterialExpressionScalarParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister()
	{
		return UMaterialExpressionScalarParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderMin;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveDataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimitiveDataIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPrimitiveData_MetaData[];
#endif
		static void NewProp_bUseCustomPrimitiveData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPrimitiveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionScalarParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "Comment", "/** \n\x09 * Sets the upper bound for the slider on this parameter in the material instance editor. \n\x09 * The slider will be disabled if SliderMax <= SliderMin.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ToolTip", "Sets the upper bound for the slider on this parameter in the material instance editor.\nThe slider will be disabled if SliderMax <= SliderMin." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax = { "SliderMax", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMax), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "Comment", "/** \n\x09 * Sets the lower bound for the slider on this parameter in the material instance editor. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ToolTip", "Sets the lower bound for the slider on this parameter in the material instance editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin = { "SliderMin", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMin), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex = { "PrimitiveDataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, PrimitiveDataIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit(void* Obj)
	{
		((UMaterialExpressionScalarParameter*)Obj)->bUseCustomPrimitiveData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData = { "bUseCustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionScalarParameter), &Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionScalarParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::ClassParams = {
		&UMaterialExpressionScalarParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionScalarParameter, 1905214673);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionScalarParameter>()
	{
		return UMaterialExpressionScalarParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionScalarParameter(Z_Construct_UClass_UMaterialExpressionScalarParameter, &UMaterialExpressionScalarParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionScalarParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScalarParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
