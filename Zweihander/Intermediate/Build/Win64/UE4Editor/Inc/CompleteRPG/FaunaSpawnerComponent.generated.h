// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPLETERPG_FaunaSpawnerComponent_generated_h
#error "FaunaSpawnerComponent.generated.h already included, missing '#pragma once' in FaunaSpawnerComponent.h"
#endif
#define COMPLETERPG_FaunaSpawnerComponent_generated_h

#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_RPC_WRAPPERS
#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFaunaSpawnerComponent(); \
	friend struct Z_Construct_UClass_UFaunaSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UFaunaSpawnerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(UFaunaSpawnerComponent)


#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUFaunaSpawnerComponent(); \
	friend struct Z_Construct_UClass_UFaunaSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UFaunaSpawnerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(UFaunaSpawnerComponent)


#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFaunaSpawnerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFaunaSpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaunaSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaunaSpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFaunaSpawnerComponent(UFaunaSpawnerComponent&&); \
	NO_API UFaunaSpawnerComponent(const UFaunaSpawnerComponent&); \
public:


#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFaunaSpawnerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFaunaSpawnerComponent(UFaunaSpawnerComponent&&); \
	NO_API UFaunaSpawnerComponent(const UFaunaSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaunaSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaunaSpawnerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFaunaSpawnerComponent)


#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_PRIVATE_PROPERTY_OFFSET
#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_25_PROLOG
#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_INCLASS \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class UFaunaSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_FaunaSpawnerComponent_h


#define FOREACH_ENUM_EFAUNASPAWNERSTATE(op) \
	op(EFaunaSpawnerState::Dormant) \
	op(EFaunaSpawnerState::Spawning) \
	op(EFaunaSpawnerState::NotSpawning) \
	op(EFaunaSpawnerState::Populated) 

enum class EFaunaSpawnerState : uint8;
template<> COMPLETERPG_API UEnum* StaticEnum<EFaunaSpawnerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
