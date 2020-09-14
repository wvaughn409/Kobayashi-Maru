// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FPrimaryAssetType;
struct FPrimaryAssetId;
struct FUserActivity;
class APlayerController;
struct FIntPoint;
class AActor;
struct FVector;
class USceneComponent;
struct FDebugFloatHistory;
struct FVector2D;
struct FLinearColor;
struct FTransform;
class ACameraActor;
struct FPlane;
struct FRotator;
class UPrimitiveComponent;
struct FHitResult;
class FField;
class IInterface;
struct FTimerHandle;
struct FLatentActionInfo;
struct FSoftClassPath;
struct FSoftObjectPath;
class UInterface;
struct FCollisionProfileName;
enum class EPropertyAccessChangeNotifyMode : uint8;
struct FGenericStruct;
#ifdef ENGINE_KismetSystemLibrary_generated_h
#error "KismetSystemLibrary.generated.h already included, missing '#pragma once' in KismetSystemLibrary.h"
#endif
#define ENGINE_KismetSystemLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenericStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGenericStruct>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_299_DELEGATE \
struct KismetSystemLibrary_eventOnAssetClassLoaded_Parms \
{ \
	TSubclassOf<UObject>  Loaded; \
}; \
static inline void FOnAssetClassLoaded_DelegateWrapper(const FScriptDelegate& OnAssetClassLoaded, TSubclassOf<UObject>  Loaded) \
{ \
	KismetSystemLibrary_eventOnAssetClassLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnAssetClassLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_294_DELEGATE \
struct KismetSystemLibrary_eventOnAssetLoaded_Parms \
{ \
	UObject* Loaded; \
}; \
static inline void FOnAssetLoaded_DelegateWrapper(const FScriptDelegate& OnAssetLoaded, UObject* Loaded) \
{ \
	KismetSystemLibrary_eventOnAssetLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnAssetLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetsWithBundleState); \
	DECLARE_FUNCTION(execGetCurrentBundleState); \
	DECLARE_FUNCTION(execUnloadPrimaryAssetList); \
	DECLARE_FUNCTION(execUnloadPrimaryAsset); \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetType); \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetType); \
	DECLARE_FUNCTION(execConv_PrimaryAssetTypeToString); \
	DECLARE_FUNCTION(execIsValidPrimaryAssetType); \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetId); \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetId); \
	DECLARE_FUNCTION(execConv_PrimaryAssetIdToString); \
	DECLARE_FUNCTION(execIsValidPrimaryAssetId); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdList); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftClassReference); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftObjectReference); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromClass); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromObject); \
	DECLARE_FUNCTION(execGetSoftClassReferenceFromPrimaryAssetId); \
	DECLARE_FUNCTION(execGetSoftObjectReferenceFromPrimaryAssetId); \
	DECLARE_FUNCTION(execGetClassFromPrimaryAssetId); \
	DECLARE_FUNCTION(execGetObjectFromPrimaryAssetId); \
	DECLARE_FUNCTION(execSnapshotObject); \
	DECLARE_FUNCTION(execTransactObject); \
	DECLARE_FUNCTION(execCancelTransaction); \
	DECLARE_FUNCTION(execEndTransaction); \
	DECLARE_FUNCTION(execBeginTransaction); \
	DECLARE_FUNCTION(execIsUnattended); \
	DECLARE_FUNCTION(execGetCommandLine); \
	DECLARE_FUNCTION(execSetUserActivity); \
	DECLARE_FUNCTION(execUnregisterForRemoteNotifications); \
	DECLARE_FUNCTION(execRegisterForRemoteNotifications); \
	DECLARE_FUNCTION(execGetLocalCurrencySymbol); \
	DECLARE_FUNCTION(execGetLocalCurrencyCode); \
	DECLARE_FUNCTION(execGetDefaultLocale); \
	DECLARE_FUNCTION(execGetDefaultLanguage); \
	DECLARE_FUNCTION(execGetPreferredLanguages); \
	DECLARE_FUNCTION(execSetSuppressViewportTransitionMessage); \
	DECLARE_FUNCTION(execGetGamepadControllerName); \
	DECLARE_FUNCTION(execIsControllerAssignedToGamepad); \
	DECLARE_FUNCTION(execResetGamepadAssignmentToController); \
	DECLARE_FUNCTION(execResetGamepadAssignments); \
	DECLARE_FUNCTION(execSetGamepadsBlockDeviceFeedback); \
	DECLARE_FUNCTION(execGetVolumeButtonsHandledBySystem); \
	DECLARE_FUNCTION(execSetVolumeButtonsHandledBySystem); \
	DECLARE_FUNCTION(execControlScreensaver); \
	DECLARE_FUNCTION(execIsScreensaverEnabled); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execShowPlatformSpecificAchievementsScreen); \
	DECLARE_FUNCTION(execShowPlatformSpecificLeaderboardScreen); \
	DECLARE_FUNCTION(execShowInterstitialAd); \
	DECLARE_FUNCTION(execIsInterstitialAdRequested); \
	DECLARE_FUNCTION(execIsInterstitialAdAvailable); \
	DECLARE_FUNCTION(execLoadInterstitialAd); \
	DECLARE_FUNCTION(execForceCloseAdBanner); \
	DECLARE_FUNCTION(execHideAdBanner); \
	DECLARE_FUNCTION(execGetAdIDCount); \
	DECLARE_FUNCTION(execShowAdBanner); \
	DECLARE_FUNCTION(execCollectGarbage); \
	DECLARE_FUNCTION(execCanLaunchURL); \
	DECLARE_FUNCTION(execLaunchURL); \
	DECLARE_FUNCTION(execGetMinYResolutionFor3DView); \
	DECLARE_FUNCTION(execGetMinYResolutionForUI); \
	DECLARE_FUNCTION(execGetConvenientWindowedResolutions); \
	DECLARE_FUNCTION(execGetSupportedFullscreenResolutions); \
	DECLARE_FUNCTION(execGetRenderingMaterialQualityLevel); \
	DECLARE_FUNCTION(execGetRenderingDetailMode); \
	DECLARE_FUNCTION(execGetActorBounds); \
	DECLARE_FUNCTION(execGetComponentBounds); \
	DECLARE_FUNCTION(execCreateCopyForUndoBuffer); \
	DECLARE_FUNCTION(execAddFloatHistorySample); \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryLocation); \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryTransform); \
	DECLARE_FUNCTION(execDrawDebugCamera); \
	DECLARE_FUNCTION(execDrawDebugFrustum); \
	DECLARE_FUNCTION(execFlushPersistentDebugLines); \
	DECLARE_FUNCTION(execDrawDebugPlane); \
	DECLARE_FUNCTION(execFlushDebugStrings); \
	DECLARE_FUNCTION(execDrawDebugString); \
	DECLARE_FUNCTION(execDrawDebugCapsule); \
	DECLARE_FUNCTION(execDrawDebugConeInDegrees); \
	DECLARE_FUNCTION(execDrawDebugCone); \
	DECLARE_FUNCTION(execDrawDebugCylinder); \
	DECLARE_FUNCTION(execDrawDebugSphere); \
	DECLARE_FUNCTION(execDrawDebugCoordinateSystem); \
	DECLARE_FUNCTION(execDrawDebugBox); \
	DECLARE_FUNCTION(execDrawDebugArrow); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execDrawDebugCircle); \
	DECLARE_FUNCTION(execDrawDebugLine); \
	DECLARE_FUNCTION(execGetActorListFromComponentList); \
	DECLARE_FUNCTION(execCapsuleTraceMultiByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceSingleByProfile); \
	DECLARE_FUNCTION(execBoxTraceMultiByProfile); \
	DECLARE_FUNCTION(execBoxTraceSingleByProfile); \
	DECLARE_FUNCTION(execSphereTraceMultiByProfile); \
	DECLARE_FUNCTION(execSphereTraceSingleByProfile); \
	DECLARE_FUNCTION(execLineTraceMultiByProfile); \
	DECLARE_FUNCTION(execLineTraceSingleByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjects); \
	DECLARE_FUNCTION(execBoxTraceMultiForObjects); \
	DECLARE_FUNCTION(execBoxTraceSingleForObjects); \
	DECLARE_FUNCTION(execSphereTraceMultiForObjects); \
	DECLARE_FUNCTION(execSphereTraceSingleForObjects); \
	DECLARE_FUNCTION(execLineTraceMultiForObjects); \
	DECLARE_FUNCTION(execLineTraceSingleForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceMulti); \
	DECLARE_FUNCTION(execCapsuleTraceSingle); \
	DECLARE_FUNCTION(execBoxTraceMulti); \
	DECLARE_FUNCTION(execBoxTraceSingle); \
	DECLARE_FUNCTION(execSphereTraceMulti); \
	DECLARE_FUNCTION(execSphereTraceSingle); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execComponentOverlapComponents); \
	DECLARE_FUNCTION(execComponentOverlapActors); \
	DECLARE_FUNCTION(execCapsuleOverlapComponents); \
	DECLARE_FUNCTION(execCapsuleOverlapActors); \
	DECLARE_FUNCTION(execBoxOverlapComponents); \
	DECLARE_FUNCTION(execBoxOverlapActors); \
	DECLARE_FUNCTION(execSphereOverlapComponents); \
	DECLARE_FUNCTION(execSphereOverlapActors); \
	DECLARE_FUNCTION(execSetFieldPathPropertyByName); \
	DECLARE_FUNCTION(execSetTransformPropertyByName); \
	DECLARE_FUNCTION(execSetLinearColorPropertyByName); \
	DECLARE_FUNCTION(execSetRotatorPropertyByName); \
	DECLARE_FUNCTION(execSetVectorPropertyByName); \
	DECLARE_FUNCTION(execSetTextPropertyByName); \
	DECLARE_FUNCTION(execSetStringPropertyByName); \
	DECLARE_FUNCTION(execSetSoftClassPropertyByName); \
	DECLARE_FUNCTION(execSetSoftObjectPropertyByName); \
	DECLARE_FUNCTION(execSetNamePropertyByName); \
	DECLARE_FUNCTION(execSetInterfacePropertyByName); \
	DECLARE_FUNCTION(execSetClassPropertyByName); \
	DECLARE_FUNCTION(execSetObjectPropertyByName); \
	DECLARE_FUNCTION(execSetBoolPropertyByName); \
	DECLARE_FUNCTION(execSetFloatPropertyByName); \
	DECLARE_FUNCTION(execSetBytePropertyByName); \
	DECLARE_FUNCTION(execSetInt64PropertyByName); \
	DECLARE_FUNCTION(execSetIntPropertyByName); \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTime); \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTime); \
	DECLARE_FUNCTION(execK2_TimerExists); \
	DECLARE_FUNCTION(execK2_IsTimerPaused); \
	DECLARE_FUNCTION(execK2_IsTimerActive); \
	DECLARE_FUNCTION(execK2_UnPauseTimer); \
	DECLARE_FUNCTION(execK2_PauseTimer); \
	DECLARE_FUNCTION(execK2_ClearTimer); \
	DECLARE_FUNCTION(execK2_SetTimer); \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeHandle); \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeHandle); \
	DECLARE_FUNCTION(execK2_TimerExistsHandle); \
	DECLARE_FUNCTION(execK2_IsTimerPausedHandle); \
	DECLARE_FUNCTION(execK2_IsTimerActiveHandle); \
	DECLARE_FUNCTION(execK2_UnPauseTimerHandle); \
	DECLARE_FUNCTION(execK2_PauseTimerHandle); \
	DECLARE_FUNCTION(execK2_ClearAndInvalidateTimerHandle); \
	DECLARE_FUNCTION(execK2_ClearTimerHandle); \
	DECLARE_FUNCTION(execK2_InvalidateTimerHandle); \
	DECLARE_FUNCTION(execK2_IsValidTimerHandle); \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeDelegate); \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeDelegate); \
	DECLARE_FUNCTION(execK2_TimerExistsDelegate); \
	DECLARE_FUNCTION(execK2_IsTimerPausedDelegate); \
	DECLARE_FUNCTION(execK2_IsTimerActiveDelegate); \
	DECLARE_FUNCTION(execK2_UnPauseTimerDelegate); \
	DECLARE_FUNCTION(execK2_PauseTimerDelegate); \
	DECLARE_FUNCTION(execK2_ClearTimerDelegate); \
	DECLARE_FUNCTION(execK2_SetTimerDelegate); \
	DECLARE_FUNCTION(execMoveComponentTo); \
	DECLARE_FUNCTION(execRetriggerableDelay); \
	DECLARE_FUNCTION(execDelay); \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execGetConsoleVariableBoolValue); \
	DECLARE_FUNCTION(execGetConsoleVariableIntValue); \
	DECLARE_FUNCTION(execGetConsoleVariableFloatValue); \
	DECLARE_FUNCTION(execExecuteConsoleCommand); \
	DECLARE_FUNCTION(execSetWindowTitle); \
	DECLARE_FUNCTION(execPrintWarning); \
	DECLARE_FUNCTION(execPrintText); \
	DECLARE_FUNCTION(execPrintString); \
	DECLARE_FUNCTION(execMakeLiteralText); \
	DECLARE_FUNCTION(execMakeLiteralString); \
	DECLARE_FUNCTION(execMakeLiteralByte); \
	DECLARE_FUNCTION(execMakeLiteralName); \
	DECLARE_FUNCTION(execMakeLiteralBool); \
	DECLARE_FUNCTION(execMakeLiteralFloat); \
	DECLARE_FUNCTION(execMakeLiteralInt); \
	DECLARE_FUNCTION(execLoadAssetClass); \
	DECLARE_FUNCTION(execLoadAsset); \
	DECLARE_FUNCTION(execConv_ClassToSoftClassReference); \
	DECLARE_FUNCTION(execConv_ObjectToSoftObjectReference); \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToClass); \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToObject); \
	DECLARE_FUNCTION(execLoadClassAsset_Blocking); \
	DECLARE_FUNCTION(execNotEqual_SoftClassReference); \
	DECLARE_FUNCTION(execEqualEqual_SoftClassReference); \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToString); \
	DECLARE_FUNCTION(execIsValidSoftClassReference); \
	DECLARE_FUNCTION(execLoadAsset_Blocking); \
	DECLARE_FUNCTION(execNotEqual_SoftObjectReference); \
	DECLARE_FUNCTION(execEqualEqual_SoftObjectReference); \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToString); \
	DECLARE_FUNCTION(execIsValidSoftObjectReference); \
	DECLARE_FUNCTION(execConv_SoftClassPathToSoftClassRef); \
	DECLARE_FUNCTION(execBreakSoftClassPath); \
	DECLARE_FUNCTION(execMakeSoftClassPath); \
	DECLARE_FUNCTION(execConv_SoftObjPathToSoftObjRef); \
	DECLARE_FUNCTION(execBreakSoftObjectPath); \
	DECLARE_FUNCTION(execMakeSoftObjectPath); \
	DECLARE_FUNCTION(execConv_InterfaceToObject); \
	DECLARE_FUNCTION(execGetDeviceId); \
	DECLARE_FUNCTION(execGetUniqueDeviceId); \
	DECLARE_FUNCTION(execIsPackagedForDistribution); \
	DECLARE_FUNCTION(execIsSplitScreen); \
	DECLARE_FUNCTION(execIsStandalone); \
	DECLARE_FUNCTION(execIsDedicatedServer); \
	DECLARE_FUNCTION(execIsServer); \
	DECLARE_FUNCTION(execGetFrameCount); \
	DECLARE_FUNCTION(execGetGameTimeInSeconds); \
	DECLARE_FUNCTION(execDoesImplementInterface); \
	DECLARE_FUNCTION(execGetPlatformUserDir); \
	DECLARE_FUNCTION(execGetPlatformUserName); \
	DECLARE_FUNCTION(execGetGameBundleId); \
	DECLARE_FUNCTION(execNormalizeFilename); \
	DECLARE_FUNCTION(execConvertToAbsolutePath); \
	DECLARE_FUNCTION(execConvertToRelativePath); \
	DECLARE_FUNCTION(execGetProjectSavedDirectory); \
	DECLARE_FUNCTION(execGetProjectContentDirectory); \
	DECLARE_FUNCTION(execGetProjectDirectory); \
	DECLARE_FUNCTION(execGetGameName); \
	DECLARE_FUNCTION(execGetEngineVersion); \
	DECLARE_FUNCTION(execGetOuterObject); \
	DECLARE_FUNCTION(execGetClassDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetPathName); \
	DECLARE_FUNCTION(execGetObjectName); \
	DECLARE_FUNCTION(execIsValidClass); \
	DECLARE_FUNCTION(execIsValid);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetsWithBundleState); \
	DECLARE_FUNCTION(execGetCurrentBundleState); \
	DECLARE_FUNCTION(execUnloadPrimaryAssetList); \
	DECLARE_FUNCTION(execUnloadPrimaryAsset); \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetType); \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetType); \
	DECLARE_FUNCTION(execConv_PrimaryAssetTypeToString); \
	DECLARE_FUNCTION(execIsValidPrimaryAssetType); \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetId); \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetId); \
	DECLARE_FUNCTION(execConv_PrimaryAssetIdToString); \
	DECLARE_FUNCTION(execIsValidPrimaryAssetId); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdList); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftClassReference); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftObjectReference); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromClass); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromObject); \
	DECLARE_FUNCTION(execGetSoftClassReferenceFromPrimaryAssetId); \
	DECLARE_FUNCTION(execGetSoftObjectReferenceFromPrimaryAssetId); \
	DECLARE_FUNCTION(execGetClassFromPrimaryAssetId); \
	DECLARE_FUNCTION(execGetObjectFromPrimaryAssetId); \
	DECLARE_FUNCTION(execSnapshotObject); \
	DECLARE_FUNCTION(execTransactObject); \
	DECLARE_FUNCTION(execCancelTransaction); \
	DECLARE_FUNCTION(execEndTransaction); \
	DECLARE_FUNCTION(execBeginTransaction); \
	DECLARE_FUNCTION(execIsUnattended); \
	DECLARE_FUNCTION(execGetCommandLine); \
	DECLARE_FUNCTION(execSetUserActivity); \
	DECLARE_FUNCTION(execUnregisterForRemoteNotifications); \
	DECLARE_FUNCTION(execRegisterForRemoteNotifications); \
	DECLARE_FUNCTION(execGetLocalCurrencySymbol); \
	DECLARE_FUNCTION(execGetLocalCurrencyCode); \
	DECLARE_FUNCTION(execGetDefaultLocale); \
	DECLARE_FUNCTION(execGetDefaultLanguage); \
	DECLARE_FUNCTION(execGetPreferredLanguages); \
	DECLARE_FUNCTION(execSetSuppressViewportTransitionMessage); \
	DECLARE_FUNCTION(execGetGamepadControllerName); \
	DECLARE_FUNCTION(execIsControllerAssignedToGamepad); \
	DECLARE_FUNCTION(execResetGamepadAssignmentToController); \
	DECLARE_FUNCTION(execResetGamepadAssignments); \
	DECLARE_FUNCTION(execSetGamepadsBlockDeviceFeedback); \
	DECLARE_FUNCTION(execGetVolumeButtonsHandledBySystem); \
	DECLARE_FUNCTION(execSetVolumeButtonsHandledBySystem); \
	DECLARE_FUNCTION(execControlScreensaver); \
	DECLARE_FUNCTION(execIsScreensaverEnabled); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execShowPlatformSpecificAchievementsScreen); \
	DECLARE_FUNCTION(execShowPlatformSpecificLeaderboardScreen); \
	DECLARE_FUNCTION(execShowInterstitialAd); \
	DECLARE_FUNCTION(execIsInterstitialAdRequested); \
	DECLARE_FUNCTION(execIsInterstitialAdAvailable); \
	DECLARE_FUNCTION(execLoadInterstitialAd); \
	DECLARE_FUNCTION(execForceCloseAdBanner); \
	DECLARE_FUNCTION(execHideAdBanner); \
	DECLARE_FUNCTION(execGetAdIDCount); \
	DECLARE_FUNCTION(execShowAdBanner); \
	DECLARE_FUNCTION(execCollectGarbage); \
	DECLARE_FUNCTION(execCanLaunchURL); \
	DECLARE_FUNCTION(execLaunchURL); \
	DECLARE_FUNCTION(execGetMinYResolutionFor3DView); \
	DECLARE_FUNCTION(execGetMinYResolutionForUI); \
	DECLARE_FUNCTION(execGetConvenientWindowedResolutions); \
	DECLARE_FUNCTION(execGetSupportedFullscreenResolutions); \
	DECLARE_FUNCTION(execGetRenderingMaterialQualityLevel); \
	DECLARE_FUNCTION(execGetRenderingDetailMode); \
	DECLARE_FUNCTION(execGetActorBounds); \
	DECLARE_FUNCTION(execGetComponentBounds); \
	DECLARE_FUNCTION(execCreateCopyForUndoBuffer); \
	DECLARE_FUNCTION(execAddFloatHistorySample); \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryLocation); \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryTransform); \
	DECLARE_FUNCTION(execDrawDebugCamera); \
	DECLARE_FUNCTION(execDrawDebugFrustum); \
	DECLARE_FUNCTION(execFlushPersistentDebugLines); \
	DECLARE_FUNCTION(execDrawDebugPlane); \
	DECLARE_FUNCTION(execFlushDebugStrings); \
	DECLARE_FUNCTION(execDrawDebugString); \
	DECLARE_FUNCTION(execDrawDebugCapsule); \
	DECLARE_FUNCTION(execDrawDebugConeInDegrees); \
	DECLARE_FUNCTION(execDrawDebugCone); \
	DECLARE_FUNCTION(execDrawDebugCylinder); \
	DECLARE_FUNCTION(execDrawDebugSphere); \
	DECLARE_FUNCTION(execDrawDebugCoordinateSystem); \
	DECLARE_FUNCTION(execDrawDebugBox); \
	DECLARE_FUNCTION(execDrawDebugArrow); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execDrawDebugCircle); \
	DECLARE_FUNCTION(execDrawDebugLine); \
	DECLARE_FUNCTION(execGetActorListFromComponentList); \
	DECLARE_FUNCTION(execCapsuleTraceMultiByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceSingleByProfile); \
	DECLARE_FUNCTION(execBoxTraceMultiByProfile); \
	DECLARE_FUNCTION(execBoxTraceSingleByProfile); \
	DECLARE_FUNCTION(execSphereTraceMultiByProfile); \
	DECLARE_FUNCTION(execSphereTraceSingleByProfile); \
	DECLARE_FUNCTION(execLineTraceMultiByProfile); \
	DECLARE_FUNCTION(execLineTraceSingleByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjects); \
	DECLARE_FUNCTION(execBoxTraceMultiForObjects); \
	DECLARE_FUNCTION(execBoxTraceSingleForObjects); \
	DECLARE_FUNCTION(execSphereTraceMultiForObjects); \
	DECLARE_FUNCTION(execSphereTraceSingleForObjects); \
	DECLARE_FUNCTION(execLineTraceMultiForObjects); \
	DECLARE_FUNCTION(execLineTraceSingleForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceMulti); \
	DECLARE_FUNCTION(execCapsuleTraceSingle); \
	DECLARE_FUNCTION(execBoxTraceMulti); \
	DECLARE_FUNCTION(execBoxTraceSingle); \
	DECLARE_FUNCTION(execSphereTraceMulti); \
	DECLARE_FUNCTION(execSphereTraceSingle); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execComponentOverlapComponents); \
	DECLARE_FUNCTION(execComponentOverlapActors); \
	DECLARE_FUNCTION(execCapsuleOverlapComponents); \
	DECLARE_FUNCTION(execCapsuleOverlapActors); \
	DECLARE_FUNCTION(execBoxOverlapComponents); \
	DECLARE_FUNCTION(execBoxOverlapActors); \
	DECLARE_FUNCTION(execSphereOverlapComponents); \
	DECLARE_FUNCTION(execSphereOverlapActors); \
	DECLARE_FUNCTION(execSetFieldPathPropertyByName); \
	DECLARE_FUNCTION(execSetTransformPropertyByName); \
	DECLARE_FUNCTION(execSetLinearColorPropertyByName); \
	DECLARE_FUNCTION(execSetRotatorPropertyByName); \
	DECLARE_FUNCTION(execSetVectorPropertyByName); \
	DECLARE_FUNCTION(execSetTextPropertyByName); \
	DECLARE_FUNCTION(execSetStringPropertyByName); \
	DECLARE_FUNCTION(execSetSoftClassPropertyByName); \
	DECLARE_FUNCTION(execSetSoftObjectPropertyByName); \
	DECLARE_FUNCTION(execSetNamePropertyByName); \
	DECLARE_FUNCTION(execSetInterfacePropertyByName); \
	DECLARE_FUNCTION(execSetClassPropertyByName); \
	DECLARE_FUNCTION(execSetObjectPropertyByName); \
	DECLARE_FUNCTION(execSetBoolPropertyByName); \
	DECLARE_FUNCTION(execSetFloatPropertyByName); \
	DECLARE_FUNCTION(execSetBytePropertyByName); \
	DECLARE_FUNCTION(execSetInt64PropertyByName); \
	DECLARE_FUNCTION(execSetIntPropertyByName); \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTime); \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTime); \
	DECLARE_FUNCTION(execK2_TimerExists); \
	DECLARE_FUNCTION(execK2_IsTimerPaused); \
	DECLARE_FUNCTION(execK2_IsTimerActive); \
	DECLARE_FUNCTION(execK2_UnPauseTimer); \
	DECLARE_FUNCTION(execK2_PauseTimer); \
	DECLARE_FUNCTION(execK2_ClearTimer); \
	DECLARE_FUNCTION(execK2_SetTimer); \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeHandle); \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeHandle); \
	DECLARE_FUNCTION(execK2_TimerExistsHandle); \
	DECLARE_FUNCTION(execK2_IsTimerPausedHandle); \
	DECLARE_FUNCTION(execK2_IsTimerActiveHandle); \
	DECLARE_FUNCTION(execK2_UnPauseTimerHandle); \
	DECLARE_FUNCTION(execK2_PauseTimerHandle); \
	DECLARE_FUNCTION(execK2_ClearAndInvalidateTimerHandle); \
	DECLARE_FUNCTION(execK2_ClearTimerHandle); \
	DECLARE_FUNCTION(execK2_InvalidateTimerHandle); \
	DECLARE_FUNCTION(execK2_IsValidTimerHandle); \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeDelegate); \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeDelegate); \
	DECLARE_FUNCTION(execK2_TimerExistsDelegate); \
	DECLARE_FUNCTION(execK2_IsTimerPausedDelegate); \
	DECLARE_FUNCTION(execK2_IsTimerActiveDelegate); \
	DECLARE_FUNCTION(execK2_UnPauseTimerDelegate); \
	DECLARE_FUNCTION(execK2_PauseTimerDelegate); \
	DECLARE_FUNCTION(execK2_ClearTimerDelegate); \
	DECLARE_FUNCTION(execK2_SetTimerDelegate); \
	DECLARE_FUNCTION(execMoveComponentTo); \
	DECLARE_FUNCTION(execRetriggerableDelay); \
	DECLARE_FUNCTION(execDelay); \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execGetConsoleVariableBoolValue); \
	DECLARE_FUNCTION(execGetConsoleVariableIntValue); \
	DECLARE_FUNCTION(execGetConsoleVariableFloatValue); \
	DECLARE_FUNCTION(execExecuteConsoleCommand); \
	DECLARE_FUNCTION(execSetWindowTitle); \
	DECLARE_FUNCTION(execPrintWarning); \
	DECLARE_FUNCTION(execPrintText); \
	DECLARE_FUNCTION(execPrintString); \
	DECLARE_FUNCTION(execMakeLiteralText); \
	DECLARE_FUNCTION(execMakeLiteralString); \
	DECLARE_FUNCTION(execMakeLiteralByte); \
	DECLARE_FUNCTION(execMakeLiteralName); \
	DECLARE_FUNCTION(execMakeLiteralBool); \
	DECLARE_FUNCTION(execMakeLiteralFloat); \
	DECLARE_FUNCTION(execMakeLiteralInt); \
	DECLARE_FUNCTION(execLoadAssetClass); \
	DECLARE_FUNCTION(execLoadAsset); \
	DECLARE_FUNCTION(execConv_ClassToSoftClassReference); \
	DECLARE_FUNCTION(execConv_ObjectToSoftObjectReference); \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToClass); \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToObject); \
	DECLARE_FUNCTION(execLoadClassAsset_Blocking); \
	DECLARE_FUNCTION(execNotEqual_SoftClassReference); \
	DECLARE_FUNCTION(execEqualEqual_SoftClassReference); \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToString); \
	DECLARE_FUNCTION(execIsValidSoftClassReference); \
	DECLARE_FUNCTION(execLoadAsset_Blocking); \
	DECLARE_FUNCTION(execNotEqual_SoftObjectReference); \
	DECLARE_FUNCTION(execEqualEqual_SoftObjectReference); \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToString); \
	DECLARE_FUNCTION(execIsValidSoftObjectReference); \
	DECLARE_FUNCTION(execConv_SoftClassPathToSoftClassRef); \
	DECLARE_FUNCTION(execBreakSoftClassPath); \
	DECLARE_FUNCTION(execMakeSoftClassPath); \
	DECLARE_FUNCTION(execConv_SoftObjPathToSoftObjRef); \
	DECLARE_FUNCTION(execBreakSoftObjectPath); \
	DECLARE_FUNCTION(execMakeSoftObjectPath); \
	DECLARE_FUNCTION(execConv_InterfaceToObject); \
	DECLARE_FUNCTION(execGetDeviceId); \
	DECLARE_FUNCTION(execGetUniqueDeviceId); \
	DECLARE_FUNCTION(execIsPackagedForDistribution); \
	DECLARE_FUNCTION(execIsSplitScreen); \
	DECLARE_FUNCTION(execIsStandalone); \
	DECLARE_FUNCTION(execIsDedicatedServer); \
	DECLARE_FUNCTION(execIsServer); \
	DECLARE_FUNCTION(execGetFrameCount); \
	DECLARE_FUNCTION(execGetGameTimeInSeconds); \
	DECLARE_FUNCTION(execDoesImplementInterface); \
	DECLARE_FUNCTION(execGetPlatformUserDir); \
	DECLARE_FUNCTION(execGetPlatformUserName); \
	DECLARE_FUNCTION(execGetGameBundleId); \
	DECLARE_FUNCTION(execNormalizeFilename); \
	DECLARE_FUNCTION(execConvertToAbsolutePath); \
	DECLARE_FUNCTION(execConvertToRelativePath); \
	DECLARE_FUNCTION(execGetProjectSavedDirectory); \
	DECLARE_FUNCTION(execGetProjectContentDirectory); \
	DECLARE_FUNCTION(execGetProjectDirectory); \
	DECLARE_FUNCTION(execGetGameName); \
	DECLARE_FUNCTION(execGetEngineVersion); \
	DECLARE_FUNCTION(execGetOuterObject); \
	DECLARE_FUNCTION(execGetClassDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetPathName); \
	DECLARE_FUNCTION(execGetObjectName); \
	DECLARE_FUNCTION(execIsValidClass); \
	DECLARE_FUNCTION(execIsValid);


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitEditor);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitEditor);


#else
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetSystemLibrary(); \
	friend struct Z_Construct_UClass_UKismetSystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetSystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetSystemLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUKismetSystemLibrary(); \
	friend struct Z_Construct_UClass_UKismetSystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetSystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetSystemLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetSystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetSystemLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetSystemLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetSystemLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetSystemLibrary(UKismetSystemLibrary&&); \
	NO_API UKismetSystemLibrary(const UKismetSystemLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetSystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetSystemLibrary(UKismetSystemLibrary&&); \
	NO_API UKismetSystemLibrary(const UKismetSystemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetSystemLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetSystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetSystemLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_75_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_78_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetSystemLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetSystemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h


#define FOREACH_ENUM_EQUITPREFERENCE(op) \
	op(EQuitPreference::Quit) \
	op(EQuitPreference::Background) 
#define FOREACH_ENUM_EMOVECOMPONENTACTION(op) \
	op(EMoveComponentAction::Move) \
	op(EMoveComponentAction::Stop) \
	op(EMoveComponentAction::Return) 
#define FOREACH_ENUM_EDRAWDEBUGTRACE(op) \
	op(EDrawDebugTrace::None) \
	op(EDrawDebugTrace::ForOneFrame) \
	op(EDrawDebugTrace::ForDuration) \
	op(EDrawDebugTrace::Persistent) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
