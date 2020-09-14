// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
class UAnimMontage;
enum class ETeleportType : uint8;
struct FMarkerSyncAnimPosition;
struct FVector;
struct FRotator;
enum class EAnimCurveType : uint8;
class UAnimInstance;
enum class EMontagePlayReturnType : uint8;
class UAnimSequenceBase;
class USkeletalMeshComponent;
class AActor;
struct FPoseSnapshot;
class APawn;
#ifdef ENGINE_AnimInstance_generated_h
#error "AnimInstance.generated.h already included, missing '#pragma once' in AnimInstance.h"
#endif
#define ENGINE_AnimInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSlotEvaluationPose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FA2CSPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ComponentSpaceFlags() { return STRUCT_OFFSET(FA2CSPose, ComponentSpaceFlags); } \
	typedef FA2Pose Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FA2CSPose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FA2Pose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FA2Pose>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_84_DELEGATE \
struct _Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms \
{ \
	FName NotifyName; \
	FBranchingPointNotifyPayload BranchingPointPayload; \
}; \
static inline void FPlayMontageAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAnimNotifyDelegate, FName NotifyName, FBranchingPointNotifyPayload const& BranchingPointPayload) \
{ \
	_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms Parms; \
	Parms.NotifyName=NotifyName; \
	Parms.BranchingPointPayload=BranchingPointPayload; \
	PlayMontageAnimNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_72_DELEGATE \
struct _Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
	bool bInterrupted; \
}; \
static inline void FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBlendingOutStartedMCDelegate, UAnimMontage* Montage, bool bInterrupted) \
{ \
	_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageBlendingOutStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_64_DELEGATE \
static inline void FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAllMontageInstancesEndedMCDelegate) \
{ \
	OnAllMontageInstancesEndedMCDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_61_DELEGATE \
struct _Script_Engine_eventOnMontageEndedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
	bool bInterrupted; \
}; \
static inline void FOnMontageEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageEndedMCDelegate, UAnimMontage* Montage, bool bInterrupted) \
{ \
	_Script_Engine_eventOnMontageEndedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageEndedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_53_DELEGATE \
struct _Script_Engine_eventOnMontageStartedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
}; \
static inline void FOnMontageStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageStartedMCDelegate, UAnimMontage* Montage) \
{ \
	_Script_Engine_eventOnMontageStartedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	OnMontageStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetDynamics); \
	DECLARE_FUNCTION(execGetSyncGroupPosition); \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers); \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame); \
	DECLARE_FUNCTION(execGetTimeToClosestMarker); \
	DECLARE_FUNCTION(execUnlockAIResources); \
	DECLARE_FUNCTION(execLockAIResources); \
	DECLARE_FUNCTION(execCalculateDirection); \
	DECLARE_FUNCTION(execClearMorphTargets); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execGetCurrentStateName); \
	DECLARE_FUNCTION(execGetAllCurveNames); \
	DECLARE_FUNCTION(execGetActiveCurveNames); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTime); \
	DECLARE_FUNCTION(execGetRelevantAnimLength); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining); \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction); \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed); \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration); \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime); \
	DECLARE_FUNCTION(execGetInstanceStateWeight); \
	DECLARE_FUNCTION(execGetInstanceMachineWeight); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength); \
	DECLARE_FUNCTION(execSetRootMotionMode); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroup); \
	DECLARE_FUNCTION(execUnlinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimGraphByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstancesByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstanceByTag); \
	DECLARE_FUNCTION(execGetCurrentActiveMontage); \
	DECLARE_FUNCTION(execIsAnyMontagePlaying); \
	DECLARE_FUNCTION(execMontage_GetPlayRate); \
	DECLARE_FUNCTION(execMontage_GetBlendTime); \
	DECLARE_FUNCTION(execMontage_GetIsStopped); \
	DECLARE_FUNCTION(execMontage_SetPosition); \
	DECLARE_FUNCTION(execMontage_GetPosition); \
	DECLARE_FUNCTION(execMontage_GetCurrentSection); \
	DECLARE_FUNCTION(execMontage_IsPlaying); \
	DECLARE_FUNCTION(execMontage_IsActive); \
	DECLARE_FUNCTION(execMontage_SetPlayRate); \
	DECLARE_FUNCTION(execMontage_SetNextSection); \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd); \
	DECLARE_FUNCTION(execMontage_JumpToSection); \
	DECLARE_FUNCTION(execMontage_Resume); \
	DECLARE_FUNCTION(execMontage_Pause); \
	DECLARE_FUNCTION(execMontage_StopGroupByName); \
	DECLARE_FUNCTION(execMontage_Stop); \
	DECLARE_FUNCTION(execMontage_Play); \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation); \
	DECLARE_FUNCTION(execStopSlotAnimation); \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage); \
	DECLARE_FUNCTION(execPlaySlotAnimation); \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execSetPropagateNotifiesToLinkedInstances); \
	DECLARE_FUNCTION(execGetPropagateNotifiesToLinkedInstances); \
	DECLARE_FUNCTION(execSetReceiveNotifiesFromLinkedInstances); \
	DECLARE_FUNCTION(execGetReceiveNotifiesFromLinkedInstances); \
	DECLARE_FUNCTION(execSnapshotPose); \
	DECLARE_FUNCTION(execSavePoseSnapshot); \
	DECLARE_FUNCTION(execTryGetPawnOwner);


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetDynamics); \
	DECLARE_FUNCTION(execGetSyncGroupPosition); \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers); \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame); \
	DECLARE_FUNCTION(execGetTimeToClosestMarker); \
	DECLARE_FUNCTION(execUnlockAIResources); \
	DECLARE_FUNCTION(execLockAIResources); \
	DECLARE_FUNCTION(execCalculateDirection); \
	DECLARE_FUNCTION(execClearMorphTargets); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execGetCurrentStateName); \
	DECLARE_FUNCTION(execGetAllCurveNames); \
	DECLARE_FUNCTION(execGetActiveCurveNames); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTime); \
	DECLARE_FUNCTION(execGetRelevantAnimLength); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining); \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction); \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed); \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration); \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime); \
	DECLARE_FUNCTION(execGetInstanceStateWeight); \
	DECLARE_FUNCTION(execGetInstanceMachineWeight); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength); \
	DECLARE_FUNCTION(execSetRootMotionMode); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroup); \
	DECLARE_FUNCTION(execUnlinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimGraphByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstancesByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstanceByTag); \
	DECLARE_FUNCTION(execGetCurrentActiveMontage); \
	DECLARE_FUNCTION(execIsAnyMontagePlaying); \
	DECLARE_FUNCTION(execMontage_GetPlayRate); \
	DECLARE_FUNCTION(execMontage_GetBlendTime); \
	DECLARE_FUNCTION(execMontage_GetIsStopped); \
	DECLARE_FUNCTION(execMontage_SetPosition); \
	DECLARE_FUNCTION(execMontage_GetPosition); \
	DECLARE_FUNCTION(execMontage_GetCurrentSection); \
	DECLARE_FUNCTION(execMontage_IsPlaying); \
	DECLARE_FUNCTION(execMontage_IsActive); \
	DECLARE_FUNCTION(execMontage_SetPlayRate); \
	DECLARE_FUNCTION(execMontage_SetNextSection); \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd); \
	DECLARE_FUNCTION(execMontage_JumpToSection); \
	DECLARE_FUNCTION(execMontage_Resume); \
	DECLARE_FUNCTION(execMontage_Pause); \
	DECLARE_FUNCTION(execMontage_StopGroupByName); \
	DECLARE_FUNCTION(execMontage_Stop); \
	DECLARE_FUNCTION(execMontage_Play); \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation); \
	DECLARE_FUNCTION(execStopSlotAnimation); \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage); \
	DECLARE_FUNCTION(execPlaySlotAnimation); \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execSetPropagateNotifiesToLinkedInstances); \
	DECLARE_FUNCTION(execGetPropagateNotifiesToLinkedInstances); \
	DECLARE_FUNCTION(execSetReceiveNotifiesFromLinkedInstances); \
	DECLARE_FUNCTION(execGetReceiveNotifiesFromLinkedInstances); \
	DECLARE_FUNCTION(execSnapshotPose); \
	DECLARE_FUNCTION(execSavePoseSnapshot); \
	DECLARE_FUNCTION(execTryGetPawnOwner);


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_EVENT_PARMS \
	struct AnimInstance_eventBlueprintUpdateAnimation_Parms \
	{ \
		float DeltaTimeX; \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimInstance, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend struct Z_Construct_UClass_UAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_ARCHIVESERIALIZER \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_INCLASS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend struct Z_Construct_UClass_UAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_ARCHIVESERIALIZER \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance(UAnimInstance&&); \
	NO_API UAnimInstance(const UAnimInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance(UAnimInstance&&); \
	NO_API UAnimInstance(const UAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_352_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_355_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h


#define FOREACH_ENUM_EMONTAGEPLAYRETURNTYPE(op) \
	op(EMontagePlayReturnType::MontageLength) \
	op(EMontagePlayReturnType::Duration) 

enum class EMontagePlayReturnType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMontagePlayReturnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
