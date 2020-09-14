// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class AActor;
#ifdef VARIANTMANAGERCONTENT_Variant_generated_h
#error "Variant.generated.h already included, missing '#pragma once' in Variant.h"
#endif
#define VARIANTMANAGERCONTENT_Variant_generated_h

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_SPARSE_DATA
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSwitchOn); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execGetNumActors); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText);


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSwitchOn); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execGetNumActors); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText);


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVariant, NO_API)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVariant(); \
	friend struct Z_Construct_UClass_UVariant_Statics; \
public: \
	DECLARE_CLASS(UVariant, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UVariant) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVariant(); \
	friend struct Z_Construct_UClass_UVariant_Statics; \
public: \
	DECLARE_CLASS(UVariant, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UVariant) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariant(UVariant&&); \
	NO_API UVariant(const UVariant&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariant(UVariant&&); \
	NO_API UVariant(const UVariant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariant)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayText_DEPRECATED() { return STRUCT_OFFSET(UVariant, DisplayText_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__ObjectBindings() { return STRUCT_OFFSET(UVariant, ObjectBindings); } \
	FORCEINLINE static uint32 __PPO__Thumbnail() { return STRUCT_OFFSET(UVariant, Thumbnail); }


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_15_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Variant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class UVariant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
