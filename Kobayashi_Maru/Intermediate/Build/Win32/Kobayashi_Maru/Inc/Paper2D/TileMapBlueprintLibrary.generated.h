// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperTileSet;
struct FPaperTileInfo;
struct FTransform;
#ifdef PAPER2D_TileMapBlueprintLibrary_generated_h
#error "TileMapBlueprintLibrary.generated.h already included, missing '#pragma once' in TileMapBlueprintLibrary.h"
#endif
#define PAPER2D_TileMapBlueprintLibrary_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeTile); \
	DECLARE_FUNCTION(execBreakTile); \
	DECLARE_FUNCTION(execGetTileTransform); \
	DECLARE_FUNCTION(execGetTileUserData);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeTile); \
	DECLARE_FUNCTION(execBreakTile); \
	DECLARE_FUNCTION(execGetTileTransform); \
	DECLARE_FUNCTION(execGetTileUserData);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileMapBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTileMapBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTileMapBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UTileMapBlueprintLibrary)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTileMapBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTileMapBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTileMapBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UTileMapBlueprintLibrary)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileMapBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileMapBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileMapBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileMapBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileMapBlueprintLibrary(UTileMapBlueprintLibrary&&); \
	NO_API UTileMapBlueprintLibrary(const UTileMapBlueprintLibrary&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileMapBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileMapBlueprintLibrary(UTileMapBlueprintLibrary&&); \
	NO_API UTileMapBlueprintLibrary(const UTileMapBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileMapBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileMapBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileMapBlueprintLibrary)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_18_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UTileMapBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
