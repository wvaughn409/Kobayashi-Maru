// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTileSet_generated_h
#error "PaperTileSet.generated.h already included, missing '#pragma once' in PaperTileSet.h"
#endif
#define PAPER2D_PaperTileSet_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperTileSetTerrain>();

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperTileMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperTileMetadata>();

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileSet, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTileSet(); \
	friend struct Z_Construct_UClass_UPaperTileSet_Statics; \
public: \
	DECLARE_CLASS(UPaperTileSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileSet) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileSet(); \
	friend struct Z_Construct_UClass_UPaperTileSet_Statics; \
public: \
	DECLARE_CLASS(UPaperTileSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileSet) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileSet(UPaperTileSet&&); \
	NO_API UPaperTileSet(const UPaperTileSet&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileSet(UPaperTileSet&&); \
	NO_API UPaperTileSet(const UPaperTileSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileSet)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileSize() { return STRUCT_OFFSET(UPaperTileSet, TileSize); } \
	FORCEINLINE static uint32 __PPO__TileSheet() { return STRUCT_OFFSET(UPaperTileSet, TileSheet); } \
	FORCEINLINE static uint32 __PPO__AdditionalSourceTextures() { return STRUCT_OFFSET(UPaperTileSet, AdditionalSourceTextures); } \
	FORCEINLINE static uint32 __PPO__BorderMargin() { return STRUCT_OFFSET(UPaperTileSet, BorderMargin); } \
	FORCEINLINE static uint32 __PPO__PerTileSpacing() { return STRUCT_OFFSET(UPaperTileSet, PerTileSpacing); } \
	FORCEINLINE static uint32 __PPO__DrawingOffset() { return STRUCT_OFFSET(UPaperTileSet, DrawingOffset); } \
	FORCEINLINE static uint32 __PPO__WidthInTiles() { return STRUCT_OFFSET(UPaperTileSet, WidthInTiles); } \
	FORCEINLINE static uint32 __PPO__HeightInTiles() { return STRUCT_OFFSET(UPaperTileSet, HeightInTiles); } \
	FORCEINLINE static uint32 __PPO__AllocatedWidth() { return STRUCT_OFFSET(UPaperTileSet, AllocatedWidth); } \
	FORCEINLINE static uint32 __PPO__AllocatedHeight() { return STRUCT_OFFSET(UPaperTileSet, AllocatedHeight); } \
	FORCEINLINE static uint32 __PPO__PerTileData() { return STRUCT_OFFSET(UPaperTileSet, PerTileData); } \
	FORCEINLINE static uint32 __PPO__Terrains() { return STRUCT_OFFSET(UPaperTileSet, Terrains); } \
	FORCEINLINE static uint32 __PPO__TileWidth_DEPRECATED() { return STRUCT_OFFSET(UPaperTileSet, TileWidth_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileHeight_DEPRECATED() { return STRUCT_OFFSET(UPaperTileSet, TileHeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__Margin_DEPRECATED() { return STRUCT_OFFSET(UPaperTileSet, Margin_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__Spacing_DEPRECATED() { return STRUCT_OFFSET(UPaperTileSet, Spacing_DEPRECATED); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_77_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
