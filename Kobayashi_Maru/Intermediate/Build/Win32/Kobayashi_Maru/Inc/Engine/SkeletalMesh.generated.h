// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshSocket;
struct FTransform;
class UBlueprint;
class UNodeMappingContainer;
class USkeletalMeshLODSettings;
struct FBoxSphereBounds;
#ifdef ENGINE_SkeletalMesh_generated_h
#error "SkeletalMesh.generated.h already included, missing '#pragma once' in SkeletalMesh.h"
#endif
#define ENGINE_SkeletalMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_413_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMaterial>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_382_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClothingAssetData_Legacy>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_309_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClothPhysicsProperties_Legacy>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshLODInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshClothBuildParams>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneMirrorExport_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneMirrorExport>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneMirrorInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth); \
	DECLARE_FUNCTION(execGetSocketByIndex); \
	DECLARE_FUNCTION(execNumSockets); \
	DECLARE_FUNCTION(execFindSocketInfo); \
	DECLARE_FUNCTION(execFindSocketAndIndex); \
	DECLARE_FUNCTION(execFindSocket); \
	DECLARE_FUNCTION(execK2_GetAllMorphTargetNames); \
	DECLARE_FUNCTION(execGetNodeMappingContainer); \
	DECLARE_FUNCTION(execSetLODSettings); \
	DECLARE_FUNCTION(execGetImportedBounds); \
	DECLARE_FUNCTION(execGetBounds);


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth); \
	DECLARE_FUNCTION(execGetSocketByIndex); \
	DECLARE_FUNCTION(execNumSockets); \
	DECLARE_FUNCTION(execFindSocketInfo); \
	DECLARE_FUNCTION(execFindSocketAndIndex); \
	DECLARE_FUNCTION(execFindSocket); \
	DECLARE_FUNCTION(execK2_GetAllMorphTargetNames); \
	DECLARE_FUNCTION(execGetNodeMappingContainer); \
	DECLARE_FUNCTION(execSetLODSettings); \
	DECLARE_FUNCTION(execGetImportedBounds); \
	DECLARE_FUNCTION(execGetBounds);


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMesh, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend struct Z_Construct_UClass_USkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(USkeletalMesh, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend struct Z_Construct_UClass_USkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(USkeletalMesh, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMesh(USkeletalMesh&&); \
	NO_API USkeletalMesh(const USkeletalMesh&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMesh(USkeletalMesh&&); \
	NO_API USkeletalMesh(const USkeletalMesh&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImportedBounds() { return STRUCT_OFFSET(USkeletalMesh, ImportedBounds); } \
	FORCEINLINE static uint32 __PPO__ExtendedBounds() { return STRUCT_OFFSET(USkeletalMesh, ExtendedBounds); } \
	FORCEINLINE static uint32 __PPO__PositiveBoundsExtension() { return STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension); } \
	FORCEINLINE static uint32 __PPO__NegativeBoundsExtension() { return STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension); } \
	FORCEINLINE static uint32 __PPO__LODInfo() { return STRUCT_OFFSET(USkeletalMesh, LODInfo); } \
	FORCEINLINE static uint32 __PPO__SamplingInfo() { return STRUCT_OFFSET(USkeletalMesh, SamplingInfo); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(USkeletalMesh, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__Sockets() { return STRUCT_OFFSET(USkeletalMesh, Sockets); } \
	FORCEINLINE static uint32 __PPO__SkinWeightProfiles() { return STRUCT_OFFSET(USkeletalMesh, SkinWeightProfiles); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_506_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_509_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h


#define FOREACH_ENUM_ESKINCACHEDEFAULTBEHAVIOR(op) \
	op(ESkinCacheDefaultBehavior::Exclusive) \
	op(ESkinCacheDefaultBehavior::Inclusive) 

enum class ESkinCacheDefaultBehavior : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESkinCacheDefaultBehavior>();

#define FOREACH_ENUM_ESKINCACHEUSAGE(op) \
	op(ESkinCacheUsage::Auto) \
	op(ESkinCacheUsage::Disabled) \
	op(ESkinCacheUsage::Enabled) 

enum class ESkinCacheUsage : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESkinCacheUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
