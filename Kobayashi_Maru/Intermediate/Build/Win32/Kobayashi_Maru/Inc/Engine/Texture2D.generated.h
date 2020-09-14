// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Texture2D_generated_h
#error "Texture2D.generated.h already included, missing '#pragma once' in Texture2D.h"
#endif
#define ENGINE_Texture2D_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlueprint_GetSizeY); \
	DECLARE_FUNCTION(execBlueprint_GetSizeX);


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlueprint_GetSizeY); \
	DECLARE_FUNCTION(execBlueprint_GetSizeX);


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2D, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexture2D(); \
	friend struct Z_Construct_UClass_UTexture2D_Statics; \
public: \
	DECLARE_CLASS(UTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2D) \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2D(); \
	friend struct Z_Construct_UClass_UTexture2D_Statics; \
public: \
	DECLARE_CLASS(UTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2D) \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture2D(UTexture2D&&); \
	ENGINE_API UTexture2D(const UTexture2D&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture2D(UTexture2D&&); \
	ENGINE_API UTexture2D(const UTexture2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2D)


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImportedSize() { return STRUCT_OFFSET(UTexture2D, ImportedSize); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Texture2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
