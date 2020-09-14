// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileMapComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileMapComponent() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPaperTileMapComponent::execRebuildCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebuildCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execSetLayerCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
		P_GET_UBOOL(Z_Param_bHasCollision);
		P_GET_UBOOL(Z_Param_bOverrideThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CustomThickness);
		P_GET_UBOOL(Z_Param_bOverrideOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CustomOffset);
		P_GET_UBOOL(Z_Param_bRebuildCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayerCollision(Z_Param_Layer,Z_Param_bHasCollision,Z_Param_bOverrideThickness,Z_Param_CustomThickness,Z_Param_bOverrideOffset,Z_Param_CustomOffset,Z_Param_bRebuildCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execSetDefaultCollisionThickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_UBOOL(Z_Param_bRebuildCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultCollisionThickness(Z_Param_Thickness,Z_Param_bRebuildCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetTilePolygon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTilePolygon(Z_Param_TileX,Z_Param_TileY,Z_Param_Out_Points,Z_Param_LayerIndex,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetTileCenterPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTileCenterPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetTileCornerPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTileCornerPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execMakeTileMapEditable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeTileMapEditable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execSetLayerColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayerColor(Z_Param_NewColor,Z_Param_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetLayerColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLayerColor(Z_Param_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execSetTileMapColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTileMapColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetTileMapColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTileMapColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execAddNewLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperTileLayer**)Z_Param__Result=P_THIS->AddNewLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execResizeMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewWidthInTiles);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewHeightInTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResizeMap(Z_Param_NewWidthInTiles,Z_Param_NewHeightInTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execSetTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPaperTileInfo*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execGetMapSize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MapWidth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MapHeight);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMapSize(Z_Param_Out_MapWidth,Z_Param_Out_MapHeight,Z_Param_Out_NumLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execSetTileMap)
	{
		P_GET_OBJECT(UPaperTileMap,Z_Param_NewTileMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTileMap(Z_Param_NewTileMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execOwnsTileMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OwnsTileMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperTileMapComponent::execCreateNewTileMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MapWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_MapHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PixelsPerUnrealUnit);
		P_GET_UBOOL(Z_Param_bCreateLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewTileMap(Z_Param_MapWidth,Z_Param_MapHeight,Z_Param_TileWidth,Z_Param_TileHeight,Z_Param_PixelsPerUnrealUnit,Z_Param_bCreateLayer);
		P_NATIVE_END;
	}
	void UPaperTileMapComponent::StaticRegisterNativesUPaperTileMapComponent()
	{
		UClass* Class = UPaperTileMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewLayer", &UPaperTileMapComponent::execAddNewLayer },
			{ "CreateNewTileMap", &UPaperTileMapComponent::execCreateNewTileMap },
			{ "GetLayerColor", &UPaperTileMapComponent::execGetLayerColor },
			{ "GetMapSize", &UPaperTileMapComponent::execGetMapSize },
			{ "GetTile", &UPaperTileMapComponent::execGetTile },
			{ "GetTileCenterPosition", &UPaperTileMapComponent::execGetTileCenterPosition },
			{ "GetTileCornerPosition", &UPaperTileMapComponent::execGetTileCornerPosition },
			{ "GetTileMapColor", &UPaperTileMapComponent::execGetTileMapColor },
			{ "GetTilePolygon", &UPaperTileMapComponent::execGetTilePolygon },
			{ "MakeTileMapEditable", &UPaperTileMapComponent::execMakeTileMapEditable },
			{ "OwnsTileMap", &UPaperTileMapComponent::execOwnsTileMap },
			{ "RebuildCollision", &UPaperTileMapComponent::execRebuildCollision },
			{ "ResizeMap", &UPaperTileMapComponent::execResizeMap },
			{ "SetDefaultCollisionThickness", &UPaperTileMapComponent::execSetDefaultCollisionThickness },
			{ "SetLayerCollision", &UPaperTileMapComponent::execSetLayerCollision },
			{ "SetLayerColor", &UPaperTileMapComponent::execSetLayerColor },
			{ "SetTile", &UPaperTileMapComponent::execSetTile },
			{ "SetTileMap", &UPaperTileMapComponent::execSetTileMap },
			{ "SetTileMapColor", &UPaperTileMapComponent::execSetTileMapColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics
	{
		struct PaperTileMapComponent_eventAddNewLayer_Parms
		{
			UPaperTileLayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventAddNewLayer_Parms, ReturnValue), Z_Construct_UClass_UPaperTileLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Creates and adds a new layer to the tile map\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Creates and adds a new layer to the tile map\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "AddNewLayer", nullptr, nullptr, sizeof(PaperTileMapComponent_eventAddNewLayer_Parms), Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics
	{
		struct PaperTileMapComponent_eventCreateNewTileMap_Parms
		{
			int32 MapWidth;
			int32 MapHeight;
			int32 TileWidth;
			int32 TileHeight;
			float PixelsPerUnrealUnit;
			bool bCreateLayer;
		};
		static void NewProp_bCreateLayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateLayer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelsPerUnrealUnit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileWidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventCreateNewTileMap_Parms*)Obj)->bCreateLayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer = { "bCreateLayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventCreateNewTileMap_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_PixelsPerUnrealUnit = { "PixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, PixelsPerUnrealUnit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, TileHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, TileWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, MapHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventCreateNewTileMap_Parms, MapWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_PixelsPerUnrealUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_TileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_MapWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/**\n\x09 * Creates a new tile map of the specified size, replacing the TileMap reference (or dropping the previous owned one)\n\x09 *\n\x09 * @param MapWidth Width of the map (in tiles)\n\x09 * @param MapHeight Height of the map (in tiles)\n\x09 * @param TileWidth Width of one tile (in pixels)\n\x09 * @param TileHeight Height of one tile (in pixels)\n\x09 * @param bCreateLayer Should an empty layer be created?\n\x09 */" },
		{ "CPP_Default_bCreateLayer", "true" },
		{ "CPP_Default_MapHeight", "4" },
		{ "CPP_Default_MapWidth", "4" },
		{ "CPP_Default_PixelsPerUnrealUnit", "1.000000" },
		{ "CPP_Default_TileHeight", "32" },
		{ "CPP_Default_TileWidth", "32" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Creates a new tile map of the specified size, replacing the TileMap reference (or dropping the previous owned one)\n\n@param MapWidth Width of the map (in tiles)\n@param MapHeight Height of the map (in tiles)\n@param TileWidth Width of one tile (in pixels)\n@param TileHeight Height of one tile (in pixels)\n@param bCreateLayer Should an empty layer be created?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "CreateNewTileMap", nullptr, nullptr, sizeof(PaperTileMapComponent_eventCreateNewTileMap_Parms), Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics
	{
		struct PaperTileMapComponent_eventGetLayerColor_Parms
		{
			int32 Layer;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetLayerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetLayerColor_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Gets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)\n" },
		{ "CPP_Default_Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Gets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetLayerColor", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetLayerColor_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics
	{
		struct PaperTileMapComponent_eventGetMapSize_Parms
		{
			int32 MapWidth;
			int32 MapHeight;
			int32 NumLayers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLayers;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_NumLayers = { "NumLayers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetMapSize_Parms, NumLayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetMapSize_Parms, MapHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetMapSize_Parms, MapWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_NumLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::NewProp_MapWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the size of the tile map\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the size of the tile map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetMapSize", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetMapSize_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics
	{
		struct PaperTileMapComponent_eventGetTile_Parms
		{
			int32 X;
			int32 Y;
			int32 Layer;
			FPaperTileInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTile_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the contents of a specified tile cell\n" },
		{ "Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the contents of a specified tile cell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTile", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetTile_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics
	{
		struct PaperTileMapComponent_eventGetTileCenterPosition_Parms
		{
			int32 TileX;
			int32 TileY;
			int32 LayerIndex;
			bool bWorldSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventGetTileCenterPosition_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventGetTileCenterPosition_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, LayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCenterPosition_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_LayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::NewProp_TileX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the position of the center of the specified tile\n" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the position of the center of the specified tile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTileCenterPosition", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetTileCenterPosition_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics
	{
		struct PaperTileMapComponent_eventGetTileCornerPosition_Parms
		{
			int32 TileX;
			int32 TileY;
			int32 LayerIndex;
			bool bWorldSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventGetTileCornerPosition_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventGetTileCornerPosition_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, LayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileCornerPosition_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_LayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::NewProp_TileX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the position of the top left corner of the specified tile\n" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the position of the top left corner of the specified tile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTileCornerPosition", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetTileCornerPosition_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics
	{
		struct PaperTileMapComponent_eventGetTileMapColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTileMapColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Gets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Gets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTileMapColor", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetTileMapColor_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics
	{
		struct PaperTileMapComponent_eventGetTilePolygon_Parms
		{
			int32 TileX;
			int32 TileY;
			TArray<FVector> Points;
			int32 LayerIndex;
			bool bWorldSpace;
		};
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventGetTilePolygon_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventGetTilePolygon_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, LayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventGetTilePolygon_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_LayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_TileX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the polygon for the specified tile (will be 4 or 6 vertices as a rectangle, diamond, or hexagon)\n" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Returns the polygon for the specified tile (will be 4 or 6 vertices as a rectangle, diamond, or hexagon)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "GetTilePolygon", nullptr, nullptr, sizeof(PaperTileMapComponent_eventGetTilePolygon_Parms), Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Makes the tile map asset pointed to by this component editable.  Nothing happens if it was already instanced, but\n// if the tile map is an asset reference, it is cloned to make a unique instance.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Makes the tile map asset pointed to by this component editable.  Nothing happens if it was already instanced, but\nif the tile map is an asset reference, it is cloned to make a unique instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "MakeTileMapEditable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics
	{
		struct PaperTileMapComponent_eventOwnsTileMap_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventOwnsTileMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventOwnsTileMap_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Does this component own the tile map (is it instanced instead of being an asset reference)?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Does this component own the tile map (is it instanced instead of being an asset reference)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "OwnsTileMap", nullptr, nullptr, sizeof(PaperTileMapComponent_eventOwnsTileMap_Parms), Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Rebuilds collision for the tile map\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Rebuilds collision for the tile map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "RebuildCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics
	{
		struct PaperTileMapComponent_eventResizeMap_Parms
		{
			int32 NewWidthInTiles;
			int32 NewHeightInTiles;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewHeightInTiles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewWidthInTiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewHeightInTiles = { "NewHeightInTiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventResizeMap_Parms, NewHeightInTiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewWidthInTiles = { "NewWidthInTiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventResizeMap_Parms, NewWidthInTiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewHeightInTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::NewProp_NewWidthInTiles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Resizes the tile map (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets) \n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Resizes the tile map (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "ResizeMap", nullptr, nullptr, sizeof(PaperTileMapComponent_eventResizeMap_Parms), Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics
	{
		struct PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms
		{
			float Thickness;
			bool bRebuildCollision;
		};
		static void NewProp_bRebuildCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildCollision;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms*)Obj)->bRebuildCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision = { "bRebuildCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_bRebuildCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the default thickness for any layers that don't override the collision thickness\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "CPP_Default_bRebuildCollision", "true" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the default thickness for any layers that don't override the collision thickness\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetDefaultCollisionThickness", nullptr, nullptr, sizeof(PaperTileMapComponent_eventSetDefaultCollisionThickness_Parms), Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics
	{
		struct PaperTileMapComponent_eventSetLayerCollision_Parms
		{
			int32 Layer;
			bool bHasCollision;
			bool bOverrideThickness;
			float CustomThickness;
			bool bOverrideOffset;
			float CustomOffset;
			bool bRebuildCollision;
		};
		static void NewProp_bRebuildCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildCollision;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomOffset;
		static void NewProp_bOverrideOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomThickness;
		static void NewProp_bOverrideThickness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideThickness;
		static void NewProp_bHasCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCollision;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bRebuildCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision = { "bRebuildCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerCollision_Parms, CustomOffset), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bOverrideOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset = { "bOverrideOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomThickness = { "CustomThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerCollision_Parms, CustomThickness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bOverrideThickness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness = { "bOverrideThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventSetLayerCollision_Parms*)Obj)->bHasCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision = { "bHasCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerCollision_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bRebuildCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_CustomThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bOverrideThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the collision thickness for a specific layer\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "CPP_Default_bHasCollision", "true" },
		{ "CPP_Default_bOverrideOffset", "false" },
		{ "CPP_Default_bOverrideThickness", "true" },
		{ "CPP_Default_bRebuildCollision", "true" },
		{ "CPP_Default_CustomOffset", "0.000000" },
		{ "CPP_Default_CustomThickness", "50.000000" },
		{ "CPP_Default_Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the collision thickness for a specific layer\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetLayerCollision", nullptr, nullptr, sizeof(PaperTileMapComponent_eventSetLayerCollision_Parms), Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics
	{
		struct PaperTileMapComponent_eventSetLayerColor_Parms
		{
			FLinearColor NewColor;
			int32 Layer;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerColor_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetLayerColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)\n// Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets\n" },
		{ "CPP_Default_Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)\nNote: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetLayerColor", nullptr, nullptr, sizeof(PaperTileMapComponent_eventSetLayerColor_Parms), Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics
	{
		struct PaperTileMapComponent_eventSetTile_Parms
		{
			int32 X;
			int32 Y;
			int32 Layer;
			FPaperTileInfo NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, NewValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTile_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Modifies the contents of a specified tile cell (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)\n// Note: Does not update collision by default, call RebuildCollision after all edits have been done in a frame if necessary\n" },
		{ "Layer", "0" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Modifies the contents of a specified tile cell (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)\nNote: Does not update collision by default, call RebuildCollision after all edits have been done in a frame if necessary" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetTile", nullptr, nullptr, sizeof(PaperTileMapComponent_eventSetTile_Parms), Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics
	{
		struct PaperTileMapComponent_eventSetTileMap_Parms
		{
			UPaperTileMap* NewTileMap;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTileMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperTileMapComponent_eventSetTileMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperTileMapComponent_eventSetTileMap_Parms), &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_NewTileMap = { "NewTileMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTileMap_Parms, NewTileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_NewTileMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Change the PaperTileMap used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Change the PaperTileMap used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetTileMap", nullptr, nullptr, sizeof(PaperTileMapComponent_eventSetTileMap_Parms), Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics
	{
		struct PaperTileMapComponent_eventSetTileMapColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperTileMapComponent_eventSetTileMapColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Sets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Sets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperTileMapComponent, nullptr, "SetTileMapColor", nullptr, nullptr, sizeof(PaperTileMapComponent_eventSetTileMapColor_Parms), Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister()
	{
		return UPaperTileMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPerLayerGridWhenUnselected_MetaData[];
#endif
		static void NewProp_bShowPerLayerGridWhenUnselected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPerLayerGridWhenUnselected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPerTileGridWhenUnselected_MetaData[];
#endif
		static void NewProp_bShowPerTileGridWhenUnselected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPerTileGridWhenUnselected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOutlineWhenUnselected_MetaData[];
#endif
		static void NewProp_bShowOutlineWhenUnselected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOutlineWhenUnselected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPerLayerGridWhenSelected_MetaData[];
#endif
		static void NewProp_bShowPerLayerGridWhenSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPerLayerGridWhenSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPerTileGridWhenSelected_MetaData[];
#endif
		static void NewProp_bShowPerTileGridWhenSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPerTileGridWhenSelected;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSingleLayer_MetaData[];
#endif
		static void NewProp_bUseSingleLayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSingleLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSingleLayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseSingleLayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMapColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileMapColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileLayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerTileSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultLayerTileSet;
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
	UObject* (*const Z_Construct_UClass_UPaperTileMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperTileMapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer, "AddNewLayer" }, // 1730646745
		{ &Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap, "CreateNewTileMap" }, // 2841358708
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor, "GetLayerColor" }, // 768210167
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize, "GetMapSize" }, // 1854704301
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTile, "GetTile" }, // 3233285514
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition, "GetTileCenterPosition" }, // 1373543131
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition, "GetTileCornerPosition" }, // 1239024170
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor, "GetTileMapColor" }, // 376157968
		{ &Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon, "GetTilePolygon" }, // 695739988
		{ &Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable, "MakeTileMapEditable" }, // 1828887181
		{ &Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap, "OwnsTileMap" }, // 4042147224
		{ &Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision, "RebuildCollision" }, // 1896772942
		{ &Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap, "ResizeMap" }, // 2233347998
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness, "SetDefaultCollisionThickness" }, // 3557070207
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision, "SetLayerCollision" }, // 1155227867
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor, "SetLayerColor" }, // 3448626014
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetTile, "SetTile" }, // 871452919
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap, "SetTileMap" }, // 2952278474
		{ &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor, "SetTileMapColor" }, // 3236275652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for a single instance of a UPaperTileMap asset.\n *\n * This component is created when you drag a tile map asset from the content browser into a Blueprint, or\n * contained inside of the actor created when you drag one into the level.\n *\n * NOTE: This is an beta preview class.  While not considered production-ready, it is a step beyond\n * 'experimental' and is being provided as a preview of things to come:\n *  - We will try to provide forward-compatibility for content you create.\n *  - The classes may change significantly in the future.\n *  - The code is in an early state and may not meet the desired polish / quality bar.\n *  - There is probably no documentation or example content yet.\n *  - They will be promoted out of 'beta' when they are production ready.\n *\n * @see UPrimitiveComponent, UPaperTileMap\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "PaperTileMapComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for a single instance of a UPaperTileMap asset.\n\nThis component is created when you drag a tile map asset from the content browser into a Blueprint, or\ncontained inside of the actor created when you drag one into the level.\n\nNOTE: This is an beta preview class.  While not considered production-ready, it is a step beyond\n'experimental' and is being provided as a preview of things to come:\n - We will try to provide forward-compatibility for content you create.\n - The classes may change significantly in the future.\n - The code is in an early state and may not meet the desired polish / quality bar.\n - There is probably no documentation or example content yet.\n - They will be promoted out of 'beta' when they are production ready.\n\n@see UPrimitiveComponent, UPaperTileMap" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show an outline around each layer when the component is not selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show an outline around each layer when the component is not selected?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_SetBit(void* Obj)
	{
		((UPaperTileMapComponent*)Obj)->bShowPerLayerGridWhenUnselected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected = { "bShowPerLayerGridWhenUnselected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show a tile grid when the component is not selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show a tile grid when the component is not selected?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_SetBit(void* Obj)
	{
		((UPaperTileMapComponent*)Obj)->bShowPerTileGridWhenUnselected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected = { "bShowPerTileGridWhenUnselected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show an outline around the first layer when the component is not selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show an outline around the first layer when the component is not selected?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_SetBit(void* Obj)
	{
		((UPaperTileMapComponent*)Obj)->bShowOutlineWhenUnselected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected = { "bShowOutlineWhenUnselected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show an outline around each layer when the component is selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show an outline around each layer when the component is selected?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_SetBit(void* Obj)
	{
		((UPaperTileMapComponent*)Obj)->bShowPerLayerGridWhenSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected = { "bShowPerLayerGridWhenSelected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should this component show a tile grid when the component is selected?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should this component show a tile grid when the component is selected?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_SetBit(void* Obj)
	{
		((UPaperTileMapComponent*)Obj)->bShowPerTileGridWhenSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected = { "bShowPerTileGridWhenSelected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// The tile map used by this component\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "The tile map used by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap = { "TileMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Should we draw a single layer?\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "Should we draw a single layer?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_SetBit(void* Obj)
	{
		((UPaperTileMapComponent*)Obj)->bUseSingleLayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer = { "bUseSingleLayer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperTileMapComponent), &Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// The index of the single layer to use if enabled\n" },
		{ "EditCondition", "bUseSingleLayer" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "The index of the single layer to use if enabled" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex = { "UseSingleLayerIndex", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, UseSingleLayerIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "// The color of the tile map (multiplied with the per-layer color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
		{ "ToolTip", "The color of the tile map (multiplied with the per-layer color and passed to the material as a vertex color)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor = { "TileMapColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileMapColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers = { "TileLayers", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileLayers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_Inner = { "TileLayers", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperTileLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, Material_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet = { "DefaultLayerTileSet", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, DefaultLayerTileSet_DEPRECATED), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, TileWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, MapHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileMapComponent, MapWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenUnselected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenUnselected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowOutlineWhenUnselected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerLayerGridWhenSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bShowPerTileGridWhenSelected,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_UseSingleLayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileMapColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_DefaultLayerTileSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_TileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_MapWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileMapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileMapComponent_Statics::ClassParams = {
		&UPaperTileMapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperTileMapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperTileMapComponent, 2006124200);
	template<> PAPER2D_API UClass* StaticClass<UPaperTileMapComponent>()
	{
		return UPaperTileMapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperTileMapComponent(Z_Construct_UClass_UPaperTileMapComponent, &UPaperTileMapComponent::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperTileMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileMapComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMapComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
