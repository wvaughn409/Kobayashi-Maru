// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPLETERPG_CompleteRPGCharacter_generated_h
#error "CompleteRPGCharacter.generated.h already included, missing '#pragma once' in CompleteRPGCharacter.h"
#endif
#define COMPLETERPG_CompleteRPGCharacter_generated_h

#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_RPC_WRAPPERS
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompleteRPGCharacter(); \
	friend struct Z_Construct_UClass_ACompleteRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ACompleteRPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACompleteRPGCharacter*>(this); }


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACompleteRPGCharacter(); \
	friend struct Z_Construct_UClass_ACompleteRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ACompleteRPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACompleteRPGCharacter*>(this); }


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompleteRPGCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompleteRPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompleteRPGCharacter(ACompleteRPGCharacter&&); \
	NO_API ACompleteRPGCharacter(const ACompleteRPGCharacter&); \
public:


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompleteRPGCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompleteRPGCharacter(ACompleteRPGCharacter&&); \
	NO_API ACompleteRPGCharacter(const ACompleteRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompleteRPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGCharacter)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACompleteRPGCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACompleteRPGCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(ACompleteRPGCharacter, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TimeToMaxAcceleration() { return STRUCT_OFFSET(ACompleteRPGCharacter, TimeToMaxAcceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(ACompleteRPGCharacter, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(ACompleteRPGCharacter, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__LiftAcceleration() { return STRUCT_OFFSET(ACompleteRPGCharacter, LiftAcceleration); } \
	FORCEINLINE static uint32 __PPO__SpeedForMaxLiftAcceleration() { return STRUCT_OFFSET(ACompleteRPGCharacter, SpeedForMaxLiftAcceleration); } \
	FORCEINLINE static uint32 __PPO__CurrentYawSpeed() { return STRUCT_OFFSET(ACompleteRPGCharacter, CurrentYawSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentPitchSpeed() { return STRUCT_OFFSET(ACompleteRPGCharacter, CurrentPitchSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentRollSpeed() { return STRUCT_OFFSET(ACompleteRPGCharacter, CurrentRollSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentVelocity() { return STRUCT_OFFSET(ACompleteRPGCharacter, CurrentVelocity); } \
	FORCEINLINE static uint32 __PPO__AccelerationTime() { return STRUCT_OFFSET(ACompleteRPGCharacter, AccelerationTime); } \
	FORCEINLINE static uint32 __PPO__FoliageOverlapComponent() { return STRUCT_OFFSET(ACompleteRPGCharacter, FoliageOverlapComponent); }


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_8_PROLOG
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_INCLASS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompleteRPGCharacter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class ACompleteRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_CompleteRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
