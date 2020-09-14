// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
class UObject;
#ifdef AIMODULE_BlackboardComponent_generated_h
#error "BlackboardComponent.generated.h already included, missing '#pragma once' in BlackboardComponent.h"
#endif
#define AIMODULE_BlackboardComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_SPARSE_DATA
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearValue); \
	DECLARE_FUNCTION(execGetRotationFromEntry); \
	DECLARE_FUNCTION(execGetLocationFromEntry); \
	DECLARE_FUNCTION(execIsVectorValueSet); \
	DECLARE_FUNCTION(execSetValueAsRotator); \
	DECLARE_FUNCTION(execSetValueAsVector); \
	DECLARE_FUNCTION(execSetValueAsName); \
	DECLARE_FUNCTION(execSetValueAsString); \
	DECLARE_FUNCTION(execSetValueAsBool); \
	DECLARE_FUNCTION(execSetValueAsFloat); \
	DECLARE_FUNCTION(execSetValueAsInt); \
	DECLARE_FUNCTION(execSetValueAsEnum); \
	DECLARE_FUNCTION(execSetValueAsClass); \
	DECLARE_FUNCTION(execSetValueAsObject); \
	DECLARE_FUNCTION(execGetValueAsRotator); \
	DECLARE_FUNCTION(execGetValueAsVector); \
	DECLARE_FUNCTION(execGetValueAsName); \
	DECLARE_FUNCTION(execGetValueAsString); \
	DECLARE_FUNCTION(execGetValueAsBool); \
	DECLARE_FUNCTION(execGetValueAsFloat); \
	DECLARE_FUNCTION(execGetValueAsInt); \
	DECLARE_FUNCTION(execGetValueAsEnum); \
	DECLARE_FUNCTION(execGetValueAsClass); \
	DECLARE_FUNCTION(execGetValueAsObject);


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearValue); \
	DECLARE_FUNCTION(execGetRotationFromEntry); \
	DECLARE_FUNCTION(execGetLocationFromEntry); \
	DECLARE_FUNCTION(execIsVectorValueSet); \
	DECLARE_FUNCTION(execSetValueAsRotator); \
	DECLARE_FUNCTION(execSetValueAsVector); \
	DECLARE_FUNCTION(execSetValueAsName); \
	DECLARE_FUNCTION(execSetValueAsString); \
	DECLARE_FUNCTION(execSetValueAsBool); \
	DECLARE_FUNCTION(execSetValueAsFloat); \
	DECLARE_FUNCTION(execSetValueAsInt); \
	DECLARE_FUNCTION(execSetValueAsEnum); \
	DECLARE_FUNCTION(execSetValueAsClass); \
	DECLARE_FUNCTION(execSetValueAsObject); \
	DECLARE_FUNCTION(execGetValueAsRotator); \
	DECLARE_FUNCTION(execGetValueAsVector); \
	DECLARE_FUNCTION(execGetValueAsName); \
	DECLARE_FUNCTION(execGetValueAsString); \
	DECLARE_FUNCTION(execGetValueAsBool); \
	DECLARE_FUNCTION(execGetValueAsFloat); \
	DECLARE_FUNCTION(execGetValueAsInt); \
	DECLARE_FUNCTION(execGetValueAsEnum); \
	DECLARE_FUNCTION(execGetValueAsClass); \
	DECLARE_FUNCTION(execGetValueAsObject);


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardComponent(); \
	friend struct Z_Construct_UClass_UBlackboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBlackboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardComponent(); \
	friend struct Z_Construct_UClass_UBlackboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBlackboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardComponent(UBlackboardComponent&&); \
	NO_API UBlackboardComponent(const UBlackboardComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardComponent(UBlackboardComponent&&); \
	NO_API UBlackboardComponent(const UBlackboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BrainComp() { return STRUCT_OFFSET(UBlackboardComponent, BrainComp); } \
	FORCEINLINE static uint32 __PPO__DefaultBlackboardAsset() { return STRUCT_OFFSET(UBlackboardComponent, DefaultBlackboardAsset); } \
	FORCEINLINE static uint32 __PPO__BlackboardAsset() { return STRUCT_OFFSET(UBlackboardComponent, BlackboardAsset); } \
	FORCEINLINE static uint32 __PPO__KeyInstances() { return STRUCT_OFFSET(UBlackboardComponent, KeyInstances); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_41_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
