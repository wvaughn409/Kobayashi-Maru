// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EControllerHand : uint8;
class UStaticMesh;
#ifdef HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h
#error "MotionControllerComponent.generated.h already included, missing '#pragma once' in MotionControllerComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandJointPosition); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex); \
	DECLARE_FUNCTION(execSetTrackingMotionSource); \
	DECLARE_FUNCTION(execGetTrackingSource); \
	DECLARE_FUNCTION(execSetTrackingSource); \
	DECLARE_FUNCTION(execSetCustomDisplayMesh); \
	DECLARE_FUNCTION(execSetDisplayModelSource); \
	DECLARE_FUNCTION(execSetShowDeviceModel); \
	DECLARE_FUNCTION(execIsTracked);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandJointPosition); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex); \
	DECLARE_FUNCTION(execSetTrackingMotionSource); \
	DECLARE_FUNCTION(execGetTrackingSource); \
	DECLARE_FUNCTION(execSetTrackingSource); \
	DECLARE_FUNCTION(execSetCustomDisplayMesh); \
	DECLARE_FUNCTION(execSetDisplayModelSource); \
	DECLARE_FUNCTION(execSetShowDeviceModel); \
	DECLARE_FUNCTION(execIsTracked);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_EVENT_PARMS
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent, NO_API)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayComponent() { return STRUCT_OFFSET(UMotionControllerComponent, DisplayComponent); }


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_19_PROLOG \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_EVENT_PARMS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
