// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FBox;
#ifdef COMPLETERPG_ProceduralFaunaActor_generated_h
#error "ProceduralFaunaActor.generated.h already included, missing '#pragma once' in ProceduralFaunaActor.h"
#endif
#define COMPLETERPG_ProceduralFaunaActor_generated_h

#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDebugDrawSpawners); \
	DECLARE_FUNCTION(execToggleDebugDrawGrid); \
	DECLARE_FUNCTION(execSetSpawnBoundsFromVectors); \
	DECLARE_FUNCTION(execSetSpawnBounds); \
	DECLARE_FUNCTION(execSetEnableSpawning);


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDebugDrawSpawners); \
	DECLARE_FUNCTION(execToggleDebugDrawGrid); \
	DECLARE_FUNCTION(execSetSpawnBoundsFromVectors); \
	DECLARE_FUNCTION(execSetSpawnBounds); \
	DECLARE_FUNCTION(execSetEnableSpawning);


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralFaunaActor(); \
	friend struct Z_Construct_UClass_AProceduralFaunaActor_Statics; \
public: \
	DECLARE_CLASS(AProceduralFaunaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(AProceduralFaunaActor)


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProceduralFaunaActor(); \
	friend struct Z_Construct_UClass_AProceduralFaunaActor_Statics; \
public: \
	DECLARE_CLASS(AProceduralFaunaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(AProceduralFaunaActor)


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProceduralFaunaActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralFaunaActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralFaunaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralFaunaActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralFaunaActor(AProceduralFaunaActor&&); \
	NO_API AProceduralFaunaActor(const AProceduralFaunaActor&); \
public:


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralFaunaActor(AProceduralFaunaActor&&); \
	NO_API AProceduralFaunaActor(const AProceduralFaunaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralFaunaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralFaunaActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralFaunaActor)


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_PRIVATE_PROPERTY_OFFSET
#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_13_PROLOG
#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_INCLASS \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class AProceduralFaunaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_ProceduralFaunaActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
