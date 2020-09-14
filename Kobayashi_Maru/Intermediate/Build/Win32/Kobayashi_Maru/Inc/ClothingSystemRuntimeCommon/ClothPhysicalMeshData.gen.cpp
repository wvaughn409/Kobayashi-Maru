// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeCommon/Public/ClothPhysicalMeshData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FClothPhysicalMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMECOMMON_API uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicalMeshData, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothPhysicalMeshData>()
{
	return FClothPhysicalMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothPhysicalMeshData(FClothPhysicalMeshData::StaticStruct, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("ClothPhysicalMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothPhysicalMeshData
{
	FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothPhysicalMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothPhysicalMeshData")),new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>);
	}
} ScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothPhysicalMeshData;
	struct Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimDriveMultipliers;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveMultipliers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopRadiuses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopRadiuses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopRadiuses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelfCollisionIndices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SelfCollisionIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFixedVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFixedVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBoneWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBoneWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseMasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InverseMasses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InverseMasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeightMaps;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WeightMaps_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightMaps_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Spatial simulation data for a mesh. */" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Spatial simulation data for a mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, AnimDriveMultipliers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_Inner = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopRadiuses_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_Inner = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances = { "BackstopDistances", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopDistances_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_Inner = { "BackstopDistances", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_MetaData[] = {
		{ "Comment", "// Deprecated. Use WeightMaps instead.\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Deprecated. Use WeightMaps instead." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances = { "MaxDistances", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, MaxDistances_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_Inner = { "MaxDistances", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Valid indices to use for self collisions (reduced set of Indices)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Valid indices to use for self collisions (reduced set of Indices)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, SelfCollisionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_Inner = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts = { "NumFixedVerts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, NumFixedVerts), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Maximum number of bone weights of any vetex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Maximum number of bone weights of any vetex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights = { "MaxBoneWeights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, MaxBoneWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Indices and weights for each vertex, used to skin the mesh to create the reference pose\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Indices and weights for each vertex, used to skin the mesh to create the reference pose" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BoneData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_Inner = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Inverse mass for each vertex in the physical mesh\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Inverse mass for each vertex in the physical mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses = { "InverseMasses", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, InverseMasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_Inner = { "InverseMasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// The weight maps, or masks, used by this mesh, sorted by their target id\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "The weight maps, or masks, used by this mesh, sorted by their target id" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps = { "WeightMaps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, WeightMaps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_Key_KeyProp = { "WeightMaps_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_ValueProp = { "WeightMaps", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPointWeightMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Indices of the simulation mesh triangles\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Indices of the simulation mesh triangles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Color at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Color at each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Normal at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Normal at each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Positions of each simulation vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Positions of each simulation vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothPhysicalMeshData",
		sizeof(FClothPhysicalMeshData),
		alignof(FClothPhysicalMeshData),
		Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash() { return 3839754265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
