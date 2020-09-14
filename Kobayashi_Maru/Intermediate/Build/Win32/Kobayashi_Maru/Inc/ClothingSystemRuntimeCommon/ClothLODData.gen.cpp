// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeCommon/Public/ClothLODData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothLODData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_Legacy();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
// End Cross Module References
class UScriptStruct* FClothLODDataCommon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMECOMMON_API uint32 Get_Z_Construct_UScriptStruct_FClothLODDataCommon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothLODDataCommon, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothLODDataCommon"), sizeof(FClothLODDataCommon), Get_Z_Construct_UScriptStruct_FClothLODDataCommon_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothLODDataCommon>()
{
	return FClothLODDataCommon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothLODDataCommon(FClothLODDataCommon::StaticStruct, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("ClothLODDataCommon"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothLODDataCommon
{
	FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothLODDataCommon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothLODDataCommon")),new UScriptStruct::TCppStructOps<FClothLODDataCommon>);
	}
} ScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFClothLODDataCommon;
	struct Z_Construct_UScriptStruct_FClothLODDataCommon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointWeightMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointWeightMaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointWeightMaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterMasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterMasks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterMasks_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalMeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Common Cloth LOD representation for all clothing assets. */" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Common Cloth LOD representation for all clothing assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothLODDataCommon>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_MetaData[] = {
		{ "Category", "Masks" },
		{ "Comment", "// Parameter masks defining the physics mesh masked data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Parameter masks defining the physics mesh masked data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps = { "PointWeightMaps", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODDataCommon, PointWeightMaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_Inner = { "PointWeightMaps", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointWeightMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks = { "ParameterMasks", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODDataCommon, ParameterMasks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_Inner = { "ParameterMasks", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothParameterMask_Legacy, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Collision primitive and convex data for clothing collisions\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Collision primitive and convex data for clothing collisions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODDataCommon, CollisionData), Z_Construct_UScriptStruct_FClothCollisionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Raw phys mesh data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Raw phys mesh data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData = { "PhysicalMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODDataCommon, PhysicalMeshData), Z_Construct_UScriptStruct_FClothPhysicalMeshData, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothLODDataCommon",
		sizeof(FClothLODDataCommon),
		alignof(FClothLODDataCommon),
		Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothLODDataCommon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothLODDataCommon"), sizeof(FClothLODDataCommon), Get_Z_Construct_UScriptStruct_FClothLODDataCommon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothLODDataCommon_Hash() { return 3549243855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
