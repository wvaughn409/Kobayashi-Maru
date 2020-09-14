// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTransform;
struct FRotator;
class UPrimitiveComponent;
#ifdef ENGINE_PhysicsConstraintComponent_generated_h
#error "PhysicsConstraintComponent.generated.h already included, missing '#pragma once' in PhysicsConstraintComponent.h"
#endif
#define ENGINE_PhysicsConstraintComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execGetConstraintForce); \
	DECLARE_FUNCTION(execSetDisableCollision); \
	DECLARE_FUNCTION(execSetConstraintReferenceOrientation); \
	DECLARE_FUNCTION(execSetConstraintReferencePosition); \
	DECLARE_FUNCTION(execSetConstraintReferenceFrame); \
	DECLARE_FUNCTION(execGetCurrentSwing2); \
	DECLARE_FUNCTION(execGetCurrentSwing1); \
	DECLARE_FUNCTION(execGetCurrentTwist); \
	DECLARE_FUNCTION(execSetAngularBreakable); \
	DECLARE_FUNCTION(execSetLinearBreakable); \
	DECLARE_FUNCTION(execSetAngularTwistLimit); \
	DECLARE_FUNCTION(execSetAngularSwing2Limit); \
	DECLARE_FUNCTION(execSetAngularSwing1Limit); \
	DECLARE_FUNCTION(execSetLinearZLimit); \
	DECLARE_FUNCTION(execSetLinearYLimit); \
	DECLARE_FUNCTION(execSetLinearXLimit); \
	DECLARE_FUNCTION(execSetAngularDriveParams); \
	DECLARE_FUNCTION(execSetAngularVelocityTarget); \
	DECLARE_FUNCTION(execSetAngularOrientationTarget); \
	DECLARE_FUNCTION(execSetLinearDriveParams); \
	DECLARE_FUNCTION(execSetLinearVelocityTarget); \
	DECLARE_FUNCTION(execSetLinearPositionTarget); \
	DECLARE_FUNCTION(execSetAngularDriveMode); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularVelocityDrive); \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularOrientationDrive); \
	DECLARE_FUNCTION(execSetLinearVelocityDrive); \
	DECLARE_FUNCTION(execSetLinearPositionDrive); \
	DECLARE_FUNCTION(execBreakConstraint); \
	DECLARE_FUNCTION(execSetConstrainedComponents);


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execGetConstraintForce); \
	DECLARE_FUNCTION(execSetDisableCollision); \
	DECLARE_FUNCTION(execSetConstraintReferenceOrientation); \
	DECLARE_FUNCTION(execSetConstraintReferencePosition); \
	DECLARE_FUNCTION(execSetConstraintReferenceFrame); \
	DECLARE_FUNCTION(execGetCurrentSwing2); \
	DECLARE_FUNCTION(execGetCurrentSwing1); \
	DECLARE_FUNCTION(execGetCurrentTwist); \
	DECLARE_FUNCTION(execSetAngularBreakable); \
	DECLARE_FUNCTION(execSetLinearBreakable); \
	DECLARE_FUNCTION(execSetAngularTwistLimit); \
	DECLARE_FUNCTION(execSetAngularSwing2Limit); \
	DECLARE_FUNCTION(execSetAngularSwing1Limit); \
	DECLARE_FUNCTION(execSetLinearZLimit); \
	DECLARE_FUNCTION(execSetLinearYLimit); \
	DECLARE_FUNCTION(execSetLinearXLimit); \
	DECLARE_FUNCTION(execSetAngularDriveParams); \
	DECLARE_FUNCTION(execSetAngularVelocityTarget); \
	DECLARE_FUNCTION(execSetAngularOrientationTarget); \
	DECLARE_FUNCTION(execSetLinearDriveParams); \
	DECLARE_FUNCTION(execSetLinearVelocityTarget); \
	DECLARE_FUNCTION(execSetLinearPositionTarget); \
	DECLARE_FUNCTION(execSetAngularDriveMode); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularVelocityDrive); \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularOrientationDrive); \
	DECLARE_FUNCTION(execSetLinearVelocityDrive); \
	DECLARE_FUNCTION(execSetLinearPositionDrive); \
	DECLARE_FUNCTION(execBreakConstraint); \
	DECLARE_FUNCTION(execSetConstrainedComponents);


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsConstraintComponent(UPhysicsConstraintComponent&&); \
	NO_API UPhysicsConstraintComponent(const UPhysicsConstraintComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsConstraintComponent(UPhysicsConstraintComponent&&); \
	NO_API UPhysicsConstraintComponent(const UPhysicsConstraintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsConstraintComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
