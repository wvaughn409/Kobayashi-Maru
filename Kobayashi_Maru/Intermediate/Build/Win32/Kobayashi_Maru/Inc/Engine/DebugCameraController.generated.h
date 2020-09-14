// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
struct FVector;
struct FHitResult;
#ifdef ENGINE_DebugCameraController_generated_h
#error "DebugCameraController.generated.h already included, missing '#pragma once' in DebugCameraController.h"
#endif
#define ENGINE_DebugCameraController_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPawnMovementSpeedScale); \
	DECLARE_FUNCTION(execGetSelectedActor); \
	DECLARE_FUNCTION(execToggleDisplay); \
	DECLARE_FUNCTION(execShowDebugSelectedInfo);


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPawnMovementSpeedScale); \
	DECLARE_FUNCTION(execGetSelectedActor); \
	DECLARE_FUNCTION(execToggleDisplay); \
	DECLARE_FUNCTION(execShowDebugSelectedInfo);


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_EVENT_PARMS \
	struct DebugCameraController_eventReceiveOnActivate_Parms \
	{ \
		APlayerController* OriginalPC; \
	}; \
	struct DebugCameraController_eventReceiveOnActorSelected_Parms \
	{ \
		AActor* NewSelectedActor; \
		FVector SelectHitLocation; \
		FVector SelectHitNormal; \
		FHitResult Hit; \
	}; \
	struct DebugCameraController_eventReceiveOnDeactivate_Parms \
	{ \
		APlayerController* RestoredPC; \
	};


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADebugCameraController(); \
	friend struct Z_Construct_UClass_ADebugCameraController_Statics; \
public: \
	DECLARE_CLASS(ADebugCameraController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADebugCameraController)


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesADebugCameraController(); \
	friend struct Z_Construct_UClass_ADebugCameraController_Statics; \
public: \
	DECLARE_CLASS(ADebugCameraController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADebugCameraController)


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADebugCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugCameraController(ADebugCameraController&&); \
	NO_API ADebugCameraController(const ADebugCameraController&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADebugCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugCameraController(ADebugCameraController&&); \
	NO_API ADebugCameraController(const ADebugCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugCameraController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugCameraController)


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_22_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DebugCameraController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADebugCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
