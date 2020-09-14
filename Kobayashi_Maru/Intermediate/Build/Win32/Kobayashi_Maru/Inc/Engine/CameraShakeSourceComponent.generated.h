// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UCameraShake;
#ifdef ENGINE_CameraShakeSourceComponent_generated_h
#error "CameraShakeSourceComponent.generated.h already included, missing '#pragma once' in CameraShakeSourceComponent.h"
#endif
#define ENGINE_CameraShakeSourceComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttenuationFactor); \
	DECLARE_FUNCTION(execStopAllCameraShakes); \
	DECLARE_FUNCTION(execPlayCameraShake); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttenuationFactor); \
	DECLARE_FUNCTION(execStopAllCameraShakes); \
	DECLARE_FUNCTION(execPlayCameraShake); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeSourceComponent(); \
	friend struct Z_Construct_UClass_UCameraShakeSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeSourceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakeSourceComponent)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCameraShakeSourceComponent(); \
	friend struct Z_Construct_UClass_UCameraShakeSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeSourceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakeSourceComponent)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraShakeSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeSourceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeSourceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeSourceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakeSourceComponent(UCameraShakeSourceComponent&&); \
	NO_API UCameraShakeSourceComponent(const UCameraShakeSourceComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakeSourceComponent(UCameraShakeSourceComponent&&); \
	NO_API UCameraShakeSourceComponent(const UCameraShakeSourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeSourceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeSourceComponent)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakeSourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h


#define FOREACH_ENUM_ECAMERASHAKEATTENUATION(op) \
	op(ECameraShakeAttenuation::Linear) \
	op(ECameraShakeAttenuation::Quadratic) 

enum class ECameraShakeAttenuation : uint8;
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeAttenuation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
