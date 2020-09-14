// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBTNode;
class AActor;
struct FBlackboardKeySelector;
struct FRotator;
struct FVector;
class UObject;
class UBehaviorTreeComponent;
class UBlackboardComponent;
#ifdef AIMODULE_BTFunctionLibrary_generated_h
#error "BTFunctionLibrary.generated.h already included, missing '#pragma once' in BTFunctionLibrary.h"
#endif
#define AIMODULE_BTFunctionLibrary_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_SPARSE_DATA
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopUsingExternalEvent); \
	DECLARE_FUNCTION(execStartUsingExternalEvent); \
	DECLARE_FUNCTION(execClearBlackboardValue); \
	DECLARE_FUNCTION(execSetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execClearBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsName); \
	DECLARE_FUNCTION(execSetBlackboardValueAsString); \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execSetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execSetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execSetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execGetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execGetBlackboardValueAsName); \
	DECLARE_FUNCTION(execGetBlackboardValueAsString); \
	DECLARE_FUNCTION(execGetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execGetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execGetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execGetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execGetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execGetBlackboardValueAsActor); \
	DECLARE_FUNCTION(execGetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetOwnerComponent); \
	DECLARE_FUNCTION(execGetOwnersBlackboard);


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopUsingExternalEvent); \
	DECLARE_FUNCTION(execStartUsingExternalEvent); \
	DECLARE_FUNCTION(execClearBlackboardValue); \
	DECLARE_FUNCTION(execSetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execClearBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsName); \
	DECLARE_FUNCTION(execSetBlackboardValueAsString); \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execSetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execSetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execSetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execGetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execGetBlackboardValueAsName); \
	DECLARE_FUNCTION(execGetBlackboardValueAsString); \
	DECLARE_FUNCTION(execGetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execGetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execGetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execGetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execGetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execGetBlackboardValueAsActor); \
	DECLARE_FUNCTION(execGetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetOwnerComponent); \
	DECLARE_FUNCTION(execGetOwnersBlackboard);


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBTFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBTFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTFunctionLibrary)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUBTFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBTFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBTFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTFunctionLibrary)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTFunctionLibrary(UBTFunctionLibrary&&); \
	NO_API UBTFunctionLibrary(const UBTFunctionLibrary&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTFunctionLibrary(UBTFunctionLibrary&&); \
	NO_API UBTFunctionLibrary(const UBTFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTFunctionLibrary)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
