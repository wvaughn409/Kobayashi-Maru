// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileLayer() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FPaperTileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperTileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileInfo, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileInfo"), sizeof(FPaperTileInfo), Get_Z_Construct_UScriptStruct_FPaperTileInfo_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileInfo>()
{
	return FPaperTileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperTileInfo(FPaperTileInfo::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperTileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperTileInfo
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperTileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperTileInfo")),new UScriptStruct::TCppStructOps<FPaperTileInfo>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperTileInfo;
	struct Z_Construct_UScriptStruct_FPaperTileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedTileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PackedTileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the contents of a tile map cell\n" },
		{ "HasNativeBreak", "Paper2D.TileMapBlueprintLibrary.BreakTile" },
		{ "HasNativeMake", "Paper2D.TileMapBlueprintLibrary.MakeTile" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "This is the contents of a tile map cell" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// This is the index of the current tile within the tile set\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "This is the index of the current tile within the tile set" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex = { "PackedTileIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTileInfo, PackedTileIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The tile set that this tile comes from\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The tile set that this tile comes from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTileInfo, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_PackedTileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewProp_TileSet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTileInfo",
		sizeof(FPaperTileInfo),
		alignof(FPaperTileInfo),
		Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperTileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperTileInfo"), sizeof(FPaperTileInfo), Get_Z_Construct_UScriptStruct_FPaperTileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperTileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperTileInfo_Hash() { return 804068687U; }
	void UPaperTileLayer::StaticRegisterNativesUPaperTileLayer()
	{
	}
	UClass* Z_Construct_UClass_UPaperTileLayer_NoRegister()
	{
		return UPaperTileLayer::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllocatedGrid;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllocatedGrid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllocatedCells;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllocatedCells_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllocatedHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllocatedWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionOffsetOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionOffsetOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThicknessOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThicknessOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionOffset_MetaData[];
#endif
		static void NewProp_bOverrideCollisionOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionThickness_MetaData[];
#endif
		static void NewProp_bOverrideCollisionThickness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLayerCollides_MetaData[];
#endif
		static void NewProp_bLayerCollides_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLayerCollides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHiddenInEditor_MetaData[];
#endif
		static void NewProp_bHiddenInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHiddenInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class represents a single layer in a tile map.  All layers in the map must have the size dimensions.\n" },
		{ "IncludePath", "PaperTileLayer.h" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "This class represents a single layer in a tile map.  All layers in the map must have the size dimensions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid = { "AllocatedGrid", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedGrid_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_Inner = { "AllocatedGrid", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, TileSet_DEPRECATED), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_MetaData[] = {
		{ "Comment", "// The allocated tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The allocated tile data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells = { "AllocatedCells", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_Inner = { "AllocatedCells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight_MetaData[] = {
		{ "Comment", "// The allocated height of the tile data (used to handle resizing without data loss)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The allocated height of the tile data (used to handle resizing without data loss)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight = { "AllocatedHeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth_MetaData[] = {
		{ "Comment", "// The allocated width of the tile data (used to handle resizing without data loss)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The allocated width of the tile data (used to handle resizing without data loss)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth = { "AllocatedWidth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, AllocatedWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// The color of this layer (multiplied with the tile map color and passed to the material as a vertex color)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The color of this layer (multiplied with the tile map color and passed to the material as a vertex color)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor = { "LayerColor", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, LayerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// The override offset of the collision for this layer (when bOverrideCollisionOffset is set)\n// Note: This is measured in Unreal Units (cm) from the center of the tile map component, not from the previous layer.\n" },
		{ "EditCondition", "bOverrideCollisionOffset" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The override offset of the collision for this layer (when bOverrideCollisionOffset is set)\nNote: This is measured in Unreal Units (cm) from the center of the tile map component, not from the previous layer." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride = { "CollisionOffsetOverride", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, CollisionOffsetOverride), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// The override thickness of the collision for this layer (when bOverrideCollisionThickness is set)\n" },
		{ "EditCondition", "bOverrideCollisionThickness" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "The override thickness of the collision for this layer (when bOverrideCollisionThickness is set)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride = { "CollisionThicknessOverride", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, CollisionThicknessOverride), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer use a custom offset for generated collision instead of the layer drawing offset?\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer use a custom offset for generated collision instead of the layer drawing offset?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_SetBit(void* Obj)
	{
		((UPaperTileLayer*)Obj)->bOverrideCollisionOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset = { "bOverrideCollisionOffset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer use a custom thickness for generated collision instead of the thickness setting in the tile map?\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer use a custom thickness for generated collision instead of the thickness setting in the tile map?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_SetBit(void* Obj)
	{
		((UPaperTileLayer*)Obj)->bOverrideCollisionThickness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness = { "bOverrideCollisionThickness", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer generate collision?\n// Note: This only has an effect if the owning tile map has collision enabled\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer generate collision?\nNote: This only has an effect if the owning tile map has collision enabled" },
	};
#endif
	void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_SetBit(void* Obj)
	{
		((UPaperTileLayer*)Obj)->bLayerCollides = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides = { "bLayerCollides", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Should this layer be hidden in the game?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Should this layer be hidden in the game?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((UPaperTileLayer*)Obj)->bHiddenInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Is this layer currently hidden in the editor?\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Is this layer currently hidden in the editor?" },
	};
#endif
	void Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_SetBit(void* Obj)
	{
		((UPaperTileLayer*)Obj)->bHiddenInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor = { "bHiddenInEditor", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperTileLayer), &Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Height of the layer (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Height of the layer (in tiles)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight = { "LayerHeight", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, LayerHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "Comment", "// Width of the layer (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Width of the layer (in tiles)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth = { "LayerWidth", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, LayerWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Name of the layer\n" },
		{ "ModuleRelativePath", "Classes/PaperTileLayer.h" },
		{ "ToolTip", "Name of the layer" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileLayer, LayerName), METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedGrid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_TileSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedCells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_AllocatedWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionOffsetOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_CollisionThicknessOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileLayer_Statics::ClassParams = {
		&UPaperTileLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperTileLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperTileLayer, 1417888877);
	template<> PAPER2D_API UClass* StaticClass<UPaperTileLayer>()
	{
		return UPaperTileLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperTileLayer(Z_Construct_UClass_UPaperTileLayer, &UPaperTileLayer::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperTileLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileLayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
