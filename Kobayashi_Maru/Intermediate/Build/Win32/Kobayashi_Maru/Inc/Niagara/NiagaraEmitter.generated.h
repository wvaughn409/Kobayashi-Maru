// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraEmitter_generated_h
#error "NiagaraEmitter.generated.h already included, missing '#pragma once' in NiagaraEmitter.h"
#endif
#define NIAGARA_NiagaraEmitter_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDetailsLevelScaleOverrides>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraEmitterScriptProperties Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEventScriptProperties>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterScriptProperties>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEventGeneratorProperties>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEventReceiverProperties>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitter, NIAGARA_API)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitter(); \
	friend struct Z_Construct_UClass_UNiagaraEmitter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEmitter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEmitter) \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_ARCHIVESERIALIZER


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEmitter(); \
	friend struct Z_Construct_UClass_UNiagaraEmitter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEmitter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEmitter) \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_ARCHIVESERIALIZER


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraEmitter(UNiagaraEmitter&&); \
	NIAGARA_API UNiagaraEmitter(const UNiagaraEmitter&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraEmitter(UNiagaraEmitter&&); \
	NIAGARA_API UNiagaraEmitter(const UNiagaraEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitter)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UniqueEmitterName() { return STRUCT_OFFSET(UNiagaraEmitter, UniqueEmitterName); } \
	FORCEINLINE static uint32 __PPO__RendererProperties() { return STRUCT_OFFSET(UNiagaraEmitter, RendererProperties); } \
	FORCEINLINE static uint32 __PPO__EventHandlerScriptProps() { return STRUCT_OFFSET(UNiagaraEmitter, EventHandlerScriptProps); } \
	FORCEINLINE static uint32 __PPO__SimulationStages() { return STRUCT_OFFSET(UNiagaraEmitter, SimulationStages); } \
	FORCEINLINE static uint32 __PPO__GPUComputeScript() { return STRUCT_OFFSET(UNiagaraEmitter, GPUComputeScript); } \
	FORCEINLINE static uint32 __PPO__SharedEventGeneratorIds() { return STRUCT_OFFSET(UNiagaraEmitter, SharedEventGeneratorIds); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_211_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_214_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h


#define FOREACH_ENUM_EPARTICLEALLOCATIONMODE(op) \
	op(EParticleAllocationMode::AutomaticEstimate) \
	op(EParticleAllocationMode::ManualEstimate) 

enum class EParticleAllocationMode : uint8;
template<> NIAGARA_API UEnum* StaticEnum<EParticleAllocationMode>();

#define FOREACH_ENUM_ESCRIPTEXECUTIONMODE(op) \
	op(EScriptExecutionMode::EveryParticle) \
	op(EScriptExecutionMode::SpawnedParticles) \
	op(EScriptExecutionMode::SingleParticle) 

enum class EScriptExecutionMode : uint8;
template<> NIAGARA_API UEnum* StaticEnum<EScriptExecutionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
