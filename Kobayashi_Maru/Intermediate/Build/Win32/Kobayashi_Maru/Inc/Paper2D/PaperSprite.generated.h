// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperSprite_generated_h
#error "PaperSprite.generated.h already included, missing '#pragma once' in PaperSprite.h"
#endif
#define PAPER2D_PaperSprite_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperSpriteSocket>();

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSprite, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperSprite(); \
	friend struct Z_Construct_UClass_UPaperSprite_Statics; \
public: \
	DECLARE_CLASS(UPaperSprite, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperSprite) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPaperSprite*>(this); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUPaperSprite(); \
	friend struct Z_Construct_UClass_UPaperSprite_Statics; \
public: \
	DECLARE_CLASS(UPaperSprite, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperSprite) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPaperSprite*>(this); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSprite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSprite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSprite); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSprite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperSprite(UPaperSprite&&); \
	NO_API UPaperSprite(const UPaperSprite&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSprite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperSprite(UPaperSprite&&); \
	NO_API UPaperSprite(const UPaperSprite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSprite); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSprite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSprite)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AdditionalSourceTextures() { return STRUCT_OFFSET(UPaperSprite, AdditionalSourceTextures); } \
	FORCEINLINE static uint32 __PPO__BakedSourceUV() { return STRUCT_OFFSET(UPaperSprite, BakedSourceUV); } \
	FORCEINLINE static uint32 __PPO__BakedSourceDimension() { return STRUCT_OFFSET(UPaperSprite, BakedSourceDimension); } \
	FORCEINLINE static uint32 __PPO__BakedSourceTexture() { return STRUCT_OFFSET(UPaperSprite, BakedSourceTexture); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterial() { return STRUCT_OFFSET(UPaperSprite, DefaultMaterial); } \
	FORCEINLINE static uint32 __PPO__AlternateMaterial() { return STRUCT_OFFSET(UPaperSprite, AlternateMaterial); } \
	FORCEINLINE static uint32 __PPO__Sockets() { return STRUCT_OFFSET(UPaperSprite, Sockets); } \
	FORCEINLINE static uint32 __PPO__SpriteCollisionDomain() { return STRUCT_OFFSET(UPaperSprite, SpriteCollisionDomain); } \
	FORCEINLINE static uint32 __PPO__PixelsPerUnrealUnit() { return STRUCT_OFFSET(UPaperSprite, PixelsPerUnrealUnit); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_43_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperSprite."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperSprite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
