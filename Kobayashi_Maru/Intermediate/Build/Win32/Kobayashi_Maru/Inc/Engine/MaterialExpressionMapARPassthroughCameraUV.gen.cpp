// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionMapARPassthroughCameraUV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMapARPassthroughCameraUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionMapARPassthroughCameraUV::StaticRegisterNativesUMaterialExpressionMapARPassthroughCameraUV()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_NoRegister()
	{
		return UMaterialExpressionMapARPassthroughCameraUV::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMapARPassthroughCameraUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMapARPassthroughCameraUV.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMapARPassthroughCameraUV.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input UV to map to AR Camera UV" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMapARPassthroughCameraUV, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMapARPassthroughCameraUV>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::ClassParams = {
		&UMaterialExpressionMapARPassthroughCameraUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionMapARPassthroughCameraUV, 914864119);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMapARPassthroughCameraUV>()
	{
		return UMaterialExpressionMapARPassthroughCameraUV::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMapARPassthroughCameraUV(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV, &UMaterialExpressionMapARPassthroughCameraUV::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMapARPassthroughCameraUV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMapARPassthroughCameraUV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
