// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/MaterialCachedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialCachedData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
class UScriptStruct* FMaterialCachedExpressionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedExpressionData, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedExpressionData"), sizeof(FMaterialCachedExpressionData), Get_Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedExpressionData>()
{
	return FMaterialCachedExpressionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialCachedExpressionData(FMaterialCachedExpressionData::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialCachedExpressionData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialCachedExpressionData
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialCachedExpressionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialCachedExpressionData")),new UScriptStruct::TCppStructOps<FMaterialCachedExpressionData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialCachedExpressionData;
	struct Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSceneColor_MetaData[];
#endif
		static void NewProp_bHasSceneColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSceneColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRuntimeVirtualTextureOutput_MetaData[];
#endif
		static void NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRuntimeVirtualTextureOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevelsUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QualityLevelsUsed;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_QualityLevelsUsed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicParameterNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DynamicParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrassTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrassTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerBlends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultLayerBlends;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultLayerBlends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultLayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterCollectionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedExpressionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasSceneColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor = { "bHasSceneColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasRuntimeVirtualTextureOutput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput = { "bHasRuntimeVirtualTextureOutput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed = { "QualityLevelsUsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, QualityLevelsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_Inner = { "QualityLevelsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames = { "DynamicParameterNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DynamicParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_Inner = { "DynamicParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes = { "GrassTypes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, GrassTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_Inner = { "GrassTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends = { "DefaultLayerBlends", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DefaultLayerBlends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends_Inner = { "DefaultLayerBlends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers = { "DefaultLayers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DefaultLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers_Inner = { "DefaultLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_MetaData[] = {
		{ "Comment", "/** Array of all parameter collections this material depends on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all parameter collections this material depends on." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos = { "ParameterCollectionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ParameterCollectionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_Inner = { "ParameterCollectionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_MetaData[] = {
		{ "Comment", "/** Array of all functions this material depends on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all functions this material depends on." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos = { "FunctionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, FunctionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_Inner = { "FunctionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialFunctionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_MetaData[] = {
		{ "Comment", "/** Array of all texture referenced by this material */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all texture referenced by this material" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ReferencedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_Inner = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, Parameters), Z_Construct_UScriptStruct_FMaterialCachedParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayerBlends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DefaultLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedExpressionData",
		sizeof(FMaterialCachedExpressionData),
		alignof(FMaterialCachedExpressionData),
		Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialCachedExpressionData"), sizeof(FMaterialCachedExpressionData), Get_Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Hash() { return 3442934353U; }
class UScriptStruct* FMaterialCachedParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameters, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameters"), sizeof(FMaterialCachedParameters), Get_Z_Construct_UScriptStruct_FMaterialCachedParameters_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameters>()
{
	return FMaterialCachedParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialCachedParameters(FMaterialCachedParameters::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialCachedParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialCachedParameters
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialCachedParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialCachedParameters")),new UScriptStruct::TCppStructOps<FMaterialCachedParameters>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialCachedParameters;
	struct Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureChannelNameValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureChannelNameValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureChannelNameValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorUsedAsChannelMaskValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorUsedAsChannelMaskValues;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VectorUsedAsChannelMaskValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorChannelNameValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorChannelNameValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorChannelNameValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarCurveAtlasValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarCurveAtlasValues;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScalarCurveAtlasValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarCurveValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarCurveValues;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScalarCurveValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarMinMaxValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarMinMaxValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarMinMaxValues_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureValues;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeVirtualTextureValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontPageValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontPageValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontPageValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontValues;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureValues;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalarValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameters>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues = { "TextureChannelNameValues", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, TextureChannelNameValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_Inner = { "TextureChannelNameValues", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues = { "VectorUsedAsChannelMaskValues", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorUsedAsChannelMaskValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_Inner = { "VectorUsedAsChannelMaskValues", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues = { "VectorChannelNameValues", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorChannelNameValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_Inner = { "VectorChannelNameValues", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues = { "ScalarCurveAtlasValues", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarCurveAtlasValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_Inner = { "ScalarCurveAtlasValues", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues = { "ScalarCurveValues", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarCurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_Inner = { "ScalarCurveValues", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues = { "ScalarMinMaxValues", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarMinMaxValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_Inner = { "ScalarMinMaxValues", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues = { "RuntimeVirtualTextureValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, RuntimeVirtualTextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_Inner = { "RuntimeVirtualTextureValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues = { "FontPageValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, FontPageValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_Inner = { "FontPageValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues = { "FontValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, FontValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_Inner = { "FontValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues = { "TextureValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, TextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_Inner = { "TextureValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues = { "VectorValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_Inner = { "VectorValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues = { "ScalarValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_Inner = { "ScalarValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Entries, FMaterialCachedParameters), STRUCT_OFFSET(FMaterialCachedParameters, Entries), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_Entries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedParameters",
		sizeof(FMaterialCachedParameters),
		alignof(FMaterialCachedParameters),
		Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialCachedParameters"), sizeof(FMaterialCachedParameters), Get_Z_Construct_UScriptStruct_FMaterialCachedParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedParameters_Hash() { return 191014079U; }
class UScriptStruct* FMaterialCachedParameterEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameterEntry"), sizeof(FMaterialCachedParameterEntry), Get_Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameterEntry>()
{
	return FMaterialCachedParameterEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialCachedParameterEntry(FMaterialCachedParameterEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialCachedParameterEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialCachedParameterEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialCachedParameterEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialCachedParameterEntry")),new UScriptStruct::TCppStructOps<FMaterialCachedParameterEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialCachedParameterEntry;
	struct Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Overrides;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Overrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpressionGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameHashes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameHashes;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_NameHashes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameterEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides_MetaData[] = {
		{ "Comment", "// editor-only?\n" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "editor-only?" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids = { "ExpressionGuids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, ExpressionGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids_Inner = { "ExpressionGuids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos = { "ParameterInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, ParameterInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos_Inner = { "ParameterInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes = { "NameHashes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, NameHashes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes_MetaData)) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes_Inner = { "NameHashes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_Overrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ExpressionGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_NameHashes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedParameterEntry",
		sizeof(FMaterialCachedParameterEntry),
		alignof(FMaterialCachedParameterEntry),
		Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialCachedParameterEntry"), sizeof(FMaterialCachedParameterEntry), Get_Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Hash() { return 3846566631U; }
class UScriptStruct* FParameterChannelNames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParameterChannelNames_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterChannelNames, Z_Construct_UPackage__Script_Engine(), TEXT("ParameterChannelNames"), sizeof(FParameterChannelNames), Get_Z_Construct_UScriptStruct_FParameterChannelNames_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParameterChannelNames>()
{
	return FParameterChannelNames::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterChannelNames(FParameterChannelNames::StaticStruct, TEXT("/Script/Engine"), TEXT("ParameterChannelNames"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParameterChannelNames
{
	FScriptStruct_Engine_StaticRegisterNativesFParameterChannelNames()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParameterChannelNames")),new UScriptStruct::TCppStructOps<FParameterChannelNames>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParameterChannelNames;
	struct Z_Construct_UScriptStruct_FParameterChannelNames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterChannelNames>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, G), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, R), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParameterChannelNames",
		sizeof(FParameterChannelNames),
		alignof(FParameterChannelNames),
		Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterChannelNames_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterChannelNames"), sizeof(FParameterChannelNames), Get_Z_Construct_UScriptStruct_FParameterChannelNames_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterChannelNames_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterChannelNames_Hash() { return 3654175296U; }
class UScriptStruct* FMaterialParameterCollectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterCollectionInfo"), sizeof(FMaterialParameterCollectionInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialParameterCollectionInfo>()
{
	return FMaterialParameterCollectionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialParameterCollectionInfo(FMaterialParameterCollectionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialParameterCollectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialParameterCollectionInfo")),new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialParameterCollectionInfo;
	struct Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "Comment", "/** The collection which this material has a dependency on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "The collection which this material has a dependency on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Id that the collection had when this material was last compiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Id that the collection had when this material was last compiled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialParameterCollectionInfo",
		sizeof(FMaterialParameterCollectionInfo),
		alignof(FMaterialParameterCollectionInfo),
		Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialParameterCollectionInfo"), sizeof(FMaterialParameterCollectionInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Hash() { return 2609806353U; }
class UScriptStruct* FMaterialFunctionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFunctionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialFunctionInfo"), sizeof(FMaterialFunctionInfo), Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialFunctionInfo>()
{
	return FMaterialFunctionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialFunctionInfo(FMaterialFunctionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialFunctionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialFunctionInfo")),new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialFunctionInfo;
	struct Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about a function that this material references, used to know when the material needs to be recompiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Stores information about a function that this material references, used to know when the material needs to be recompiled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/** The function which this material has a dependency on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "The function which this material has a dependency on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialFunctionInfo, Function), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Id that the function had when this material was last compiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Id that the function had when this material was last compiled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialFunctionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialFunctionInfo",
		sizeof(FMaterialFunctionInfo),
		alignof(FMaterialFunctionInfo),
		Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialFunctionInfo"), sizeof(FMaterialFunctionInfo), Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialFunctionInfo_Hash() { return 3822124785U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
