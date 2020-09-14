// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBox;
struct FVector;
struct FTransform;
#ifdef ENGINE_InstancedStaticMeshComponent_generated_h
#error "InstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in InstancedStaticMeshComponent.h"
#endif
#define ENGINE_InstancedStaticMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_450_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_435_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshLightMapInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshMappingInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstancesOverlappingBox); \
	DECLARE_FUNCTION(execGetInstancesOverlappingSphere); \
	DECLARE_FUNCTION(execSetCullDistances); \
	DECLARE_FUNCTION(execGetInstanceCount); \
	DECLARE_FUNCTION(execClearInstances); \
	DECLARE_FUNCTION(execRemoveInstance); \
	DECLARE_FUNCTION(execBatchUpdateInstancesTransform); \
	DECLARE_FUNCTION(execBatchUpdateInstancesTransforms); \
	DECLARE_FUNCTION(execUpdateInstanceTransform); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execSetCustomDataValue); \
	DECLARE_FUNCTION(execAddInstanceWorldSpace); \
	DECLARE_FUNCTION(execAddInstance);


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstancesOverlappingBox); \
	DECLARE_FUNCTION(execGetInstancesOverlappingSphere); \
	DECLARE_FUNCTION(execSetCullDistances); \
	DECLARE_FUNCTION(execGetInstanceCount); \
	DECLARE_FUNCTION(execClearInstances); \
	DECLARE_FUNCTION(execRemoveInstance); \
	DECLARE_FUNCTION(execBatchUpdateInstancesTransform); \
	DECLARE_FUNCTION(execBatchUpdateInstancesTransforms); \
	DECLARE_FUNCTION(execUpdateInstanceTransform); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execSetCustomDataValue); \
	DECLARE_FUNCTION(execAddInstanceWorldSpace); \
	DECLARE_FUNCTION(execAddInstance);


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInstancedStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInstancedStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInstancedStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInstancedStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedStaticMeshComponent) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInstancedStaticMeshComponent(UInstancedStaticMeshComponent&&); \
	NO_API UInstancedStaticMeshComponent(const UInstancedStaticMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInstancedStaticMeshComponent(UInstancedStaticMeshComponent&&); \
	NO_API UInstancedStaticMeshComponent(const UInstancedStaticMeshComponent&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumPendingLightmaps() { return STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps); } \
	FORCEINLINE static uint32 __PPO__CachedMappings() { return STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings); }


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_123_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_126_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InstancedStaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInstancedStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
