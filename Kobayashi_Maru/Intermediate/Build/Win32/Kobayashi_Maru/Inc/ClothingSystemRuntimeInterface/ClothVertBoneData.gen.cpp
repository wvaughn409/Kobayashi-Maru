// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothVertBoneData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothVertBoneData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References
class UScriptStruct* FClothVertBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothVertBoneData, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothVertBoneData>()
{
	return FClothVertBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothVertBoneData(FClothVertBoneData::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothVertBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothVertBoneData
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothVertBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothVertBoneData")),new UScriptStruct::TCppStructOps<FClothVertBoneData>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothVertBoneData;
	struct Z_Construct_UScriptStruct_FClothVertBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_BoneIndices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInfluences_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInfluences;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Bone data for a vertex\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "Bone data for a vertex" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothVertBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights_MetaData[] = {
		{ "Comment", "// The weights for each entry in BoneIndices\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "The weights for each entry in BoneIndices" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BoneWeights, FClothVertBoneData), STRUCT_OFFSET(FClothVertBoneData, BoneWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices_MetaData[] = {
		{ "Comment", "// Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BoneIndices, FClothVertBoneData), STRUCT_OFFSET(FClothVertBoneData, BoneIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences_MetaData[] = {
		{ "Comment", "// Number of influences for this vertex.\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "Number of influences for this vertex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences = { "NumInfluences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothVertBoneData, NumInfluences), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothVertBoneData",
		sizeof(FClothVertBoneData),
		alignof(FClothVertBoneData),
		Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothVertBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash() { return 1950871837U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
