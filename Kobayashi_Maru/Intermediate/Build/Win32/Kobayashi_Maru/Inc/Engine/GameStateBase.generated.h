// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef ENGINE_GameStateBase_generated_h
#error "GameStateBase.generated.h already included, missing '#pragma once' in GameStateBase.h"
#endif
#define ENGINE_GameStateBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedWorldTimeSeconds); \
	DECLARE_FUNCTION(execOnRep_ReplicatedHasBegunPlay); \
	DECLARE_FUNCTION(execOnRep_SpectatorClass); \
	DECLARE_FUNCTION(execOnRep_GameModeClass); \
	DECLARE_FUNCTION(execGetPlayerRespawnDelay); \
	DECLARE_FUNCTION(execGetPlayerStartTime); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execHasBegunPlay); \
	DECLARE_FUNCTION(execGetServerWorldTimeSeconds);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedWorldTimeSeconds); \
	DECLARE_FUNCTION(execOnRep_ReplicatedHasBegunPlay); \
	DECLARE_FUNCTION(execOnRep_SpectatorClass); \
	DECLARE_FUNCTION(execOnRep_GameModeClass); \
	DECLARE_FUNCTION(execGetPlayerRespawnDelay); \
	DECLARE_FUNCTION(execGetPlayerStartTime); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execHasBegunPlay); \
	DECLARE_FUNCTION(execGetServerWorldTimeSeconds);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameStateBase(); \
	friend struct Z_Construct_UClass_AGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AGameStateBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameStateBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameModeClass=NETFIELD_REP_START, \
		SpectatorClass, \
		bReplicatedHasBegunPlay, \
		ReplicatedWorldTimeSeconds, \
		NETFIELD_REP_END=ReplicatedWorldTimeSeconds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAGameStateBase(); \
	friend struct Z_Construct_UClass_AGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AGameStateBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameStateBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameModeClass=NETFIELD_REP_START, \
		SpectatorClass, \
		bReplicatedHasBegunPlay, \
		ReplicatedWorldTimeSeconds, \
		NETFIELD_REP_END=ReplicatedWorldTimeSeconds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameStateBase(AGameStateBase&&); \
	NO_API AGameStateBase(const AGameStateBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameStateBase(AGameStateBase&&); \
	NO_API AGameStateBase(const AGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameStateBase)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bReplicatedHasBegunPlay() { return STRUCT_OFFSET(AGameStateBase, bReplicatedHasBegunPlay); } \
	FORCEINLINE static uint32 __PPO__ReplicatedWorldTimeSeconds() { return STRUCT_OFFSET(AGameStateBase, ReplicatedWorldTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__ServerWorldTimeSecondsDelta() { return STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsDelta); } \
	FORCEINLINE static uint32 __PPO__ServerWorldTimeSecondsUpdateFrequency() { return STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsUpdateFrequency); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameStateBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
