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
struct FHitResult;
#ifdef FOLIAGE_InteractiveFoliageActor_generated_h
#error "InteractiveFoliageActor.generated.h already included, missing '#pragma once' in InteractiveFoliageActor.h"
#endif
#define FOLIAGE_InteractiveFoliageActor_generated_h

#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_SPARSE_DATA
#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTouched);


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTouched);


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveFoliageActor(); \
	friend struct Z_Construct_UClass_AInteractiveFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveFoliageActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AInteractiveFoliageActor)


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAInteractiveFoliageActor(); \
	friend struct Z_Construct_UClass_AInteractiveFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveFoliageActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AInteractiveFoliageActor)


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AInteractiveFoliageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveFoliageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AInteractiveFoliageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveFoliageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOLIAGE_API AInteractiveFoliageActor(AInteractiveFoliageActor&&); \
	FOLIAGE_API AInteractiveFoliageActor(const AInteractiveFoliageActor&); \
public:


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AInteractiveFoliageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOLIAGE_API AInteractiveFoliageActor(AInteractiveFoliageActor&&); \
	FOLIAGE_API AInteractiveFoliageActor(const AInteractiveFoliageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AInteractiveFoliageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveFoliageActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveFoliageActor)


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(AInteractiveFoliageActor, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__TouchingActorEntryPosition() { return STRUCT_OFFSET(AInteractiveFoliageActor, TouchingActorEntryPosition); } \
	FORCEINLINE static uint32 __PPO__FoliageVelocity() { return STRUCT_OFFSET(AInteractiveFoliageActor, FoliageVelocity); } \
	FORCEINLINE static uint32 __PPO__FoliageForce() { return STRUCT_OFFSET(AInteractiveFoliageActor, FoliageForce); } \
	FORCEINLINE static uint32 __PPO__FoliagePosition() { return STRUCT_OFFSET(AInteractiveFoliageActor, FoliagePosition); }


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_15_PROLOG
#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_SPARSE_DATA \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_INCLASS \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_SPARSE_DATA \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractiveFoliageActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class AInteractiveFoliageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
