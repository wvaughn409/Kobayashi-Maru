// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class APawn;
#ifdef ENGINE_PawnMovementComponent_generated_h
#error "PawnMovementComponent.generated.h already included, missing '#pragma once' in PawnMovementComponent.h"
#endif
#define ENGINE_PawnMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetInputVector); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execConsumeInputVector); \
	DECLARE_FUNCTION(execGetLastInputVector); \
	DECLARE_FUNCTION(execGetPendingInputVector); \
	DECLARE_FUNCTION(execAddInputVector);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetInputVector); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execConsumeInputVector); \
	DECLARE_FUNCTION(execGetLastInputVector); \
	DECLARE_FUNCTION(execGetPendingInputVector); \
	DECLARE_FUNCTION(execAddInputVector);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPawnMovementComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnMovementComponent(); \
	friend struct Z_Construct_UClass_UPawnMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPawnMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPawnMovementComponent(); \
	friend struct Z_Construct_UClass_UPawnMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPawnMovementComponent) \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnMovementComponent(UPawnMovementComponent&&); \
	NO_API UPawnMovementComponent(const UPawnMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnMovementComponent(UPawnMovementComponent&&); \
	NO_API UPawnMovementComponent(const UPawnMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnOwner() { return STRUCT_OFFSET(UPawnMovementComponent, PawnOwner); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPawnMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
