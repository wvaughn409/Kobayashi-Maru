// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperGroupedSpriteActor_generated_h
#error "PaperGroupedSpriteActor.generated.h already included, missing '#pragma once' in PaperGroupedSpriteActor.h"
#endif
#define PAPER2D_PaperGroupedSpriteActor_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaperGroupedSpriteActor(); \
	friend struct Z_Construct_UClass_APaperGroupedSpriteActor_Statics; \
public: \
	DECLARE_CLASS(APaperGroupedSpriteActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperGroupedSpriteActor)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPaperGroupedSpriteActor(); \
	friend struct Z_Construct_UClass_APaperGroupedSpriteActor_Statics; \
public: \
	DECLARE_CLASS(APaperGroupedSpriteActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperGroupedSpriteActor)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperGroupedSpriteActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperGroupedSpriteActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperGroupedSpriteActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperGroupedSpriteActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperGroupedSpriteActor(APaperGroupedSpriteActor&&); \
	NO_API APaperGroupedSpriteActor(const APaperGroupedSpriteActor&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperGroupedSpriteActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperGroupedSpriteActor(APaperGroupedSpriteActor&&); \
	NO_API APaperGroupedSpriteActor(const APaperGroupedSpriteActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperGroupedSpriteActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperGroupedSpriteActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperGroupedSpriteActor)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RenderComponent() { return STRUCT_OFFSET(APaperGroupedSpriteActor, RenderComponent); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_18_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperGroupedSpriteActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class APaperGroupedSpriteActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
