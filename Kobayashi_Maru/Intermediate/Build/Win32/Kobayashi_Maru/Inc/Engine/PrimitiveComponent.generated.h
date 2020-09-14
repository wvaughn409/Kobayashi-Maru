// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
class AActor;
struct FHitResult;
struct FVector;
class APawn;
class UPhysicalMaterial;
enum class ERendererStencilMask : uint8;
struct FBox;
struct FWalkableSlopeOverride;
class UMaterialInterface;
class UMaterialInstanceDynamic;
struct FVector4;
struct FVector2D;
#ifdef ENGINE_PrimitiveComponent_generated_h
#error "PrimitiveComponent.generated.h already included, missing '#pragma once' in PrimitiveComponent.h"
#endif
#define ENGINE_PrimitiveComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_2382_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ComponentTransform() { return STRUCT_OFFSET(FPrimitiveComponentInstanceData, ComponentTransform); } \
	FORCEINLINE static uint32 __PPO__VisibilityId() { return STRUCT_OFFSET(FPrimitiveComponentInstanceData, VisibilityId); } \
	FORCEINLINE static uint32 __PPO__LODParent() { return STRUCT_OFFSET(FPrimitiveComponentInstanceData, LODParent); } \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimitiveComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteCategoryInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpriteCategoryInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_166_DELEGATE \
struct _Script_Engine_eventComponentEndTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_165_DELEGATE \
struct _Script_Engine_eventComponentBeginTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_164_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchEndSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchEndSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_163_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchBeginSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchBeginSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_162_DELEGATE \
struct _Script_Engine_eventComponentOnReleasedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonReleased; \
}; \
static inline void FComponentOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnReleasedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonReleased) \
{ \
	_Script_Engine_eventComponentOnReleasedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonReleased=ButtonReleased; \
	ComponentOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_161_DELEGATE \
struct _Script_Engine_eventComponentOnClickedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonPressed; \
}; \
static inline void FComponentOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnClickedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) \
{ \
	_Script_Engine_eventComponentOnClickedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonPressed=ButtonPressed; \
	ComponentOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_160_DELEGATE \
struct _Script_Engine_eventComponentEndCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_159_DELEGATE \
struct _Script_Engine_eventComponentBeginCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_157_DELEGATE \
struct _Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms \
{ \
	UPrimitiveComponent* ChangedComponent; \
}; \
static inline void FComponentCollisionSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentCollisionSettingsChangedSignature, UPrimitiveComponent* ChangedComponent) \
{ \
	_Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms Parms; \
	Parms.ChangedComponent=ChangedComponent; \
	ComponentCollisionSettingsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_155_DELEGATE \
struct _Script_Engine_eventComponentSleepSignature_Parms \
{ \
	UPrimitiveComponent* SleepingComponent; \
	FName BoneName; \
}; \
static inline void FComponentSleepSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentSleepSignature, UPrimitiveComponent* SleepingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentSleepSignature_Parms Parms; \
	Parms.SleepingComponent=SleepingComponent; \
	Parms.BoneName=BoneName; \
	ComponentSleepSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_153_DELEGATE \
struct _Script_Engine_eventComponentWakeSignature_Parms \
{ \
	UPrimitiveComponent* WakingComponent; \
	FName BoneName; \
}; \
static inline void FComponentWakeSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentWakeSignature, UPrimitiveComponent* WakingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentWakeSignature_Parms Parms; \
	Parms.WakingComponent=WakingComponent; \
	Parms.BoneName=BoneName; \
	ComponentWakeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_151_DELEGATE \
struct _Script_Engine_eventComponentEndOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
}; \
static inline void FComponentEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) \
{ \
	_Script_Engine_eventComponentEndOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	ComponentEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_149_DELEGATE \
struct _Script_Engine_eventComponentBeginOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
	bool bFromSweep; \
	FHitResult SweepResult; \
}; \
static inline void FComponentBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult) \
{ \
	_Script_Engine_eventComponentBeginOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	Parms.bFromSweep=bFromSweep ? true : false; \
	Parms.SweepResult=SweepResult; \
	ComponentBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_147_DELEGATE \
struct _Script_Engine_eventComponentHitSignature_Parms \
{ \
	UPrimitiveComponent* HitComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FComponentHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentHitSignature, UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_Engine_eventComponentHitSignature_Parms Parms; \
	Parms.HitComponent=HitComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	ComponentHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetPhysMaterialOverride); \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels); \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake); \
	DECLARE_FUNCTION(execSetAllUseCCD); \
	DECLARE_FUNCTION(execSetUseCCD); \
	DECLARE_FUNCTION(execScaleByMomentOfInertia); \
	DECLARE_FUNCTION(execGetInertiaTensor); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execSetMassOverrideInKg); \
	DECLARE_FUNCTION(execSetAllMassScale); \
	DECLARE_FUNCTION(execGetMassScale); \
	DECLARE_FUNCTION(execSetMassScale); \
	DECLARE_FUNCTION(execGetAngularDamping); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execGetLinearDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execIsGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableGravity); \
	DECLARE_FUNCTION(execWakeAllRigidBodies); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled); \
	DECLARE_FUNCTION(execGetCollisionEnabled); \
	DECLARE_FUNCTION(execGetClosestPointOnCollision); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetRenderCustomDepth); \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent); \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent); \
	DECLARE_FUNCTION(execK2_SphereTraceComponent); \
	DECLARE_FUNCTION(execK2_LineTraceComponent); \
	DECLARE_FUNCTION(execSetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionEnabled); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetTranslucentSortPriority); \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights); \
	DECLARE_FUNCTION(execSetExcludeFromLightAttachmentGroup); \
	DECLARE_FUNCTION(execSetLightAttachmentsAsGroup); \
	DECLARE_FUNCTION(execSetCastInsetShadow); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetOnlyOwnerSee); \
	DECLARE_FUNCTION(execSetOwnerNoSee); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execPutRigidBodyToSleep); \
	DECLARE_FUNCTION(execWakeRigidBody); \
	DECLARE_FUNCTION(execSetCenterOfMass); \
	DECLARE_FUNCTION(execGetCenterOfMass); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocity); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocity); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocity); \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execAddTorqueInDegrees); \
	DECLARE_FUNCTION(execAddTorqueInRadians); \
	DECLARE_FUNCTION(execAddTorque); \
	DECLARE_FUNCTION(execAddRadialForce); \
	DECLARE_FUNCTION(execAddForceAtLocationLocal); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddRadialImpulse); \
	DECLARE_FUNCTION(execAddImpulseAtLocation); \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians); \
	DECLARE_FUNCTION(execAddAngularImpulse); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execSetConstraintMode); \
	DECLARE_FUNCTION(execSetSimulatePhysics); \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex); \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execSetMaterialByName); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetBoundsScale); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execIsOverlappingComponent); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents); \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving); \
	DECLARE_FUNCTION(execClearMoveIgnoreActors); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors); \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents); \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents);


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetPhysMaterialOverride); \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels); \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake); \
	DECLARE_FUNCTION(execSetAllUseCCD); \
	DECLARE_FUNCTION(execSetUseCCD); \
	DECLARE_FUNCTION(execScaleByMomentOfInertia); \
	DECLARE_FUNCTION(execGetInertiaTensor); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execSetMassOverrideInKg); \
	DECLARE_FUNCTION(execSetAllMassScale); \
	DECLARE_FUNCTION(execGetMassScale); \
	DECLARE_FUNCTION(execSetMassScale); \
	DECLARE_FUNCTION(execGetAngularDamping); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execGetLinearDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execIsGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableGravity); \
	DECLARE_FUNCTION(execWakeAllRigidBodies); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled); \
	DECLARE_FUNCTION(execGetCollisionEnabled); \
	DECLARE_FUNCTION(execGetClosestPointOnCollision); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetRenderCustomDepth); \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent); \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent); \
	DECLARE_FUNCTION(execK2_SphereTraceComponent); \
	DECLARE_FUNCTION(execK2_LineTraceComponent); \
	DECLARE_FUNCTION(execSetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionEnabled); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetTranslucentSortPriority); \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights); \
	DECLARE_FUNCTION(execSetExcludeFromLightAttachmentGroup); \
	DECLARE_FUNCTION(execSetLightAttachmentsAsGroup); \
	DECLARE_FUNCTION(execSetCastInsetShadow); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetOnlyOwnerSee); \
	DECLARE_FUNCTION(execSetOwnerNoSee); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execPutRigidBodyToSleep); \
	DECLARE_FUNCTION(execWakeRigidBody); \
	DECLARE_FUNCTION(execSetCenterOfMass); \
	DECLARE_FUNCTION(execGetCenterOfMass); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocity); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocity); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocity); \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execAddTorqueInDegrees); \
	DECLARE_FUNCTION(execAddTorqueInRadians); \
	DECLARE_FUNCTION(execAddTorque); \
	DECLARE_FUNCTION(execAddRadialForce); \
	DECLARE_FUNCTION(execAddForceAtLocationLocal); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddRadialImpulse); \
	DECLARE_FUNCTION(execAddImpulseAtLocation); \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians); \
	DECLARE_FUNCTION(execAddAngularImpulse); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execSetConstraintMode); \
	DECLARE_FUNCTION(execSetSimulatePhysics); \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex); \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execSetMaterialByName); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetBoundsScale); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execIsOverlappingComponent); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents); \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving); \
	DECLARE_FUNCTION(execClearMoveIgnoreActors); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors); \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents); \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents);


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPrimitiveComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomPrimitiveData() { return STRUCT_OFFSET(UPrimitiveComponent, CustomPrimitiveData); } \
	FORCEINLINE static uint32 __PPO__CustomPrimitiveDataInternal() { return STRUCT_OFFSET(UPrimitiveComponent, CustomPrimitiveDataInternal); } \
	FORCEINLINE static uint32 __PPO__LODParentPrimitive() { return STRUCT_OFFSET(UPrimitiveComponent, LODParentPrimitive); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_173_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPrimitiveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h


#define FOREACH_ENUM_ERENDERERSTENCILMASK(op) \
	op(ERendererStencilMask::ERSM_Default) \
	op(ERendererStencilMask::ERSM_255) \
	op(ERendererStencilMask::ERSM_1) \
	op(ERendererStencilMask::ERSM_2) \
	op(ERendererStencilMask::ERSM_4) \
	op(ERendererStencilMask::ERSM_8) \
	op(ERendererStencilMask::ERSM_16) \
	op(ERendererStencilMask::ERSM_32) \
	op(ERendererStencilMask::ERSM_64) \
	op(ERendererStencilMask::ERSM_128) 

enum class ERendererStencilMask : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERendererStencilMask>();

#define FOREACH_ENUM_EHASCUSTOMNAVIGABLEGEOMETRY(op) \
	op(EHasCustomNavigableGeometry::No) \
	op(EHasCustomNavigableGeometry::Yes) \
	op(EHasCustomNavigableGeometry::EvenIfNotCollidable) \
	op(EHasCustomNavigableGeometry::DontExport) 
#define FOREACH_ENUM_ECANBECHARACTERBASE(op) \
	op(ECB_No) \
	op(ECB_Yes) \
	op(ECB_Owner) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
