// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileSet() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileSetTerrain();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileMetadata();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FIntMargin();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FPaperTileSetTerrain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperTileSetTerrain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileSetTerrain, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileSetTerrain"), sizeof(FPaperTileSetTerrain), Get_Z_Construct_UScriptStruct_FPaperTileSetTerrain_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileSetTerrain>()
{
	return FPaperTileSetTerrain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperTileSetTerrain(FPaperTileSetTerrain::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperTileSetTerrain"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperTileSetTerrain
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperTileSetTerrain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperTileSetTerrain")),new UScriptStruct::TCppStructOps<FPaperTileSetTerrain>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperTileSetTerrain;
	struct Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterTileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CenterTileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TerrainName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information about a terrain type\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Information about a terrain type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileSetTerrain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex = { "CenterTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTileSetTerrain, CenterTileIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName = { "TerrainName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTileSetTerrain, TerrainName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTileSetTerrain",
		sizeof(FPaperTileSetTerrain),
		alignof(FPaperTileSetTerrain),
		Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTileSetTerrain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperTileSetTerrain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperTileSetTerrain"), sizeof(FPaperTileSetTerrain), Get_Z_Construct_UScriptStruct_FPaperTileSetTerrain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperTileSetTerrain_Hash() { return 1488247925U; }
class UScriptStruct* FPaperTileMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperTileMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileMetadata, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileMetadata"), sizeof(FPaperTileMetadata), Get_Z_Construct_UScriptStruct_FPaperTileMetadata_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileMetadata>()
{
	return FPaperTileMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperTileMetadata(FPaperTileMetadata::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperTileMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperTileMetadata
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperTileMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperTileMetadata")),new UScriptStruct::TCppStructOps<FPaperTileMetadata>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperTileMetadata;
	struct Z_Construct_UScriptStruct_FPaperTileMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainMembership_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TerrainMembership;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UserDataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Information about a single tile in a tile set\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Information about a single tile in a tile set" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership_MetaData[] = {
		{ "Comment", "// Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left\n// 0xFF indicates no membership.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left\n0xFF indicates no membership." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership = { "TerrainMembership", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TerrainMembership, FPaperTileMetadata), STRUCT_OFFSET(FPaperTileMetadata, TerrainMembership), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Collision data for the tile\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Collision data for the tile" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTileMetadata, CollisionData), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset).\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset)." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName = { "UserDataName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTileMetadata, UserDataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTileMetadata",
		sizeof(FPaperTileMetadata),
		alignof(FPaperTileMetadata),
		Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTileMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperTileMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperTileMetadata"), sizeof(FPaperTileMetadata), Get_Z_Construct_UScriptStruct_FPaperTileMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperTileMetadata_Hash() { return 2365719933U; }
	void UPaperTileSet::StaticRegisterNativesUPaperTileSet()
	{
	}
	UClass* Z_Construct_UClass_UPaperTileSet_NoRegister()
	{
		return UPaperTileSet::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Terrains_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Terrains;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Terrains_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerTileData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerTileData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerTileData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllocatedHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllocatedWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightInTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeightInTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthInTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WidthInTiles;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawingOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawingOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerTileSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerTileSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalSourceTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalSourceTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalSourceTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.\n *\n * @see UPaperTileMap, UPaperTileMapComponent\n */" },
		{ "IncludePath", "PaperTileSet.h" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.\n\n@see UPaperTileMap, UPaperTileMapComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, Spacing_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, Margin_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, TileHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, TileWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_MetaData[] = {
		{ "Comment", "// Terrain information\n//@TODO: TileMapTerrains: (EditAnywhere, Category=Sprite)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Terrain information\n@TODO: TileMapTerrains: (EditAnywhere, Category=Sprite)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains = { "Terrains", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, Terrains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_Inner = { "Terrains", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperTileSetTerrain, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Per-tile information\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Per-tile information" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData = { "PerTileData", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, PerTileData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_Inner = { "PerTileData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperTileMetadata, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight_MetaData[] = {
		{ "Comment", "// Allocated height of the per-tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Allocated height of the per-tile data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight = { "AllocatedHeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, AllocatedHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth_MetaData[] = {
		{ "Comment", "// Allocated width of the per-tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Allocated width of the per-tile data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth = { "AllocatedWidth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, AllocatedWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles_MetaData[] = {
		{ "Comment", "// Cached height of this tile set (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Cached height of this tile set (in tiles)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles = { "HeightInTiles", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, HeightInTiles), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles_MetaData[] = {
		{ "Comment", "// Cached width of this tile set (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Cached width of this tile set (in tiles)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles = { "WidthInTiles", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, WidthInTiles), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "/** The background color displayed in the tile set viewer */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The background color displayed in the tile set viewer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "// The drawing offset for tiles from this set (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The drawing offset for tiles from this set (in pixels)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset = { "DrawingOffset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, DrawingOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of padding between tiles in the tile sheet (in pixels)\n" },
		{ "DisplayName", "Per-Tile Spacing" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The amount of padding between tiles in the tile sheet (in pixels)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing = { "PerTileSpacing", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, PerTileSpacing), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of padding around the border of the tile sheet (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The amount of padding around the border of the tile sheet (in pixels)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin = { "BorderMargin", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, BorderMargin), Z_Construct_UScriptStruct_FIntMargin, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_MetaData[] = {
		{ "Category", "TileSet" },
		{ "Comment", "// Additional source textures for other slots\n" },
		{ "DisplayName", "Additional Textures" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Additional source textures for other slots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0040010000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, AdditionalSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_Inner = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "// The tile sheet texture associated with this tile set\n" },
		{ "DisplayName", "Tile Sheet Texture" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The tile sheet texture associated with this tile set" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet = { "TileSheet", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, TileSheet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "1" },
		{ "Comment", "// The width and height of a single tile (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The width and height of a single tile (in pixels)" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTileSet, TileSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileSet_Statics::ClassParams = {
		&UPaperTileSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTileSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperTileSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperTileSet, 3042655767);
	template<> PAPER2D_API UClass* StaticClass<UPaperTileSet>()
	{
		return UPaperTileSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperTileSet(Z_Construct_UClass_UPaperTileSet, &UPaperTileSet::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperTileSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileSet);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileSet)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
