// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Texture2DArray_generated_h
#error "Texture2DArray.generated.h already included, missing '#pragma once' in Texture2DArray.h"
#endif
#define ENGINE_Texture2DArray_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2DArray, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexture2DArray(); \
	friend struct Z_Construct_UClass_UTexture2DArray_Statics; \
public: \
	DECLARE_CLASS(UTexture2DArray, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2DArray) \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2DArray(); \
	friend struct Z_Construct_UClass_UTexture2DArray_Statics; \
public: \
	DECLARE_CLASS(UTexture2DArray, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2DArray) \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2DArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2DArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2DArray); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2DArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture2DArray(UTexture2DArray&&); \
	ENGINE_API UTexture2DArray(const UTexture2DArray&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2DArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture2DArray(UTexture2DArray&&); \
	ENGINE_API UTexture2DArray(const UTexture2DArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2DArray); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2DArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2DArray)


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Texture2DArray."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture2DArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
