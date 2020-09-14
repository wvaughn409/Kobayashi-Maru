// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMinimalViewInfo;
struct FMatrix;
class APlayerController;
struct FVector;
struct FVector2D;
class UObject;
class UStaticMesh;
struct FIntVector;
struct FPredictProjectilePathParams;
struct FPredictProjectilePathResult;
struct FHitResult;
class AActor;
class USaveGame;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UMaterialInterface;
class USceneComponent;
struct FRotator;
class UDecalComponent;
class UReverbEffect;
class USoundMix;
class USoundClass;
class USoundBase;
class UForceFeedbackEffect;
class UForceFeedbackAttenuation;
class UForceFeedbackComponent;
class UDialogueWave;
struct FDialogueContext;
class USoundAttenuation;
class UAudioComponent;
class USoundConcurrency;
class UParticleSystem;
enum class EPSCPoolMethod : uint8;
class UParticleSystemComponent;
class UCameraShake;
class AController;
class UDamageType;
enum class EMouseCaptureMode : uint8;
class AGameStateBase;
class AGameModeBase;
class ULevelStreaming;
struct FLatentActionInfo;
class APlayerCameraManager;
class ACharacter;
class APawn;
class UGameInstance;
class UInterface;
struct FTransform;
enum class ESpawnActorCollisionHandlingMethod : uint8;
class UBlueprint;
#ifdef ENGINE_GameplayStatics_generated_h
#error "GameplayStatics.generated.h already included, missing '#pragma once' in GameplayStatics.h"
#endif
#define ENGINE_GameplayStatics_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasLaunchOption); \
	DECLARE_FUNCTION(execGetIntOption); \
	DECLARE_FUNCTION(execHasOption); \
	DECLARE_FUNCTION(execParseOption); \
	DECLARE_FUNCTION(execGetKeyValue); \
	DECLARE_FUNCTION(execGetViewProjectionMatrix); \
	DECLARE_FUNCTION(execProjectWorldToScreen); \
	DECLARE_FUNCTION(execDeprojectScreenToWorld); \
	DECLARE_FUNCTION(execGrassOverlappingSphereCount); \
	DECLARE_FUNCTION(execRebaseZeroOriginOntoLocal); \
	DECLARE_FUNCTION(execRebaseLocalOriginOntoZero); \
	DECLARE_FUNCTION(execSetWorldOriginLocation); \
	DECLARE_FUNCTION(execGetWorldOriginLocation); \
	DECLARE_FUNCTION(execSuggestProjectileVelocity_CustomArc); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_Advanced); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByTraceChannel); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByObjectType); \
	DECLARE_FUNCTION(execBlueprintSuggestProjectileVelocity); \
	DECLARE_FUNCTION(execGetPlatformName); \
	DECLARE_FUNCTION(execEnableLiveStreaming); \
	DECLARE_FUNCTION(execGetAccurateRealTime); \
	DECLARE_FUNCTION(execGetAudioTimeSeconds); \
	DECLARE_FUNCTION(execGetRealTimeSeconds); \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds); \
	DECLARE_FUNCTION(execGetTimeSeconds); \
	DECLARE_FUNCTION(execGetWorldDeltaSeconds); \
	DECLARE_FUNCTION(execDeleteGameInSlot); \
	DECLARE_FUNCTION(execLoadGameFromSlot); \
	DECLARE_FUNCTION(execDoesSaveGameExist); \
	DECLARE_FUNCTION(execSaveGameToSlot); \
	DECLARE_FUNCTION(execCreateSaveGameObject); \
	DECLARE_FUNCTION(execFindCollisionUV); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execMakeHitResult); \
	DECLARE_FUNCTION(execBreakHitResult); \
	DECLARE_FUNCTION(execSpawnDecalAttached); \
	DECLARE_FUNCTION(execSpawnDecalAtLocation); \
	DECLARE_FUNCTION(execGetMaxAudioChannelCount); \
	DECLARE_FUNCTION(execSetMaxAudioChannelsScaled); \
	DECLARE_FUNCTION(execGetCurrentReverbEffect); \
	DECLARE_FUNCTION(execDeactivateReverbEffect); \
	DECLARE_FUNCTION(execActivateReverbEffect); \
	DECLARE_FUNCTION(execClearSoundMixModifiers); \
	DECLARE_FUNCTION(execPopSoundMixModifier); \
	DECLARE_FUNCTION(execPushSoundMixModifier); \
	DECLARE_FUNCTION(execClearSoundMixClassOverride); \
	DECLARE_FUNCTION(execSetSoundMixClassOverride); \
	DECLARE_FUNCTION(execPrimeSound); \
	DECLARE_FUNCTION(execSetBaseSoundMix); \
	DECLARE_FUNCTION(execAreSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAttached); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogueAttached); \
	DECLARE_FUNCTION(execSpawnDialogueAtLocation); \
	DECLARE_FUNCTION(execPlayDialogueAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogue2D); \
	DECLARE_FUNCTION(execPlayDialogue2D); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execSetGlobalListenerFocusParameters); \
	DECLARE_FUNCTION(execSetSoundClassDistanceScale); \
	DECLARE_FUNCTION(execSetGlobalPitchModulation); \
	DECLARE_FUNCTION(execGetClosestListenerLocation); \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange); \
	DECLARE_FUNCTION(execSpawnEmitterAttached); \
	DECLARE_FUNCTION(execSpawnEmitterAtLocation); \
	DECLARE_FUNCTION(execPlayWorldCameraShake); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execApplyPointDamage); \
	DECLARE_FUNCTION(execApplyRadialDamageWithFalloff); \
	DECLARE_FUNCTION(execApplyRadialDamage); \
	DECLARE_FUNCTION(execSetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetEnableWorldRendering); \
	DECLARE_FUNCTION(execSetEnableWorldRendering); \
	DECLARE_FUNCTION(execIsSplitscreenForceDisabled); \
	DECLARE_FUNCTION(execSetForceDisableSplitscreen); \
	DECLARE_FUNCTION(execIsGamePaused); \
	DECLARE_FUNCTION(execSetGamePaused); \
	DECLARE_FUNCTION(execSetGlobalTimeDilation); \
	DECLARE_FUNCTION(execGetGlobalTimeDilation); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetCurrentLevelName); \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execCancelAsyncLoading); \
	DECLARE_FUNCTION(execFlushLevelStreaming); \
	DECLARE_FUNCTION(execGetStreamingLevel); \
	DECLARE_FUNCTION(execUnloadStreamLevel); \
	DECLARE_FUNCTION(execLoadStreamLevel); \
	DECLARE_FUNCTION(execSetPlayerControllerID); \
	DECLARE_FUNCTION(execGetPlayerControllerID); \
	DECLARE_FUNCTION(execRemovePlayer); \
	DECLARE_FUNCTION(execCreatePlayer); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetPlayerControllerFromID); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetAllActorsOfClassWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithInterface); \
	DECLARE_FUNCTION(execGetAllActorsOfClass); \
	DECLARE_FUNCTION(execGetActorOfClass); \
	DECLARE_FUNCTION(execGetActorArrayBounds); \
	DECLARE_FUNCTION(execGetActorArrayAverageLocation); \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginDeferredActorSpawnFromClass); \
	DECLARE_FUNCTION(execBeginSpawningActorFromClass); \
	DECLARE_FUNCTION(execBeginSpawningActorFromBlueprint); \
	DECLARE_FUNCTION(execSpawnObject);


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasLaunchOption); \
	DECLARE_FUNCTION(execGetIntOption); \
	DECLARE_FUNCTION(execHasOption); \
	DECLARE_FUNCTION(execParseOption); \
	DECLARE_FUNCTION(execGetKeyValue); \
	DECLARE_FUNCTION(execGetViewProjectionMatrix); \
	DECLARE_FUNCTION(execProjectWorldToScreen); \
	DECLARE_FUNCTION(execDeprojectScreenToWorld); \
	DECLARE_FUNCTION(execGrassOverlappingSphereCount); \
	DECLARE_FUNCTION(execRebaseZeroOriginOntoLocal); \
	DECLARE_FUNCTION(execRebaseLocalOriginOntoZero); \
	DECLARE_FUNCTION(execSetWorldOriginLocation); \
	DECLARE_FUNCTION(execGetWorldOriginLocation); \
	DECLARE_FUNCTION(execSuggestProjectileVelocity_CustomArc); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_Advanced); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByTraceChannel); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByObjectType); \
	DECLARE_FUNCTION(execBlueprintSuggestProjectileVelocity); \
	DECLARE_FUNCTION(execGetPlatformName); \
	DECLARE_FUNCTION(execEnableLiveStreaming); \
	DECLARE_FUNCTION(execGetAccurateRealTime); \
	DECLARE_FUNCTION(execGetAudioTimeSeconds); \
	DECLARE_FUNCTION(execGetRealTimeSeconds); \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds); \
	DECLARE_FUNCTION(execGetTimeSeconds); \
	DECLARE_FUNCTION(execGetWorldDeltaSeconds); \
	DECLARE_FUNCTION(execDeleteGameInSlot); \
	DECLARE_FUNCTION(execLoadGameFromSlot); \
	DECLARE_FUNCTION(execDoesSaveGameExist); \
	DECLARE_FUNCTION(execSaveGameToSlot); \
	DECLARE_FUNCTION(execCreateSaveGameObject); \
	DECLARE_FUNCTION(execFindCollisionUV); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execMakeHitResult); \
	DECLARE_FUNCTION(execBreakHitResult); \
	DECLARE_FUNCTION(execSpawnDecalAttached); \
	DECLARE_FUNCTION(execSpawnDecalAtLocation); \
	DECLARE_FUNCTION(execGetMaxAudioChannelCount); \
	DECLARE_FUNCTION(execSetMaxAudioChannelsScaled); \
	DECLARE_FUNCTION(execGetCurrentReverbEffect); \
	DECLARE_FUNCTION(execDeactivateReverbEffect); \
	DECLARE_FUNCTION(execActivateReverbEffect); \
	DECLARE_FUNCTION(execClearSoundMixModifiers); \
	DECLARE_FUNCTION(execPopSoundMixModifier); \
	DECLARE_FUNCTION(execPushSoundMixModifier); \
	DECLARE_FUNCTION(execClearSoundMixClassOverride); \
	DECLARE_FUNCTION(execSetSoundMixClassOverride); \
	DECLARE_FUNCTION(execPrimeSound); \
	DECLARE_FUNCTION(execSetBaseSoundMix); \
	DECLARE_FUNCTION(execAreSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAttached); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogueAttached); \
	DECLARE_FUNCTION(execSpawnDialogueAtLocation); \
	DECLARE_FUNCTION(execPlayDialogueAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogue2D); \
	DECLARE_FUNCTION(execPlayDialogue2D); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execSetGlobalListenerFocusParameters); \
	DECLARE_FUNCTION(execSetSoundClassDistanceScale); \
	DECLARE_FUNCTION(execSetGlobalPitchModulation); \
	DECLARE_FUNCTION(execGetClosestListenerLocation); \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange); \
	DECLARE_FUNCTION(execSpawnEmitterAttached); \
	DECLARE_FUNCTION(execSpawnEmitterAtLocation); \
	DECLARE_FUNCTION(execPlayWorldCameraShake); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execApplyPointDamage); \
	DECLARE_FUNCTION(execApplyRadialDamageWithFalloff); \
	DECLARE_FUNCTION(execApplyRadialDamage); \
	DECLARE_FUNCTION(execSetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetEnableWorldRendering); \
	DECLARE_FUNCTION(execSetEnableWorldRendering); \
	DECLARE_FUNCTION(execIsSplitscreenForceDisabled); \
	DECLARE_FUNCTION(execSetForceDisableSplitscreen); \
	DECLARE_FUNCTION(execIsGamePaused); \
	DECLARE_FUNCTION(execSetGamePaused); \
	DECLARE_FUNCTION(execSetGlobalTimeDilation); \
	DECLARE_FUNCTION(execGetGlobalTimeDilation); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetCurrentLevelName); \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execCancelAsyncLoading); \
	DECLARE_FUNCTION(execFlushLevelStreaming); \
	DECLARE_FUNCTION(execGetStreamingLevel); \
	DECLARE_FUNCTION(execUnloadStreamLevel); \
	DECLARE_FUNCTION(execLoadStreamLevel); \
	DECLARE_FUNCTION(execSetPlayerControllerID); \
	DECLARE_FUNCTION(execGetPlayerControllerID); \
	DECLARE_FUNCTION(execRemovePlayer); \
	DECLARE_FUNCTION(execCreatePlayer); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetPlayerControllerFromID); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetAllActorsOfClassWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithInterface); \
	DECLARE_FUNCTION(execGetAllActorsOfClass); \
	DECLARE_FUNCTION(execGetActorOfClass); \
	DECLARE_FUNCTION(execGetActorArrayBounds); \
	DECLARE_FUNCTION(execGetActorArrayAverageLocation); \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginDeferredActorSpawnFromClass); \
	DECLARE_FUNCTION(execBeginSpawningActorFromClass); \
	DECLARE_FUNCTION(execBeginSpawningActorFromBlueprint); \
	DECLARE_FUNCTION(execSpawnObject);


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayStatics(); \
	friend struct Z_Construct_UClass_UGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameplayStatics)


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayStatics(); \
	friend struct Z_Construct_UClass_UGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameplayStatics)


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayStatics(UGameplayStatics&&); \
	NO_API UGameplayStatics(const UGameplayStatics&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayStatics(UGameplayStatics&&); \
	NO_API UGameplayStatics(const UGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayStatics)


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_46_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
