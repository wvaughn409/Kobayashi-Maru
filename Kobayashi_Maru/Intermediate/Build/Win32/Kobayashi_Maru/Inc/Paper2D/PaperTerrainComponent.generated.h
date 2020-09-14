// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef PAPER2D_PaperTerrainComponent_generated_h
#error "PaperTerrainComponent.generated.h already included, missing '#pragma once' in PaperTerrainComponent.h"
#endif
#define PAPER2D_PaperTerrainComponent_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTerrainColor);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTerrainColor);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTerrainComponent, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTerrainComponent(); \
	friend struct Z_Construct_UClass_UPaperTerrainComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTerrainComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTerrainComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTerrainComponent(); \
	friend struct Z_Construct_UClass_UPaperTerrainComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTerrainComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTerrainComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTerrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTerrainComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTerrainComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTerrainComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTerrainComponent(UPaperTerrainComponent&&); \
	NO_API UPaperTerrainComponent(const UPaperTerrainComponent&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTerrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTerrainComponent(UPaperTerrainComponent&&); \
	NO_API UPaperTerrainComponent(const UPaperTerrainComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTerrainComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTerrainComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTerrainComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TerrainColor() { return STRUCT_OFFSET(UPaperTerrainComponent, TerrainColor); } \
	FORCEINLINE static uint32 __PPO__ReparamStepsPerSegment() { return STRUCT_OFFSET(UPaperTerrainComponent, ReparamStepsPerSegment); } \
	FORCEINLINE static uint32 __PPO__SpriteCollisionDomain() { return STRUCT_OFFSET(UPaperTerrainComponent, SpriteCollisionDomain); } \
	FORCEINLINE static uint32 __PPO__CollisionThickness() { return STRUCT_OFFSET(UPaperTerrainComponent, CollisionThickness); } \
	FORCEINLINE static uint32 __PPO__CachedBodySetup() { return STRUCT_OFFSET(UPaperTerrainComponent, CachedBodySetup); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_50_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTerrainComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTerrainComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
