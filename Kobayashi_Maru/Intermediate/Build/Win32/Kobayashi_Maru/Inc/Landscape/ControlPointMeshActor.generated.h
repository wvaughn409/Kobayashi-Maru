// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_ControlPointMeshActor_generated_h
#error "ControlPointMeshActor.generated.h already included, missing '#pragma once' in ControlPointMeshActor.h"
#endif
#define LANDSCAPE_ControlPointMeshActor_generated_h

#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControlPointMeshActor(); \
	friend struct Z_Construct_UClass_AControlPointMeshActor_Statics; \
public: \
	DECLARE_CLASS(AControlPointMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(AControlPointMeshActor)


#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAControlPointMeshActor(); \
	friend struct Z_Construct_UClass_AControlPointMeshActor_Statics; \
public: \
	DECLARE_CLASS(AControlPointMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(AControlPointMeshActor)


#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControlPointMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlPointMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlPointMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlPointMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControlPointMeshActor(AControlPointMeshActor&&); \
	NO_API AControlPointMeshActor(const AControlPointMeshActor&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControlPointMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControlPointMeshActor(AControlPointMeshActor&&); \
	NO_API AControlPointMeshActor(const AControlPointMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlPointMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlPointMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlPointMeshActor)


#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ControlPointMeshComponent() { return STRUCT_OFFSET(AControlPointMeshActor, ControlPointMeshComponent); }


#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_15_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ControlPointMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class AControlPointMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
