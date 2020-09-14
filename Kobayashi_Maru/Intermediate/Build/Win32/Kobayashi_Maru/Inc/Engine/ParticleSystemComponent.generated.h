// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
class USceneComponent;
enum class EAttachmentRule : uint8;
class UFXSystemAsset;
class AActor;
struct FLinearColor;
struct FVector;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UParticleSystem;
#ifdef ENGINE_ParticleSystemComponent_generated_h
#error "ParticleSystemComponent.generated.h already included, missing '#pragma once' in ParticleSystemComponent.h"
#endif
#define ENGINE_ParticleSystemComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSysParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSysParam>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_95_DELEGATE \
struct _Script_Engine_eventOnSystemFinished_Parms \
{ \
	UParticleSystemComponent* PSystem; \
}; \
static inline void FOnSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSystemFinished, UParticleSystemComponent* PSystem) \
{ \
	_Script_Engine_eventOnSystemFinished_Parms Parms; \
	Parms.PSystem=PSystem; \
	OnSystemFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReleaseToPool); \
	DECLARE_FUNCTION(execSetUseAutoManageAttachment); \
	DECLARE_FUNCTION(execSetAutoAttachmentParameters); \
	DECLARE_FUNCTION(execSetEmitterEnable); \
	DECLARE_FUNCTION(execGetFXSystemAsset); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter);


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReleaseToPool); \
	DECLARE_FUNCTION(execSetUseAutoManageAttachment); \
	DECLARE_FUNCTION(execSetAutoAttachmentParameters); \
	DECLARE_FUNCTION(execSetEmitterEnable); \
	DECLARE_FUNCTION(execGetFXSystemAsset); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter);


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFXSystemComponent(); \
	friend struct Z_Construct_UClass_UFXSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFXSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UFXSystemComponent)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_INCLASS \
private: \
	static void StaticRegisterNativesUFXSystemComponent(); \
	friend struct Z_Construct_UClass_UFXSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFXSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UFXSystemComponent)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFXSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFXSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFXSystemComponent(UFXSystemComponent&&); \
	NO_API UFXSystemComponent(const UFXSystemComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFXSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFXSystemComponent(UFXSystemComponent&&); \
	NO_API UFXSystemComponent(const UFXSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFXSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXSystemComponent)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_330_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_333_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FXSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFXSystemComponent>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateParticleEvent); \
	DECLARE_FUNCTION(execGetNamedMaterial); \
	DECLARE_FUNCTION(execCreateNamedDynamicMaterialInstance); \
	DECLARE_FUNCTION(execSetTrailSourceData); \
	DECLARE_FUNCTION(execEndTrails); \
	DECLARE_FUNCTION(execBeginTrails); \
	DECLARE_FUNCTION(execGetNumActiveParticles); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execGetBeamTargetStrength); \
	DECLARE_FUNCTION(execGetBeamTargetTangent); \
	DECLARE_FUNCTION(execGetBeamTargetPoint); \
	DECLARE_FUNCTION(execGetBeamSourceStrength); \
	DECLARE_FUNCTION(execGetBeamSourceTangent); \
	DECLARE_FUNCTION(execGetBeamSourcePoint); \
	DECLARE_FUNCTION(execGetBeamEndPoint); \
	DECLARE_FUNCTION(execSetBeamTargetStrength); \
	DECLARE_FUNCTION(execSetBeamTargetTangent); \
	DECLARE_FUNCTION(execSetBeamTargetPoint); \
	DECLARE_FUNCTION(execSetBeamSourceStrength); \
	DECLARE_FUNCTION(execSetBeamSourceTangent); \
	DECLARE_FUNCTION(execSetBeamSourcePoint); \
	DECLARE_FUNCTION(execSetBeamEndPoint); \
	DECLARE_FUNCTION(execSetAutoAttachParams);


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateParticleEvent); \
	DECLARE_FUNCTION(execGetNamedMaterial); \
	DECLARE_FUNCTION(execCreateNamedDynamicMaterialInstance); \
	DECLARE_FUNCTION(execSetTrailSourceData); \
	DECLARE_FUNCTION(execEndTrails); \
	DECLARE_FUNCTION(execBeginTrails); \
	DECLARE_FUNCTION(execGetNumActiveParticles); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execGetBeamTargetStrength); \
	DECLARE_FUNCTION(execGetBeamTargetTangent); \
	DECLARE_FUNCTION(execGetBeamTargetPoint); \
	DECLARE_FUNCTION(execGetBeamSourceStrength); \
	DECLARE_FUNCTION(execGetBeamSourceTangent); \
	DECLARE_FUNCTION(execGetBeamSourcePoint); \
	DECLARE_FUNCTION(execGetBeamEndPoint); \
	DECLARE_FUNCTION(execSetBeamTargetStrength); \
	DECLARE_FUNCTION(execSetBeamTargetTangent); \
	DECLARE_FUNCTION(execSetBeamTargetPoint); \
	DECLARE_FUNCTION(execSetBeamSourceStrength); \
	DECLARE_FUNCTION(execSetBeamSourceTangent); \
	DECLARE_FUNCTION(execSetBeamSourcePoint); \
	DECLARE_FUNCTION(execSetBeamEndPoint); \
	DECLARE_FUNCTION(execSetAutoAttachParams);


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleSystemComponent(); \
	friend struct Z_Construct_UClass_UParticleSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemComponent) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemComponent(); \
	friend struct Z_Construct_UClass_UParticleSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemComponent) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleSystemComponent(UParticleSystemComponent&&); \
	NO_API UParticleSystemComponent(const UParticleSystemComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleSystemComponent(UParticleSystemComponent&&); \
	NO_API UParticleSystemComponent(const UParticleSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemComponent)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_419_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_424_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h


#define FOREACH_ENUM_EPARTICLEEVENTTYPE(op) \
	op(EPET_Any) \
	op(EPET_Spawn) \
	op(EPET_Death) \
	op(EPET_Collision) \
	op(EPET_Burst) \
	op(EPET_Blueprint) 
#define FOREACH_ENUM_PARTICLEREPLAYSTATE(op) \
	op(PRS_Disabled) \
	op(PRS_Capturing) \
	op(PRS_Replaying) 
#define FOREACH_ENUM_EPARTICLESYSPARAMTYPE(op) \
	op(PSPT_None) \
	op(PSPT_Scalar) \
	op(PSPT_ScalarRand) \
	op(PSPT_Vector) \
	op(PSPT_VectorRand) \
	op(PSPT_Color) \
	op(PSPT_Actor) \
	op(PSPT_Material) \
	op(PSPT_VectorUnitRand) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
