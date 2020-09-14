// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperCharacter_generated_h
#error "PaperCharacter.generated.h already included, missing '#pragma once' in PaperCharacter.h"
#endif
#define PAPER2D_PaperCharacter_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaperCharacter(); \
	friend struct Z_Construct_UClass_APaperCharacter_Statics; \
public: \
	DECLARE_CLASS(APaperCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperCharacter)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPaperCharacter(); \
	friend struct Z_Construct_UClass_APaperCharacter_Statics; \
public: \
	DECLARE_CLASS(APaperCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperCharacter)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperCharacter(APaperCharacter&&); \
	NO_API APaperCharacter(const APaperCharacter&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperCharacter(APaperCharacter&&); \
	NO_API APaperCharacter(const APaperCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperCharacter)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(APaperCharacter, Sprite); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_12_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperCharacter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class APaperCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
