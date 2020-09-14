// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ASpectatorPawn;
class USceneComponent;
struct FRotator;
class AActor;
class UTouchInterface;
struct FKey;
class APlayerState;
struct FViewTargetTransitionParams;
struct FUpdateLevelVisibilityLevelInfo;
struct FVector_NetQuantize;
class APawn;
class ULocalMessage;
class UObject;
struct FUpdateLevelStreamingLevelStatus;
struct FGuid;
struct FColor;
enum class EControllerHand : uint8;
class UHapticFeedbackEffect_Base;
struct FLatentActionInfo;
class UForceFeedbackEffect;
struct FForceFeedbackParameters;
class UCameraShakeSourceComponent;
class UCameraShake;
class UCameraAnim;
class AEmitterCameraLensEffectBase;
class UUserWidget;
class AHUD;
class UMaterialInterface;
struct FVector2D;
class USoundBase;
struct FUniqueNetIdRepl;
struct FHitResult;
#ifdef ENGINE_PlayerController_generated_h
#error "PlayerController.generated.h already included, missing '#pragma once' in PlayerController.h"
#endif
#define ENGINE_PlayerController_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FUpdateLevelVisibilityLevelInfo>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FUpdateLevelStreamingLevelStatus>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_RPC_WRAPPERS \
	virtual void OnServerStartedVisualLogger_Implementation(bool bIsLogging); \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
	virtual void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime); \
	virtual bool ServerViewSelf_Validate(FViewTargetTransitionParams ); \
	virtual void ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams); \
	virtual bool ServerViewPrevPlayer_Validate(); \
	virtual void ServerViewPrevPlayer_Implementation(); \
	virtual bool ServerViewNextPlayer_Validate(); \
	virtual void ServerViewNextPlayer_Implementation(); \
	virtual bool ServerVerifyViewTarget_Validate(); \
	virtual void ServerVerifyViewTarget_Implementation(); \
	 bool ServerUpdateMultipleLevelsVisibility_Validate(TArray<FUpdateLevelVisibilityLevelInfo> const& ); \
	void ServerUpdateMultipleLevelsVisibility_Implementation(TArray<FUpdateLevelVisibilityLevelInfo> const& LevelVisibilities); \
	 bool ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo const& ); \
	void ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo const& LevelVisibility); \
	virtual bool ServerUpdateCamera_Validate(FVector_NetQuantize , int32 ); \
	virtual void ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw); \
	virtual bool ServerShortTimeout_Validate(); \
	virtual void ServerShortTimeout_Implementation(); \
	virtual bool ServerCheckClientPossessionReliable_Validate(); \
	virtual void ServerCheckClientPossessionReliable_Implementation(); \
	virtual bool ServerCheckClientPossession_Validate(); \
	virtual void ServerCheckClientPossession_Implementation(); \
	virtual bool ServerSetSpectatorLocation_Validate(FVector , FRotator ); \
	virtual void ServerSetSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot); \
	virtual bool ServerRestartPlayer_Validate(); \
	virtual void ServerRestartPlayer_Implementation(); \
	virtual bool ServerPause_Validate(); \
	virtual void ServerPause_Implementation(); \
	 bool ServerNotifyLoadedWorld_Validate(FName ); \
	void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName); \
	virtual bool ServerChangeName_Validate(const FString& ); \
	virtual void ServerChangeName_Implementation(const FString& S); \
	virtual bool ServerCamera_Validate(FName ); \
	virtual void ServerCamera_Implementation(FName NewMode); \
	virtual bool ServerAcknowledgePossession_Validate(APawn* ); \
	virtual void ServerAcknowledgePossession_Implementation(APawn* P); \
	virtual void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>  Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject); \
	virtual void ClientRetryClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientEndOnlineSession_Implementation(); \
	virtual void ClientStartOnlineSession_Implementation(); \
	virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	virtual void ClientUpdateMultipleLevelsStreamingStatus_Implementation(TArray<FUpdateLevelStreamingLevelStatus> const& LevelStatuses); \
	virtual void ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex); \
	virtual void ClientTravelInternal_Implementation(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid); \
	virtual void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag); \
	virtual void ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params); \
	virtual void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, bool bImmediately); \
	virtual void ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop); \
	virtual void ClientClearCameraLensEffects_Implementation(); \
	virtual void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass); \
	virtual void ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams TransitionParams); \
	virtual void ClientSetHUD_Implementation(TSubclassOf<AHUD>  NewHUDClass); \
	virtual void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups); \
	virtual void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); \
	virtual void ClientSetCameraMode_Implementation(FName NewCamMode); \
	virtual void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio); \
	virtual void ClientSetBlockOnAsyncLoading_Implementation(); \
	virtual void ClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientReset_Implementation(); \
	virtual void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups); \
	virtual void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast); \
	virtual void ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlayCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot); \
	virtual void ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraAnimPlaySpace::Type Space, FRotator CustomPlaySpace); \
	virtual void ClientMessage_Implementation(const FString& S, FName Type, float MsgLifeTime); \
	virtual void ClientIgnoreMoveInput_Implementation(bool bIgnore); \
	virtual void ClientIgnoreLookInput_Implementation(bool bIgnore); \
	virtual void ClientGotoState_Implementation(FName NewState); \
	virtual void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner); \
	virtual void ClientForceGarbageCollection_Implementation(); \
	void ClientFlushLevelStreaming_Implementation(); \
	virtual void ClientCommitMapChange_Implementation(); \
	virtual void ClientCapBandwidth_Implementation(int32 Cap); \
	virtual void ClientCancelPendingMapChange_Implementation(); \
	void ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation); \
	virtual void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerMutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientVoiceHandshakeComplete_Implementation(); \
	virtual void ClientEnableNetworkVoice_Implementation(bool bEnable); \
	virtual void ClientRepObjRef_Implementation(UObject* Object); \
	virtual void ClientReturnToMainMenuWithTextReason_Implementation(FText const& ReturnReason); \
	virtual void ClientReturnToMainMenu_Implementation(const FString& ReturnReason); \
	virtual bool ServerExecRPC_Validate(const FString& ); \
	virtual void ServerExecRPC_Implementation(const FString& Msg); \
	virtual void ClientSetSpectatorWaiting_Implementation(bool bWaiting); \
	virtual bool ServerSetSpectatorWaiting_Validate(bool ); \
	virtual void ServerSetSpectatorWaiting_Implementation(bool bWaiting); \
 \
	DECLARE_FUNCTION(execGetFocalLocation); \
	DECLARE_FUNCTION(execGetSpectatorPawn); \
	DECLARE_FUNCTION(execOnServerStartedVisualLogger); \
	DECLARE_FUNCTION(execSetCinematicMode); \
	DECLARE_FUNCTION(execCanRestartPlayer); \
	DECLARE_FUNCTION(execClearAudioListenerAttenuationOverride); \
	DECLARE_FUNCTION(execSetAudioListenerAttenuationOverride); \
	DECLARE_FUNCTION(execClearAudioListenerOverride); \
	DECLARE_FUNCTION(execSetAudioListenerOverride); \
	DECLARE_FUNCTION(execSetViewTargetWithBlend); \
	DECLARE_FUNCTION(execCamera); \
	DECLARE_FUNCTION(execSetVirtualJoystickVisibility); \
	DECLARE_FUNCTION(execActivateTouchInterface); \
	DECLARE_FUNCTION(execGetInputAnalogStickState); \
	DECLARE_FUNCTION(execGetInputMouseDelta); \
	DECLARE_FUNCTION(execGetInputKeyTimeDown); \
	DECLARE_FUNCTION(execGetMousePosition); \
	DECLARE_FUNCTION(execGetInputMotionState); \
	DECLARE_FUNCTION(execGetInputTouchState); \
	DECLARE_FUNCTION(execGetInputVectorKeyState); \
	DECLARE_FUNCTION(execGetInputAnalogKeyState); \
	DECLARE_FUNCTION(execWasInputKeyJustReleased); \
	DECLARE_FUNCTION(execWasInputKeyJustPressed); \
	DECLARE_FUNCTION(execIsInputKeyDown); \
	DECLARE_FUNCTION(execAddRollInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execServerToggleAILogging); \
	DECLARE_FUNCTION(execClientTeamMessage); \
	DECLARE_FUNCTION(execServerViewSelf); \
	DECLARE_FUNCTION(execServerViewPrevPlayer); \
	DECLARE_FUNCTION(execServerViewNextPlayer); \
	DECLARE_FUNCTION(execServerVerifyViewTarget); \
	DECLARE_FUNCTION(execServerUpdateMultipleLevelsVisibility); \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility); \
	DECLARE_FUNCTION(execServerUpdateCamera); \
	DECLARE_FUNCTION(execServerShortTimeout); \
	DECLARE_FUNCTION(execServerCheckClientPossessionReliable); \
	DECLARE_FUNCTION(execServerCheckClientPossession); \
	DECLARE_FUNCTION(execServerSetSpectatorLocation); \
	DECLARE_FUNCTION(execServerRestartPlayer); \
	DECLARE_FUNCTION(execServerPause); \
	DECLARE_FUNCTION(execServerNotifyLoadedWorld); \
	DECLARE_FUNCTION(execServerChangeName); \
	DECLARE_FUNCTION(execServerCamera); \
	DECLARE_FUNCTION(execServerAcknowledgePossession); \
	DECLARE_FUNCTION(execClientReceiveLocalizedMessage); \
	DECLARE_FUNCTION(execClientRetryClientRestart); \
	DECLARE_FUNCTION(execClientEndOnlineSession); \
	DECLARE_FUNCTION(execClientStartOnlineSession); \
	DECLARE_FUNCTION(execClientWasKicked); \
	DECLARE_FUNCTION(execClientUpdateMultipleLevelsStreamingStatus); \
	DECLARE_FUNCTION(execClientUpdateLevelStreamingStatus); \
	DECLARE_FUNCTION(execClientTravelInternal); \
	DECLARE_FUNCTION(execClientTravel); \
	DECLARE_FUNCTION(execResetControllerLightColor); \
	DECLARE_FUNCTION(execSetControllerLightColor); \
	DECLARE_FUNCTION(execSetDisableHaptics); \
	DECLARE_FUNCTION(execSetHapticsByValue); \
	DECLARE_FUNCTION(execStopHapticEffect); \
	DECLARE_FUNCTION(execPlayHapticEffect); \
	DECLARE_FUNCTION(execTestServerLevelVisibilityChange); \
	DECLARE_FUNCTION(execPlayDynamicForceFeedback); \
	DECLARE_FUNCTION(execClientStopForceFeedback); \
	DECLARE_FUNCTION(execClientPlayForceFeedback_Internal); \
	DECLARE_FUNCTION(execK2_ClientPlayForceFeedback); \
	DECLARE_FUNCTION(execClientStopCameraShakesFromSource); \
	DECLARE_FUNCTION(execClientStopCameraShake); \
	DECLARE_FUNCTION(execClientStopCameraAnim); \
	DECLARE_FUNCTION(execClientClearCameraLensEffects); \
	DECLARE_FUNCTION(execClientSpawnCameraLensEffect); \
	DECLARE_FUNCTION(execClientSetViewTarget); \
	DECLARE_FUNCTION(execSetMouseCursorWidget); \
	DECLARE_FUNCTION(execGetHUD); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execClientSetHUD); \
	DECLARE_FUNCTION(execClientSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execClientSetCinematicMode); \
	DECLARE_FUNCTION(execClientSetCameraMode); \
	DECLARE_FUNCTION(execClientSetCameraFade); \
	DECLARE_FUNCTION(execClientSetBlockOnAsyncLoading); \
	DECLARE_FUNCTION(execClientRestart); \
	DECLARE_FUNCTION(execClientReset); \
	DECLARE_FUNCTION(execClientPrestreamTextures); \
	DECLARE_FUNCTION(execClientPrepareMapChange); \
	DECLARE_FUNCTION(execClientPlaySoundAtLocation); \
	DECLARE_FUNCTION(execClientPlaySound); \
	DECLARE_FUNCTION(execClientPlayCameraShakeFromSource); \
	DECLARE_FUNCTION(execClientPlayCameraShake); \
	DECLARE_FUNCTION(execClientPlayCameraAnim); \
	DECLARE_FUNCTION(execClientMessage); \
	DECLARE_FUNCTION(execClientIgnoreMoveInput); \
	DECLARE_FUNCTION(execClientIgnoreLookInput); \
	DECLARE_FUNCTION(execClientGotoState); \
	DECLARE_FUNCTION(execClientGameEnded); \
	DECLARE_FUNCTION(execClientForceGarbageCollection); \
	DECLARE_FUNCTION(execClientFlushLevelStreaming); \
	DECLARE_FUNCTION(execClientCommitMapChange); \
	DECLARE_FUNCTION(execClientCapBandwidth); \
	DECLARE_FUNCTION(execClientCancelPendingMapChange); \
	DECLARE_FUNCTION(execClientAddTextureStreamingLoc); \
	DECLARE_FUNCTION(execSendToConsole); \
	DECLARE_FUNCTION(execConsoleKey); \
	DECLARE_FUNCTION(execClientUnmutePlayer); \
	DECLARE_FUNCTION(execClientMutePlayer); \
	DECLARE_FUNCTION(execServerUnmutePlayer); \
	DECLARE_FUNCTION(execServerMutePlayer); \
	DECLARE_FUNCTION(execClientVoiceHandshakeComplete); \
	DECLARE_FUNCTION(execToggleSpeaking); \
	DECLARE_FUNCTION(execClientEnableNetworkVoice); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execSetMouseLocation); \
	DECLARE_FUNCTION(execProjectWorldLocationToScreen); \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld); \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld); \
	DECLARE_FUNCTION(execGetHitResultUnderFingerForObjects); \
	DECLARE_FUNCTION(execGetHitResultUnderFingerByChannel); \
	DECLARE_FUNCTION(execGetHitResultUnderFinger); \
	DECLARE_FUNCTION(execGetHitResultUnderCursorForObjects); \
	DECLARE_FUNCTION(execGetHitResultUnderCursorByChannel); \
	DECLARE_FUNCTION(execGetHitResultUnderCursor); \
	DECLARE_FUNCTION(execSwitchLevel); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execClientRepObjRef); \
	DECLARE_FUNCTION(execClientReturnToMainMenuWithTextReason); \
	DECLARE_FUNCTION(execClientReturnToMainMenu); \
	DECLARE_FUNCTION(execServerExec); \
	DECLARE_FUNCTION(execServerExecRPC); \
	DECLARE_FUNCTION(execLocalTravel); \
	DECLARE_FUNCTION(execRestartLevel); \
	DECLARE_FUNCTION(execFOV); \
	DECLARE_FUNCTION(execEnableCheats); \
	DECLARE_FUNCTION(execClientSetSpectatorWaiting); \
	DECLARE_FUNCTION(execServerSetSpectatorWaiting);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnServerStartedVisualLogger_Implementation(bool bIsLogging); \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
	virtual void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime); \
	virtual bool ServerViewSelf_Validate(FViewTargetTransitionParams ); \
	virtual void ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams); \
	virtual bool ServerViewPrevPlayer_Validate(); \
	virtual void ServerViewPrevPlayer_Implementation(); \
	virtual bool ServerViewNextPlayer_Validate(); \
	virtual void ServerViewNextPlayer_Implementation(); \
	virtual bool ServerVerifyViewTarget_Validate(); \
	virtual void ServerVerifyViewTarget_Implementation(); \
	 bool ServerUpdateMultipleLevelsVisibility_Validate(TArray<FUpdateLevelVisibilityLevelInfo> const& ); \
	void ServerUpdateMultipleLevelsVisibility_Implementation(TArray<FUpdateLevelVisibilityLevelInfo> const& LevelVisibilities); \
	 bool ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo const& ); \
	void ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo const& LevelVisibility); \
	virtual bool ServerUpdateCamera_Validate(FVector_NetQuantize , int32 ); \
	virtual void ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw); \
	virtual bool ServerShortTimeout_Validate(); \
	virtual void ServerShortTimeout_Implementation(); \
	virtual bool ServerCheckClientPossessionReliable_Validate(); \
	virtual void ServerCheckClientPossessionReliable_Implementation(); \
	virtual bool ServerCheckClientPossession_Validate(); \
	virtual void ServerCheckClientPossession_Implementation(); \
	virtual bool ServerSetSpectatorLocation_Validate(FVector , FRotator ); \
	virtual void ServerSetSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot); \
	virtual bool ServerRestartPlayer_Validate(); \
	virtual void ServerRestartPlayer_Implementation(); \
	virtual bool ServerPause_Validate(); \
	virtual void ServerPause_Implementation(); \
	 bool ServerNotifyLoadedWorld_Validate(FName ); \
	void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName); \
	virtual bool ServerChangeName_Validate(const FString& ); \
	virtual void ServerChangeName_Implementation(const FString& S); \
	virtual bool ServerCamera_Validate(FName ); \
	virtual void ServerCamera_Implementation(FName NewMode); \
	virtual bool ServerAcknowledgePossession_Validate(APawn* ); \
	virtual void ServerAcknowledgePossession_Implementation(APawn* P); \
	virtual void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>  Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject); \
	virtual void ClientRetryClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientEndOnlineSession_Implementation(); \
	virtual void ClientStartOnlineSession_Implementation(); \
	virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	virtual void ClientUpdateMultipleLevelsStreamingStatus_Implementation(TArray<FUpdateLevelStreamingLevelStatus> const& LevelStatuses); \
	virtual void ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex); \
	virtual void ClientTravelInternal_Implementation(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid); \
	virtual void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag); \
	virtual void ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params); \
	virtual void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, bool bImmediately); \
	virtual void ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop); \
	virtual void ClientClearCameraLensEffects_Implementation(); \
	virtual void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass); \
	virtual void ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams TransitionParams); \
	virtual void ClientSetHUD_Implementation(TSubclassOf<AHUD>  NewHUDClass); \
	virtual void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups); \
	virtual void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); \
	virtual void ClientSetCameraMode_Implementation(FName NewCamMode); \
	virtual void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio); \
	virtual void ClientSetBlockOnAsyncLoading_Implementation(); \
	virtual void ClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientReset_Implementation(); \
	virtual void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups); \
	virtual void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast); \
	virtual void ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlayCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot); \
	virtual void ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraAnimPlaySpace::Type Space, FRotator CustomPlaySpace); \
	virtual void ClientMessage_Implementation(const FString& S, FName Type, float MsgLifeTime); \
	virtual void ClientIgnoreMoveInput_Implementation(bool bIgnore); \
	virtual void ClientIgnoreLookInput_Implementation(bool bIgnore); \
	virtual void ClientGotoState_Implementation(FName NewState); \
	virtual void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner); \
	virtual void ClientForceGarbageCollection_Implementation(); \
	void ClientFlushLevelStreaming_Implementation(); \
	virtual void ClientCommitMapChange_Implementation(); \
	virtual void ClientCapBandwidth_Implementation(int32 Cap); \
	virtual void ClientCancelPendingMapChange_Implementation(); \
	void ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation); \
	virtual void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerMutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientVoiceHandshakeComplete_Implementation(); \
	virtual void ClientEnableNetworkVoice_Implementation(bool bEnable); \
	virtual void ClientRepObjRef_Implementation(UObject* Object); \
	virtual void ClientReturnToMainMenuWithTextReason_Implementation(FText const& ReturnReason); \
	virtual void ClientReturnToMainMenu_Implementation(const FString& ReturnReason); \
	virtual bool ServerExecRPC_Validate(const FString& ); \
	virtual void ServerExecRPC_Implementation(const FString& Msg); \
	virtual void ClientSetSpectatorWaiting_Implementation(bool bWaiting); \
	virtual bool ServerSetSpectatorWaiting_Validate(bool ); \
	virtual void ServerSetSpectatorWaiting_Implementation(bool bWaiting); \
 \
	DECLARE_FUNCTION(execGetFocalLocation); \
	DECLARE_FUNCTION(execGetSpectatorPawn); \
	DECLARE_FUNCTION(execOnServerStartedVisualLogger); \
	DECLARE_FUNCTION(execSetCinematicMode); \
	DECLARE_FUNCTION(execCanRestartPlayer); \
	DECLARE_FUNCTION(execClearAudioListenerAttenuationOverride); \
	DECLARE_FUNCTION(execSetAudioListenerAttenuationOverride); \
	DECLARE_FUNCTION(execClearAudioListenerOverride); \
	DECLARE_FUNCTION(execSetAudioListenerOverride); \
	DECLARE_FUNCTION(execSetViewTargetWithBlend); \
	DECLARE_FUNCTION(execCamera); \
	DECLARE_FUNCTION(execSetVirtualJoystickVisibility); \
	DECLARE_FUNCTION(execActivateTouchInterface); \
	DECLARE_FUNCTION(execGetInputAnalogStickState); \
	DECLARE_FUNCTION(execGetInputMouseDelta); \
	DECLARE_FUNCTION(execGetInputKeyTimeDown); \
	DECLARE_FUNCTION(execGetMousePosition); \
	DECLARE_FUNCTION(execGetInputMotionState); \
	DECLARE_FUNCTION(execGetInputTouchState); \
	DECLARE_FUNCTION(execGetInputVectorKeyState); \
	DECLARE_FUNCTION(execGetInputAnalogKeyState); \
	DECLARE_FUNCTION(execWasInputKeyJustReleased); \
	DECLARE_FUNCTION(execWasInputKeyJustPressed); \
	DECLARE_FUNCTION(execIsInputKeyDown); \
	DECLARE_FUNCTION(execAddRollInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execServerToggleAILogging); \
	DECLARE_FUNCTION(execClientTeamMessage); \
	DECLARE_FUNCTION(execServerViewSelf); \
	DECLARE_FUNCTION(execServerViewPrevPlayer); \
	DECLARE_FUNCTION(execServerViewNextPlayer); \
	DECLARE_FUNCTION(execServerVerifyViewTarget); \
	DECLARE_FUNCTION(execServerUpdateMultipleLevelsVisibility); \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility); \
	DECLARE_FUNCTION(execServerUpdateCamera); \
	DECLARE_FUNCTION(execServerShortTimeout); \
	DECLARE_FUNCTION(execServerCheckClientPossessionReliable); \
	DECLARE_FUNCTION(execServerCheckClientPossession); \
	DECLARE_FUNCTION(execServerSetSpectatorLocation); \
	DECLARE_FUNCTION(execServerRestartPlayer); \
	DECLARE_FUNCTION(execServerPause); \
	DECLARE_FUNCTION(execServerNotifyLoadedWorld); \
	DECLARE_FUNCTION(execServerChangeName); \
	DECLARE_FUNCTION(execServerCamera); \
	DECLARE_FUNCTION(execServerAcknowledgePossession); \
	DECLARE_FUNCTION(execClientReceiveLocalizedMessage); \
	DECLARE_FUNCTION(execClientRetryClientRestart); \
	DECLARE_FUNCTION(execClientEndOnlineSession); \
	DECLARE_FUNCTION(execClientStartOnlineSession); \
	DECLARE_FUNCTION(execClientWasKicked); \
	DECLARE_FUNCTION(execClientUpdateMultipleLevelsStreamingStatus); \
	DECLARE_FUNCTION(execClientUpdateLevelStreamingStatus); \
	DECLARE_FUNCTION(execClientTravelInternal); \
	DECLARE_FUNCTION(execClientTravel); \
	DECLARE_FUNCTION(execResetControllerLightColor); \
	DECLARE_FUNCTION(execSetControllerLightColor); \
	DECLARE_FUNCTION(execSetDisableHaptics); \
	DECLARE_FUNCTION(execSetHapticsByValue); \
	DECLARE_FUNCTION(execStopHapticEffect); \
	DECLARE_FUNCTION(execPlayHapticEffect); \
	DECLARE_FUNCTION(execTestServerLevelVisibilityChange); \
	DECLARE_FUNCTION(execPlayDynamicForceFeedback); \
	DECLARE_FUNCTION(execClientStopForceFeedback); \
	DECLARE_FUNCTION(execClientPlayForceFeedback_Internal); \
	DECLARE_FUNCTION(execK2_ClientPlayForceFeedback); \
	DECLARE_FUNCTION(execClientStopCameraShakesFromSource); \
	DECLARE_FUNCTION(execClientStopCameraShake); \
	DECLARE_FUNCTION(execClientStopCameraAnim); \
	DECLARE_FUNCTION(execClientClearCameraLensEffects); \
	DECLARE_FUNCTION(execClientSpawnCameraLensEffect); \
	DECLARE_FUNCTION(execClientSetViewTarget); \
	DECLARE_FUNCTION(execSetMouseCursorWidget); \
	DECLARE_FUNCTION(execGetHUD); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execClientSetHUD); \
	DECLARE_FUNCTION(execClientSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execClientSetCinematicMode); \
	DECLARE_FUNCTION(execClientSetCameraMode); \
	DECLARE_FUNCTION(execClientSetCameraFade); \
	DECLARE_FUNCTION(execClientSetBlockOnAsyncLoading); \
	DECLARE_FUNCTION(execClientRestart); \
	DECLARE_FUNCTION(execClientReset); \
	DECLARE_FUNCTION(execClientPrestreamTextures); \
	DECLARE_FUNCTION(execClientPrepareMapChange); \
	DECLARE_FUNCTION(execClientPlaySoundAtLocation); \
	DECLARE_FUNCTION(execClientPlaySound); \
	DECLARE_FUNCTION(execClientPlayCameraShakeFromSource); \
	DECLARE_FUNCTION(execClientPlayCameraShake); \
	DECLARE_FUNCTION(execClientPlayCameraAnim); \
	DECLARE_FUNCTION(execClientMessage); \
	DECLARE_FUNCTION(execClientIgnoreMoveInput); \
	DECLARE_FUNCTION(execClientIgnoreLookInput); \
	DECLARE_FUNCTION(execClientGotoState); \
	DECLARE_FUNCTION(execClientGameEnded); \
	DECLARE_FUNCTION(execClientForceGarbageCollection); \
	DECLARE_FUNCTION(execClientFlushLevelStreaming); \
	DECLARE_FUNCTION(execClientCommitMapChange); \
	DECLARE_FUNCTION(execClientCapBandwidth); \
	DECLARE_FUNCTION(execClientCancelPendingMapChange); \
	DECLARE_FUNCTION(execClientAddTextureStreamingLoc); \
	DECLARE_FUNCTION(execSendToConsole); \
	DECLARE_FUNCTION(execConsoleKey); \
	DECLARE_FUNCTION(execClientUnmutePlayer); \
	DECLARE_FUNCTION(execClientMutePlayer); \
	DECLARE_FUNCTION(execServerUnmutePlayer); \
	DECLARE_FUNCTION(execServerMutePlayer); \
	DECLARE_FUNCTION(execClientVoiceHandshakeComplete); \
	DECLARE_FUNCTION(execToggleSpeaking); \
	DECLARE_FUNCTION(execClientEnableNetworkVoice); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execSetMouseLocation); \
	DECLARE_FUNCTION(execProjectWorldLocationToScreen); \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld); \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld); \
	DECLARE_FUNCTION(execGetHitResultUnderFingerForObjects); \
	DECLARE_FUNCTION(execGetHitResultUnderFingerByChannel); \
	DECLARE_FUNCTION(execGetHitResultUnderFinger); \
	DECLARE_FUNCTION(execGetHitResultUnderCursorForObjects); \
	DECLARE_FUNCTION(execGetHitResultUnderCursorByChannel); \
	DECLARE_FUNCTION(execGetHitResultUnderCursor); \
	DECLARE_FUNCTION(execSwitchLevel); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execClientRepObjRef); \
	DECLARE_FUNCTION(execClientReturnToMainMenuWithTextReason); \
	DECLARE_FUNCTION(execClientReturnToMainMenu); \
	DECLARE_FUNCTION(execServerExec); \
	DECLARE_FUNCTION(execServerExecRPC); \
	DECLARE_FUNCTION(execLocalTravel); \
	DECLARE_FUNCTION(execRestartLevel); \
	DECLARE_FUNCTION(execFOV); \
	DECLARE_FUNCTION(execEnableCheats); \
	DECLARE_FUNCTION(execClientSetSpectatorWaiting); \
	DECLARE_FUNCTION(execServerSetSpectatorWaiting);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_EVENT_PARMS \
	struct PlayerController_eventClientAddTextureStreamingLoc_Parms \
	{ \
		FVector InLoc; \
		float Duration; \
		bool bOverrideLocation; \
	}; \
	struct PlayerController_eventClientCapBandwidth_Parms \
	{ \
		int32 Cap; \
	}; \
	struct PlayerController_eventClientEnableNetworkVoice_Parms \
	{ \
		bool bEnable; \
	}; \
	struct PlayerController_eventClientGameEnded_Parms \
	{ \
		AActor* EndGameFocus; \
		bool bIsWinner; \
	}; \
	struct PlayerController_eventClientGotoState_Parms \
	{ \
		FName NewState; \
	}; \
	struct PlayerController_eventClientIgnoreLookInput_Parms \
	{ \
		bool bIgnore; \
	}; \
	struct PlayerController_eventClientIgnoreMoveInput_Parms \
	{ \
		bool bIgnore; \
	}; \
	struct PlayerController_eventClientMessage_Parms \
	{ \
		FString S; \
		FName Type; \
		float MsgLifeTime; \
	}; \
	struct PlayerController_eventClientMutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventClientPlayCameraAnim_Parms \
	{ \
		UCameraAnim* AnimToPlay; \
		float Scale; \
		float Rate; \
		float BlendInTime; \
		float BlendOutTime; \
		bool bLoop; \
		bool bRandomStartTime; \
		TEnumAsByte<ECameraAnimPlaySpace::Type> Space; \
		FRotator CustomPlaySpace; \
	}; \
	struct PlayerController_eventClientPlayCameraShake_Parms \
	{ \
		TSubclassOf<UCameraShake>  Shake; \
		float Scale; \
		TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace; \
		FRotator UserPlaySpaceRot; \
	}; \
	struct PlayerController_eventClientPlayForceFeedback_Internal_Parms \
	{ \
		UForceFeedbackEffect* ForceFeedbackEffect; \
		FForceFeedbackParameters Params; \
	}; \
	struct PlayerController_eventClientPlaySound_Parms \
	{ \
		USoundBase* Sound; \
		float VolumeMultiplier; \
		float PitchMultiplier; \
	}; \
	struct PlayerController_eventClientPlaySoundAtLocation_Parms \
	{ \
		USoundBase* Sound; \
		FVector Location; \
		float VolumeMultiplier; \
		float PitchMultiplier; \
	}; \
	struct PlayerController_eventClientPrepareMapChange_Parms \
	{ \
		FName LevelName; \
		bool bFirst; \
		bool bLast; \
	}; \
	struct PlayerController_eventClientPrestreamTextures_Parms \
	{ \
		AActor* ForcedActor; \
		float ForceDuration; \
		bool bEnableStreaming; \
		int32 CinematicTextureGroups; \
	}; \
	struct PlayerController_eventClientReceiveLocalizedMessage_Parms \
	{ \
		TSubclassOf<ULocalMessage>  Message; \
		int32 Switch; \
		APlayerState* RelatedPlayerState_1; \
		APlayerState* RelatedPlayerState_2; \
		UObject* OptionalObject; \
	}; \
	struct PlayerController_eventClientRepObjRef_Parms \
	{ \
		UObject* Object; \
	}; \
	struct PlayerController_eventClientRestart_Parms \
	{ \
		APawn* NewPawn; \
	}; \
	struct PlayerController_eventClientRetryClientRestart_Parms \
	{ \
		APawn* NewPawn; \
	}; \
	struct PlayerController_eventClientReturnToMainMenu_Parms \
	{ \
		FString ReturnReason; \
	}; \
	struct PlayerController_eventClientReturnToMainMenuWithTextReason_Parms \
	{ \
		FText ReturnReason; \
	}; \
	struct PlayerController_eventClientSetCameraFade_Parms \
	{ \
		bool bEnableFading; \
		FColor FadeColor; \
		FVector2D FadeAlpha; \
		float FadeTime; \
		bool bFadeAudio; \
	}; \
	struct PlayerController_eventClientSetCameraMode_Parms \
	{ \
		FName NewCamMode; \
	}; \
	struct PlayerController_eventClientSetCinematicMode_Parms \
	{ \
		bool bInCinematicMode; \
		bool bAffectsMovement; \
		bool bAffectsTurning; \
		bool bAffectsHUD; \
	}; \
	struct PlayerController_eventClientSetForceMipLevelsToBeResident_Parms \
	{ \
		UMaterialInterface* Material; \
		float ForceDuration; \
		int32 CinematicTextureGroups; \
	}; \
	struct PlayerController_eventClientSetHUD_Parms \
	{ \
		TSubclassOf<AHUD>  NewHUDClass; \
	}; \
	struct PlayerController_eventClientSetSpectatorWaiting_Parms \
	{ \
		bool bWaiting; \
	}; \
	struct PlayerController_eventClientSetViewTarget_Parms \
	{ \
		AActor* A; \
		FViewTargetTransitionParams TransitionParams; \
	}; \
	struct PlayerController_eventClientSpawnCameraLensEffect_Parms \
	{ \
		TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass; \
	}; \
	struct PlayerController_eventClientStopCameraAnim_Parms \
	{ \
		UCameraAnim* AnimToStop; \
	}; \
	struct PlayerController_eventClientStopCameraShake_Parms \
	{ \
		TSubclassOf<UCameraShake>  Shake; \
		bool bImmediately; \
	}; \
	struct PlayerController_eventClientStopForceFeedback_Parms \
	{ \
		UForceFeedbackEffect* ForceFeedbackEffect; \
		FName Tag; \
	}; \
	struct PlayerController_eventClientTeamMessage_Parms \
	{ \
		APlayerState* SenderPlayerState; \
		FString S; \
		FName Type; \
		float MsgLifeTime; \
	}; \
	struct PlayerController_eventClientTravelInternal_Parms \
	{ \
		FString URL; \
		TEnumAsByte<ETravelType> TravelType; \
		bool bSeamless; \
		FGuid MapPackageGuid; \
	}; \
	struct PlayerController_eventClientUnmutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventClientUpdateLevelStreamingStatus_Parms \
	{ \
		FName PackageName; \
		bool bNewShouldBeLoaded; \
		bool bNewShouldBeVisible; \
		bool bNewShouldBlockOnLoad; \
		int32 LODIndex; \
	}; \
	struct PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms \
	{ \
		TArray<FUpdateLevelStreamingLevelStatus> LevelStatuses; \
	}; \
	struct PlayerController_eventClientWasKicked_Parms \
	{ \
		FText KickReason; \
	}; \
	struct PlayerController_eventOnServerStartedVisualLogger_Parms \
	{ \
		bool bIsLogging; \
	}; \
	struct PlayerController_eventServerAcknowledgePossession_Parms \
	{ \
		APawn* P; \
	}; \
	struct PlayerController_eventServerCamera_Parms \
	{ \
		FName NewMode; \
	}; \
	struct PlayerController_eventServerChangeName_Parms \
	{ \
		FString S; \
	}; \
	struct PlayerController_eventServerExecRPC_Parms \
	{ \
		FString Msg; \
	}; \
	struct PlayerController_eventServerMutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventServerNotifyLoadedWorld_Parms \
	{ \
		FName WorldPackageName; \
	}; \
	struct PlayerController_eventServerSetSpectatorLocation_Parms \
	{ \
		FVector NewLoc; \
		FRotator NewRot; \
	}; \
	struct PlayerController_eventServerSetSpectatorWaiting_Parms \
	{ \
		bool bWaiting; \
	}; \
	struct PlayerController_eventServerUnmutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventServerUpdateCamera_Parms \
	{ \
		FVector_NetQuantize CamLoc; \
		int32 CamPitchAndYaw; \
	}; \
	struct PlayerController_eventServerUpdateLevelVisibility_Parms \
	{ \
		FUpdateLevelVisibilityLevelInfo LevelVisibility; \
	}; \
	struct PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms \
	{ \
		TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities; \
	}; \
	struct PlayerController_eventServerViewSelf_Parms \
	{ \
		FViewTargetTransitionParams TransitionParams; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController(); \
	friend struct Z_Construct_UClass_APlayerController_Statics; \
public: \
	DECLARE_CLASS(APlayerController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APlayerController, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetViewRotation=NETFIELD_REP_START, \
		SpawnLocation, \
		NETFIELD_REP_END=SpawnLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerController(); \
	friend struct Z_Construct_UClass_APlayerController_Statics; \
public: \
	DECLARE_CLASS(APlayerController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APlayerController, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetViewRotation=NETFIELD_REP_START, \
		SpawnLocation, \
		NETFIELD_REP_END=SpawnLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController(APlayerController&&); \
	NO_API APlayerController(const APlayerController&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController(APlayerController&&); \
	NO_API APlayerController(const APlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InactiveStateInputComponent() { return STRUCT_OFFSET(APlayerController, InactiveStateInputComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentTouchInterface() { return STRUCT_OFFSET(APlayerController, CurrentTouchInterface); } \
	FORCEINLINE static uint32 __PPO__SpectatorPawn() { return STRUCT_OFFSET(APlayerController, SpectatorPawn); } \
	FORCEINLINE static uint32 __PPO__bIsLocalPlayerController() { return STRUCT_OFFSET(APlayerController, bIsLocalPlayerController); } \
	FORCEINLINE static uint32 __PPO__SpawnLocation() { return STRUCT_OFFSET(APlayerController, SpawnLocation); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_268_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h


#define FOREACH_ENUM_EDYNAMICFORCEFEEDBACKACTION(op) \
	op(EDynamicForceFeedbackAction::Start) \
	op(EDynamicForceFeedbackAction::Update) \
	op(EDynamicForceFeedbackAction::Stop) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
