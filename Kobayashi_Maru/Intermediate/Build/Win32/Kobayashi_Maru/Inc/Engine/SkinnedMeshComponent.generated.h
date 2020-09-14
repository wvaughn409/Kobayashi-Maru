// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class USkinnedMeshComponent;
struct FSkelMeshSkinWeightInfo;
struct FLinearColor;
struct FTransform;
class USkeletalMesh;
class UPhysicsAsset;
#ifdef ENGINE_SkinnedMeshComponent_generated_h
#error "SkinnedMeshComponent.generated.h already included, missing '#pragma once' in SkinnedMeshComponent.h"
#endif
#define ENGINE_SkinnedMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkelMeshComponentLODInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkelMeshSkinWeightInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRenderStatic); \
	DECLARE_FUNCTION(execIsMaterialSectionShown); \
	DECLARE_FUNCTION(execShowAllMaterialSections); \
	DECLARE_FUNCTION(execShowMaterialSection); \
	DECLARE_FUNCTION(execIsBoneHiddenByName); \
	DECLARE_FUNCTION(execUnHideBoneByName); \
	DECLARE_FUNCTION(execHideBoneByName); \
	DECLARE_FUNCTION(execFindClosestBone_K2); \
	DECLARE_FUNCTION(execTransformFromBoneSpace); \
	DECLARE_FUNCTION(execTransformToBoneSpace); \
	DECLARE_FUNCTION(execGetRefPosePosition); \
	DECLARE_FUNCTION(execBoneIsChildOf); \
	DECLARE_FUNCTION(execSetMasterPoseComponent); \
	DECLARE_FUNCTION(execIsUsingSkinWeightProfile); \
	DECLARE_FUNCTION(execGetCurrentSkinWeightProfileName); \
	DECLARE_FUNCTION(execUnloadSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightProfile); \
	DECLARE_FUNCTION(execSetSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightOverride); \
	DECLARE_FUNCTION(execSetSkinWeightOverride); \
	DECLARE_FUNCTION(execClearVertexColorOverride); \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor); \
	DECLARE_FUNCTION(execGetTwistAndSwingAngleOfDeltaRotationFromRefPose); \
	DECLARE_FUNCTION(execGetDeltaTransformFromRefPose); \
	DECLARE_FUNCTION(execGetParentBone); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execGetSocketBoneName); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execGetNumBones); \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility); \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow); \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow); \
	DECLARE_FUNCTION(execGetForcedLOD); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execSetMinLOD); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execSetPhysicsAsset);


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRenderStatic); \
	DECLARE_FUNCTION(execIsMaterialSectionShown); \
	DECLARE_FUNCTION(execShowAllMaterialSections); \
	DECLARE_FUNCTION(execShowMaterialSection); \
	DECLARE_FUNCTION(execIsBoneHiddenByName); \
	DECLARE_FUNCTION(execUnHideBoneByName); \
	DECLARE_FUNCTION(execHideBoneByName); \
	DECLARE_FUNCTION(execFindClosestBone_K2); \
	DECLARE_FUNCTION(execTransformFromBoneSpace); \
	DECLARE_FUNCTION(execTransformToBoneSpace); \
	DECLARE_FUNCTION(execGetRefPosePosition); \
	DECLARE_FUNCTION(execBoneIsChildOf); \
	DECLARE_FUNCTION(execSetMasterPoseComponent); \
	DECLARE_FUNCTION(execIsUsingSkinWeightProfile); \
	DECLARE_FUNCTION(execGetCurrentSkinWeightProfileName); \
	DECLARE_FUNCTION(execUnloadSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightProfile); \
	DECLARE_FUNCTION(execSetSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightOverride); \
	DECLARE_FUNCTION(execSetSkinWeightOverride); \
	DECLARE_FUNCTION(execClearVertexColorOverride); \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor); \
	DECLARE_FUNCTION(execGetTwistAndSwingAngleOfDeltaRotationFromRefPose); \
	DECLARE_FUNCTION(execGetDeltaTransformFromRefPose); \
	DECLARE_FUNCTION(execGetParentBone); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execGetSocketBoneName); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execGetNumBones); \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility); \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow); \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow); \
	DECLARE_FUNCTION(execGetForcedLOD); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execSetMinLOD); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execSetPhysicsAsset);


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend struct Z_Construct_UClass_USkinnedMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_INCLASS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend struct Z_Construct_UClass_USkinnedMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedMeshComponent(USkinnedMeshComponent&&); \
	NO_API USkinnedMeshComponent(const USkinnedMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedMeshComponent(USkinnedMeshComponent&&); \
	NO_API USkinnedMeshComponent(const USkinnedMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedWorldSpaceBounds() { return STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldSpaceBounds); } \
	FORCEINLINE static uint32 __PPO__CachedWorldToLocalTransform() { return STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldToLocalTransform); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_200_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_203_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkinnedMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkinnedMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h


#define FOREACH_ENUM_EBONESPACES(op) \
	op(EBoneSpaces::WorldSpace) \
	op(EBoneSpaces::ComponentSpace) 
#define FOREACH_ENUM_EVISIBILITYBASEDANIMTICKOPTION(op) \
	op(EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones) \
	op(EVisibilityBasedAnimTickOption::AlwaysTickPose) \
	op(EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered) \
	op(EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered) 

enum class EVisibilityBasedAnimTickOption : uint8;
template<> ENGINE_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>();

#define FOREACH_ENUM_EPHYSBODYOP(op) \
	op(PBO_None) \
	op(PBO_Term) 
#define FOREACH_ENUM_EBONEVISIBILITYSTATUS(op) \
	op(BVS_HiddenByParent) \
	op(BVS_Visible) \
	op(BVS_ExplicitlyHidden) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
