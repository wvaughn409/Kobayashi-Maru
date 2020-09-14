// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FKey;
struct FVector;
struct FHitResult;
class UDamageType;
class AController;
class UPrimitiveComponent;
class APawn;
class UInterface;
class UActorComponent;
struct FRotator;
class UChildActorComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
enum class EDetachmentRule : uint8;
enum class EAttachmentRule : uint8;
class USceneComponent;
struct FTransform;
class UObject;
class APlayerController;
#ifdef ENGINE_Actor_generated_h
#error "Actor.generated.h already included, missing '#pragma once' in Actor.h"
#endif
#define ENGINE_Actor_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_66_DELEGATE \
struct _Script_Engine_eventActorEndPlaySignature_Parms \
{ \
	AActor* Actor; \
	TEnumAsByte<EEndPlayReason::Type> EndPlayReason; \
}; \
static inline void FActorEndPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndPlaySignature, AActor* Actor, EEndPlayReason::Type EndPlayReason) \
{ \
	_Script_Engine_eventActorEndPlaySignature_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.EndPlayReason=EndPlayReason; \
	ActorEndPlaySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_65_DELEGATE \
struct _Script_Engine_eventActorDestroyedSignature_Parms \
{ \
	AActor* DestroyedActor; \
}; \
static inline void FActorDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorDestroyedSignature, AActor* DestroyedActor) \
{ \
	_Script_Engine_eventActorDestroyedSignature_Parms Parms; \
	Parms.DestroyedActor=DestroyedActor; \
	ActorDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_63_DELEGATE \
struct _Script_Engine_eventActorEndTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorEndTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_62_DELEGATE \
struct _Script_Engine_eventActorBeginTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorBeginTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_61_DELEGATE \
struct _Script_Engine_eventActorOnInputTouchEndSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorOnInputTouchEndSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_60_DELEGATE \
struct _Script_Engine_eventActorOnInputTouchBeginSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	AActor* TouchedActor; \
}; \
static inline void FActorOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorOnInputTouchBeginSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedActor=TouchedActor; \
	ActorOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_59_DELEGATE \
struct _Script_Engine_eventActorOnReleasedSignature_Parms \
{ \
	AActor* TouchedActor; \
	FKey ButtonReleased; \
}; \
static inline void FActorOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnReleasedSignature, AActor* TouchedActor, FKey ButtonReleased) \
{ \
	_Script_Engine_eventActorOnReleasedSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	Parms.ButtonReleased=ButtonReleased; \
	ActorOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_58_DELEGATE \
struct _Script_Engine_eventActorOnClickedSignature_Parms \
{ \
	AActor* TouchedActor; \
	FKey ButtonPressed; \
}; \
static inline void FActorOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnClickedSignature, AActor* TouchedActor, FKey ButtonPressed) \
{ \
	_Script_Engine_eventActorOnClickedSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	Parms.ButtonPressed=ButtonPressed; \
	ActorOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_57_DELEGATE \
struct _Script_Engine_eventActorEndCursorOverSignature_Parms \
{ \
	AActor* TouchedActor; \
}; \
static inline void FActorEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndCursorOverSignature, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorEndCursorOverSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	ActorEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_56_DELEGATE \
struct _Script_Engine_eventActorBeginCursorOverSignature_Parms \
{ \
	AActor* TouchedActor; \
}; \
static inline void FActorBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginCursorOverSignature, AActor* TouchedActor) \
{ \
	_Script_Engine_eventActorBeginCursorOverSignature_Parms Parms; \
	Parms.TouchedActor=TouchedActor; \
	ActorBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_54_DELEGATE \
struct _Script_Engine_eventActorHitSignature_Parms \
{ \
	AActor* SelfActor; \
	AActor* OtherActor; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FActorHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorHitSignature, AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_Engine_eventActorHitSignature_Parms Parms; \
	Parms.SelfActor=SelfActor; \
	Parms.OtherActor=OtherActor; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	ActorHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_53_DELEGATE \
struct _Script_Engine_eventActorEndOverlapSignature_Parms \
{ \
	AActor* OverlappedActor; \
	AActor* OtherActor; \
}; \
static inline void FActorEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndOverlapSignature, AActor* OverlappedActor, AActor* OtherActor) \
{ \
	_Script_Engine_eventActorEndOverlapSignature_Parms Parms; \
	Parms.OverlappedActor=OverlappedActor; \
	Parms.OtherActor=OtherActor; \
	ActorEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_52_DELEGATE \
struct _Script_Engine_eventActorBeginOverlapSignature_Parms \
{ \
	AActor* OverlappedActor; \
	AActor* OtherActor; \
}; \
static inline void FActorBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginOverlapSignature, AActor* OverlappedActor, AActor* OtherActor) \
{ \
	_Script_Engine_eventActorBeginOverlapSignature_Parms Parms; \
	Parms.OverlappedActor=OverlappedActor; \
	Parms.OtherActor=OtherActor; \
	ActorBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_51_DELEGATE \
struct _Script_Engine_eventTakeRadialDamageSignature_Parms \
{ \
	AActor* DamagedActor; \
	float Damage; \
	const UDamageType* DamageType; \
	FVector Origin; \
	FHitResult HitInfo; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FTakeRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeRadialDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_Engine_eventTakeRadialDamageSignature_Parms Parms; \
	Parms.DamagedActor=DamagedActor; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.Origin=Origin; \
	Parms.HitInfo=HitInfo; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	TakeRadialDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_50_DELEGATE \
struct _Script_Engine_eventTakePointDamageSignature_Parms \
{ \
	AActor* DamagedActor; \
	float Damage; \
	AController* InstigatedBy; \
	FVector HitLocation; \
	UPrimitiveComponent* FHitComponent; \
	FName BoneName; \
	FVector ShotFromDirection; \
	const UDamageType* DamageType; \
	AActor* DamageCauser; \
}; \
static inline void FTakePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakePointDamageSignature, AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) \
{ \
	_Script_Engine_eventTakePointDamageSignature_Parms Parms; \
	Parms.DamagedActor=DamagedActor; \
	Parms.Damage=Damage; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.HitLocation=HitLocation; \
	Parms.FHitComponent=FHitComponent; \
	Parms.BoneName=BoneName; \
	Parms.ShotFromDirection=ShotFromDirection; \
	Parms.DamageType=DamageType; \
	Parms.DamageCauser=DamageCauser; \
	TakePointDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_49_DELEGATE \
struct _Script_Engine_eventTakeAnyDamageSignature_Parms \
{ \
	AActor* DamagedActor; \
	float Damage; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FTakeAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeAnyDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_Engine_eventTakeAnyDamageSignature_Parms Parms; \
	Parms.DamagedActor=DamagedActor; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	TakeAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeNoise); \
	DECLARE_FUNCTION(execGetComponentsByInterface); \
	DECLARE_FUNCTION(execGetComponentsByTag); \
	DECLARE_FUNCTION(execK2_GetComponentsByClass); \
	DECLARE_FUNCTION(execGetComponentByClass); \
	DECLARE_FUNCTION(execGetActorEyesViewPoint); \
	DECLARE_FUNCTION(execPrestreamTextures); \
	DECLARE_FUNCTION(execForceNetUpdate); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execGetAttachParentSocketName); \
	DECLARE_FUNCTION(execGetAttachParentActor); \
	DECLARE_FUNCTION(execK2_TeleportTo); \
	DECLARE_FUNCTION(execGetParentActor); \
	DECLARE_FUNCTION(execGetParentComponent); \
	DECLARE_FUNCTION(execGetAllChildActors); \
	DECLARE_FUNCTION(execIsChildActor); \
	DECLARE_FUNCTION(execFlushNetDormancy); \
	DECLARE_FUNCTION(execSetNetDormancy); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovement); \
	DECLARE_FUNCTION(execGetActorTickInterval); \
	DECLARE_FUNCTION(execSetActorTickInterval); \
	DECLARE_FUNCTION(execIsActorTickEnabled); \
	DECLARE_FUNCTION(execSetActorTickEnabled); \
	DECLARE_FUNCTION(execGetLifeSpan); \
	DECLARE_FUNCTION(execSetLifeSpan); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsActorBeingDestroyed); \
	DECLARE_FUNCTION(execGetGameTimeSinceCreation); \
	DECLARE_FUNCTION(execMakeMIDForMaterial); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execGetTickableWhenPaused); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execGetActorTimeDilation); \
	DECLARE_FUNCTION(execActorHasTag); \
	DECLARE_FUNCTION(execK2_DetachFromActor); \
	DECLARE_FUNCTION(execDetachRootComponentFromParent); \
	DECLARE_FUNCTION(execSnapRootComponentTo); \
	DECLARE_FUNCTION(execK2_AttachToActor); \
	DECLARE_FUNCTION(execK2_AttachRootComponentToActor); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachRootComponentTo); \
	DECLARE_FUNCTION(execK2_DestroyComponent); \
	DECLARE_FUNCTION(execAddComponent); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execK2_DestroyActor); \
	DECLARE_FUNCTION(execGetActorEnableCollision); \
	DECLARE_FUNCTION(execSetActorEnableCollision); \
	DECLARE_FUNCTION(execSetActorHiddenInGame); \
	DECLARE_FUNCTION(execGetActorRelativeScale3D); \
	DECLARE_FUNCTION(execSetActorRelativeScale3D); \
	DECLARE_FUNCTION(execK2_SetActorRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetActorRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetActorRelativeLocation); \
	DECLARE_FUNCTION(execK2_AddActorLocalTransform); \
	DECLARE_FUNCTION(execK2_AddActorLocalRotation); \
	DECLARE_FUNCTION(execK2_AddActorLocalOffset); \
	DECLARE_FUNCTION(execK2_SetActorTransform); \
	DECLARE_FUNCTION(execK2_AddActorWorldTransform); \
	DECLARE_FUNCTION(execK2_AddActorWorldRotation); \
	DECLARE_FUNCTION(execK2_AddActorWorldOffset); \
	DECLARE_FUNCTION(execGetHorizontalDotProductTo); \
	DECLARE_FUNCTION(execGetDotProductTo); \
	DECLARE_FUNCTION(execGetVerticalDistanceTo); \
	DECLARE_FUNCTION(execGetHorizontalDistanceTo); \
	DECLARE_FUNCTION(execGetSquaredDistanceTo); \
	DECLARE_FUNCTION(execGetDistanceTo); \
	DECLARE_FUNCTION(execGetActorScale3D); \
	DECLARE_FUNCTION(execSetActorScale3D); \
	DECLARE_FUNCTION(execK2_SetActorLocationAndRotation); \
	DECLARE_FUNCTION(execK2_SetActorRotation); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execK2_GetRootComponent); \
	DECLARE_FUNCTION(execGetActorBounds); \
	DECLARE_FUNCTION(execGetActorRightVector); \
	DECLARE_FUNCTION(execGetActorUpVector); \
	DECLARE_FUNCTION(execGetActorForwardVector); \
	DECLARE_FUNCTION(execK2_GetActorRotation); \
	DECLARE_FUNCTION(execK2_SetActorLocation); \
	DECLARE_FUNCTION(execK2_GetActorLocation); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execGetInstigatorController); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetInputVectorAxisValue); \
	DECLARE_FUNCTION(execGetInputAxisKeyValue); \
	DECLARE_FUNCTION(execGetInputAxisValue); \
	DECLARE_FUNCTION(execDisableInput); \
	DECLARE_FUNCTION(execEnableInput); \
	DECLARE_FUNCTION(execOnRep_Instigator); \
	DECLARE_FUNCTION(execOnRep_AttachmentReplication); \
	DECLARE_FUNCTION(execGetRemoteRole); \
	DECLARE_FUNCTION(execGetLocalRole); \
	DECLARE_FUNCTION(execSetReplicateMovement); \
	DECLARE_FUNCTION(execSetReplicates); \
	DECLARE_FUNCTION(execOnRep_Owner); \
	DECLARE_FUNCTION(execSetAutoDestroyWhenFinished); \
	DECLARE_FUNCTION(execTearOff); \
	DECLARE_FUNCTION(execOnRep_ReplicateMovement);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeNoise); \
	DECLARE_FUNCTION(execGetComponentsByInterface); \
	DECLARE_FUNCTION(execGetComponentsByTag); \
	DECLARE_FUNCTION(execK2_GetComponentsByClass); \
	DECLARE_FUNCTION(execGetComponentByClass); \
	DECLARE_FUNCTION(execGetActorEyesViewPoint); \
	DECLARE_FUNCTION(execPrestreamTextures); \
	DECLARE_FUNCTION(execForceNetUpdate); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execGetAttachParentSocketName); \
	DECLARE_FUNCTION(execGetAttachParentActor); \
	DECLARE_FUNCTION(execK2_TeleportTo); \
	DECLARE_FUNCTION(execGetParentActor); \
	DECLARE_FUNCTION(execGetParentComponent); \
	DECLARE_FUNCTION(execGetAllChildActors); \
	DECLARE_FUNCTION(execIsChildActor); \
	DECLARE_FUNCTION(execFlushNetDormancy); \
	DECLARE_FUNCTION(execSetNetDormancy); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovement); \
	DECLARE_FUNCTION(execGetActorTickInterval); \
	DECLARE_FUNCTION(execSetActorTickInterval); \
	DECLARE_FUNCTION(execIsActorTickEnabled); \
	DECLARE_FUNCTION(execSetActorTickEnabled); \
	DECLARE_FUNCTION(execGetLifeSpan); \
	DECLARE_FUNCTION(execSetLifeSpan); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsActorBeingDestroyed); \
	DECLARE_FUNCTION(execGetGameTimeSinceCreation); \
	DECLARE_FUNCTION(execMakeMIDForMaterial); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execGetTickableWhenPaused); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execGetActorTimeDilation); \
	DECLARE_FUNCTION(execActorHasTag); \
	DECLARE_FUNCTION(execK2_DetachFromActor); \
	DECLARE_FUNCTION(execDetachRootComponentFromParent); \
	DECLARE_FUNCTION(execSnapRootComponentTo); \
	DECLARE_FUNCTION(execK2_AttachToActor); \
	DECLARE_FUNCTION(execK2_AttachRootComponentToActor); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachRootComponentTo); \
	DECLARE_FUNCTION(execK2_DestroyComponent); \
	DECLARE_FUNCTION(execAddComponent); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execK2_DestroyActor); \
	DECLARE_FUNCTION(execGetActorEnableCollision); \
	DECLARE_FUNCTION(execSetActorEnableCollision); \
	DECLARE_FUNCTION(execSetActorHiddenInGame); \
	DECLARE_FUNCTION(execGetActorRelativeScale3D); \
	DECLARE_FUNCTION(execSetActorRelativeScale3D); \
	DECLARE_FUNCTION(execK2_SetActorRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetActorRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetActorRelativeLocation); \
	DECLARE_FUNCTION(execK2_AddActorLocalTransform); \
	DECLARE_FUNCTION(execK2_AddActorLocalRotation); \
	DECLARE_FUNCTION(execK2_AddActorLocalOffset); \
	DECLARE_FUNCTION(execK2_SetActorTransform); \
	DECLARE_FUNCTION(execK2_AddActorWorldTransform); \
	DECLARE_FUNCTION(execK2_AddActorWorldRotation); \
	DECLARE_FUNCTION(execK2_AddActorWorldOffset); \
	DECLARE_FUNCTION(execGetHorizontalDotProductTo); \
	DECLARE_FUNCTION(execGetDotProductTo); \
	DECLARE_FUNCTION(execGetVerticalDistanceTo); \
	DECLARE_FUNCTION(execGetHorizontalDistanceTo); \
	DECLARE_FUNCTION(execGetSquaredDistanceTo); \
	DECLARE_FUNCTION(execGetDistanceTo); \
	DECLARE_FUNCTION(execGetActorScale3D); \
	DECLARE_FUNCTION(execSetActorScale3D); \
	DECLARE_FUNCTION(execK2_SetActorLocationAndRotation); \
	DECLARE_FUNCTION(execK2_SetActorRotation); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execK2_GetRootComponent); \
	DECLARE_FUNCTION(execGetActorBounds); \
	DECLARE_FUNCTION(execGetActorRightVector); \
	DECLARE_FUNCTION(execGetActorUpVector); \
	DECLARE_FUNCTION(execGetActorForwardVector); \
	DECLARE_FUNCTION(execK2_GetActorRotation); \
	DECLARE_FUNCTION(execK2_SetActorLocation); \
	DECLARE_FUNCTION(execK2_GetActorLocation); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execGetInstigatorController); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetInputVectorAxisValue); \
	DECLARE_FUNCTION(execGetInputAxisKeyValue); \
	DECLARE_FUNCTION(execGetInputAxisValue); \
	DECLARE_FUNCTION(execDisableInput); \
	DECLARE_FUNCTION(execEnableInput); \
	DECLARE_FUNCTION(execOnRep_Instigator); \
	DECLARE_FUNCTION(execOnRep_AttachmentReplication); \
	DECLARE_FUNCTION(execGetRemoteRole); \
	DECLARE_FUNCTION(execGetLocalRole); \
	DECLARE_FUNCTION(execSetReplicateMovement); \
	DECLARE_FUNCTION(execSetReplicates); \
	DECLARE_FUNCTION(execOnRep_Owner); \
	DECLARE_FUNCTION(execSetAutoDestroyWhenFinished); \
	DECLARE_FUNCTION(execTearOff); \
	DECLARE_FUNCTION(execOnRep_ReplicateMovement);


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFolderPath); \
	DECLARE_FUNCTION(execGetFolderPath); \
	DECLARE_FUNCTION(execSetActorLabel); \
	DECLARE_FUNCTION(execGetActorLabel); \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsEditable); \
	DECLARE_FUNCTION(execIsTemporarilyHiddenInEditor); \
	DECLARE_FUNCTION(execSetIsTemporarilyHiddenInEditor); \
	DECLARE_FUNCTION(execIsHiddenEd); \
	DECLARE_FUNCTION(execIsHiddenEdAtStartup);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFolderPath); \
	DECLARE_FUNCTION(execGetFolderPath); \
	DECLARE_FUNCTION(execSetActorLabel); \
	DECLARE_FUNCTION(execGetActorLabel); \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsEditable); \
	DECLARE_FUNCTION(execIsTemporarilyHiddenInEditor); \
	DECLARE_FUNCTION(execSetIsTemporarilyHiddenInEditor); \
	DECLARE_FUNCTION(execIsHiddenEd); \
	DECLARE_FUNCTION(execIsHiddenEdAtStartup);


#else
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EVENT_PARMS \
	struct Actor_eventK2_OnBecomeViewTarget_Parms \
	{ \
		APlayerController* PC; \
	}; \
	struct Actor_eventK2_OnEndViewTarget_Parms \
	{ \
		APlayerController* PC; \
	}; \
	struct Actor_eventReceiveActorBeginOverlap_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct Actor_eventReceiveActorEndOverlap_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct Actor_eventReceiveActorOnClicked_Parms \
	{ \
		FKey ButtonPressed; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchBegin_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchEnd_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchEnter_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnInputTouchLeave_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	}; \
	struct Actor_eventReceiveActorOnReleased_Parms \
	{ \
		FKey ButtonReleased; \
	}; \
	struct Actor_eventReceiveAnyDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
	}; \
	struct Actor_eventReceiveEndPlay_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason; \
	}; \
	struct Actor_eventReceiveHit_Parms \
	{ \
		UPrimitiveComponent* MyComp; \
		AActor* Other; \
		UPrimitiveComponent* OtherComp; \
		bool bSelfMoved; \
		FVector HitLocation; \
		FVector HitNormal; \
		FVector NormalImpulse; \
		FHitResult Hit; \
	}; \
	struct Actor_eventReceivePointDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		FVector HitLocation; \
		FVector HitNormal; \
		UPrimitiveComponent* HitComponent; \
		FName BoneName; \
		FVector ShotFromDirection; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
		FHitResult HitInfo; \
	}; \
	struct Actor_eventReceiveRadialDamage_Parms \
	{ \
		float DamageReceived; \
		const UDamageType* DamageType; \
		FVector Origin; \
		FHitResult HitInfo; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
	}; \
	struct Actor_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AActor, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActor(); \
	friend struct Z_Construct_UClass_AActor_Statics; \
public: \
	DECLARE_CLASS(AActor, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_AActor, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AActor) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		bHidden, \
		bTearOff, \
		bCanBeDamaged, \
		RemoteRole, \
		ReplicatedMovement, \
		AttachmentReplication, \
		Owner, \
		Role, \
		Instigator, \
		NETFIELD_REP_END=Instigator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(AActor) \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_INCLASS \
private: \
	static void StaticRegisterNativesAActor(); \
	friend struct Z_Construct_UClass_AActor_Statics; \
public: \
	DECLARE_CLASS(AActor, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_AActor, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AActor) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		bHidden, \
		bTearOff, \
		bCanBeDamaged, \
		RemoteRole, \
		ReplicatedMovement, \
		AttachmentReplication, \
		Owner, \
		Role, \
		Instigator, \
		NETFIELD_REP_END=Instigator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(AActor) \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActor(AActor&&); \
	NO_API AActor(const AActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActor(AActor&&); \
	NO_API AActor(const AActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActor)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UpdateOverlapsMethodDuringLevelStreaming() { return STRUCT_OFFSET(AActor, UpdateOverlapsMethodDuringLevelStreaming); } \
	FORCEINLINE static uint32 __PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() { return STRUCT_OFFSET(AActor, DefaultUpdateOverlapsMethodDuringLevelStreaming); } \
	FORCEINLINE static uint32 __PPO__RemoteRole() { return STRUCT_OFFSET(AActor, RemoteRole); } \
	FORCEINLINE static uint32 __PPO__ReplicatedMovement() { return STRUCT_OFFSET(AActor, ReplicatedMovement); } \
	FORCEINLINE static uint32 __PPO__AttachmentReplication() { return STRUCT_OFFSET(AActor, AttachmentReplication); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(AActor, Owner); } \
	FORCEINLINE static uint32 __PPO__NetDriverName() { return STRUCT_OFFSET(AActor, NetDriverName); } \
	FORCEINLINE static uint32 __PPO__Role() { return STRUCT_OFFSET(AActor, Role); } \
	FORCEINLINE static uint32 __PPO__Instigator() { return STRUCT_OFFSET(AActor, Instigator); } \
	FORCEINLINE static uint32 __PPO__RootComponent() { return STRUCT_OFFSET(AActor, RootComponent); } \
	FORCEINLINE static uint32 __PPO__ControllingMatineeActors() { return STRUCT_OFFSET(AActor, ControllingMatineeActors); } \
	FORCEINLINE static uint32 __PPO__ParentComponent() { return STRUCT_OFFSET(AActor, ParentComponent); } \
	FORCEINLINE static uint32 __PPO__InstanceComponents() { return STRUCT_OFFSET(AActor, InstanceComponents); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_133_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h


#define FOREACH_ENUM_EACTORUPDATEOVERLAPSMETHOD(op) \
	op(EActorUpdateOverlapsMethod::UseConfigDefault) \
	op(EActorUpdateOverlapsMethod::AlwaysUpdate) \
	op(EActorUpdateOverlapsMethod::OnlyUpdateMovable) \
	op(EActorUpdateOverlapsMethod::NeverUpdate) 

enum class EActorUpdateOverlapsMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EActorUpdateOverlapsMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
