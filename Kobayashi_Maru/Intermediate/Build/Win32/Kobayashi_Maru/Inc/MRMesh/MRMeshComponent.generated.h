// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MRMESH_MRMeshComponent_generated_h
#error "MRMeshComponent.generated.h already included, missing '#pragma once' in MRMeshComponent.h"
#endif
#define MRMESH_MRMeshComponent_generated_h

#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_SPARSE_DATA
#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execForceNavMeshUpdate); \
	DECLARE_FUNCTION(execIsConnected);


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execForceNavMeshUpdate); \
	DECLARE_FUNCTION(execIsConnected);


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend struct Z_Construct_UClass_UMRMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshComponent)


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend struct Z_Construct_UClass_UMRMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshComponent)


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshComponent(UMRMeshComponent&&); \
	NO_API UMRMeshComponent(const UMRMeshComponent&); \
public:


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshComponent(UMRMeshComponent&&); \
	NO_API UMRMeshComponent(const UMRMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent)


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(UMRMeshComponent, Material); } \
	FORCEINLINE static uint32 __PPO__bCreateMeshProxySections() { return STRUCT_OFFSET(UMRMeshComponent, bCreateMeshProxySections); } \
	FORCEINLINE static uint32 __PPO__bUpdateNavMeshOnMeshUpdate() { return STRUCT_OFFSET(UMRMeshComponent, bUpdateNavMeshOnMeshUpdate); } \
	FORCEINLINE static uint32 __PPO__bNeverCreateCollisionMesh() { return STRUCT_OFFSET(UMRMeshComponent, bNeverCreateCollisionMesh); } \
	FORCEINLINE static uint32 __PPO__CachedBodySetup() { return STRUCT_OFFSET(UMRMeshComponent, CachedBodySetup); } \
	FORCEINLINE static uint32 __PPO__BodySetups() { return STRUCT_OFFSET(UMRMeshComponent, BodySetups); } \
	FORCEINLINE static uint32 __PPO__WireframeMaterial() { return STRUCT_OFFSET(UMRMeshComponent, WireframeMaterial); }


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_65_PROLOG
#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_SPARSE_DATA \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_RPC_WRAPPERS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_INCLASS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_SPARSE_DATA \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_71_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MRMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRMESH_API UClass* StaticClass<class UMRMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
