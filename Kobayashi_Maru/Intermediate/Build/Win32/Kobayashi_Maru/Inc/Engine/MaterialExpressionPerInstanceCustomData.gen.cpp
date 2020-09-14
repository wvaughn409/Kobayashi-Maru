// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionPerInstanceCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPerInstanceCustomData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionPerInstanceCustomData::StaticRegisterNativesUMaterialExpressionPerInstanceCustomData()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_NoRegister()
	{
		return UMaterialExpressionPerInstanceCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, DataIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, ConstDefaultValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPerInstanceCustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::ClassParams = {
		&UMaterialExpressionPerInstanceCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionPerInstanceCustomData, 2517440065);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPerInstanceCustomData>()
	{
		return UMaterialExpressionPerInstanceCustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPerInstanceCustomData(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData, &UMaterialExpressionPerInstanceCustomData::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPerInstanceCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceCustomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
