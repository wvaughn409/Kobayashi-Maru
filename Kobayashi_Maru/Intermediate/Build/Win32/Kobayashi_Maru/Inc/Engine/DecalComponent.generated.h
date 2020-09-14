// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef ENGINE_DecalComponent_generated_h
#error "DecalComponent.generated.h already included, missing '#pragma once' in DecalComponent.h"
#endif
#define ENGINE_DecalComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial); \
	DECLARE_FUNCTION(execSetSortOrder); \
	DECLARE_FUNCTION(execSetFadeScreenSize); \
	DECLARE_FUNCTION(execSetFadeIn); \
	DECLARE_FUNCTION(execSetFadeOut); \
	DECLARE_FUNCTION(execGetFadeInDuration); \
	DECLARE_FUNCTION(execGetFadeInStartDelay); \
	DECLARE_FUNCTION(execGetFadeDuration); \
	DECLARE_FUNCTION(execGetFadeStartDelay);


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial); \
	DECLARE_FUNCTION(execSetSortOrder); \
	DECLARE_FUNCTION(execSetFadeScreenSize); \
	DECLARE_FUNCTION(execSetFadeIn); \
	DECLARE_FUNCTION(execSetFadeOut); \
	DECLARE_FUNCTION(execGetFadeInDuration); \
	DECLARE_FUNCTION(execGetFadeInStartDelay); \
	DECLARE_FUNCTION(execGetFadeDuration); \
	DECLARE_FUNCTION(execGetFadeStartDelay);


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDecalComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecalComponent(); \
	friend struct Z_Construct_UClass_UDecalComponent_Statics; \
public: \
	DECLARE_CLASS(UDecalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDecalComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDecalComponent(); \
	friend struct Z_Construct_UClass_UDecalComponent_Statics; \
public: \
	DECLARE_CLASS(UDecalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDecalComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecalComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecalComponent(UDecalComponent&&); \
	NO_API UDecalComponent(const UDecalComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecalComponent(UDecalComponent&&); \
	NO_API UDecalComponent(const UDecalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecalComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecalComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecalComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecalMaterial() { return STRUCT_OFFSET(UDecalComponent, DecalMaterial); }


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DecalComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDecalComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
