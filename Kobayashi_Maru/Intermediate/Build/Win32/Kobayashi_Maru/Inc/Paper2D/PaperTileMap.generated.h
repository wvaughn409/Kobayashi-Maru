// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTileMap_generated_h
#error "PaperTileMap.generated.h already included, missing '#pragma once' in PaperTileMap.h"
#endif
#define PAPER2D_PaperTileMap_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMap, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTileMap(); \
	friend struct Z_Construct_UClass_UPaperTileMap_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMap) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileMap(); \
	friend struct Z_Construct_UClass_UPaperTileMap_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMap) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMap(UPaperTileMap&&); \
	NO_API UPaperTileMap(const UPaperTileMap&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMap(UPaperTileMap&&); \
	NO_API UPaperTileMap(const UPaperTileMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMap)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionThickness() { return STRUCT_OFFSET(UPaperTileMap, CollisionThickness); } \
	FORCEINLINE static uint32 __PPO__SpriteCollisionDomain() { return STRUCT_OFFSET(UPaperTileMap, SpriteCollisionDomain); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_37_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileMap."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h


#define FOREACH_ENUM_ETILEMAPPROJECTIONMODE(op) \
	op(ETileMapProjectionMode::Orthogonal) \
	op(ETileMapProjectionMode::IsometricDiamond) \
	op(ETileMapProjectionMode::IsometricStaggered) \
	op(ETileMapProjectionMode::HexagonalStaggered) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
