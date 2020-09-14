// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTileLayer_generated_h
#error "PaperTileLayer.generated.h already included, missing '#pragma once' in PaperTileLayer.h"
#endif
#define PAPER2D_PaperTileLayer_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperTileInfo_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperTileInfo>();

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTileLayer(); \
	friend struct Z_Construct_UClass_UPaperTileLayer_Statics; \
public: \
	DECLARE_CLASS(UPaperTileLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileLayer)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileLayer(); \
	friend struct Z_Construct_UClass_UPaperTileLayer_Statics; \
public: \
	DECLARE_CLASS(UPaperTileLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileLayer)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileLayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileLayer(UPaperTileLayer&&); \
	NO_API UPaperTileLayer(const UPaperTileLayer&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileLayer(UPaperTileLayer&&); \
	NO_API UPaperTileLayer(const UPaperTileLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileLayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileLayer)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LayerWidth() { return STRUCT_OFFSET(UPaperTileLayer, LayerWidth); } \
	FORCEINLINE static uint32 __PPO__LayerHeight() { return STRUCT_OFFSET(UPaperTileLayer, LayerHeight); } \
	FORCEINLINE static uint32 __PPO__CollisionThicknessOverride() { return STRUCT_OFFSET(UPaperTileLayer, CollisionThicknessOverride); } \
	FORCEINLINE static uint32 __PPO__CollisionOffsetOverride() { return STRUCT_OFFSET(UPaperTileLayer, CollisionOffsetOverride); } \
	FORCEINLINE static uint32 __PPO__LayerColor() { return STRUCT_OFFSET(UPaperTileLayer, LayerColor); } \
	FORCEINLINE static uint32 __PPO__AllocatedWidth() { return STRUCT_OFFSET(UPaperTileLayer, AllocatedWidth); } \
	FORCEINLINE static uint32 __PPO__AllocatedHeight() { return STRUCT_OFFSET(UPaperTileLayer, AllocatedHeight); } \
	FORCEINLINE static uint32 __PPO__AllocatedCells() { return STRUCT_OFFSET(UPaperTileLayer, AllocatedCells); } \
	FORCEINLINE static uint32 __PPO__TileSet_DEPRECATED() { return STRUCT_OFFSET(UPaperTileLayer, TileSet_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__AllocatedGrid_DEPRECATED() { return STRUCT_OFFSET(UPaperTileLayer, AllocatedGrid_DEPRECATED); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_107_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_110_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileLayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
