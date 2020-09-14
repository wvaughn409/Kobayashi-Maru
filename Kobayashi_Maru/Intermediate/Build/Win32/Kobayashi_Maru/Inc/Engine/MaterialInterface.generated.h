// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialFunctionInterface;
struct FMaterialParameterInfo;
class UPhysicalMaterial;
class UPhysicalMaterialMask;
class UMaterial;
#ifdef ENGINE_MaterialInterface_generated_h
#error "MaterialInterface.generated.h already included, missing '#pragma once' in MaterialInterface.h"
#endif
#define ENGINE_MaterialInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialTextureInfo>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLightmassMaterialInterfaceSettings>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execGetParameterInfo); \
	DECLARE_FUNCTION(execGetPhysicalMaterialFromMap); \
	DECLARE_FUNCTION(execGetPhysicalMaterialMask); \
	DECLARE_FUNCTION(execGetPhysicalMaterial); \
	DECLARE_FUNCTION(execGetBaseMaterial);


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execGetParameterInfo); \
	DECLARE_FUNCTION(execGetPhysicalMaterialFromMap); \
	DECLARE_FUNCTION(execGetPhysicalMaterialMask); \
	DECLARE_FUNCTION(execGetPhysicalMaterial); \
	DECLARE_FUNCTION(execGetBaseMaterial);


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend struct Z_Construct_UClass_UMaterialInterface_Statics; \
public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialInterface*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend struct Z_Construct_UClass_UMaterialInterface_Statics; \
public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialInterface*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInterface(UMaterialInterface&&); \
	ENGINE_API UMaterialInterface(const UMaterialInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInterface(UMaterialInterface&&); \
	ENGINE_API UMaterialInterface(const UMaterialInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LightmassSettings() { return STRUCT_OFFSET(UMaterialInterface, LightmassSettings); } \
	FORCEINLINE static uint32 __PPO__TextureStreamingData() { return STRUCT_OFFSET(UMaterialInterface, TextureStreamingData); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UMaterialInterface, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_206_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h


#define FOREACH_ENUM_EMATERIALUSAGE(op) \
	op(MATUSAGE_SkeletalMesh) \
	op(MATUSAGE_ParticleSprites) \
	op(MATUSAGE_BeamTrails) \
	op(MATUSAGE_MeshParticles) \
	op(MATUSAGE_StaticLighting) \
	op(MATUSAGE_MorphTargets) \
	op(MATUSAGE_SplineMesh) \
	op(MATUSAGE_InstancedStaticMeshes) \
	op(MATUSAGE_GeometryCollections) \
	op(MATUSAGE_Clothing) \
	op(MATUSAGE_NiagaraSprites) \
	op(MATUSAGE_NiagaraRibbons) \
	op(MATUSAGE_NiagaraMeshParticles) \
	op(MATUSAGE_GeometryCache) \
	op(MATUSAGE_Water) \
	op(MATUSAGE_HairStrands) \
	op(MATUSAGE_LidarPointCloud) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
