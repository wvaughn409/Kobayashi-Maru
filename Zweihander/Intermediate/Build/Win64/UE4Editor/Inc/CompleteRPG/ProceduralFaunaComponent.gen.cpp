// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/ProceduralFaunaComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFaunaComponent() {}
// Cross Module References
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FFaunaSpawnGrid();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_UProceduralFaunaComponent_NoRegister();
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FFaunaGridCell();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COMPLETERPG_API UClass* Z_Construct_UClass_UProceduralFaunaComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaCreatureInfo_NoRegister();
// End Cross Module References
class UScriptStruct* FFaunaSpawnGrid::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FFaunaSpawnGrid_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFaunaSpawnGrid, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("FaunaSpawnGrid"), sizeof(FFaunaSpawnGrid), Get_Z_Construct_UScriptStruct_FFaunaSpawnGrid_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FFaunaSpawnGrid>()
{
	return FFaunaSpawnGrid::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFaunaSpawnGrid(FFaunaSpawnGrid::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("FaunaSpawnGrid"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaSpawnGrid
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaSpawnGrid()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FaunaSpawnGrid")),new UScriptStruct::TCppStructOps<FFaunaSpawnGrid>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaSpawnGrid;
	struct Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCellsY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCellsY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCellsX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCellsX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFaunaSpawnGrid>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, OwnerComponent), Z_Construct_UClass_UProceduralFaunaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_OwnerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFaunaGridCell, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, CellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsY_MetaData[] = {
		{ "Category", "SiteProperties" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsY = { "NumCellsY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, NumCellsY), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsX_MetaData[] = {
		{ "Category", "SiteProperties" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsX = { "NumCellsX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, NumCellsX), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridExtents = { "GridExtents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, GridExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridOrigin = { "GridOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaSpawnGrid, GridOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_OwnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_Cells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_NumCellsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::NewProp_GridOrigin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"FaunaSpawnGrid",
		sizeof(FFaunaSpawnGrid),
		alignof(FFaunaSpawnGrid),
		Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFaunaSpawnGrid()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFaunaSpawnGrid_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FaunaSpawnGrid"), sizeof(FFaunaSpawnGrid), Get_Z_Construct_UScriptStruct_FFaunaSpawnGrid_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFaunaSpawnGrid_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFaunaSpawnGrid_Hash() { return 3051612651U; }
class UScriptStruct* FFaunaGridCell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FFaunaGridCell_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFaunaGridCell, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("FaunaGridCell"), sizeof(FFaunaGridCell), Get_Z_Construct_UScriptStruct_FFaunaGridCell_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FFaunaGridCell>()
{
	return FFaunaGridCell::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFaunaGridCell(FFaunaGridCell::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("FaunaGridCell"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaGridCell
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaGridCell()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FaunaGridCell")),new UScriptStruct::TCppStructOps<FFaunaGridCell>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaGridCell;
	struct Z_Construct_UScriptStruct_FFaunaGridCell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Centre_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Centre;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaGridCell_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFaunaGridCell>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_HalfExtents_MetaData[] = {
		{ "Comment", "/** Extent of the cell */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Extent of the cell" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_HalfExtents = { "HalfExtents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaGridCell, HalfExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_HalfExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_HalfExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_Centre_MetaData[] = {
		{ "Comment", "/** Position at the centre of the cell */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Position at the centre of the cell" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_Centre = { "Centre", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaGridCell, Centre), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_Centre_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_Centre_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFaunaGridCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_HalfExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaGridCell_Statics::NewProp_Centre,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFaunaGridCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"FaunaGridCell",
		sizeof(FFaunaGridCell),
		alignof(FFaunaGridCell),
		Z_Construct_UScriptStruct_FFaunaGridCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaGridCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFaunaGridCell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFaunaGridCell_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FaunaGridCell"), sizeof(FFaunaGridCell), Get_Z_Construct_UScriptStruct_FFaunaGridCell_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFaunaGridCell_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFaunaGridCell_Hash() { return 1351319920U; }
	void UProceduralFaunaComponent::StaticRegisterNativesUProceduralFaunaComponent()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFaunaComponent_NoRegister()
	{
		return UProceduralFaunaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFaunaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaunaGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaunaGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCullChecksPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCullChecksPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRuntimeGeneration_MetaData[];
#endif
		static void NewProp_bRuntimeGeneration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRuntimeGeneration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Creatures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Creatures;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Creatures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeaLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeaLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellsY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CellsY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellsX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CellsX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSpawning_MetaData[];
#endif
		static void NewProp_bEnableSpawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSpawning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFaunaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ProceduralFaunaComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_FaunaGrid_MetaData[] = {
		{ "Comment", "/** Grid used to arrange spawners */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Grid used to arrange spawners" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_FaunaGrid = { "FaunaGrid", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, FaunaGrid), Z_Construct_UScriptStruct_FFaunaSpawnGrid, METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_FaunaGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_FaunaGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SpawnBounds_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Bounds outside of which we will not attempt to spawn creatures, if zero we spawn anywhere that the spawn grid covers */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Bounds outside of which we will not attempt to spawn creatures, if zero we spawn anywhere that the spawn grid covers" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SpawnBounds = { "SpawnBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, SpawnBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SpawnBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SpawnBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_NumCullChecksPerFrame_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Number of spawners to check for culling each tick */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Number of spawners to check for culling each tick" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_NumCullChecksPerFrame = { "NumCullChecksPerFrame", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, NumCullChecksPerFrame), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_NumCullChecksPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_NumCullChecksPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** If true we will generate spawners at runtime rather than edit time */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "If true we will generate spawners at runtime rather than edit time" },
	};
#endif
	void Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration_SetBit(void* Obj)
	{
		((UProceduralFaunaComponent*)Obj)->bRuntimeGeneration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration = { "bRuntimeGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFaunaComponent), &Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** List of creature definition objects to generate spawn sites for */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "List of creature definition objects to generate spawn sites for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures = { "Creatures", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, Creatures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures_Inner = { "Creatures", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFaunaCreatureInfo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Distance from player controller to remove instances */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Distance from player controller to remove instances" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, CullDistance), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_TriggerDistance_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Distance from player controller to trigger a spawn site */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Distance from player controller to trigger a spawn site" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_TriggerDistance = { "TriggerDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, TriggerDistance), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_TriggerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_TriggerDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SeaLevel_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Sea level for the world - for altitude calculations */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Sea level for the world - for altitude calculations" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SeaLevel = { "SeaLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, SeaLevel), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SeaLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SeaLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Height of spawn volume to use when tracing */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Height of spawn volume to use when tracing" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, HalfHeight), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_HalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Size of each individual cell */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Size of each individual cell" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, CellSize), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsY_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Number of cells to create in the Y direction */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Number of cells to create in the Y direction" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsY = { "CellsY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, CellsY), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsX_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Number of cells to create in the X direction */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Number of cells to create in the X direction" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsX = { "CellsX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFaunaComponent, CellsX), METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning_MetaData[] = {
		{ "Category", "FaunaSettings" },
		{ "Comment", "/** Whether spawning is enabled. Spawn sites will not be triggered if disabled */" },
		{ "ModuleRelativePath", "Public/ProceduralFaunaComponent.h" },
		{ "ToolTip", "Whether spawning is enabled. Spawn sites will not be triggered if disabled" },
		{ "UIMin", "1" },
	};
#endif
	void Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning_SetBit(void* Obj)
	{
		((UProceduralFaunaComponent*)Obj)->bEnableSpawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning = { "bEnableSpawning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFaunaComponent), &Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFaunaComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_FaunaGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SpawnBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_NumCullChecksPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bRuntimeGeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_Creatures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_TriggerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_SeaLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_CellsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFaunaComponent_Statics::NewProp_bEnableSpawning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFaunaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFaunaComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFaunaComponent_Statics::ClassParams = {
		&UProceduralFaunaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralFaunaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFaunaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFaunaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFaunaComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFaunaComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFaunaComponent, 1277071629);
	template<> COMPLETERPG_API UClass* StaticClass<UProceduralFaunaComponent>()
	{
		return UProceduralFaunaComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFaunaComponent(Z_Construct_UClass_UProceduralFaunaComponent, &UProceduralFaunaComponent::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UProceduralFaunaComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFaunaComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
