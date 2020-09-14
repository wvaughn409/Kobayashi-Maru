// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionControllerComponent;
enum class EControllerHand : uint8;
#ifdef HEADMOUNTEDDISPLAY_MotionTrackedDeviceFunctionLibrary_generated_h
#error "MotionTrackedDeviceFunctionLibrary.generated.h already included, missing '#pragma once' in MotionTrackedDeviceFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionTrackedDeviceFunctionLibrary_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMotionSourceTracking); \
	DECLARE_FUNCTION(execGetActiveTrackingSystemName); \
	DECLARE_FUNCTION(execEnumerateMotionSources); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfControllersForPlayer); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfAllControllers); \
	DECLARE_FUNCTION(execDisableMotionTrackingForComponent); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfSource); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfDevice); \
	DECLARE_FUNCTION(execEnableMotionTrackingForComponent); \
	DECLARE_FUNCTION(execEnableMotionTrackingOfSource); \
	DECLARE_FUNCTION(execEnableMotionTrackingOfDevice); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForComponent); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForSource); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForDevice); \
	DECLARE_FUNCTION(execGetMotionTrackingEnabledControllerCount); \
	DECLARE_FUNCTION(execGetMaximumMotionTrackedControllerCount); \
	DECLARE_FUNCTION(execSetIsControllerMotionTrackingEnabledByDefault); \
	DECLARE_FUNCTION(execIsMotionTrackedDeviceCountManagementNecessary);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMotionSourceTracking); \
	DECLARE_FUNCTION(execGetActiveTrackingSystemName); \
	DECLARE_FUNCTION(execEnumerateMotionSources); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfControllersForPlayer); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfAllControllers); \
	DECLARE_FUNCTION(execDisableMotionTrackingForComponent); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfSource); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfDevice); \
	DECLARE_FUNCTION(execEnableMotionTrackingForComponent); \
	DECLARE_FUNCTION(execEnableMotionTrackingOfSource); \
	DECLARE_FUNCTION(execEnableMotionTrackingOfDevice); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForComponent); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForSource); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForDevice); \
	DECLARE_FUNCTION(execGetMotionTrackingEnabledControllerCount); \
	DECLARE_FUNCTION(execGetMaximumMotionTrackedControllerCount); \
	DECLARE_FUNCTION(execSetIsControllerMotionTrackingEnabledByDefault); \
	DECLARE_FUNCTION(execIsMotionTrackedDeviceCountManagementNecessary);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionTrackedDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrackedDeviceFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionTrackedDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrackedDeviceFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrackedDeviceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrackedDeviceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrackedDeviceFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(UMotionTrackedDeviceFunctionLibrary&&); \
	NO_API UMotionTrackedDeviceFunctionLibrary(const UMotionTrackedDeviceFunctionLibrary&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(UMotionTrackedDeviceFunctionLibrary&&); \
	NO_API UMotionTrackedDeviceFunctionLibrary(const UMotionTrackedDeviceFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrackedDeviceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrackedDeviceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrackedDeviceFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_14_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionTrackedDeviceFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UMotionTrackedDeviceFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
