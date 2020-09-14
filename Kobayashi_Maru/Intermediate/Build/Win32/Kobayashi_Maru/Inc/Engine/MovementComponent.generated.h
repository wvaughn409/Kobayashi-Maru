// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EPlaneConstraintAxisSetting : uint8;
struct FRotator;
struct FHitResult;
class USceneComponent;
class APhysicsVolume;
#ifdef ENGINE_MovementComponent_generated_h
#error "MovementComponent.generated.h already included, missing '#pragma once' in MovementComponent.h"
#endif
#define ENGINE_MovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnapUpdatedComponentToPlane); \
	DECLARE_FUNCTION(execConstrainNormalToPlane); \
	DECLARE_FUNCTION(execConstrainLocationToPlane); \
	DECLARE_FUNCTION(execConstrainDirectionToPlane); \
	DECLARE_FUNCTION(execGetPlaneConstraintOrigin); \
	DECLARE_FUNCTION(execGetPlaneConstraintNormal); \
	DECLARE_FUNCTION(execSetPlaneConstraintEnabled); \
	DECLARE_FUNCTION(execSetPlaneConstraintOrigin); \
	DECLARE_FUNCTION(execSetPlaneConstraintFromVectors); \
	DECLARE_FUNCTION(execSetPlaneConstraintNormal); \
	DECLARE_FUNCTION(execGetPlaneConstraintAxisSetting); \
	DECLARE_FUNCTION(execSetPlaneConstraintAxisSetting); \
	DECLARE_FUNCTION(execK2_MoveUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execGetPhysicsVolume); \
	DECLARE_FUNCTION(execStopMovementImmediately); \
	DECLARE_FUNCTION(execIsExceedingMaxSpeed); \
	DECLARE_FUNCTION(execK2_GetModifiedMaxSpeed); \
	DECLARE_FUNCTION(execK2_GetMaxSpeedModifier); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetGravityZ);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnapUpdatedComponentToPlane); \
	DECLARE_FUNCTION(execConstrainNormalToPlane); \
	DECLARE_FUNCTION(execConstrainLocationToPlane); \
	DECLARE_FUNCTION(execConstrainDirectionToPlane); \
	DECLARE_FUNCTION(execGetPlaneConstraintOrigin); \
	DECLARE_FUNCTION(execGetPlaneConstraintNormal); \
	DECLARE_FUNCTION(execSetPlaneConstraintEnabled); \
	DECLARE_FUNCTION(execSetPlaneConstraintOrigin); \
	DECLARE_FUNCTION(execSetPlaneConstraintFromVectors); \
	DECLARE_FUNCTION(execSetPlaneConstraintNormal); \
	DECLARE_FUNCTION(execGetPlaneConstraintAxisSetting); \
	DECLARE_FUNCTION(execSetPlaneConstraintAxisSetting); \
	DECLARE_FUNCTION(execK2_MoveUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execGetPhysicsVolume); \
	DECLARE_FUNCTION(execStopMovementImmediately); \
	DECLARE_FUNCTION(execIsExceedingMaxSpeed); \
	DECLARE_FUNCTION(execK2_GetModifiedMaxSpeed); \
	DECLARE_FUNCTION(execK2_GetMaxSpeedModifier); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetGravityZ);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovementComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementComponent(); \
	friend struct Z_Construct_UClass_UMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMovementComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUMovementComponent(); \
	friend struct Z_Construct_UClass_UMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMovementComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementComponent(UMovementComponent&&); \
	NO_API UMovementComponent(const UMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementComponent(UMovementComponent&&); \
	NO_API UMovementComponent(const UMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneConstraintNormal() { return STRUCT_OFFSET(UMovementComponent, PlaneConstraintNormal); } \
	FORCEINLINE static uint32 __PPO__PlaneConstraintOrigin() { return STRUCT_OFFSET(UMovementComponent, PlaneConstraintOrigin); } \
	FORCEINLINE static uint32 __PPO__PlaneConstraintAxisSetting() { return STRUCT_OFFSET(UMovementComponent, PlaneConstraintAxisSetting); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_53_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_MovementComponent_h


#define FOREACH_ENUM_EPLANECONSTRAINTAXISSETTING(op) \
	op(EPlaneConstraintAxisSetting::Custom) \
	op(EPlaneConstraintAxisSetting::X) \
	op(EPlaneConstraintAxisSetting::Y) \
	op(EPlaneConstraintAxisSetting::Z) \
	op(EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting) 

enum class EPlaneConstraintAxisSetting : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPlaneConstraintAxisSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
