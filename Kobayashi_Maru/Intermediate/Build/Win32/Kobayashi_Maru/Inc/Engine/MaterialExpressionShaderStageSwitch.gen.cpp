// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionShaderStageSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShaderStageSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionShaderStageSwitch::StaticRegisterNativesUMaterialExpressionShaderStageSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister()
	{
		return UMaterialExpressionShaderStageSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexShader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexShader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelShader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelShader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be in vertex (or tessellation) shader stages" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader = { "VertexShader", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionShaderStageSwitch, VertexShader), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used in pixel (or compute) shader stages" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader = { "PixelShader", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionShaderStageSwitch, PixelShader), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShaderStageSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::ClassParams = {
		&UMaterialExpressionShaderStageSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionShaderStageSwitch, 4164110391);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShaderStageSwitch>()
	{
		return UMaterialExpressionShaderStageSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionShaderStageSwitch(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch, &UMaterialExpressionShaderStageSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionShaderStageSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShaderStageSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
