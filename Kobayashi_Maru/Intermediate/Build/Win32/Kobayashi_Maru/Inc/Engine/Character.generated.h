// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
class ACharacter;
class UAnimMontage;
struct FRotator;
struct FRootMotionSourceGroup;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
#ifdef ENGINE_Character_generated_h
#error "Character.generated.h already included, missing '#pragma once' in Character.h"
#endif
#define ENGINE_Character_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasedMovementInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBasedMovementInfo>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSimulatedRootMotionReplicatedMove>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRepRootMotionMontage>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_33_DELEGATE \
struct _Script_Engine_eventLandedSignature_Parms \
{ \
	FHitResult Hit; \
}; \
static inline void FLandedSignature_DelegateWrapper(const FMulticastScriptDelegate& LandedSignature, FHitResult const& Hit) \
{ \
	_Script_Engine_eventLandedSignature_Parms Parms; \
	Parms.Hit=Hit; \
	LandedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_32_DELEGATE \
static inline void FCharacterReachedApexSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterReachedApexSignature) \
{ \
	CharacterReachedApexSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_31_DELEGATE \
struct _Script_Engine_eventCharacterMovementUpdatedSignature_Parms \
{ \
	float DeltaSeconds; \
	FVector OldLocation; \
	FVector OldVelocity; \
}; \
static inline void FCharacterMovementUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterMovementUpdatedSignature, float DeltaSeconds, FVector OldLocation, FVector OldVelocity) \
{ \
	_Script_Engine_eventCharacterMovementUpdatedSignature_Parms Parms; \
	Parms.DeltaSeconds=DeltaSeconds; \
	Parms.OldLocation=OldLocation; \
	Parms.OldVelocity=OldVelocity; \
	CharacterMovementUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_30_DELEGATE \
struct _Script_Engine_eventMovementModeChangedSignature_Parms \
{ \
	ACharacter* Character; \
	TEnumAsByte<EMovementMode> PrevMovementMode; \
	uint8 PreviousCustomMode; \
}; \
static inline void FMovementModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedSignature, ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode) \
{ \
	_Script_Engine_eventMovementModeChangedSignature_Parms Parms; \
	Parms.Character=Character; \
	Parms.PrevMovementMode=PrevMovementMode; \
	Parms.PreviousCustomMode=PreviousCustomMode; \
	MovementModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_RPC_WRAPPERS \
	virtual void RootMotionDebugClientPrintOnScreen_Implementation(const FString& InString); \
	virtual void ClientCheatGhost_Implementation(); \
	virtual void ClientCheatFly_Implementation(); \
	virtual void ClientCheatWalk_Implementation(); \
	virtual void OnWalkingOffLedge_Implementation(FVector const& PreviousFloorImpactNormal, FVector const& PreviousFloorContactNormal, FVector const& PreviousLocation, float TimeDelta); \
	virtual void OnJumped_Implementation(); \
	virtual bool CanJumpInternal_Implementation() const; \
	virtual void ClientAdjustRootMotionSourcePosition_Implementation(float TimeStamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustRootMotionPosition_Implementation(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAckGoodMove_Implementation(float TimeStamp); \
	virtual bool ServerMoveOld_Validate(float , FVector_NetQuantize10 , uint8 ); \
	virtual void ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags); \
	virtual bool ServerMoveDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveDualNoBase_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , uint8 ); \
	virtual void ServerMoveDualNoBase_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual bool ServerMoveDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveNoBase_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , uint8 ); \
	virtual void ServerMoveNoBase_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual bool ServerMove_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMove_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage); \
	DECLARE_FUNCTION(execHasAnyRootMotion); \
	DECLARE_FUNCTION(execIsPlayingRootMotion); \
	DECLARE_FUNCTION(execOnRep_RootMotion); \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen); \
	DECLARE_FUNCTION(execClientCheatGhost); \
	DECLARE_FUNCTION(execClientCheatFly); \
	DECLARE_FUNCTION(execClientCheatWalk); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execOnWalkingOffLedge); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execLaunchCharacter); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execStopAnimMontage); \
	DECLARE_FUNCTION(execPlayAnimMontage); \
	DECLARE_FUNCTION(execIsJumpProvidingForce); \
	DECLARE_FUNCTION(execCanJumpInternal); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execOnRep_IsCrouched); \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator); \
	DECLARE_FUNCTION(execGetBaseTranslationOffset); \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp); \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement); \
	DECLARE_FUNCTION(execCacheInitialMeshOffset); \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition); \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execClientAckGoodMove); \
	DECLARE_FUNCTION(execServerMoveOld); \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveDualNoBase); \
	DECLARE_FUNCTION(execServerMoveDual); \
	DECLARE_FUNCTION(execServerMoveNoBase); \
	DECLARE_FUNCTION(execServerMove);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage); \
	DECLARE_FUNCTION(execHasAnyRootMotion); \
	DECLARE_FUNCTION(execIsPlayingRootMotion); \
	DECLARE_FUNCTION(execOnRep_RootMotion); \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen); \
	DECLARE_FUNCTION(execClientCheatGhost); \
	DECLARE_FUNCTION(execClientCheatFly); \
	DECLARE_FUNCTION(execClientCheatWalk); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execOnWalkingOffLedge); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execLaunchCharacter); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execStopAnimMontage); \
	DECLARE_FUNCTION(execPlayAnimMontage); \
	DECLARE_FUNCTION(execIsJumpProvidingForce); \
	DECLARE_FUNCTION(execCanJumpInternal); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execOnRep_IsCrouched); \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator); \
	DECLARE_FUNCTION(execGetBaseTranslationOffset); \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp); \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement); \
	DECLARE_FUNCTION(execCacheInitialMeshOffset); \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition); \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execClientAckGoodMove); \
	DECLARE_FUNCTION(execServerMoveOld); \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveDualNoBase); \
	DECLARE_FUNCTION(execServerMoveDual); \
	DECLARE_FUNCTION(execServerMoveNoBase); \
	DECLARE_FUNCTION(execServerMove);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_EVENT_PARMS \
	struct Character_eventCanJumpInternal_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Character_eventCanJumpInternal_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Character_eventClientAckGoodMove_Parms \
	{ \
		float TimeStamp; \
	}; \
	struct Character_eventClientAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventClientAdjustRootMotionPosition_Parms \
	{ \
		float TimeStamp; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventClientAdjustRootMotionSourcePosition_Parms \
	{ \
		float TimeStamp; \
		FRootMotionSourceGroup ServerRootMotion; \
		bool bHasAnimRootMotion; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventClientVeryShortAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct Character_eventK2_OnEndCrouch_Parms \
	{ \
		float HalfHeightAdjust; \
		float ScaledHalfHeightAdjust; \
	}; \
	struct Character_eventK2_OnMovementModeChanged_Parms \
	{ \
		TEnumAsByte<EMovementMode> PrevMovementMode; \
		TEnumAsByte<EMovementMode> NewMovementMode; \
		uint8 PrevCustomMode; \
		uint8 NewCustomMode; \
	}; \
	struct Character_eventK2_OnStartCrouch_Parms \
	{ \
		float HalfHeightAdjust; \
		float ScaledHalfHeightAdjust; \
	}; \
	struct Character_eventK2_UpdateCustomMovement_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct Character_eventOnLanded_Parms \
	{ \
		FHitResult Hit; \
	}; \
	struct Character_eventOnLaunched_Parms \
	{ \
		FVector LaunchVelocity; \
		bool bXYOverride; \
		bool bZOverride; \
	}; \
	struct Character_eventOnWalkingOffLedge_Parms \
	{ \
		FVector PreviousFloorImpactNormal; \
		FVector PreviousFloorContactNormal; \
		FVector PreviousLocation; \
		float TimeDelta; \
	}; \
	struct Character_eventRootMotionDebugClientPrintOnScreen_Parms \
	{ \
		FString InString; \
	}; \
	struct Character_eventServerMove_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveDualNoBase_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveNoBase_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		uint8 ClientMovementMode; \
	}; \
	struct Character_eventServerMoveOld_Parms \
	{ \
		float OldTimeStamp; \
		FVector_NetQuantize10 OldAccel; \
		uint8 OldMoveFlags; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedBasedMovement=NETFIELD_REP_START, \
		AnimRootMotionTranslationScale, \
		ReplicatedServerLastTransformUpdateTimeStamp, \
		ReplayLastTransformUpdateTimeStamp, \
		ReplicatedMovementMode, \
		bIsCrouched, \
		bProxyIsJumpForceApplied, \
		JumpMaxHoldTime, \
		JumpMaxCount, \
		RepRootMotion, \
		NETFIELD_REP_END=RepRootMotion	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_INCLASS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedBasedMovement=NETFIELD_REP_START, \
		AnimRootMotionTranslationScale, \
		ReplicatedServerLastTransformUpdateTimeStamp, \
		ReplayLastTransformUpdateTimeStamp, \
		ReplicatedMovementMode, \
		bIsCrouched, \
		bProxyIsJumpForceApplied, \
		JumpMaxHoldTime, \
		JumpMaxCount, \
		RepRootMotion, \
		NETFIELD_REP_END=RepRootMotion	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACharacter, Mesh); } \
	FORCEINLINE static uint32 __PPO__CharacterMovement() { return STRUCT_OFFSET(ACharacter, CharacterMovement); } \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ACharacter, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__BasedMovement() { return STRUCT_OFFSET(ACharacter, BasedMovement); } \
	FORCEINLINE static uint32 __PPO__ReplicatedBasedMovement() { return STRUCT_OFFSET(ACharacter, ReplicatedBasedMovement); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(ACharacter, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__BaseTranslationOffset() { return STRUCT_OFFSET(ACharacter, BaseTranslationOffset); } \
	FORCEINLINE static uint32 __PPO__BaseRotationOffset() { return STRUCT_OFFSET(ACharacter, BaseRotationOffset); } \
	FORCEINLINE static uint32 __PPO__ReplicatedServerLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(ACharacter, ReplicatedServerLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ReplayLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(ACharacter, ReplayLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ReplicatedMovementMode() { return STRUCT_OFFSET(ACharacter, ReplicatedMovementMode); } \
	FORCEINLINE static uint32 __PPO__bInBaseReplication() { return STRUCT_OFFSET(ACharacter, bInBaseReplication); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_212_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
