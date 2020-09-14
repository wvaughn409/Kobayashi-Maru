// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVirtualTextureFeatureSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionVirtualTextureFeatureSwitch::StaticRegisterNativesUMaterialExpressionVirtualTextureFeatureSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_NoRegister()
	{
		return UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Yes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression to switch logic according to whether virtual texturing is supported on this project, platform and feature level. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ToolTip", "Material output expression to switch logic according to whether virtual texturing is supported on this project, platform and feature level." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes_MetaData[] = {
		{ "Comment", "/** Used if virtual texture is supported. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ToolTip", "Used if virtual texture is supported." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes = { "Yes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionVirtualTextureFeatureSwitch, Yes), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No_MetaData[] = {
		{ "Comment", "/** Used if virtual texture is not supported. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ToolTip", "Used if virtual texture is not supported." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionVirtualTextureFeatureSwitch, No), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVirtualTextureFeatureSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::ClassParams = {
		&UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionVirtualTextureFeatureSwitch, 3748039495);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVirtualTextureFeatureSwitch>()
	{
		return UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionVirtualTextureFeatureSwitch(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch, &UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionVirtualTextureFeatureSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVirtualTextureFeatureSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
