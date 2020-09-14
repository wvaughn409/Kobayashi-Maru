// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UClothingSimulationInteractor;
struct FPoseSnapshot;
class UAnimationAsset;
enum class ETeleportType : uint8;
class UAnimInstance;
class UObject;
#ifdef ENGINE_SkeletalMeshComponent_generated_h
#error "SkeletalMeshComponent.generated.h already included, missing '#pragma once' in SkeletalMeshComponent.h"
#endif
#define ENGINE_SkeletalMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentClothTickFunction>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentEndPhysicsTickFunction>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_51_DELEGATE \
static inline void FOnBoneTransformsFinalized_DelegateWrapper(const FMulticastScriptDelegate& OnBoneTransformsFinalized) \
{ \
	OnBoneTransformsFinalized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_46_DELEGATE \
static inline void FOnAnimInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnAnimInitialized) \
{ \
	OnAnimInitialized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentJointAngles); \
	DECLARE_FUNCTION(execSetAngularLimits); \
	DECLARE_FUNCTION(execBreakConstraint); \
	DECLARE_FUNCTION(execFindConstraintBoneName); \
	DECLARE_FUNCTION(execSetConstraintProfileForAll); \
	DECLARE_FUNCTION(execSetConstraintProfile); \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams); \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive); \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive); \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight); \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics); \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics); \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending); \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics); \
	DECLARE_FUNCTION(execTermBodiesBelow); \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow); \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow); \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass); \
	DECLARE_FUNCTION(execGetBoneMass); \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset); \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow); \
	DECLARE_FUNCTION(execIsBodyGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableBodyGravity); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow); \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execGetClothingSimulationInteractor); \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation); \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation); \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation); \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate); \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation); \
	DECLARE_FUNCTION(execGetDisableAnimCurves); \
	DECLARE_FUNCTION(execSetDisableAnimCurves); \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor); \
	DECLARE_FUNCTION(execGetAllowRigidBodyAnimNode); \
	DECLARE_FUNCTION(execSetAllowRigidBodyAnimNode); \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent); \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent); \
	DECLARE_FUNCTION(execResetClothTeleportMode); \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended); \
	DECLARE_FUNCTION(execResumeClothingSimulation); \
	DECLARE_FUNCTION(execSuspendClothingSimulation); \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset); \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport); \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale); \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale); \
	DECLARE_FUNCTION(execSnapshotPose); \
	DECLARE_FUNCTION(execGetMorphTarget); \
	DECLARE_FUNCTION(execClearMorphTargets); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execOverrideAnimationData); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execGetAnimationMode); \
	DECLARE_FUNCTION(execSetAnimationMode); \
	DECLARE_FUNCTION(execResetAnimInstanceDynamics); \
	DECLARE_FUNCTION(execHasValidAnimationInstance); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroup); \
	DECLARE_FUNCTION(execUnlinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimGraphByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstancesByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstanceByTag); \
	DECLARE_FUNCTION(execGetPostProcessInstance); \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetAnimClass); \
	DECLARE_FUNCTION(execSetAnimClass); \
	DECLARE_FUNCTION(execSetDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execGetDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execToggleDisablePostProcessBlueprint);


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentJointAngles); \
	DECLARE_FUNCTION(execSetAngularLimits); \
	DECLARE_FUNCTION(execBreakConstraint); \
	DECLARE_FUNCTION(execFindConstraintBoneName); \
	DECLARE_FUNCTION(execSetConstraintProfileForAll); \
	DECLARE_FUNCTION(execSetConstraintProfile); \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams); \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive); \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive); \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight); \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics); \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics); \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending); \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics); \
	DECLARE_FUNCTION(execTermBodiesBelow); \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow); \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow); \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass); \
	DECLARE_FUNCTION(execGetBoneMass); \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset); \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow); \
	DECLARE_FUNCTION(execIsBodyGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableBodyGravity); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow); \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execGetClothingSimulationInteractor); \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation); \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation); \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation); \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate); \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation); \
	DECLARE_FUNCTION(execGetDisableAnimCurves); \
	DECLARE_FUNCTION(execSetDisableAnimCurves); \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor); \
	DECLARE_FUNCTION(execGetAllowRigidBodyAnimNode); \
	DECLARE_FUNCTION(execSetAllowRigidBodyAnimNode); \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent); \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent); \
	DECLARE_FUNCTION(execResetClothTeleportMode); \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended); \
	DECLARE_FUNCTION(execResumeClothingSimulation); \
	DECLARE_FUNCTION(execSuspendClothingSimulation); \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset); \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport); \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale); \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale); \
	DECLARE_FUNCTION(execSnapshotPose); \
	DECLARE_FUNCTION(execGetMorphTarget); \
	DECLARE_FUNCTION(execClearMorphTargets); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execOverrideAnimationData); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execGetAnimationMode); \
	DECLARE_FUNCTION(execSetAnimationMode); \
	DECLARE_FUNCTION(execResetAnimInstanceDynamics); \
	DECLARE_FUNCTION(execHasValidAnimationInstance); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroup); \
	DECLARE_FUNCTION(execUnlinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimGraphByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstancesByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstanceByTag); \
	DECLARE_FUNCTION(execGetPostProcessInstance); \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetAnimClass); \
	DECLARE_FUNCTION(execSetAnimClass); \
	DECLARE_FUNCTION(execSetDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execGetDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execToggleDisablePostProcessBlueprint);


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_USkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_USkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshComponent(USkeletalMeshComponent&&); \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshComponent(USkeletalMeshComponent&&); \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LinkedInstances() { return STRUCT_OFFSET(USkeletalMeshComponent, LinkedInstances); } \
	FORCEINLINE static uint32 __PPO__CachedBoneSpaceTransforms() { return STRUCT_OFFSET(USkeletalMeshComponent, CachedBoneSpaceTransforms); } \
	FORCEINLINE static uint32 __PPO__CachedComponentSpaceTransforms() { return STRUCT_OFFSET(USkeletalMeshComponent, CachedComponentSpaceTransforms); } \
	FORCEINLINE static uint32 __PPO__AnimationMode() { return STRUCT_OFFSET(USkeletalMeshComponent, AnimationMode); } \
	FORCEINLINE static uint32 __PPO__DisallowedAnimCurves() { return STRUCT_OFFSET(USkeletalMeshComponent, DisallowedAnimCurves); } \
	FORCEINLINE static uint32 __PPO__TeleportDistanceThreshold() { return STRUCT_OFFSET(USkeletalMeshComponent, TeleportDistanceThreshold); } \
	FORCEINLINE static uint32 __PPO__TeleportRotationThreshold() { return STRUCT_OFFSET(USkeletalMeshComponent, TeleportRotationThreshold); } \
	FORCEINLINE static uint32 __PPO__LastPoseTickFrame() { return STRUCT_OFFSET(USkeletalMeshComponent, LastPoseTickFrame); } \
	FORCEINLINE static uint32 __PPO__ClothingInteractor() { return STRUCT_OFFSET(USkeletalMeshComponent, ClothingInteractor); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_290_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_293_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h


#define FOREACH_ENUM_EPHYSICSTRANSFORMUPDATEMODE(op) \
	op(EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform) \
	op(EPhysicsTransformUpdateMode::ComponentTransformIsKinematic) 
#define FOREACH_ENUM_EANIMATIONMODE(op) \
	op(EAnimationMode::AnimationBlueprint) \
	op(EAnimationMode::AnimationSingleNode) \
	op(EAnimationMode::AnimationCustomMode) 
#define FOREACH_ENUM_EKINEMATICBONESUPDATETOPHYSICS(op) \
	op(EKinematicBonesUpdateToPhysics::SkipSimulatingBones) \
	op(EKinematicBonesUpdateToPhysics::SkipAllBones) 
#define FOREACH_ENUM_ECLOTHMASSMODE(op) \
	op(EClothMassMode::UniformMass) \
	op(EClothMassMode::TotalMass) \
	op(EClothMassMode::Density) \
	op(EClothMassMode::MaxClothMassMode) 

enum class EClothMassMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<EClothMassMode>();

#define FOREACH_ENUM_EANIMCURVETYPE(op) \
	op(EAnimCurveType::AttributeCurve) \
	op(EAnimCurveType::MaterialCurve) \
	op(EAnimCurveType::MorphTargetCurve) \
	op(EAnimCurveType::MaxAnimCurveType) 

enum class EAnimCurveType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimCurveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
