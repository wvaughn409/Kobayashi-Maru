// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
struct FMinimalViewInfo;
#ifdef ENGINE_CameraComponent_generated_h
#error "CameraComponent.generated.h already included, missing '#pragma once' in CameraComponent.h"
#endif
#define ENGINE_CameraComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCameraMeshHiddenChanged); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddOrUpdateBlendable); \
	DECLARE_FUNCTION(execGetCameraView); \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight); \
	DECLARE_FUNCTION(execSetProjectionMode); \
	DECLARE_FUNCTION(execSetUseFieldOfViewForLOD); \
	DECLARE_FUNCTION(execSetConstraintAspectRatio); \
	DECLARE_FUNCTION(execSetAspectRatio); \
	DECLARE_FUNCTION(execSetOrthoFarClipPlane); \
	DECLARE_FUNCTION(execSetOrthoNearClipPlane); \
	DECLARE_FUNCTION(execSetOrthoWidth); \
	DECLARE_FUNCTION(execSetFieldOfView);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCameraMeshHiddenChanged); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddOrUpdateBlendable); \
	DECLARE_FUNCTION(execGetCameraView); \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight); \
	DECLARE_FUNCTION(execSetProjectionMode); \
	DECLARE_FUNCTION(execSetUseFieldOfViewForLOD); \
	DECLARE_FUNCTION(execSetConstraintAspectRatio); \
	DECLARE_FUNCTION(execSetAspectRatio); \
	DECLARE_FUNCTION(execSetOrthoFarClipPlane); \
	DECLARE_FUNCTION(execSetOrthoNearClipPlane); \
	DECLARE_FUNCTION(execSetOrthoWidth); \
	DECLARE_FUNCTION(execSetFieldOfView);


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFilmbackText);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFilmbackText);


#else
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCameraComponent, NO_API)


#else
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraComponent(); \
	friend struct Z_Construct_UClass_UCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraComponent) \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCameraComponent(); \
	friend struct Z_Construct_UClass_UCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraComponent) \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraComponent(UCameraComponent&&); \
	NO_API UCameraComponent(const UCameraComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraComponent(UCameraComponent&&); \
	NO_API UCameraComponent(const UCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraComponent)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
