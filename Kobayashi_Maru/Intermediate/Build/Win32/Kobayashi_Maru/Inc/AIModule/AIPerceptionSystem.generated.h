// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FAIStimulus;
class UAISense;
class UAISenseEvent;
#ifdef AIMODULE_AIPerceptionSystem_generated_h
#error "AIPerceptionSystem.generated.h already included, missing '#pragma once' in AIPerceptionSystem.h"
#endif
#define AIMODULE_AIPerceptionSystem_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_SPARSE_DATA
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPerceptionStimuliSourceEndPlay); \
	DECLARE_FUNCTION(execGetSenseClassForStimulus); \
	DECLARE_FUNCTION(execRegisterPerceptionStimuliSource); \
	DECLARE_FUNCTION(execReportPerceptionEvent); \
	DECLARE_FUNCTION(execReportEvent);


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerceptionStimuliSourceEndPlay); \
	DECLARE_FUNCTION(execGetSenseClassForStimulus); \
	DECLARE_FUNCTION(execRegisterPerceptionStimuliSource); \
	DECLARE_FUNCTION(execReportPerceptionEvent); \
	DECLARE_FUNCTION(execReportEvent);


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionSystem(); \
	friend struct Z_Construct_UClass_UAIPerceptionSystem_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionSystem, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAIPerceptionSystem(); \
	friend struct Z_Construct_UClass_UAIPerceptionSystem_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionSystem, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionSystem(UAIPerceptionSystem&&); \
	NO_API UAIPerceptionSystem(const UAIPerceptionSystem&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionSystem(UAIPerceptionSystem&&); \
	NO_API UAIPerceptionSystem(const UAIPerceptionSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionSystem)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Senses() { return STRUCT_OFFSET(UAIPerceptionSystem, Senses); } \
	FORCEINLINE static uint32 __PPO__PerceptionAgingRate() { return STRUCT_OFFSET(UAIPerceptionSystem, PerceptionAgingRate); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_28_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
