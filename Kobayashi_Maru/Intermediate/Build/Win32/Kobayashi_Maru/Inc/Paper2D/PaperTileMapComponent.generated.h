// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FLinearColor;
class UPaperTileLayer;
struct FPaperTileInfo;
class UPaperTileMap;
#ifdef PAPER2D_PaperTileMapComponent_generated_h
#error "PaperTileMapComponent.generated.h already included, missing '#pragma once' in PaperTileMapComponent.h"
#endif
#define PAPER2D_PaperTileMapComponent_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRebuildCollision); \
	DECLARE_FUNCTION(execSetLayerCollision); \
	DECLARE_FUNCTION(execSetDefaultCollisionThickness); \
	DECLARE_FUNCTION(execGetTilePolygon); \
	DECLARE_FUNCTION(execGetTileCenterPosition); \
	DECLARE_FUNCTION(execGetTileCornerPosition); \
	DECLARE_FUNCTION(execMakeTileMapEditable); \
	DECLARE_FUNCTION(execSetLayerColor); \
	DECLARE_FUNCTION(execGetLayerColor); \
	DECLARE_FUNCTION(execSetTileMapColor); \
	DECLARE_FUNCTION(execGetTileMapColor); \
	DECLARE_FUNCTION(execAddNewLayer); \
	DECLARE_FUNCTION(execResizeMap); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execGetMapSize); \
	DECLARE_FUNCTION(execSetTileMap); \
	DECLARE_FUNCTION(execOwnsTileMap); \
	DECLARE_FUNCTION(execCreateNewTileMap);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRebuildCollision); \
	DECLARE_FUNCTION(execSetLayerCollision); \
	DECLARE_FUNCTION(execSetDefaultCollisionThickness); \
	DECLARE_FUNCTION(execGetTilePolygon); \
	DECLARE_FUNCTION(execGetTileCenterPosition); \
	DECLARE_FUNCTION(execGetTileCornerPosition); \
	DECLARE_FUNCTION(execMakeTileMapEditable); \
	DECLARE_FUNCTION(execSetLayerColor); \
	DECLARE_FUNCTION(execGetLayerColor); \
	DECLARE_FUNCTION(execSetTileMapColor); \
	DECLARE_FUNCTION(execGetTileMapColor); \
	DECLARE_FUNCTION(execAddNewLayer); \
	DECLARE_FUNCTION(execResizeMap); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execGetMapSize); \
	DECLARE_FUNCTION(execSetTileMap); \
	DECLARE_FUNCTION(execOwnsTileMap); \
	DECLARE_FUNCTION(execCreateNewTileMap);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMapComponent, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTileMapComponent(); \
	friend struct Z_Construct_UClass_UPaperTileMapComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMapComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileMapComponent(); \
	friend struct Z_Construct_UClass_UPaperTileMapComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMapComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMapComponent(UPaperTileMapComponent&&); \
	NO_API UPaperTileMapComponent(const UPaperTileMapComponent&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMapComponent(UPaperTileMapComponent&&); \
	NO_API UPaperTileMapComponent(const UPaperTileMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMapComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapWidth_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, MapWidth_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__MapHeight_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, MapHeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileWidth_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, TileWidth_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileHeight_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, TileHeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__DefaultLayerTileSet_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, DefaultLayerTileSet_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__Material_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, Material_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileLayers_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, TileLayers_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileMapColor() { return STRUCT_OFFSET(UPaperTileMapComponent, TileMapColor); } \
	FORCEINLINE static uint32 __PPO__UseSingleLayerIndex() { return STRUCT_OFFSET(UPaperTileMapComponent, UseSingleLayerIndex); } \
	FORCEINLINE static uint32 __PPO__bUseSingleLayer() { return STRUCT_OFFSET(UPaperTileMapComponent, bUseSingleLayer); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_35_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileMapComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileMapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
