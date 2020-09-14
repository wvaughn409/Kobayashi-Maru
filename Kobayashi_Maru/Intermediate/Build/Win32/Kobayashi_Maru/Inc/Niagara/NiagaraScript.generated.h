// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraScript_generated_h
#error "NiagaraScript.generated.h already included, missing '#pragma once' in NiagaraScript.h"
#endif
#define NIAGARA_NiagaraScript_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableData>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableDataId>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FSimulationStageMetaData>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraModuleDependency>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRaiseOnGPUCompilationComplete);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRaiseOnGPUCompilationComplete);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript, NIAGARA_API)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend struct Z_Construct_UClass_UNiagaraScript_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_ARCHIVESERIALIZER


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend struct Z_Construct_UClass_UNiagaraScript_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_ARCHIVESERIALIZER


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraScript(UNiagaraScript&&); \
	NIAGARA_API UNiagaraScript(const UNiagaraScript&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraScript(UNiagaraScript&&); \
	NIAGARA_API UNiagaraScript(const UNiagaraScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UsageId() { return STRUCT_OFFSET(UNiagaraScript, UsageId); } \
	FORCEINLINE static uint32 __PPO__ScriptExecutionParamStore() { return STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStore); } \
	FORCEINLINE static uint32 __PPO__ScriptExecutionBoundParameters() { return STRUCT_OFFSET(UNiagaraScript, ScriptExecutionBoundParameters); } \
	FORCEINLINE static uint32 __PPO__CachedScriptVMId() { return STRUCT_OFFSET(UNiagaraScript, CachedScriptVMId); } \
	FORCEINLINE static uint32 __PPO__CachedScriptVM() { return STRUCT_OFFSET(UNiagaraScript, CachedScriptVM); } \
	FORCEINLINE static uint32 __PPO__CachedParameterCollectionReferences() { return STRUCT_OFFSET(UNiagaraScript, CachedParameterCollectionReferences); } \
	FORCEINLINE static uint32 __PPO__CachedDefaultDataInterfaces() { return STRUCT_OFFSET(UNiagaraScript, CachedDefaultDataInterfaces); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_375_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_378_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraScript."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h


#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYSCRIPTCONSTRAINT(op) \
	op(ENiagaraModuleDependencyScriptConstraint::SameScript) \
	op(ENiagaraModuleDependencyScriptConstraint::AllScripts) 

enum class ENiagaraModuleDependencyScriptConstraint : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>();

#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYTYPE(op) \
	op(ENiagaraModuleDependencyType::PreDependency) \
	op(ENiagaraModuleDependencyType::PostDependency) 

enum class ENiagaraModuleDependencyType : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyType>();

#define FOREACH_ENUM_EUNUSEDATTRIBUTEBEHAVIOUR(op) \
	op(EUnusedAttributeBehaviour::Copy) \
	op(EUnusedAttributeBehaviour::Zero) \
	op(EUnusedAttributeBehaviour::None) \
	op(EUnusedAttributeBehaviour::MarkInvalid) \
	op(EUnusedAttributeBehaviour::PassThrough) 

enum class EUnusedAttributeBehaviour : uint8;
template<> NIAGARA_API UEnum* StaticEnum<EUnusedAttributeBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
