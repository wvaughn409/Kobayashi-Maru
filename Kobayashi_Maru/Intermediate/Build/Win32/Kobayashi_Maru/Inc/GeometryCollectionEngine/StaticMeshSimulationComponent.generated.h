// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosPhysicsCollisionInfo;
#ifdef GEOMETRYCOLLECTIONENGINE_StaticMeshSimulationComponent_generated_h
#error "StaticMeshSimulationComponent.generated.h already included, missing '#pragma once' in StaticMeshSimulationComponent.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_StaticMeshSimulationComponent_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceRecreatePhysicsState);


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceRecreatePhysicsState);


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_EVENT_PARMS \
	struct StaticMeshSimulationComponent_eventReceivePhysicsCollision_Parms \
	{ \
		FChaosPhysicsCollisionInfo CollisionInfo; \
	};


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshSimulationComponent(); \
	friend struct Z_Construct_UClass_UStaticMeshSimulationComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshSimulationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshSimulationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMeshSimulationComponent*>(this); }


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshSimulationComponent(); \
	friend struct Z_Construct_UClass_UStaticMeshSimulationComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshSimulationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshSimulationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMeshSimulationComponent*>(this); }


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshSimulationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSimulationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshSimulationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSimulationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshSimulationComponent(UStaticMeshSimulationComponent&&); \
	NO_API UStaticMeshSimulationComponent(const UStaticMeshSimulationComponent&); \
public:


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshSimulationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshSimulationComponent(UStaticMeshSimulationComponent&&); \
	NO_API UStaticMeshSimulationComponent(const UStaticMeshSimulationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshSimulationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSimulationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSimulationComponent)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SimulatedComponents() { return STRUCT_OFFSET(UStaticMeshSimulationComponent, SimulatedComponents); }


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_20_PROLOG \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_EVENT_PARMS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_INCLASS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshSimulationComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UStaticMeshSimulationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_StaticMeshSimulationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
