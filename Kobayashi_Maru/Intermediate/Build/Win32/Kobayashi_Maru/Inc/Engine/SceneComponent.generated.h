// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhysicsVolume;
struct FVector;
struct FRotator;
struct FHitResult;
struct FQuat;
struct FTransform;
enum class EDetachmentRule : uint8;
class USceneComponent;
enum class EAttachmentRule : uint8;
#ifdef ENGINE_SceneComponent_generated_h
#error "SceneComponent.generated.h already included, missing '#pragma once' in SceneComponent.h"
#endif
#define ENGINE_SceneComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_1594_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSceneComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_100_DELEGATE \
struct _Script_Engine_eventPhysicsVolumeChanged_Parms \
{ \
	APhysicsVolume* NewVolume; \
}; \
static inline void FPhysicsVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& PhysicsVolumeChanged, APhysicsVolume* NewVolume) \
{ \
	_Script_Engine_eventPhysicsVolumeChanged_Parms Parms; \
	Parms.NewVolume=NewVolume; \
	PhysicsVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execK2_SetWorldLocationAndRotation); \
	DECLARE_FUNCTION(execSetAbsolute); \
	DECLARE_FUNCTION(execK2_SetRelativeLocationAndRotation); \
	DECLARE_FUNCTION(execGetPhysicsVolume); \
	DECLARE_FUNCTION(execSetHiddenInGame); \
	DECLARE_FUNCTION(execToggleVisibility); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetComponentVelocity); \
	DECLARE_FUNCTION(execDoesSocketExist); \
	DECLARE_FUNCTION(execGetSocketQuaternion); \
	DECLARE_FUNCTION(execGetSocketRotation); \
	DECLARE_FUNCTION(execGetSocketLocation); \
	DECLARE_FUNCTION(execGetSocketTransform); \
	DECLARE_FUNCTION(execGetAllSocketNames); \
	DECLARE_FUNCTION(execK2_DetachFromComponent); \
	DECLARE_FUNCTION(execDetachFromParent); \
	DECLARE_FUNCTION(execSnapTo); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachTo); \
	DECLARE_FUNCTION(execGetChildrenComponents); \
	DECLARE_FUNCTION(execGetChildComponent); \
	DECLARE_FUNCTION(execGetNumChildrenComponents); \
	DECLARE_FUNCTION(execGetParentComponents); \
	DECLARE_FUNCTION(execGetAttachSocketName); \
	DECLARE_FUNCTION(execGetAttachParent); \
	DECLARE_FUNCTION(execIsAnySimulatingPhysics); \
	DECLARE_FUNCTION(execIsSimulatingPhysics); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execK2_GetComponentToWorld); \
	DECLARE_FUNCTION(execK2_GetComponentScale); \
	DECLARE_FUNCTION(execK2_GetComponentRotation); \
	DECLARE_FUNCTION(execK2_GetComponentLocation); \
	DECLARE_FUNCTION(execK2_AddWorldTransform); \
	DECLARE_FUNCTION(execK2_AddWorldRotation); \
	DECLARE_FUNCTION(execK2_AddWorldOffset); \
	DECLARE_FUNCTION(execK2_SetWorldTransform); \
	DECLARE_FUNCTION(execSetWorldScale3D); \
	DECLARE_FUNCTION(execK2_SetWorldRotation); \
	DECLARE_FUNCTION(execK2_SetWorldLocation); \
	DECLARE_FUNCTION(execK2_AddLocalTransform); \
	DECLARE_FUNCTION(execK2_AddLocalRotation); \
	DECLARE_FUNCTION(execK2_AddLocalOffset); \
	DECLARE_FUNCTION(execK2_AddRelativeRotation); \
	DECLARE_FUNCTION(execK2_AddRelativeLocation); \
	DECLARE_FUNCTION(execSetRelativeScale3D); \
	DECLARE_FUNCTION(execResetRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetRelativeLocation); \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_AttachSocketName); \
	DECLARE_FUNCTION(execOnRep_AttachChildren); \
	DECLARE_FUNCTION(execOnRep_AttachParent); \
	DECLARE_FUNCTION(execOnRep_Transform); \
	DECLARE_FUNCTION(execSetShouldUpdatePhysicsVolume); \
	DECLARE_FUNCTION(execGetShouldUpdatePhysicsVolume);


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execK2_SetWorldLocationAndRotation); \
	DECLARE_FUNCTION(execSetAbsolute); \
	DECLARE_FUNCTION(execK2_SetRelativeLocationAndRotation); \
	DECLARE_FUNCTION(execGetPhysicsVolume); \
	DECLARE_FUNCTION(execSetHiddenInGame); \
	DECLARE_FUNCTION(execToggleVisibility); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetComponentVelocity); \
	DECLARE_FUNCTION(execDoesSocketExist); \
	DECLARE_FUNCTION(execGetSocketQuaternion); \
	DECLARE_FUNCTION(execGetSocketRotation); \
	DECLARE_FUNCTION(execGetSocketLocation); \
	DECLARE_FUNCTION(execGetSocketTransform); \
	DECLARE_FUNCTION(execGetAllSocketNames); \
	DECLARE_FUNCTION(execK2_DetachFromComponent); \
	DECLARE_FUNCTION(execDetachFromParent); \
	DECLARE_FUNCTION(execSnapTo); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachTo); \
	DECLARE_FUNCTION(execGetChildrenComponents); \
	DECLARE_FUNCTION(execGetChildComponent); \
	DECLARE_FUNCTION(execGetNumChildrenComponents); \
	DECLARE_FUNCTION(execGetParentComponents); \
	DECLARE_FUNCTION(execGetAttachSocketName); \
	DECLARE_FUNCTION(execGetAttachParent); \
	DECLARE_FUNCTION(execIsAnySimulatingPhysics); \
	DECLARE_FUNCTION(execIsSimulatingPhysics); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execK2_GetComponentToWorld); \
	DECLARE_FUNCTION(execK2_GetComponentScale); \
	DECLARE_FUNCTION(execK2_GetComponentRotation); \
	DECLARE_FUNCTION(execK2_GetComponentLocation); \
	DECLARE_FUNCTION(execK2_AddWorldTransform); \
	DECLARE_FUNCTION(execK2_AddWorldRotation); \
	DECLARE_FUNCTION(execK2_AddWorldOffset); \
	DECLARE_FUNCTION(execK2_SetWorldTransform); \
	DECLARE_FUNCTION(execSetWorldScale3D); \
	DECLARE_FUNCTION(execK2_SetWorldRotation); \
	DECLARE_FUNCTION(execK2_SetWorldLocation); \
	DECLARE_FUNCTION(execK2_AddLocalTransform); \
	DECLARE_FUNCTION(execK2_AddLocalRotation); \
	DECLARE_FUNCTION(execK2_AddLocalOffset); \
	DECLARE_FUNCTION(execK2_AddRelativeRotation); \
	DECLARE_FUNCTION(execK2_AddRelativeLocation); \
	DECLARE_FUNCTION(execSetRelativeScale3D); \
	DECLARE_FUNCTION(execResetRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetRelativeLocation); \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_AttachSocketName); \
	DECLARE_FUNCTION(execOnRep_AttachChildren); \
	DECLARE_FUNCTION(execOnRep_AttachParent); \
	DECLARE_FUNCTION(execOnRep_Transform); \
	DECLARE_FUNCTION(execSetShouldUpdatePhysicsVolume); \
	DECLARE_FUNCTION(execGetShouldUpdatePhysicsVolume);


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneComponent(); \
	friend struct Z_Construct_UClass_USceneComponent_Statics; \
public: \
	DECLARE_CLASS(USceneComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USceneComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachParent=NETFIELD_REP_START, \
		AttachSocketName, \
		AttachChildren, \
		RelativeLocation, \
		RelativeRotation, \
		RelativeScale3D, \
		bAbsoluteLocation, \
		bAbsoluteRotation, \
		bAbsoluteScale, \
		bVisible, \
		bShouldBeAttached, \
		bShouldSnapLocationWhenAttached, \
		bShouldSnapRotationWhenAttached, \
		NETFIELD_REP_END=bShouldSnapRotationWhenAttached	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUSceneComponent(); \
	friend struct Z_Construct_UClass_USceneComponent_Statics; \
public: \
	DECLARE_CLASS(USceneComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USceneComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachParent=NETFIELD_REP_START, \
		AttachSocketName, \
		AttachChildren, \
		RelativeLocation, \
		RelativeRotation, \
		RelativeScale3D, \
		bAbsoluteLocation, \
		bAbsoluteRotation, \
		bAbsoluteScale, \
		bVisible, \
		bShouldBeAttached, \
		bShouldSnapLocationWhenAttached, \
		bShouldSnapRotationWhenAttached, \
		NETFIELD_REP_END=bShouldSnapRotationWhenAttached	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneComponent(USceneComponent&&); \
	NO_API USceneComponent(const USceneComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneComponent(USceneComponent&&); \
	NO_API USceneComponent(const USceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PhysicsVolume() { return STRUCT_OFFSET(USceneComponent, PhysicsVolume); } \
	FORCEINLINE static uint32 __PPO__AttachParent() { return STRUCT_OFFSET(USceneComponent, AttachParent); } \
	FORCEINLINE static uint32 __PPO__AttachSocketName() { return STRUCT_OFFSET(USceneComponent, AttachSocketName); } \
	FORCEINLINE static uint32 __PPO__AttachChildren() { return STRUCT_OFFSET(USceneComponent, AttachChildren); } \
	FORCEINLINE static uint32 __PPO__ClientAttachedChildren() { return STRUCT_OFFSET(USceneComponent, ClientAttachedChildren); } \
	FORCEINLINE static uint32 __PPO__RelativeLocation() { return STRUCT_OFFSET(USceneComponent, RelativeLocation); } \
	FORCEINLINE static uint32 __PPO__RelativeRotation() { return STRUCT_OFFSET(USceneComponent, RelativeRotation); } \
	FORCEINLINE static uint32 __PPO__RelativeScale3D() { return STRUCT_OFFSET(USceneComponent, RelativeScale3D); }


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_108_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h


#define FOREACH_ENUM_ERELATIVETRANSFORMSPACE(op) \
	op(RTS_World) \
	op(RTS_Actor) \
	op(RTS_Component) \
	op(RTS_ParentBoneSpace) 
#define FOREACH_ENUM_EDETAILMODE(op) \
	op(DM_Low) \
	op(DM_Medium) \
	op(DM_High) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
