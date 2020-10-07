// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef COMPLETERPG_CompleteRPGProjectile_generated_h
#error "CompleteRPGProjectile.generated.h already included, missing '#pragma once' in CompleteRPGProjectile.h"
#endif
#define COMPLETERPG_CompleteRPGProjectile_generated_h

#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompleteRPGProjectile(); \
	friend struct Z_Construct_UClass_ACompleteRPGProjectile_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ACompleteRPGProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_INCLASS \
private: \
	static void StaticRegisterNativesACompleteRPGProjectile(); \
	friend struct Z_Construct_UClass_ACompleteRPGProjectile_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ACompleteRPGProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompleteRPGProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompleteRPGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompleteRPGProjectile(ACompleteRPGProjectile&&); \
	NO_API ACompleteRPGProjectile(const ACompleteRPGProjectile&); \
public:


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompleteRPGProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompleteRPGProjectile(ACompleteRPGProjectile&&); \
	NO_API ACompleteRPGProjectile(const ACompleteRPGProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompleteRPGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGProjectile)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACompleteRPGProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACompleteRPGProjectile, ProjectileMovement); }


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_6_PROLOG
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_INCLASS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompleteRPGProjectile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class ACompleteRPGProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_CompleteRPGProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
