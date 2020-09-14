// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamVRInputBindingInfo;
struct FSteamVRAction;
struct FVector;
struct FRotator;
enum class ESteamVRHand : uint8;
struct FSteamVRActionSet;
enum class ESteamVRInputStringBits : uint8;
struct FSteamVRInputOriginInfo;
struct FSteamVRSkeletonTransform;
enum class EControllerFidelity : uint8;
enum class EHand : uint8;
struct FSteamVRFingerCurls;
struct FSteamVRFingerSplays;
enum class ESkeletalSummaryDataType : uint8;
#ifdef STEAMVRINPUTDEVICE_SteamVRInputDeviceFunctionLibrary_generated_h
#error "SteamVRInputDeviceFunctionLibrary.generated.h already included, missing '#pragma once' in SteamVRInputDeviceFunctionLibrary.h"
#endif
#define STEAMVRINPUTDEVICE_SteamVRInputDeviceFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_282_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRInputBindingInfo>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_251_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FUE4RetargettingRefs>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRInputOriginInfo>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRActionSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRActionSet>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRAction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRAction>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRFingerSplays>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRFingerCurls>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRSkeletonTransform>();

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_SPARSE_DATA
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserIPD); \
	DECLARE_FUNCTION(execResetSeatedPosition); \
	DECLARE_FUNCTION(execFindSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execGetSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execShowAllSteamVR_ActionOrigins); \
	DECLARE_FUNCTION(execSetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_HandPoseRelativeToNow); \
	DECLARE_FUNCTION(execFindSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execShowSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execGetSteamVR_OriginLocalizedName); \
	DECLARE_FUNCTION(execFindSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_ActionSetArray); \
	DECLARE_FUNCTION(execFindSteamVR_Action); \
	DECLARE_FUNCTION(execGetSteamVR_ActionArray); \
	DECLARE_FUNCTION(execGetRightHandPoseData); \
	DECLARE_FUNCTION(execGetLeftHandPoseData); \
	DECLARE_FUNCTION(execGetSkeletalTransform); \
	DECLARE_FUNCTION(execSetPoseSource); \
	DECLARE_FUNCTION(execGetPoseSource); \
	DECLARE_FUNCTION(execSetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execGetControllerFidelity); \
	DECLARE_FUNCTION(execGetSkeletalState); \
	DECLARE_FUNCTION(execGetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execPlaySteamVR_HapticFeedback); \
	DECLARE_FUNCTION(execGetFingerCurlsAndSplays);


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserIPD); \
	DECLARE_FUNCTION(execResetSeatedPosition); \
	DECLARE_FUNCTION(execFindSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execGetSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execShowAllSteamVR_ActionOrigins); \
	DECLARE_FUNCTION(execSetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_HandPoseRelativeToNow); \
	DECLARE_FUNCTION(execFindSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execShowSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execGetSteamVR_OriginLocalizedName); \
	DECLARE_FUNCTION(execFindSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_ActionSetArray); \
	DECLARE_FUNCTION(execFindSteamVR_Action); \
	DECLARE_FUNCTION(execGetSteamVR_ActionArray); \
	DECLARE_FUNCTION(execGetRightHandPoseData); \
	DECLARE_FUNCTION(execGetLeftHandPoseData); \
	DECLARE_FUNCTION(execGetSkeletalTransform); \
	DECLARE_FUNCTION(execSetPoseSource); \
	DECLARE_FUNCTION(execGetPoseSource); \
	DECLARE_FUNCTION(execSetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execGetControllerFidelity); \
	DECLARE_FUNCTION(execGetSkeletalState); \
	DECLARE_FUNCTION(execGetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execPlaySteamVR_HapticFeedback); \
	DECLARE_FUNCTION(execGetFingerCurlsAndSplays);


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRInputDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamVRInputDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(USteamVRInputDeviceFunctionLibrary)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRInputDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_USteamVRInputDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamVRInputDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(USteamVRInputDeviceFunctionLibrary)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRInputDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRInputDeviceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRInputDeviceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRInputDeviceFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRInputDeviceFunctionLibrary(USteamVRInputDeviceFunctionLibrary&&); \
	NO_API USteamVRInputDeviceFunctionLibrary(const USteamVRInputDeviceFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRInputDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRInputDeviceFunctionLibrary(USteamVRInputDeviceFunctionLibrary&&); \
	NO_API USteamVRInputDeviceFunctionLibrary(const USteamVRInputDeviceFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRInputDeviceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRInputDeviceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRInputDeviceFunctionLibrary)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_386_PROLOG
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_SPARSE_DATA \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_INCLASS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_SPARSE_DATA \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_389_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<class USteamVRInputDeviceFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h


#define FOREACH_ENUM_ESKELETALSUMMARYDATATYPE(op) \
	op(ESkeletalSummaryDataType::VR_SummaryType_FromAnimation) \
	op(ESkeletalSummaryDataType::VR_SummaryType_FromDevice) 

enum class ESkeletalSummaryDataType : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESkeletalSummaryDataType>();

#define FOREACH_ENUM_ESTEAMVRINPUTSTRINGBITS(op) \
	op(ESteamVRInputStringBits::VR_InputString_Hand) \
	op(ESteamVRInputStringBits::VR_InputString_ControllerType) \
	op(ESteamVRInputStringBits::VR_InputString_InputSource) \
	op(ESteamVRInputStringBits::VR_InputString_All) 

enum class ESteamVRInputStringBits : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRInputStringBits>();

#define FOREACH_ENUM_ECONTROLLERFIDELITY(op) \
	op(EControllerFidelity::VR_ControllerFidelity_Estimated) \
	op(EControllerFidelity::VR_ControllerFidelity_Full) \
	op(EControllerFidelity::VR_ControllerFidelity_Partial) 

enum class EControllerFidelity : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EControllerFidelity>();

#define FOREACH_ENUM_EHANDSKELETON(op) \
	op(EHandSkeleton::VR_SteamVRHandSkeleton) \
	op(EHandSkeleton::VR_UE4HandSkeleton) 

enum class EHandSkeleton : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHandSkeleton>();

#define FOREACH_ENUM_EHAND(op) \
	op(EHand::VR_LeftHand) \
	op(EHand::VR_RightHand) 

enum class EHand : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHand>();

#define FOREACH_ENUM_EMOTIONRANGE(op) \
	op(EMotionRange::VR_WithoutController) \
	op(EMotionRange::VR_WithController) 

enum class EMotionRange : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EMotionRange>();

#define FOREACH_ENUM_ESTEAMVRHAND(op) \
	op(ESteamVRHand::VR_Left) \
	op(ESteamVRHand::VR_Right) 

enum class ESteamVRHand : uint8;
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRHand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
