// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSceneTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneTextureId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSceneTexture::StaticRegisterNativesUMaterialExpressionSceneTexture()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister()
	{
		return UMaterialExpressionSceneTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFiltered_MetaData[];
#endif
		static void NewProp_bFiltered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFiltered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTextureId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SceneTextureId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneTexture.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_MetaData[] = {
		{ "Category", "UMaterialExpressionSceneTexture" },
		{ "Comment", "/** Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions), some SceneTextures cannot be filtered */" },
		{ "DisplayName", "Filtered" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "ToolTip", "Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions), some SceneTextures cannot be filtered" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_SetBit(void* Obj)
	{
		((UMaterialExpressionSceneTexture*)Obj)->bFiltered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered = { "bFiltered", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionSceneTexture), &Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId_MetaData[] = {
		{ "Category", "UMaterialExpressionSceneTexture" },
		{ "Comment", "/** Which scene texture (screen aligned texture) we want to make a lookup into */" },
		{ "DisplayName", "Scene Texture Id" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "ToolTip", "Which scene texture (screen aligned texture) we want to make a lookup into" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId = { "SceneTextureId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneTexture, SceneTextureId), Z_Construct_UEnum_Engine_ESceneTextureId, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::ClassParams = {
		&UMaterialExpressionSceneTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSceneTexture, 3430081049);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneTexture>()
	{
		return UMaterialExpressionSceneTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSceneTexture(Z_Construct_UClass_UMaterialExpressionSceneTexture, &UMaterialExpressionSceneTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSceneTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
