// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavMesh/RecastNavMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastNavMesh() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ERecastPartitioning();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ERecastPartitioning_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ERecastPartitioning"));
		}
		return Singleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERecastPartitioning::Type>()
	{
		return ERecastPartitioning_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERecastPartitioning(ERecastPartitioning_StaticEnum, TEXT("/Script/NavigationSystem"), TEXT("ERecastPartitioning"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Hash() { return 2191081170U; }
	UEnum* Z_Construct_UEnum_NavigationSystem_ERecastPartitioning()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERecastPartitioning"), 0, Get_Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERecastPartitioning::Monotone", (int64)ERecastPartitioning::Monotone },
				{ "ERecastPartitioning::Watershed", (int64)ERecastPartitioning::Watershed },
				{ "ERecastPartitioning::ChunkyMonotone", (int64)ERecastPartitioning::ChunkyMonotone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ChunkyMonotone.Name", "ERecastPartitioning::ChunkyMonotone" },
				{ "Comment", "// keep in sync with rcRegionPartitioning enum!\n" },
				{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
				{ "Monotone.Name", "ERecastPartitioning::Monotone" },
				{ "ToolTip", "keep in sync with rcRegionPartitioning enum!" },
				{ "Watershed.Name", "ERecastPartitioning::Watershed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
				nullptr,
				"ERecastPartitioning",
				"ERecastPartitioning::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRecastNavMeshGenerationProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("RecastNavMeshGenerationProperties"), sizeof(FRecastNavMeshGenerationProperties), Get_Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Hash());
	}
	return Singleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FRecastNavMeshGenerationProperties>()
{
	return FRecastNavMeshGenerationProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecastNavMeshGenerationProperties(FRecastNavMeshGenerationProperties::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("RecastNavMeshGenerationProperties"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFRecastNavMeshGenerationProperties
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFRecastNavMeshGenerationProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecastNavMeshGenerationProperties")),new UScriptStruct::TCppStructOps<FRecastNavMeshGenerationProperties>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFRecastNavMeshGenerationProperties;
	struct Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedTilePoolSize_MetaData[];
#endif
		static void NewProp_bFixedTilePoolSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedTilePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanFromTileCache_MetaData[];
#endif
		static void NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanFromTileCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanSequences_MetaData[];
#endif
		static void NewProp_bFilterLowSpanSequences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanSequences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMarkLowHeightAreas_MetaData[];
#endif
		static void NewProp_bMarkLowHeightAreas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkLowHeightAreas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformVoxelFiltering_MetaData[];
#endif
		static void NewProp_bPerformVoxelFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformVoxelFiltering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortNavigationAreasByCost_MetaData[];
#endif
		static void NewProp_bSortNavigationAreasByCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortNavigationAreasByCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerChunkSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerChunkSplits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionChunkSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegionChunkSplits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerPartitioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerPartitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionPartitioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RegionPartitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileNumberHardLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileNumberHardLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimplificationError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimplificationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeRegionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MergeRegionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRegionArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRegionArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeUU_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSizeUU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilePoolSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecastNavMeshGenerationProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_SetBit(void* Obj)
	{
		((FRecastNavMeshGenerationProperties*)Obj)->bFixedTilePoolSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize = { "bFixedTilePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild)" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj)
	{
		((FRecastNavMeshGenerationProperties*)Obj)->bFilterLowSpanFromTileCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache = { "bFilterLowSpanFromTileCache", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only single low height span will be allowed under valid one */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only single low height span will be allowed under valid one" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_SetBit(void* Obj)
	{
		((FRecastNavMeshGenerationProperties*)Obj)->bFilterLowSpanSequences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences = { "bFilterLowSpanSequences", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode)" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_SetBit(void* Obj)
	{
		((FRecastNavMeshGenerationProperties*)Obj)->bMarkLowHeightAreas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas = { "bMarkLowHeightAreas", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n\x09 *\x09Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n    Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_SetBit(void* Obj)
	{
		((FRecastNavMeshGenerationProperties*)Obj)->bPerformVoxelFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering = { "bPerformVoxelFiltering", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Controls whether Navigation Areas will be sorted by cost before application\n\x09 *\x09to navmesh during navmesh generation. This is relevant when there are\n\x09 *\x09""areas overlapping and we want to have area cost express area relevancy\n\x09 *\x09""as well. Setting it to true will result in having area sorted by cost,\n\x09 *\x09""but it will also increase navmesh generation cost a bit */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Controls whether Navigation Areas will be sorted by cost before application\n    to navmesh during navmesh generation. This is relevant when there are\n    areas overlapping and we want to have area cost express area relevancy\n    as well. Setting it to true will result in having area sorted by cost,\n    but it will also increase navmesh generation cost a bit" },
	};
#endif
	void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_SetBit(void* Obj)
	{
		((FRecastNavMeshGenerationProperties*)Obj)->bSortNavigationAreasByCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost = { "bSortNavigationAreasByCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits = { "LayerChunkSplits", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, LayerChunkSplits), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits = { "RegionChunkSplits", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, RegionChunkSplits), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating tile layers */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating tile layers" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning = { "LayerPartitioning", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, LayerPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating navmesh polys */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating navmesh polys" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning = { "RegionPartitioning", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, RegionPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n\x09*\x09having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n\x09*\x09""allocated up front (subject to change, but that's where it's at now)\n\x09*\x09@note TileNumberHardLimit is always rounded up to the closest power of 2 */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n     having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n     allocated up front (subject to change, but that's where it's at now)\n     @note TileNumberHardLimit is always rounded up to the closest power of 2" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit = { "TileNumberHardLimit", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, TileNumberHardLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much navigable shapes can get simplified - the higher the value the more freedom */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "How much navigable shapes can get simplified - the higher the value the more freedom" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError = { "MaxSimplificationError", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, MaxSimplificationError), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The size limit of regions to be merged with bigger regions (watershed partitioning only) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The size limit of regions to be merged with bigger regions (watershed partitioning only)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize = { "MergeRegionSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, MergeRegionSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The minimum dimension of area. Areas smaller than this will be discarded */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The minimum dimension of area. Areas smaller than this will be discarded" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea = { "MinRegionArea", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, MinRegionArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Largest vertical step the agent can perform */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Largest vertical step the agent can perform" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight = { "AgentMaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentMaxStepHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum slope (angle) that the agent can move on. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The maximum slope (angle) that the agent can move on." },
		{ "UIMax", "89.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope = { "AgentMaxSlope", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentMaxSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Size of the tallest agent that will path with this navmesh. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Size of the tallest agent that will path with this navmesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of largest agent that can freely traverse the generated navmesh */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Radius of largest agent that can freely traverse the generated navmesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** vertical size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical size of voxelization cell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, CellHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** horizontal size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "horizontal size of voxelization cell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, CellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "300.0" },
		{ "Comment", "/** size of single tile, expressed in uu */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "size of single tile, expressed in uu" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU = { "TileSizeUU", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, TileSizeUU), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** maximum number of tiles NavMesh can hold */" },
		{ "editcondition", "bFixedTilePoolSize" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "maximum number of tiles NavMesh can hold" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize = { "TilePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, TilePoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"RecastNavMeshGenerationProperties",
		sizeof(FRecastNavMeshGenerationProperties),
		alignof(FRecastNavMeshGenerationProperties),
		Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecastNavMeshGenerationProperties"), sizeof(FRecastNavMeshGenerationProperties), Get_Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Hash() { return 530720241U; }
	DEFINE_FUNCTION(ARecastNavMesh::execK2_ReplaceAreaInTileBounds)
	{
		P_GET_STRUCT(FBox,Z_Param_Bounds);
		P_GET_OBJECT(UClass,Z_Param_OldArea);
		P_GET_OBJECT(UClass,Z_Param_NewArea);
		P_GET_UBOOL(Z_Param_ReplaceLinks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_ReplaceAreaInTileBounds(Z_Param_Bounds,Z_Param_OldArea,Z_Param_NewArea,Z_Param_ReplaceLinks);
		P_NATIVE_END;
	}
	void ARecastNavMesh::StaticRegisterNativesARecastNavMesh()
	{
		UClass* Class = ARecastNavMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_ReplaceAreaInTileBounds", &ARecastNavMesh::execK2_ReplaceAreaInTileBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics
	{
		struct RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms
		{
			FBox Bounds;
			TSubclassOf<UNavArea>  OldArea;
			TSubclassOf<UNavArea>  NewArea;
			bool ReplaceLinks;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_ReplaceLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplaceLinks;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewArea;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OldArea;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms), &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks_SetBit(void* Obj)
	{
		((RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms*)Obj)->ReplaceLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks = { "ReplaceLinks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms), &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_NewArea = { "NewArea", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms, NewArea), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_OldArea = { "OldArea", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms, OldArea), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_NewArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_OldArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavMesh" },
		{ "Comment", "/** @return true if any polygon/link has been touched */" },
		{ "CPP_Default_ReplaceLinks", "true" },
		{ "DisplayName", "ReplaceAreaInTileBounds" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "@return true if any polygon/link has been touched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecastNavMesh, nullptr, "K2_ReplaceAreaInTileBounds", nullptr, nullptr, sizeof(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms), Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister()
	{
		return ARecastNavMesh::StaticClass();
	}
	struct Z_Construct_UClass_ARecastNavMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalDeviationFromGroundCompensation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalDeviationFromGroundCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeuristicScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeuristicScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSetUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSetUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVoxelCache_MetaData[];
#endif
		static void NewProp_bUseVoxelCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVoxelCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNavLinkAsPathEnd_MetaData[];
#endif
		static void NewProp_bAllowNavLinkAsPathEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNavLinkAsPathEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVirtualFilters_MetaData[];
#endif
		static void NewProp_bUseVirtualFilters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVirtualFilters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreEmptyTileLayers_MetaData[];
#endif
		static void NewProp_bStoreEmptyTileLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreEmptyTileLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBetterOffsetsFromCorners_MetaData[];
#endif
		static void NewProp_bUseBetterOffsetsFromCorners_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBetterOffsetsFromCorners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFullyAsyncNavDataGathering_MetaData[];
#endif
		static void NewProp_bDoFullyAsyncNavDataGathering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFullyAsyncNavDataGathering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanFromTileCache_MetaData[];
#endif
		static void NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanFromTileCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanSequences_MetaData[];
#endif
		static void NewProp_bFilterLowSpanSequences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanSequences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMarkLowHeightAreas_MetaData[];
#endif
		static void NewProp_bMarkLowHeightAreas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkLowHeightAreas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformVoxelFiltering_MetaData[];
#endif
		static void NewProp_bPerformVoxelFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformVoxelFiltering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortNavigationAreasByCost_MetaData[];
#endif
		static void NewProp_bSortNavigationAreasByCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortNavigationAreasByCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerChunkSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerChunkSplits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionChunkSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegionChunkSplits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerPartitioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerPartitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionPartitioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RegionPartitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxHierarchicalSearchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxHierarchicalSearchNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxSearchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxSearchNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshOriginOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshOriginOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefSaltBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefSaltBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefNavPolyBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefNavPolyBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefTileBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefTileBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileNumberHardLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileNumberHardLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousTileGenerationJobsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimplificationError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimplificationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeRegionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MergeRegionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRegionArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRegionArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeUU_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSizeUU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedTilePoolSize_MetaData[];
#endif
		static void NewProp_bFixedTilePoolSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedTilePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMesh_MetaData[];
#endif
		static void NewProp_bDrawNavMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData[];
#endif
		static void NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDistinctlyDrawTilesBeingBuilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawMarkedForbiddenPolys_MetaData[];
#endif
		static void NewProp_bDrawMarkedForbiddenPolys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawMarkedForbiddenPolys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOctreeDetails_MetaData[];
#endif
		static void NewProp_bDrawOctreeDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOctreeDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOctree_MetaData[];
#endif
		static void NewProp_bDrawOctree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOctree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawClusters_MetaData[];
#endif
		static void NewProp_bDrawClusters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawClusters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedNavLinks_MetaData[];
#endif
		static void NewProp_bDrawFailedNavLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedNavLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavLinks_MetaData[];
#endif
		static void NewProp_bDrawNavLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawLabelsOnPathNodes_MetaData[];
#endif
		static void NewProp_bDrawLabelsOnPathNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLabelsOnPathNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDefaultPolygonCost_MetaData[];
#endif
		static void NewProp_bDrawDefaultPolygonCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDefaultPolygonCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPolygonLabels_MetaData[];
#endif
		static void NewProp_bDrawPolygonLabels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPolygonLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTileLabels_MetaData[];
#endif
		static void NewProp_bDrawTileLabels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTileLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPathCollidingGeometry_MetaData[];
#endif
		static void NewProp_bDrawPathCollidingGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPathCollidingGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTileBounds_MetaData[];
#endif
		static void NewProp_bDrawTileBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTileBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMeshEdges_MetaData[];
#endif
		static void NewProp_bDrawNavMeshEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMeshEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFilledPolys_MetaData[];
#endif
		static void NewProp_bDrawFilledPolys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFilledPolys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPolyEdges_MetaData[];
#endif
		static void NewProp_bDrawPolyEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPolyEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTriangleEdges_MetaData[];
#endif
		static void NewProp_bDrawTriangleEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTriangleEdges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecastNavMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationData,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecastNavMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds, "K2_ReplaceAreaInTileBounds" }, // 1982230659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Tags Utilities|Transformation Actor Layers Replication" },
		{ "IncludePath", "NavMesh/RecastNavMesh.h" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation_MetaData[] = {
		{ "Category", "Query" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value added to each search height to compensate for error between navmesh polys and walkable geometry  */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Value added to each search height to compensate for error between navmesh polys and walkable geometry" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation = { "VerticalDeviationFromGroundCompensation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, VerticalDeviationFromGroundCompensation), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale_MetaData[] = {
		{ "Category", "Query" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Euclidean distance heuristic scale used while pathfinding */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Euclidean distance heuristic scale used while pathfinding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale = { "HeuristicScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, HeuristicScale), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval_MetaData[] = {
		{ "Comment", "/** indicates how often we will sort navigation tiles to mach players position */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "indicates how often we will sort navigation tiles to mach players position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval = { "TileSetUpdateInterval", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TileSetUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_MetaData[] = {
		{ "Comment", "/** Cache rasterized voxels instead of just collision vertices/indices in navigation octree */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Cache rasterized voxels instead of just collision vertices/indices in navigation octree" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bUseVoxelCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache = { "bUseVoxelCache", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_MetaData[] = {
		{ "Comment", "/** If set, paths can end at navlink poly (not the ground one!) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, paths can end at navlink poly (not the ground one!)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bAllowNavLinkAsPathEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd = { "bAllowNavLinkAsPathEnd", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_MetaData[] = {
		{ "Comment", "/** Indicates whether default navigation filters will use virtual functions. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Indicates whether default navigation filters will use virtual functions. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bUseVirtualFilters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters = { "bUseVirtualFilters", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_MetaData[] = {
		{ "Comment", "/** If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false." },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bStoreEmptyTileLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers = { "bStoreEmptyTileLayers", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_MetaData[] = {
		{ "Comment", "/** TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bUseBetterOffsetsFromCorners = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners = { "bUseBetterOffsetsFromCorners", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDoFullyAsyncNavDataGathering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering = { "bDoFullyAsyncNavDataGathering", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bFilterLowSpanFromTileCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache = { "bFilterLowSpanFromTileCache", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only single low height span will be allowed under valid one */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only single low height span will be allowed under valid one" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bFilterLowSpanSequences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences = { "bFilterLowSpanSequences", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bMarkLowHeightAreas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas = { "bMarkLowHeightAreas", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter). \n\x09 *\x09Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n    Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bPerformVoxelFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering = { "bPerformVoxelFiltering", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Controls whether Navigation Areas will be sorted by cost before application \n\x09 *\x09to navmesh during navmesh generation. This is relevant when there are\n\x09 *\x09""areas overlapping and we want to have area cost express area relevancy\n\x09 *\x09""as well. Setting it to true will result in having area sorted by cost,\n\x09 *\x09""but it will also increase navmesh generation cost a bit */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Controls whether Navigation Areas will be sorted by cost before application\n    to navmesh during navmesh generation. This is relevant when there are\n    areas overlapping and we want to have area cost express area relevancy\n    as well. Setting it to true will result in having area sorted by cost,\n    but it will also increase navmesh generation cost a bit" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bSortNavigationAreasByCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost = { "bSortNavigationAreasByCost", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits = { "LayerChunkSplits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, LayerChunkSplits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits = { "RegionChunkSplits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, RegionChunkSplits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating tile layers */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating tile layers" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning = { "LayerPartitioning", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, LayerPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating navmesh polys */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating navmesh polys" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning = { "RegionPartitioning", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, RegionPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes_MetaData[] = {
		{ "Comment", "/** specifes default limit to A* nodes used when performing hierarchical navigation queries. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "specifes default limit to A* nodes used when performing hierarchical navigation queries." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes = { "DefaultMaxHierarchicalSearchNodes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxHierarchicalSearchNodes), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes_MetaData[] = {
		{ "Comment", "/** specifes default limit to A* nodes used when performing navigation queries. \n\x09 *\x09""Can be overridden by passing custom FNavigationQueryFilter */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "specifes default limit to A* nodes used when performing navigation queries.\n    Can be overridden by passing custom FNavigationQueryFilter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes = { "DefaultMaxSearchNodes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxSearchNodes), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance_MetaData[] = {
		{ "Comment", "/** navmesh draw distance in game (always visible in editor) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "navmesh draw distance in game (always visible in editor)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance = { "DefaultDrawDistance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Use this if you don't want your tiles to start at (0,0,0) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Use this if you don't want your tiles to start at (0,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset = { "NavMeshOriginOffset", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, NavMeshOriginOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits = { "PolyRefSaltBits", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefSaltBits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits = { "PolyRefNavPolyBits", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefNavPolyBits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits = { "PolyRefTileBits", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefTileBits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n\x09 *\x09having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n\x09 *\x09""allocated up front (subject to change, but that's where it's at now)\n\x09 *\x09@note TileNumberHardLimit is always rounded up to the closest power of 2 */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n    having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n    allocated up front (subject to change, but that's where it's at now)\n    @note TileNumberHardLimit is always rounded up to the closest power of 2" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit = { "TileNumberHardLimit", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TileNumberHardLimit), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount = { "MaxSimultaneousTileGenerationJobsCount", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MaxSimultaneousTileGenerationJobsCount), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much navigable shapes can get simplified - the higher the value the more freedom */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "How much navigable shapes can get simplified - the higher the value the more freedom" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError = { "MaxSimplificationError", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MaxSimplificationError), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The size limit of regions to be merged with bigger regions (watershed partitioning only) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The size limit of regions to be merged with bigger regions (watershed partitioning only)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize = { "MergeRegionSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MergeRegionSize), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The minimum dimension of area. Areas smaller than this will be discarded */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The minimum dimension of area. Areas smaller than this will be discarded" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea = { "MinRegionArea", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MinRegionArea), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Largest vertical step the agent can perform */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Largest vertical step the agent can perform" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight = { "AgentMaxStepHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxStepHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum slope (angle) that the agent can move on. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The maximum slope (angle) that the agent can move on." },
		{ "UIMax", "89.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope = { "AgentMaxSlope", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxSlope), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "DEPRECATED_AgentMaxHeight" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight = { "AgentMaxHeight", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Size of the tallest agent that will path with this navmesh. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Size of the tallest agent that will path with this navmesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of smallest agent to traverse this navmesh */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Radius of smallest agent to traverse this navmesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentRadius), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** vertical size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical size of voxelization cell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, CellHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** horizontal size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "horizontal size of voxelization cell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, CellSize), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "300.0" },
		{ "Comment", "/** size of single tile, expressed in uu */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "size of single tile, expressed in uu" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU = { "TileSizeUU", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TileSizeUU), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** maximum number of tiles NavMesh can hold */" },
		{ "editcondition", "bFixedTilePoolSize" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "maximum number of tiles NavMesh can hold" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize = { "TilePoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TilePoolSize), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bFixedTilePoolSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize = { "bFixedTilePoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** vertical offset added to navmesh's debug representation for better readability */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical offset added to navmesh's debug representation for better readability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset = { "DrawOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DrawOffset), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawNavMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh = { "bDrawNavMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDistinctlyDrawTilesBeingBuilt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt = { "bDistinctlyDrawTilesBeingBuilt", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawMarkedForbiddenPolys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys = { "bDrawMarkedForbiddenPolys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_MetaData[] = {
		{ "Category", "Display" },
		{ "editcondition", "bDrawOctree" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawOctreeDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails = { "bDrawOctreeDetails", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** should we draw edges of every navmesh's triangle */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw edges of every navmesh's triangle" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawOctree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree = { "bDrawOctree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawClusters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters = { "bDrawClusters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawFailedNavLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks = { "bDrawFailedNavLinks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawNavLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks = { "bDrawNavLinks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawLabelsOnPathNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes = { "bDrawLabelsOnPathNodes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawDefaultPolygonCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost = { "bDrawDefaultPolygonCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawPolygonLabels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels = { "bDrawPolygonLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawTileLabels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels = { "bDrawTileLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor." },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawPathCollidingGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry = { "bDrawPathCollidingGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** should we draw the tile boundaries */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw the tile boundaries" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawTileBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds = { "bDrawTileBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** should we draw border-edges */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw border-edges" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawNavMeshEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges = { "bDrawNavMeshEdges", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** if disabled skips filling drawn navmesh polygons */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if disabled skips filling drawn navmesh polygons" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawFilledPolys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys = { "bDrawFilledPolys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** should we draw edges of every poly (i.e. not only border-edges)  */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw edges of every poly (i.e. not only border-edges)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawPolyEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges = { "bDrawPolyEdges", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** should we draw edges of every navmesh's triangle */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw edges of every navmesh's triangle" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawTriangleEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges = { "bDrawTriangleEdges", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecastNavMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecastNavMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams = {
		&ARecastNavMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers),
		0,
		0x009002A6u,
		METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecastNavMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARecastNavMesh, 3846018322);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ARecastNavMesh>()
	{
		return ARecastNavMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecastNavMesh(Z_Construct_UClass_ARecastNavMesh, &ARecastNavMesh::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ARecastNavMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecastNavMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ARecastNavMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
