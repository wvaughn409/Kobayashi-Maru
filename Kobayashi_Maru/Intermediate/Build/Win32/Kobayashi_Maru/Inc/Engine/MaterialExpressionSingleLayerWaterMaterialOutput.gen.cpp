// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSingleLayerWaterMaterialOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSingleLayerWaterMaterialOutput::StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister()
	{
		return UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhaseG_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhaseG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionCoefficients_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsorptionCoefficients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatteringCoefficients_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScatteringCoefficients;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for writing single layer water volume material properties. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Material output expression for writing single layer water volume material properties." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG_MetaData[] = {
		{ "Comment", "/** Input for phase function 'g' parameter describing how much forward(g<0) or backward (g>0) light scatter around. Valid range is [-1,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for phase function 'g' parameter describing how much forward(g<0) or backward (g>0) light scatter around. Valid range is [-1,1]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG = { "PhaseG", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, PhaseG), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients_MetaData[] = {
		{ "Comment", "/** Input for scattering coefficient describing how light bounce is absorbed. Valid range is [0,+inf[. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for scattering coefficient describing how light bounce is absorbed. Valid range is [0,+inf[." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients = { "AbsorptionCoefficients", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, AbsorptionCoefficients), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients_MetaData[] = {
		{ "Comment", "/** Input for scattering coefficient describing how light scatter around and is absorbed. Valid range is [0,+inf[. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for scattering coefficient describing how light scatter around and is absorbed. Valid range is [0,+inf[." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients = { "ScatteringCoefficients", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, ScatteringCoefficients), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSingleLayerWaterMaterialOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::ClassParams = {
		&UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSingleLayerWaterMaterialOutput, 2024535937);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSingleLayerWaterMaterialOutput>()
	{
		return UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput, &UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSingleLayerWaterMaterialOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSingleLayerWaterMaterialOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
