// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
struct FFindFloorResult;
class ACharacter;
struct FNavAvoidanceMask;
struct FRotator;
#ifdef ENGINE_CharacterMovementComponent_generated_h
#error "CharacterMovementComponent.generated.h already included, missing '#pragma once' in CharacterMovementComponent.h"
#endif
#define ENGINE_CharacterMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCharacterMovementComponentPostPhysicsTickFunction>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFindFloorResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFindFloorResult>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTouched); \
	DECLARE_FUNCTION(execK2_ComputeFloorDist); \
	DECLARE_FUNCTION(execK2_FindFloor); \
	DECLARE_FUNCTION(execSetWalkableFloorZ); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ); \
	DECLARE_FUNCTION(execSetWalkableFloorAngle); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle); \
	DECLARE_FUNCTION(execIsWalkable); \
	DECLARE_FUNCTION(execGetValidPerchRadius); \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execClearAccumulatedForces); \
	DECLARE_FUNCTION(execGetAnalogInputModifier); \
	DECLARE_FUNCTION(execGetCurrentAcceleration); \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration); \
	DECLARE_FUNCTION(execGetMaxAcceleration); \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration); \
	DECLARE_FUNCTION(execGetMinAnalogSpeed); \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime); \
	DECLARE_FUNCTION(execGetMaxJumpHeight); \
	DECLARE_FUNCTION(execCalcVelocity); \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity); \
	DECLARE_FUNCTION(execGetMovementBase); \
	DECLARE_FUNCTION(execDisableMovement); \
	DECLARE_FUNCTION(execIsWalking); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execGetCharacterOwner); \
	DECLARE_FUNCTION(execSetAvoidanceEnabled); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execGetLastUpdateVelocity); \
	DECLARE_FUNCTION(execGetLastUpdateRotation); \
	DECLARE_FUNCTION(execGetLastUpdateLocation);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTouched); \
	DECLARE_FUNCTION(execK2_ComputeFloorDist); \
	DECLARE_FUNCTION(execK2_FindFloor); \
	DECLARE_FUNCTION(execSetWalkableFloorZ); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ); \
	DECLARE_FUNCTION(execSetWalkableFloorAngle); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle); \
	DECLARE_FUNCTION(execIsWalkable); \
	DECLARE_FUNCTION(execGetValidPerchRadius); \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execClearAccumulatedForces); \
	DECLARE_FUNCTION(execGetAnalogInputModifier); \
	DECLARE_FUNCTION(execGetCurrentAcceleration); \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration); \
	DECLARE_FUNCTION(execGetMaxAcceleration); \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration); \
	DECLARE_FUNCTION(execGetMinAnalogSpeed); \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime); \
	DECLARE_FUNCTION(execGetMaxJumpHeight); \
	DECLARE_FUNCTION(execCalcVelocity); \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity); \
	DECLARE_FUNCTION(execGetMovementBase); \
	DECLARE_FUNCTION(execDisableMovement); \
	DECLARE_FUNCTION(execIsWalking); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execGetCharacterOwner); \
	DECLARE_FUNCTION(execSetAvoidanceEnabled); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execGetLastUpdateVelocity); \
	DECLARE_FUNCTION(execGetLastUpdateRotation); \
	DECLARE_FUNCTION(execGetLastUpdateLocation);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCharacterMovementComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterOwner() { return STRUCT_OFFSET(UCharacterMovementComponent, CharacterOwner); } \
	FORCEINLINE static uint32 __PPO__WalkableFloorAngle() { return STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorAngle); } \
	FORCEINLINE static uint32 __PPO__WalkableFloorZ() { return STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorZ); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(UCharacterMovementComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__LastUpdateRotation() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateRotation); } \
	FORCEINLINE static uint32 __PPO__LastUpdateLocation() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateLocation); } \
	FORCEINLINE static uint32 __PPO__LastUpdateVelocity() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateVelocity); } \
	FORCEINLINE static uint32 __PPO__ServerLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ServerLastClientGoodMoveAckTime() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastClientGoodMoveAckTime); } \
	FORCEINLINE static uint32 __PPO__ServerLastClientAdjustmentTime() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastClientAdjustmentTime); } \
	FORCEINLINE static uint32 __PPO__PendingImpulseToApply() { return STRUCT_OFFSET(UCharacterMovementComponent, PendingImpulseToApply); } \
	FORCEINLINE static uint32 __PPO__PendingForceToApply() { return STRUCT_OFFSET(UCharacterMovementComponent, PendingForceToApply); } \
	FORCEINLINE static uint32 __PPO__AnalogInputModifier() { return STRUCT_OFFSET(UCharacterMovementComponent, AnalogInputModifier); } \
	FORCEINLINE static uint32 __PPO__GroundMovementMode() { return STRUCT_OFFSET(UCharacterMovementComponent, GroundMovementMode); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_159_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
