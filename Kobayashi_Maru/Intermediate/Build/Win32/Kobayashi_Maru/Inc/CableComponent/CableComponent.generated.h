// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USceneComponent;
class AActor;
#ifdef CABLECOMPONENT_CableComponent_generated_h
#error "CableComponent.generated.h already included, missing '#pragma once' in CableComponent.h"
#endif
#define CABLECOMPONENT_CableComponent_generated_h

#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_SPARSE_DATA
#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execGetAttachedComponent); \
	DECLARE_FUNCTION(execGetAttachedActor); \
	DECLARE_FUNCTION(execSetAttachEndTo); \
	DECLARE_FUNCTION(execSetAttachEndToComponent);


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execGetAttachedComponent); \
	DECLARE_FUNCTION(execGetAttachedActor); \
	DECLARE_FUNCTION(execSetAttachEndTo); \
	DECLARE_FUNCTION(execSetAttachEndToComponent);


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCableComponent(); \
	friend struct Z_Construct_UClass_UCableComponent_Statics; \
public: \
	DECLARE_CLASS(UCableComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), NO_API) \
	DECLARE_SERIALIZER(UCableComponent)


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUCableComponent(); \
	friend struct Z_Construct_UClass_UCableComponent_Statics; \
public: \
	DECLARE_CLASS(UCableComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), NO_API) \
	DECLARE_SERIALIZER(UCableComponent)


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCableComponent(UCableComponent&&); \
	NO_API UCableComponent(const UCableComponent&); \
public:


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCableComponent(UCableComponent&&); \
	NO_API UCableComponent(const UCableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCableComponent)


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_PROLOG
#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_SPARSE_DATA \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_SPARSE_DATA \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CableComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CABLECOMPONENT_API UClass* StaticClass<class UCableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
