// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_AutoDestroySubsystem_generated_h
#error "AutoDestroySubsystem.generated.h already included, missing '#pragma once' in AutoDestroySubsystem.h"
#endif
#define ENGINE_AutoDestroySubsystem_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorEndPlay);


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorEndPlay);


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoDestroySubsystem(); \
	friend struct Z_Construct_UClass_UAutoDestroySubsystem_Statics; \
public: \
	DECLARE_CLASS(UAutoDestroySubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAutoDestroySubsystem)


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAutoDestroySubsystem(); \
	friend struct Z_Construct_UClass_UAutoDestroySubsystem_Statics; \
public: \
	DECLARE_CLASS(UAutoDestroySubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAutoDestroySubsystem)


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoDestroySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoDestroySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoDestroySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoDestroySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoDestroySubsystem(UAutoDestroySubsystem&&); \
	NO_API UAutoDestroySubsystem(const UAutoDestroySubsystem&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoDestroySubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoDestroySubsystem(UAutoDestroySubsystem&&); \
	NO_API UAutoDestroySubsystem(const UAutoDestroySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoDestroySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoDestroySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutoDestroySubsystem)


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorsToPoll() { return STRUCT_OFFSET(UAutoDestroySubsystem, ActorsToPoll); }


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAutoDestroySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
