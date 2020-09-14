// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSystem_generated_h
#error "NiagaraSystem.generated.h already included, missing '#pragma once' in NiagaraSystem.h"
#endif
#define NIAGARA_NiagaraSystem_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemCompileRequest>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FEmitterCompiledScriptPair>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemCompiledData>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraParameterDataSetBindingCollection>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraParameterDataSetBinding>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterCompiledData>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem, NO_API)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSystem(); \
	friend struct Z_Construct_UClass_UNiagaraSystem_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystem) \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_ARCHIVESERIALIZER


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystem(); \
	friend struct Z_Construct_UClass_UNiagaraSystem_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystem) \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_ARCHIVESERIALIZER


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystem) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSystem(UNiagaraSystem&&); \
	NO_API UNiagaraSystem(const UNiagaraSystem&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSystem(UNiagaraSystem&&); \
	NO_API UNiagaraSystem(const UNiagaraSystem&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSystem)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectType() { return STRUCT_OFFSET(UNiagaraSystem, EffectType); } \
	FORCEINLINE static uint32 __PPO__bOverrideScalabilitySettings() { return STRUCT_OFFSET(UNiagaraSystem, bOverrideScalabilitySettings); } \
	FORCEINLINE static uint32 __PPO__ScalabilityOverrides_DEPRECATED() { return STRUCT_OFFSET(UNiagaraSystem, ScalabilityOverrides_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SystemScalabilityOverrides() { return STRUCT_OFFSET(UNiagaraSystem, SystemScalabilityOverrides); } \
	FORCEINLINE static uint32 __PPO__EmitterHandles() { return STRUCT_OFFSET(UNiagaraSystem, EmitterHandles); } \
	FORCEINLINE static uint32 __PPO__ParameterCollectionOverrides() { return STRUCT_OFFSET(UNiagaraSystem, ParameterCollectionOverrides); } \
	FORCEINLINE static uint32 __PPO__SystemSpawnScript() { return STRUCT_OFFSET(UNiagaraSystem, SystemSpawnScript); } \
	FORCEINLINE static uint32 __PPO__SystemUpdateScript() { return STRUCT_OFFSET(UNiagaraSystem, SystemUpdateScript); } \
	FORCEINLINE static uint32 __PPO__SystemCompiledData() { return STRUCT_OFFSET(UNiagaraSystem, SystemCompiledData); } \
	FORCEINLINE static uint32 __PPO__ExposedParameters() { return STRUCT_OFFSET(UNiagaraSystem, ExposedParameters); } \
	FORCEINLINE static uint32 __PPO__FixedBounds() { return STRUCT_OFFSET(UNiagaraSystem, FixedBounds); } \
	FORCEINLINE static uint32 __PPO__bAutoDeactivate() { return STRUCT_OFFSET(UNiagaraSystem, bAutoDeactivate); } \
	FORCEINLINE static uint32 __PPO__WarmupTime() { return STRUCT_OFFSET(UNiagaraSystem, WarmupTime); } \
	FORCEINLINE static uint32 __PPO__WarmupTickCount() { return STRUCT_OFFSET(UNiagaraSystem, WarmupTickCount); } \
	FORCEINLINE static uint32 __PPO__WarmupTickDelta() { return STRUCT_OFFSET(UNiagaraSystem, WarmupTickDelta); } \
	FORCEINLINE static uint32 __PPO__bHasSystemScriptDIsWithPerInstanceData() { return STRUCT_OFFSET(UNiagaraSystem, bHasSystemScriptDIsWithPerInstanceData); } \
	FORCEINLINE static uint32 __PPO__UserDINamesReadInSystemScripts() { return STRUCT_OFFSET(UNiagaraSystem, UserDINamesReadInSystemScripts); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_178_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraSystem."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
