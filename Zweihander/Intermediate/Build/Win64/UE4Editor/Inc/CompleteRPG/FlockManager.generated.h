// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFlockMovementMode : uint8;
class AActor;
class ACrowdTestChar;
#ifdef COMPLETERPG_FlockManager_generated_h
#error "FlockManager.generated.h already included, missing '#pragma once' in FlockManager.h"
#endif
#define COMPLETERPG_FlockManager_generated_h

#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgentInfo_Statics; \
	COMPLETERPG_API static class UScriptStruct* StaticStruct();


template<> COMPLETERPG_API UScriptStruct* StaticStruct<struct FAgentInfo>();

#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBolt); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execSetScareActor); \
	DECLARE_FUNCTION(execTryUnregisterAgent); \
	DECLARE_FUNCTION(execTryRegisterAgent);


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBolt); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execSetScareActor); \
	DECLARE_FUNCTION(execTryUnregisterAgent); \
	DECLARE_FUNCTION(execTryRegisterAgent);


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlockManager(); \
	friend struct Z_Construct_UClass_AFlockManager_Statics; \
public: \
	DECLARE_CLASS(AFlockManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(AFlockManager)


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_INCLASS \
private: \
	static void StaticRegisterNativesAFlockManager(); \
	friend struct Z_Construct_UClass_AFlockManager_Statics; \
public: \
	DECLARE_CLASS(AFlockManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(AFlockManager)


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockManager(AFlockManager&&); \
	NO_API AFlockManager(const AFlockManager&); \
public:


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockManager(AFlockManager&&); \
	NO_API AFlockManager(const AFlockManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockManager)


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_PRIVATE_PROPERTY_OFFSET
#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_119_PROLOG
#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_INCLASS \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_FlockManager_h_122_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlockManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class AFlockManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_FlockManager_h


#define FOREACH_ENUM_ETARGETCENTROIDDIRECTION(op) \
	op(ETargetCentroidDirection::AwayFromPlayer) \
	op(ETargetCentroidDirection::BehindPlayer) \
	op(ETargetCentroidDirection::LeftOfPlayer) \
	op(ETargetCentroidDirection::RightOfPlayer) \
	op(ETargetCentroidDirection::Count) 

enum class ETargetCentroidDirection : uint8;
template<> COMPLETERPG_API UEnum* StaticEnum<ETargetCentroidDirection>();

#define FOREACH_ENUM_EFLOCKMOVEMENTMODE(op) \
	op(EFlockMovementMode::Flock) \
	op(EFlockMovementMode::JustWalkForwards) \
	op(EFlockMovementMode::SpecifyTargetPosition) 

enum class EFlockMovementMode : uint8;
template<> COMPLETERPG_API UEnum* StaticEnum<EFlockMovementMode>();

#define FOREACH_ENUM_EAGENTSTATE(op) \
	op(EAgentState::Grazing) \
	op(EAgentState::Walking) \
	op(EAgentState::Fleeing) 

enum class EAgentState : uint8;
template<> COMPLETERPG_API UEnum* StaticEnum<EAgentState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
