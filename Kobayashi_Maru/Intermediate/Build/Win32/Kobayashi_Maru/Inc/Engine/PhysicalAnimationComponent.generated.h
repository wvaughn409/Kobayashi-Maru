// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FPhysicalAnimationData;
class USkeletalMeshComponent;
#ifdef ENGINE_PhysicalAnimationComponent_generated_h
#error "PhysicalAnimationComponent.generated.h already included, missing '#pragma once' in PhysicalAnimationComponent.h"
#endif
#define ENGINE_PhysicalAnimationComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalAnimationData>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBodyTargetTransform); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationProfileBelow); \
	DECLARE_FUNCTION(execSetStrengthMultiplyer); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettingsBelow); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettings); \
	DECLARE_FUNCTION(execSetSkeletalMeshComponent);


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBodyTargetTransform); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationProfileBelow); \
	DECLARE_FUNCTION(execSetStrengthMultiplyer); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettingsBelow); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettings); \
	DECLARE_FUNCTION(execSetSkeletalMeshComponent);


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicalAnimationComponent(); \
	friend struct Z_Construct_UClass_UPhysicalAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicalAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalAnimationComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalAnimationComponent(); \
	friend struct Z_Construct_UClass_UPhysicalAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicalAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalAnimationComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalAnimationComponent(UPhysicalAnimationComponent&&); \
	NO_API UPhysicalAnimationComponent(const UPhysicalAnimationComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalAnimationComponent(UPhysicalAnimationComponent&&); \
	NO_API UPhysicalAnimationComponent(const UPhysicalAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalAnimationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalAnimationComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(UPhysicalAnimationComponent, SkeletalMeshComponent); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_71_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicalAnimationComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicalAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
