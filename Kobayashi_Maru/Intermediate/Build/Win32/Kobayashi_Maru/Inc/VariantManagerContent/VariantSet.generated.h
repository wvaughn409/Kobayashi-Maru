// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVariant;
#ifdef VARIANTMANAGERCONTENT_VariantSet_generated_h
#error "VariantSet.generated.h already included, missing '#pragma once' in VariantSet.h"
#endif
#define VARIANTMANAGERCONTENT_VariantSet_generated_h

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_SPARSE_DATA
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVariantByName); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetNumVariants); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText);


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVariantByName); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetNumVariants); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText);


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantSet, NO_API)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVariantSet(); \
	friend struct Z_Construct_UClass_UVariantSet_Statics; \
public: \
	DECLARE_CLASS(UVariantSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UVariantSet) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVariantSet(); \
	friend struct Z_Construct_UClass_UVariantSet_Statics; \
public: \
	DECLARE_CLASS(UVariantSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UVariantSet) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariantSet(UVariantSet&&); \
	NO_API UVariantSet(const UVariantSet&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariantSet(UVariantSet&&); \
	NO_API UVariantSet(const UVariantSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantSet)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayText_DEPRECATED() { return STRUCT_OFFSET(UVariantSet, DisplayText_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bExpanded() { return STRUCT_OFFSET(UVariantSet, bExpanded); } \
	FORCEINLINE static uint32 __PPO__Variants() { return STRUCT_OFFSET(UVariantSet, Variants); }


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_13_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VariantSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class UVariantSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
