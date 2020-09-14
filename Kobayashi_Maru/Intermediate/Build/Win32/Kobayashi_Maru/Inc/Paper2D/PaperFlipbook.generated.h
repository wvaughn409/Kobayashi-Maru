// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
#ifdef PAPER2D_PaperFlipbook_generated_h
#error "PaperFlipbook.generated.h already included, missing '#pragma once' in PaperFlipbook.h"
#endif
#define PAPER2D_PaperFlipbook_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperFlipbookKeyFrame>();

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidKeyFrameIndex); \
	DECLARE_FUNCTION(execGetNumKeyFrames); \
	DECLARE_FUNCTION(execGetSpriteAtFrame); \
	DECLARE_FUNCTION(execGetSpriteAtTime); \
	DECLARE_FUNCTION(execGetKeyFrameIndexAtTime); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execGetNumFrames);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidKeyFrameIndex); \
	DECLARE_FUNCTION(execGetNumKeyFrames); \
	DECLARE_FUNCTION(execGetSpriteAtFrame); \
	DECLARE_FUNCTION(execGetSpriteAtTime); \
	DECLARE_FUNCTION(execGetKeyFrameIndexAtTime); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execGetNumFrames);


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbook, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperFlipbook(); \
	friend struct Z_Construct_UClass_UPaperFlipbook_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbook, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbook) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUPaperFlipbook(); \
	friend struct Z_Construct_UClass_UPaperFlipbook_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbook, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbook) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbook(UPaperFlipbook&&); \
	NO_API UPaperFlipbook(const UPaperFlipbook&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbook(UPaperFlipbook&&); \
	NO_API UPaperFlipbook(const UPaperFlipbook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbook); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbook)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FramesPerSecond() { return STRUCT_OFFSET(UPaperFlipbook, FramesPerSecond); } \
	FORCEINLINE static uint32 __PPO__KeyFrames() { return STRUCT_OFFSET(UPaperFlipbook, KeyFrames); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterial() { return STRUCT_OFFSET(UPaperFlipbook, DefaultMaterial); } \
	FORCEINLINE static uint32 __PPO__CollisionSource() { return STRUCT_OFFSET(UPaperFlipbook, CollisionSource); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_53_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperFlipbook."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperFlipbook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h


#define FOREACH_ENUM_EFLIPBOOKCOLLISIONMODE(op) \
	op(EFlipbookCollisionMode::NoCollision) \
	op(EFlipbookCollisionMode::FirstFrameCollision) \
	op(EFlipbookCollisionMode::EachFrameCollision) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
