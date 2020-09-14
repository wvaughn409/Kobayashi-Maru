// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARSessionTrackingFeature : uint8;
enum class EARFaceTrackingUpdate : uint8;
enum class EARFaceTrackingDirection : uint8;
struct FARVideoFormat;
class UARCandidateObject;
enum class EAREnvironmentCaptureProbeType : uint8;
class UARCandidateImage;
enum class EARFrameSyncMode : uint8;
enum class EARLightEstimationMode : uint8;
enum class EARPlaneDetectionMode : uint8;
enum class EARSessionType : uint8;
enum class EARWorldAlignment : uint8;
#ifdef AUGMENTEDREALITY_ARSessionConfig_generated_h
#error "ARSessionConfig.generated.h already included, missing '#pragma once' in ARSessionConfig.h"
#endif
#define AUGMENTEDREALITY_ARSessionConfig_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSessionTrackingFeatureToEnable); \
	DECLARE_FUNCTION(execGetEnabledSessionTrackingFeature); \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execSetFaceTrackingDirection); \
	DECLARE_FUNCTION(execGetFaceTrackingDirection); \
	DECLARE_FUNCTION(execSetDesiredVideoFormat); \
	DECLARE_FUNCTION(execGetDesiredVideoFormat); \
	DECLARE_FUNCTION(execAddCandidateObject); \
	DECLARE_FUNCTION(execSetCandidateObjectList); \
	DECLARE_FUNCTION(execGetCandidateObjectList); \
	DECLARE_FUNCTION(execSetWorldMapData); \
	DECLARE_FUNCTION(execGetWorldMapData); \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType); \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked); \
	DECLARE_FUNCTION(execAddCandidateImage); \
	DECLARE_FUNCTION(execGetCandidateImageList); \
	DECLARE_FUNCTION(execSetResetTrackedObjects); \
	DECLARE_FUNCTION(execShouldResetTrackedObjects); \
	DECLARE_FUNCTION(execSetResetCameraTracking); \
	DECLARE_FUNCTION(execShouldResetCameraTracking); \
	DECLARE_FUNCTION(execSetEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableCameraTracking); \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay); \
	DECLARE_FUNCTION(execGetFrameSyncMode); \
	DECLARE_FUNCTION(execGetLightEstimationMode); \
	DECLARE_FUNCTION(execGetPlaneDetectionMode); \
	DECLARE_FUNCTION(execGetSessionType); \
	DECLARE_FUNCTION(execGetWorldAlignment);


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSessionTrackingFeatureToEnable); \
	DECLARE_FUNCTION(execGetEnabledSessionTrackingFeature); \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execSetFaceTrackingDirection); \
	DECLARE_FUNCTION(execGetFaceTrackingDirection); \
	DECLARE_FUNCTION(execSetDesiredVideoFormat); \
	DECLARE_FUNCTION(execGetDesiredVideoFormat); \
	DECLARE_FUNCTION(execAddCandidateObject); \
	DECLARE_FUNCTION(execSetCandidateObjectList); \
	DECLARE_FUNCTION(execGetCandidateObjectList); \
	DECLARE_FUNCTION(execSetWorldMapData); \
	DECLARE_FUNCTION(execGetWorldMapData); \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType); \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked); \
	DECLARE_FUNCTION(execAddCandidateImage); \
	DECLARE_FUNCTION(execGetCandidateImageList); \
	DECLARE_FUNCTION(execSetResetTrackedObjects); \
	DECLARE_FUNCTION(execShouldResetTrackedObjects); \
	DECLARE_FUNCTION(execSetResetCameraTracking); \
	DECLARE_FUNCTION(execShouldResetCameraTracking); \
	DECLARE_FUNCTION(execSetEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableCameraTracking); \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay); \
	DECLARE_FUNCTION(execGetFrameSyncMode); \
	DECLARE_FUNCTION(execGetLightEstimationMode); \
	DECLARE_FUNCTION(execGetPlaneDetectionMode); \
	DECLARE_FUNCTION(execGetSessionType); \
	DECLARE_FUNCTION(execGetWorldAlignment);


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig, NO_API)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct Z_Construct_UClass_UARSessionConfig_Statics; \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_ARCHIVESERIALIZER


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct Z_Construct_UClass_UARSessionConfig_Statics; \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_ARCHIVESERIALIZER


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSessionConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSessionConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARSessionConfig)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldAlignment() { return STRUCT_OFFSET(UARSessionConfig, WorldAlignment); } \
	FORCEINLINE static uint32 __PPO__SessionType() { return STRUCT_OFFSET(UARSessionConfig, SessionType); } \
	FORCEINLINE static uint32 __PPO__PlaneDetectionMode_DEPRECATED() { return STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bHorizontalPlaneDetection() { return STRUCT_OFFSET(UARSessionConfig, bHorizontalPlaneDetection); } \
	FORCEINLINE static uint32 __PPO__bVerticalPlaneDetection() { return STRUCT_OFFSET(UARSessionConfig, bVerticalPlaneDetection); } \
	FORCEINLINE static uint32 __PPO__bEnableAutoFocus() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutoFocus); } \
	FORCEINLINE static uint32 __PPO__LightEstimationMode() { return STRUCT_OFFSET(UARSessionConfig, LightEstimationMode); } \
	FORCEINLINE static uint32 __PPO__FrameSyncMode() { return STRUCT_OFFSET(UARSessionConfig, FrameSyncMode); } \
	FORCEINLINE static uint32 __PPO__bEnableAutomaticCameraOverlay() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutomaticCameraOverlay); } \
	FORCEINLINE static uint32 __PPO__bEnableAutomaticCameraTracking() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutomaticCameraTracking); } \
	FORCEINLINE static uint32 __PPO__bResetCameraTracking() { return STRUCT_OFFSET(UARSessionConfig, bResetCameraTracking); } \
	FORCEINLINE static uint32 __PPO__bResetTrackedObjects() { return STRUCT_OFFSET(UARSessionConfig, bResetTrackedObjects); } \
	FORCEINLINE static uint32 __PPO__CandidateImages() { return STRUCT_OFFSET(UARSessionConfig, CandidateImages); } \
	FORCEINLINE static uint32 __PPO__MaxNumSimultaneousImagesTracked() { return STRUCT_OFFSET(UARSessionConfig, MaxNumSimultaneousImagesTracked); } \
	FORCEINLINE static uint32 __PPO__EnvironmentCaptureProbeType() { return STRUCT_OFFSET(UARSessionConfig, EnvironmentCaptureProbeType); } \
	FORCEINLINE static uint32 __PPO__WorldMapData() { return STRUCT_OFFSET(UARSessionConfig, WorldMapData); } \
	FORCEINLINE static uint32 __PPO__CandidateObjects() { return STRUCT_OFFSET(UARSessionConfig, CandidateObjects); } \
	FORCEINLINE static uint32 __PPO__DesiredVideoFormat() { return STRUCT_OFFSET(UARSessionConfig, DesiredVideoFormat); } \
	FORCEINLINE static uint32 __PPO__FaceTrackingDirection() { return STRUCT_OFFSET(UARSessionConfig, FaceTrackingDirection); } \
	FORCEINLINE static uint32 __PPO__FaceTrackingUpdate() { return STRUCT_OFFSET(UARSessionConfig, FaceTrackingUpdate); } \
	FORCEINLINE static uint32 __PPO__SerializedARCandidateImageDatabase() { return STRUCT_OFFSET(UARSessionConfig, SerializedARCandidateImageDatabase); } \
	FORCEINLINE static uint32 __PPO__EnabledSessionTrackingFeature() { return STRUCT_OFFSET(UARSessionConfig, EnabledSessionTrackingFeature); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_134_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARSessionConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h


#define FOREACH_ENUM_EARSESSIONTRACKINGFEATURE(op) \
	op(EARSessionTrackingFeature::None) \
	op(EARSessionTrackingFeature::PoseDetection2D) \
	op(EARSessionTrackingFeature::PersonSegmentation) \
	op(EARSessionTrackingFeature::PersonSegmentationWithDepth) 

enum class EARSessionTrackingFeature : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionTrackingFeature>();

#define FOREACH_ENUM_EARFACETRACKINGUPDATE(op) \
	op(EARFaceTrackingUpdate::CurvesAndGeo) \
	op(EARFaceTrackingUpdate::CurvesOnly) 

enum class EARFaceTrackingUpdate : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingUpdate>();

#define FOREACH_ENUM_EARENVIRONMENTCAPTUREPROBETYPE(op) \
	op(EAREnvironmentCaptureProbeType::None) \
	op(EAREnvironmentCaptureProbeType::Manual) \
	op(EAREnvironmentCaptureProbeType::Automatic) 

enum class EAREnvironmentCaptureProbeType : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>();

#define FOREACH_ENUM_EARFRAMESYNCMODE(op) \
	op(EARFrameSyncMode::SyncTickWithCameraImage) \
	op(EARFrameSyncMode::SyncTickWithoutCameraImage) 

enum class EARFrameSyncMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFrameSyncMode>();

#define FOREACH_ENUM_EARLIGHTESTIMATIONMODE(op) \
	op(EARLightEstimationMode::None) \
	op(EARLightEstimationMode::AmbientLightEstimate) \
	op(EARLightEstimationMode::DirectionalLightEstimate) 

enum class EARLightEstimationMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLightEstimationMode>();

#define FOREACH_ENUM_EARPLANEDETECTIONMODE(op) \
	op(EARPlaneDetectionMode::None) \
	op(EARPlaneDetectionMode::HorizontalPlaneDetection) \
	op(EARPlaneDetectionMode::VerticalPlaneDetection) 

enum class EARPlaneDetectionMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneDetectionMode>();

#define FOREACH_ENUM_EARSESSIONTYPE(op) \
	op(EARSessionType::None) \
	op(EARSessionType::Orientation) \
	op(EARSessionType::World) \
	op(EARSessionType::Face) \
	op(EARSessionType::Image) \
	op(EARSessionType::ObjectScanning) \
	op(EARSessionType::PoseTracking) 

enum class EARSessionType : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionType>();

#define FOREACH_ENUM_EARWORLDALIGNMENT(op) \
	op(EARWorldAlignment::Gravity) \
	op(EARWorldAlignment::GravityAndHeading) \
	op(EARWorldAlignment::Camera) 

enum class EARWorldAlignment : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
