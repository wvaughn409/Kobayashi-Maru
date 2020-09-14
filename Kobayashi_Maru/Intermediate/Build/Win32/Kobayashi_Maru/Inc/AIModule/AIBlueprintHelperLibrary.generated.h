// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FVector;
class AActor;
class UNavigationPath;
struct FRotator;
class UAnimInstance;
class UBlackboardComponent;
class AAIController;
class UObject;
class APawn;
class UBehaviorTree;
class UAIAsyncTaskBlueprintProxy;
#ifdef AIMODULE_AIBlueprintHelperLibrary_generated_h
#error "AIBlueprintHelperLibrary.generated.h already included, missing '#pragma once' in AIBlueprintHelperLibrary.h"
#endif
#define AIMODULE_AIBlueprintHelperLibrary_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_SPARSE_DATA
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation); \
	DECLARE_FUNCTION(execSimpleMoveToActor); \
	DECLARE_FUNCTION(execGetCurrentPath); \
	DECLARE_FUNCTION(execIsValidAIRotation); \
	DECLARE_FUNCTION(execIsValidAIDirection); \
	DECLARE_FUNCTION(execIsValidAILocation); \
	DECLARE_FUNCTION(execUnlockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execLockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execGetBlackboard); \
	DECLARE_FUNCTION(execGetAIController); \
	DECLARE_FUNCTION(execSpawnAIFromClass); \
	DECLARE_FUNCTION(execSendAIMessage); \
	DECLARE_FUNCTION(execCreateMoveToProxyObject);


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation); \
	DECLARE_FUNCTION(execSimpleMoveToActor); \
	DECLARE_FUNCTION(execGetCurrentPath); \
	DECLARE_FUNCTION(execIsValidAIRotation); \
	DECLARE_FUNCTION(execIsValidAIDirection); \
	DECLARE_FUNCTION(execIsValidAILocation); \
	DECLARE_FUNCTION(execUnlockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execLockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execGetBlackboard); \
	DECLARE_FUNCTION(execGetAIController); \
	DECLARE_FUNCTION(execSpawnAIFromClass); \
	DECLARE_FUNCTION(execSendAIMessage); \
	DECLARE_FUNCTION(execCreateMoveToProxyObject);


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIBlueprintHelperLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueprintHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueprintHelperLibrary)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAIBlueprintHelperLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueprintHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueprintHelperLibrary)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueprintHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueprintHelperLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueprintHelperLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueprintHelperLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary&&); \
	NO_API UAIBlueprintHelperLibrary(const UAIBlueprintHelperLibrary&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueprintHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary&&); \
	NO_API UAIBlueprintHelperLibrary(const UAIBlueprintHelperLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueprintHelperLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueprintHelperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueprintHelperLibrary)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_24_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIBlueprintHelperLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIBlueprintHelperLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
