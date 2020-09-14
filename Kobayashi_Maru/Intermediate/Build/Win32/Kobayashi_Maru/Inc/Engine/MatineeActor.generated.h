// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MatineeActor_generated_h
#error "MatineeActor.generated.h already included, missing '#pragma once' in MatineeActor.h"
#endif
#define ENGINE_MatineeActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpGroupActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpGroupActorInfo>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraCutInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraCutInfo>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_18_DELEGATE \
static inline void FOnMatineeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMatineeEvent) \
{ \
	OnMatineeEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableGroupByName); \
	DECLARE_FUNCTION(execSetLoopingState); \
	DECLARE_FUNCTION(execChangePlaybackDirection); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableGroupByName); \
	DECLARE_FUNCTION(execSetLoopingState); \
	DECLARE_FUNCTION(execChangePlaybackDirection); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMatineeActor(); \
	friend struct Z_Construct_UClass_AMatineeActor_Statics; \
public: \
	DECLARE_CLASS(AMatineeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AMatineeActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatineeData=NETFIELD_REP_START, \
		PlayRate, \
		bLooping, \
		GroupActorInfos, \
		bIsPlaying, \
		bReversePlayback, \
		bPaused, \
		bPendingStop, \
		InterpPosition, \
		ReplicationForceIsPlaying, \
		NETFIELD_REP_END=ReplicationForceIsPlaying	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS \
private: \
	static void StaticRegisterNativesAMatineeActor(); \
	friend struct Z_Construct_UClass_AMatineeActor_Statics; \
public: \
	DECLARE_CLASS(AMatineeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AMatineeActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatineeData=NETFIELD_REP_START, \
		PlayRate, \
		bLooping, \
		GroupActorInfos, \
		bIsPlaying, \
		bReversePlayback, \
		bPaused, \
		bPendingStop, \
		InterpPosition, \
		ReplicationForceIsPlaying, \
		NETFIELD_REP_END=ReplicationForceIsPlaying	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMatineeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatineeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMatineeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatineeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMatineeActor(AMatineeActor&&); \
	NO_API AMatineeActor(const AMatineeActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMatineeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMatineeActor(AMatineeActor&&); \
	NO_API AMatineeActor(const AMatineeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMatineeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatineeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatineeActor)


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicationForceIsPlaying() { return STRUCT_OFFSET(AMatineeActor, ReplicationForceIsPlaying); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AMatineeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
