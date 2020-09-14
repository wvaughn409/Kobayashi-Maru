// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UPrimitiveComponent;
#ifdef ENGINE_PhysicsHandleComponent_generated_h
#error "PhysicsHandleComponent.generated.h already included, missing '#pragma once' in PhysicsHandleComponent.h"
#endif
#define ENGINE_PhysicsHandleComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInterpolationSpeed); \
	DECLARE_FUNCTION(execSetAngularStiffness); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execSetLinearStiffness); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetTargetLocationAndRotation); \
	DECLARE_FUNCTION(execSetTargetLocationAndRotation); \
	DECLARE_FUNCTION(execSetTargetRotation); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabbedComponent); \
	DECLARE_FUNCTION(execReleaseComponent); \
	DECLARE_FUNCTION(execGrabComponentAtLocationWithRotation); \
	DECLARE_FUNCTION(execGrabComponentAtLocation); \
	DECLARE_FUNCTION(execGrabComponent);


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInterpolationSpeed); \
	DECLARE_FUNCTION(execSetAngularStiffness); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execSetLinearStiffness); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetTargetLocationAndRotation); \
	DECLARE_FUNCTION(execSetTargetLocationAndRotation); \
	DECLARE_FUNCTION(execSetTargetRotation); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabbedComponent); \
	DECLARE_FUNCTION(execReleaseComponent); \
	DECLARE_FUNCTION(execGrabComponentAtLocationWithRotation); \
	DECLARE_FUNCTION(execGrabComponentAtLocation); \
	DECLARE_FUNCTION(execGrabComponent);


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsHandleComponent(); \
	friend struct Z_Construct_UClass_UPhysicsHandleComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsHandleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsHandleComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsHandleComponent(); \
	friend struct Z_Construct_UClass_UPhysicsHandleComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsHandleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsHandleComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsHandleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsHandleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsHandleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsHandleComponent(UPhysicsHandleComponent&&); \
	NO_API UPhysicsHandleComponent(const UPhysicsHandleComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsHandleComponent(UPhysicsHandleComponent&&); \
	NO_API UPhysicsHandleComponent(const UPhysicsHandleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsHandleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsHandleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsHandleComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsHandleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsHandleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
