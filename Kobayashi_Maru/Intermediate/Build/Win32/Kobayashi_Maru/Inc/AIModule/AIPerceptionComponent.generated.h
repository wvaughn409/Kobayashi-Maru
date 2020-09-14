// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
class UAISense;
struct FActorPerceptionBlueprintInfo;
#ifdef AIMODULE_AIPerceptionComponent_generated_h
#error "AIPerceptionComponent.generated.h already included, missing '#pragma once' in AIPerceptionComponent.h"
#endif
#define AIMODULE_AIPerceptionComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FActorPerceptionBlueprintInfo>();

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_22_DELEGATE \
struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms \
{ \
	AActor* Actor; \
	FAIStimulus Stimulus; \
}; \
static inline void FActorPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionUpdatedDelegate, AActor* Actor, FAIStimulus Stimulus) \
{ \
	_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Stimulus=Stimulus; \
	ActorPerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_21_DELEGATE \
struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms \
{ \
	TArray<AActor*> UpdatedActors; \
}; \
static inline void FPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerceptionUpdatedDelegate, TArray<AActor*> const& UpdatedActors) \
{ \
	_Script_AIModule_eventPerceptionUpdatedDelegate_Parms Parms; \
	Parms.UpdatedActors=UpdatedActors; \
	PerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_SPARSE_DATA
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSenseEnabled); \
	DECLARE_FUNCTION(execGetActorsPerception); \
	DECLARE_FUNCTION(execGetPerceivedActors); \
	DECLARE_FUNCTION(execGetKnownPerceivedActors); \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors); \
	DECLARE_FUNCTION(execGetPerceivedHostileActors); \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate); \
	DECLARE_FUNCTION(execOnOwnerEndPlay);


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSenseEnabled); \
	DECLARE_FUNCTION(execGetActorsPerception); \
	DECLARE_FUNCTION(execGetPerceivedActors); \
	DECLARE_FUNCTION(execGetKnownPerceivedActors); \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors); \
	DECLARE_FUNCTION(execGetPerceivedHostileActors); \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate); \
	DECLARE_FUNCTION(execOnOwnerEndPlay);


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend struct Z_Construct_UClass_UAIPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend struct Z_Construct_UClass_UAIPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionComponent(UAIPerceptionComponent&&); \
	NO_API UAIPerceptionComponent(const UAIPerceptionComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionComponent(UAIPerceptionComponent&&); \
	NO_API UAIPerceptionComponent(const UAIPerceptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SensesConfig() { return STRUCT_OFFSET(UAIPerceptionComponent, SensesConfig); } \
	FORCEINLINE static uint32 __PPO__DominantSense() { return STRUCT_OFFSET(UAIPerceptionComponent, DominantSense); } \
	FORCEINLINE static uint32 __PPO__AIOwner() { return STRUCT_OFFSET(UAIPerceptionComponent, AIOwner); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_182_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_185_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIPerceptionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
