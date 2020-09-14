// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPhysicalMaterial;
class UMaterialInterface;
class AActor;
struct FLinearColor;
class UParticleSystem;
class UParticleSystemComponent;
#ifdef ENGINE_Emitter_generated_h
#error "Emitter.generated.h already included, missing '#pragma once' in Emitter.h"
#endif
#define ENGINE_Emitter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_52_DELEGATE \
struct _Script_Engine_eventParticleCollisionSignature_Parms \
{ \
	FName EventName; \
	float EmitterTime; \
	int32 ParticleTime; \
	FVector Location; \
	FVector Velocity; \
	FVector Direction; \
	FVector Normal; \
	FName BoneName; \
	UPhysicalMaterial* PhysMat; \
}; \
static inline void FParticleCollisionSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleCollisionSignature, FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) \
{ \
	_Script_Engine_eventParticleCollisionSignature_Parms Parms; \
	Parms.EventName=EventName; \
	Parms.EmitterTime=EmitterTime; \
	Parms.ParticleTime=ParticleTime; \
	Parms.Location=Location; \
	Parms.Velocity=Velocity; \
	Parms.Direction=Direction; \
	Parms.Normal=Normal; \
	Parms.BoneName=BoneName; \
	Parms.PhysMat=PhysMat; \
	ParticleCollisionSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_39_DELEGATE \
struct _Script_Engine_eventParticleDeathSignature_Parms \
{ \
	FName EventName; \
	float EmitterTime; \
	int32 ParticleTime; \
	FVector Location; \
	FVector Velocity; \
	FVector Direction; \
}; \
static inline void FParticleDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleDeathSignature, FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction) \
{ \
	_Script_Engine_eventParticleDeathSignature_Parms Parms; \
	Parms.EventName=EventName; \
	Parms.EmitterTime=EmitterTime; \
	Parms.ParticleTime=ParticleTime; \
	Parms.Location=Location; \
	Parms.Velocity=Velocity; \
	Parms.Direction=Direction; \
	ParticleDeathSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_29_DELEGATE \
struct _Script_Engine_eventParticleBurstSignature_Parms \
{ \
	FName EventName; \
	float EmitterTime; \
	int32 ParticleCount; \
}; \
static inline void FParticleBurstSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleBurstSignature, FName EventName, float EmitterTime, int32 ParticleCount) \
{ \
	_Script_Engine_eventParticleBurstSignature_Parms Parms; \
	Parms.EventName=EventName; \
	Parms.EmitterTime=EmitterTime; \
	Parms.ParticleCount=ParticleCount; \
	ParticleBurstSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_22_DELEGATE \
struct _Script_Engine_eventParticleSpawnSignature_Parms \
{ \
	FName EventName; \
	float EmitterTime; \
	FVector Location; \
	FVector Velocity; \
}; \
static inline void FParticleSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleSpawnSignature, FName EventName, float EmitterTime, FVector Location, FVector Velocity) \
{ \
	_Script_Engine_eventParticleSpawnSignature_Parms Parms; \
	Parms.EventName=EventName; \
	Parms.EmitterTime=EmitterTime; \
	Parms.Location=Location; \
	Parms.Velocity=Velocity; \
	ParticleSpawnSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execOnRep_bCurrentlyActive); \
	DECLARE_FUNCTION(execOnParticleSystemFinished);


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execOnRep_bCurrentlyActive); \
	DECLARE_FUNCTION(execOnParticleSystemFinished);


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmitter(); \
	friend struct Z_Construct_UClass_AEmitter_Statics; \
public: \
	DECLARE_CLASS(AEmitter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AEmitter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bCurrentlyActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bCurrentlyActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_INCLASS \
private: \
	static void StaticRegisterNativesAEmitter(); \
	friend struct Z_Construct_UClass_AEmitter_Statics; \
public: \
	DECLARE_CLASS(AEmitter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AEmitter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bCurrentlyActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bCurrentlyActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmitter(AEmitter&&); \
	NO_API AEmitter(const AEmitter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmitter(AEmitter&&); \
	NO_API AEmitter(const AEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmitter)


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParticleSystemComponent() { return STRUCT_OFFSET(AEmitter, ParticleSystemComponent); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_54_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Emitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
