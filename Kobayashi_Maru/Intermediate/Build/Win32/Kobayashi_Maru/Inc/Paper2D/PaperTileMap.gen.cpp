// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileMap.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileMap() {}
// Cross Module References
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ETileMapProjectionMode();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
// End Cross Module References
	static UEnum* ETileMapProjectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ETileMapProjectionMode, Z_Construct_UPackage__Script_Paper2D(), TEXT("ETileMapProjectionMode"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ETileMapProjectionMode::Type>()
	{
		return ETileMapProjectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETileMapProjectionMode(ETileMapProjectionMode_StaticEnum, TEXT("/Script/Paper2D"), TEXT("ETileMapProjectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_ETileMapProjectionMode_Hash() { return 1584370159U; }
	UEnum* Z_Construct_UEnum_Paper2D_ETileMapProjectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETileMapProjectionMode"), 0, Get_Z_Construct_UEnum_Paper2D_ETileMapProjectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETileMapProjectionMode::Orthogonal", (int64)ETileMapProjectionMode::Orthogonal },
				{ "ETileMapProjectionMode::IsometricDiamond", (int64)ETileMapProjectionMode::IsometricDiamond },
				{ "ETileMapProjectionMode::IsometricStaggered", (int64)ETileMapProjectionMode::IsometricStaggered },
				{ "ETileMapProjectionMode::HexagonalStaggered", (int64)ETileMapProjectionMode::HexagonalStaggered },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// The different kinds of projection modes supported\n" },
				{ "HexagonalStaggered.Comment", "/** Hexagonal tile layout (roughly in a square with alternating rows staggered).  Warning: Not fully supported yet. */" },
				{ "HexagonalStaggered.Name", "ETileMapProjectionMode::HexagonalStaggered" },
				{ "HexagonalStaggered.ToolTip", "Hexagonal tile layout (roughly in a square with alternating rows staggered).  Warning: Not fully supported yet." },
				{ "IsometricDiamond.Comment", "// Isometric tile layout (shaped like a diamond) */\n" },
				{ "IsometricDiamond.Name", "ETileMapProjectionMode::IsometricDiamond" },
				{ "IsometricDiamond.ToolTip", "Isometric tile layout (shaped like a diamond) */" },
				{ "IsometricStaggered.Comment", "/** Isometric tile layout (roughly in a square with alternating rows staggered).  Warning: Not fully supported yet. */" },
				{ "IsometricStaggered.Name", "ETileMapProjectionMode::IsometricStaggered" },
				{ "IsometricStaggered.ToolTip", "Isometric tile layout (roughly in a square with alternating rows staggered).  Warning: Not fully supported yet." },
				{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
				{ "Orthogonal.Comment", "/** Square tile layout */" },
				{ "Orthogonal.Name", "ETileMapProjectionMode::Orthogonal" },
				{ "Orthogonal.ToolTip", "Square tile layout" },
				{ "ToolTip", "The different kinds of projection modes supported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"ETileMapProjectionMode",
				"ETileMapProjectionMode::Type",
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
	void UPaperTileMap::StaticRegisterNativesUPaperTileMap()
	{
	}
	UClass* Z_Construct_UClass_UPaperTileMap_NoRegister()
	{
		return UPaperTileMap::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerNameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerNameIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerGridColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerGridColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiTileGridOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiTileGridOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiTileGridOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiTileGridOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiTileGridHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiTileGridHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiTileGridWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiTileGridWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiTileGridColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiTileGridColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileGridColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileGridColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedLayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedLayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexSideLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HexSideLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteCollisionDomain_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpriteCollisionDomain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileLayers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTileSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SelectedTileSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationPerLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationPerLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationPerTileY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationPerTileY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationPerTileX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationPerTileX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelsPerUnrealUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelsPerUnrealUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A tile map is a 2D grid with a defined width and height (in tiles).  There can be multiple layers, each of which can specify which tile should appear in each cell of the map for that layer.\n" },
		{ "IncludePath", "PaperTileMap.h" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "A tile map is a 2D grid with a defined width and height (in tiles).  There can be multiple layers, each of which can specify which tile should appear in each cell of the map for that layer." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerNameIndex_MetaData[] = {
		{ "Comment", "/** The naming index to start at when trying to create a new layer */" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The naming index to start at when trying to create a new layer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerNameIndex = { "LayerNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, LayerNameIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerNameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerNameIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerGridColor_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The color of the layer grid */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The color of the layer grid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerGridColor = { "LayerGridColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, LayerGridColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerGridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerGridColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetY_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Number of tiles the multi tile grid is shifted downwards */" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Number of tiles the multi tile grid is shifted downwards" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetY = { "MultiTileGridOffsetY", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MultiTileGridOffsetY), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetX_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Number of tiles the multi tile grid is shifted to the right */" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Number of tiles the multi tile grid is shifted to the right" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetX = { "MultiTileGridOffsetX", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MultiTileGridOffsetX), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridHeight_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of tiles the multi tile grid spans vertically. 0 removes horizontal lines */" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Number of tiles the multi tile grid spans vertically. 0 removes horizontal lines" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridHeight = { "MultiTileGridHeight", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MultiTileGridHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridWidth_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of tiles the multi tile grid spans horizontally. 0 removes vertical lines */" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Number of tiles the multi tile grid spans horizontally. 0 removes vertical lines" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridWidth = { "MultiTileGridWidth", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MultiTileGridWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridColor_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The color of the multi tile grid */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The color of the multi tile grid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridColor = { "MultiTileGridColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MultiTileGridColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileGridColor_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The color of the tile grid */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The color of the tile grid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileGridColor = { "TileGridColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, TileGridColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileGridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileGridColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The background color displayed in the tile map editor */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The background color displayed in the tile map editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedLayerIndex_MetaData[] = {
		{ "Comment", "/** The currently selected layer index */" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The currently selected layer index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedLayerIndex = { "SelectedLayerIndex", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, SelectedLayerIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedLayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedLayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this tile map */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Importing data and options used for this tile map" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Comment", "// Baked physics data.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Baked physics data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_HexSideLength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0" },
		{ "Comment", "// The vertical height of the sides of the hex cell for a tile.\n// Note: This value should already be included as part of the TileHeight, and is purely cosmetic; it only affects how the tile cursor preview is drawn.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The vertical height of the sides of the hex cell for a tile.\nNote: This value should already be included as part of the TileHeight, and is purely cosmetic; it only affects how the tile cursor preview is drawn." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_HexSideLength = { "HexSideLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, HexSideLength), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_HexSideLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_HexSideLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Tile map type\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Tile map type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, ProjectionMode), Z_Construct_UEnum_Paper2D_ETileMapProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_ProjectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SpriteCollisionDomain_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Collision domain (no collision, 2D, or 3D)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Collision domain (no collision, 2D, or 3D)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SpriteCollisionDomain = { "SpriteCollisionDomain", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, SpriteCollisionDomain), Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SpriteCollisionDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SpriteCollisionDomain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// The extrusion thickness of collision geometry when using a 3D collision domain\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The extrusion thickness of collision geometry when using a 3D collision domain" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_CollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The list of layers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The list of layers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers = { "TileLayers", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, TileLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_Inner_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The list of layers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The list of layers" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_Inner = { "TileLayers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperTileLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The material to use on a tile map instance if not overridden\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The material to use on a tile map instance if not overridden" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedTileSet_MetaData[] = {
		{ "Comment", "// Last tile set that was selected when editing the tile map\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Last tile set that was selected when editing the tile map" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedTileSet = { "SelectedTileSet", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, SelectedTileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedTileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedTileSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerLayer_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The Z-separation between each layer of the tile map\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The Z-separation between each layer of the tile map" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerLayer = { "SeparationPerLayer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, SeparationPerLayer), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileY_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The Z-separation incurred as you travel in Y (not strictly applied, batched tiles will be put at the same Z level) \n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The Z-separation incurred as you travel in Y (not strictly applied, batched tiles will be put at the same Z level)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileY = { "SeparationPerTileY", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, SeparationPerTileY), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileX_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The Z-separation incurred as you travel in X (not strictly applied, batched tiles will be put at the same Z level) \n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The Z-separation incurred as you travel in X (not strictly applied, batched tiles will be put at the same Z level)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileX = { "SeparationPerTileX", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, SeparationPerTileX), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_PixelsPerUnrealUnit_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The scaling factor between pixels and Unreal units (cm) (e.g., 0.64 would make a 64 pixel wide tile take up 100 cm)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "The scaling factor between pixels and Unreal units (cm) (e.g., 0.64 would make a 64 pixel wide tile take up 100 cm)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_PixelsPerUnrealUnit = { "PixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, PixelsPerUnrealUnit), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_PixelsPerUnrealUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_PixelsPerUnrealUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileHeight_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "1" },
		{ "Comment", "// Height of one tile (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Height of one tile (in pixels)" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, TileHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileWidth_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "1" },
		{ "Comment", "// Width of one tile (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Width of one tile (in pixels)" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, TileWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapHeight_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "Comment", "// Height of map (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Height of map (in tiles)" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MapHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapWidth_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "Comment", "// Width of map (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMap.h" },
		{ "ToolTip", "Width of map (in tiles)" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMap, MapWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerNameIndex,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_LayerGridColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MultiTileGridColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileGridColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedLayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_HexSideLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_ProjectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SpriteCollisionDomain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SelectedTileSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_SeparationPerTileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_PixelsPerUnrealUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_TileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMap_Statics::NewProp_MapWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileMap_Statics::ClassParams = {
		&UPaperTileMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTileMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperTileMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperTileMap, 2295299185);
	template<> PAPER2D_API UClass* StaticClass<UPaperTileMap>()
	{
		return UPaperTileMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperTileMap(Z_Construct_UClass_UPaperTileMap, &UPaperTileMap::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperTileMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileMap);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMap)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
