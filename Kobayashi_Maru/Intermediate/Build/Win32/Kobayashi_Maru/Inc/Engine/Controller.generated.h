// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
class AActor;
class APawn;
struct FRotator;
struct FVector;
class APlayerController;
#ifdef ENGINE_Controller_generated_h
#error "Controller.generated.h already included, missing '#pragma once' in Controller.h"
#endif
#define ENGINE_Controller_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_19_DELEGATE \
struct _Script_Engine_eventInstigatedAnyDamageSignature_Parms \
{ \
	float Damage; \
	const UDamageType* DamageType; \
	AActor* DamagedActor; \
	AActor* DamageCauser; \
}; \
static inline void FInstigatedAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstigatedAnyDamageSignature, float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) \
{ \
	_Script_Engine_eventInstigatedAnyDamageSignature_Parms Parms; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.DamagedActor=DamagedActor; \
	Parms.DamageCauser=DamageCauser; \
	InstigatedAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags); \
	DECLARE_FUNCTION(execIsLookInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreLookInput); \
	DECLARE_FUNCTION(execSetIgnoreLookInput); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreMoveInput); \
	DECLARE_FUNCTION(execSetIgnoreMoveInput); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execUnPossess); \
	DECLARE_FUNCTION(execPossess); \
	DECLARE_FUNCTION(execIsLocalController); \
	DECLARE_FUNCTION(execIsLocalPlayerController); \
	DECLARE_FUNCTION(execIsPlayerController); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execK2_GetPawn); \
	DECLARE_FUNCTION(execClientSetRotation); \
	DECLARE_FUNCTION(execClientSetLocation); \
	DECLARE_FUNCTION(execCastToPlayerController); \
	DECLARE_FUNCTION(execOnRep_PlayerState); \
	DECLARE_FUNCTION(execOnRep_Pawn); \
	DECLARE_FUNCTION(execLineOfSightTo); \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation); \
	DECLARE_FUNCTION(execSetControlRotation); \
	DECLARE_FUNCTION(execGetControlRotation);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags); \
	DECLARE_FUNCTION(execIsLookInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreLookInput); \
	DECLARE_FUNCTION(execSetIgnoreLookInput); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreMoveInput); \
	DECLARE_FUNCTION(execSetIgnoreMoveInput); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execUnPossess); \
	DECLARE_FUNCTION(execPossess); \
	DECLARE_FUNCTION(execIsLocalController); \
	DECLARE_FUNCTION(execIsLocalPlayerController); \
	DECLARE_FUNCTION(execIsPlayerController); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execK2_GetPawn); \
	DECLARE_FUNCTION(execClientSetRotation); \
	DECLARE_FUNCTION(execClientSetLocation); \
	DECLARE_FUNCTION(execCastToPlayerController); \
	DECLARE_FUNCTION(execOnRep_PlayerState); \
	DECLARE_FUNCTION(execOnRep_Pawn); \
	DECLARE_FUNCTION(execLineOfSightTo); \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation); \
	DECLARE_FUNCTION(execSetControlRotation); \
	DECLARE_FUNCTION(execGetControlRotation);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_EVENT_PARMS \
	struct Controller_eventClientSetLocation_Parms \
	{ \
		FVector NewLocation; \
		FRotator NewRotation; \
	}; \
	struct Controller_eventClientSetRotation_Parms \
	{ \
		FRotator NewRotation; \
		bool bResetCamera; \
	}; \
	struct Controller_eventReceiveInstigatedAnyDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		AActor* DamagedActor; \
		AActor* DamageCauser; \
	}; \
	struct Controller_eventReceivePossess_Parms \
	{ \
		APawn* PossessedPawn; \
	}; \
	struct Controller_eventReceiveUnPossess_Parms \
	{ \
		APawn* UnpossessedPawn; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAController(); \
	friend struct Z_Construct_UClass_AController_Statics; \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerState=NETFIELD_REP_START, \
		Pawn, \
		NETFIELD_REP_END=Pawn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAController(); \
	friend struct Z_Construct_UClass_AController_Statics; \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerState=NETFIELD_REP_START, \
		Pawn, \
		NETFIELD_REP_END=Pawn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(AController, Pawn); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(AController, Character); } \
	FORCEINLINE static uint32 __PPO__TransformComponent() { return STRUCT_OFFSET(AController, TransformComponent); } \
	FORCEINLINE static uint32 __PPO__ControlRotation() { return STRUCT_OFFSET(AController, ControlRotation); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_39_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
