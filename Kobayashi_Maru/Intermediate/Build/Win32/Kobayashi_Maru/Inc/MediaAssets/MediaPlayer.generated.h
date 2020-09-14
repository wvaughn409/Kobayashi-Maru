// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
struct FRotator;
enum class EMediaPlayerTrack : uint8;
class UMediaSource;
class UObject;
struct FLatentActionInfo;
struct FMediaPlayerOptions;
class UMediaPlaylist;
struct FFloatRange;
struct FIntPoint;
#ifdef MEDIAASSETS_MediaPlayer_generated_h
#error "MediaPlayer.generated.h already included, missing '#pragma once' in MediaPlayer.h"
#endif
#define MEDIAASSETS_MediaPlayer_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_36_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms \
{ \
	FString FailedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpenFailed, const FString& FailedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms Parms; \
	Parms.FailedUrl=FailedUrl; \
	OnMediaPlayerMediaOpenFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_33_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpened, const FString& OpenedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_30_DELEGATE \
static inline void FOnMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaEvent) \
{ \
	OnMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_SPARSE_DATA
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportsSeeking); \
	DECLARE_FUNCTION(execSupportsScrubbing); \
	DECLARE_FUNCTION(execSupportsRate); \
	DECLARE_FUNCTION(execSetTimeDelay); \
	DECLARE_FUNCTION(execSetViewRotation); \
	DECLARE_FUNCTION(execSetViewField); \
	DECLARE_FUNCTION(execSetVideoTrackFrameRate); \
	DECLARE_FUNCTION(execSetTrackFormat); \
	DECLARE_FUNCTION(execSetNativeVolume); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetMediaOptions); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetDesiredPlayerName); \
	DECLARE_FUNCTION(execSetBlockOnTime); \
	DECLARE_FUNCTION(execSelectTrack); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execReopen); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execPlayAndSeek); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execOpenUrl); \
	DECLARE_FUNCTION(execOpenSourceLatent); \
	DECLARE_FUNCTION(execOpenSourceWithOptions); \
	DECLARE_FUNCTION(execOpenSource); \
	DECLARE_FUNCTION(execOpenPlaylistIndex); \
	DECLARE_FUNCTION(execOpenPlaylist); \
	DECLARE_FUNCTION(execOpenFile); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsConnecting); \
	DECLARE_FUNCTION(execIsBuffering); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execGetTimeDelay); \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execGetVideoTrackType); \
	DECLARE_FUNCTION(execGetVideoTrackFrameRates); \
	DECLARE_FUNCTION(execGetVideoTrackFrameRate); \
	DECLARE_FUNCTION(execGetVideoTrackDimensions); \
	DECLARE_FUNCTION(execGetVideoTrackAspectRatio); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTrackLanguage); \
	DECLARE_FUNCTION(execGetTrackFormat); \
	DECLARE_FUNCTION(execGetTrackDisplayName); \
	DECLARE_FUNCTION(execGetLastVideoSampleProcessedTime); \
	DECLARE_FUNCTION(execGetLastAudioSampleProcessedTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetSupportedRates); \
	DECLARE_FUNCTION(execGetSelectedTrack); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execGetPlaylist); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetNumTrackFormats); \
	DECLARE_FUNCTION(execGetNumTracks); \
	DECLARE_FUNCTION(execGetMediaName); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDesiredPlayerName); \
	DECLARE_FUNCTION(execGetAudioTrackType); \
	DECLARE_FUNCTION(execGetAudioTrackSampleRate); \
	DECLARE_FUNCTION(execGetAudioTrackChannels); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execCanPlayUrl); \
	DECLARE_FUNCTION(execCanPlaySource); \
	DECLARE_FUNCTION(execCanPause);


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportsSeeking); \
	DECLARE_FUNCTION(execSupportsScrubbing); \
	DECLARE_FUNCTION(execSupportsRate); \
	DECLARE_FUNCTION(execSetTimeDelay); \
	DECLARE_FUNCTION(execSetViewRotation); \
	DECLARE_FUNCTION(execSetViewField); \
	DECLARE_FUNCTION(execSetVideoTrackFrameRate); \
	DECLARE_FUNCTION(execSetTrackFormat); \
	DECLARE_FUNCTION(execSetNativeVolume); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetMediaOptions); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetDesiredPlayerName); \
	DECLARE_FUNCTION(execSetBlockOnTime); \
	DECLARE_FUNCTION(execSelectTrack); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execReopen); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execPlayAndSeek); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execOpenUrl); \
	DECLARE_FUNCTION(execOpenSourceLatent); \
	DECLARE_FUNCTION(execOpenSourceWithOptions); \
	DECLARE_FUNCTION(execOpenSource); \
	DECLARE_FUNCTION(execOpenPlaylistIndex); \
	DECLARE_FUNCTION(execOpenPlaylist); \
	DECLARE_FUNCTION(execOpenFile); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsConnecting); \
	DECLARE_FUNCTION(execIsBuffering); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execGetTimeDelay); \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execGetVideoTrackType); \
	DECLARE_FUNCTION(execGetVideoTrackFrameRates); \
	DECLARE_FUNCTION(execGetVideoTrackFrameRate); \
	DECLARE_FUNCTION(execGetVideoTrackDimensions); \
	DECLARE_FUNCTION(execGetVideoTrackAspectRatio); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTrackLanguage); \
	DECLARE_FUNCTION(execGetTrackFormat); \
	DECLARE_FUNCTION(execGetTrackDisplayName); \
	DECLARE_FUNCTION(execGetLastVideoSampleProcessedTime); \
	DECLARE_FUNCTION(execGetLastAudioSampleProcessedTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetSupportedRates); \
	DECLARE_FUNCTION(execGetSelectedTrack); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execGetPlaylist); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetNumTrackFormats); \
	DECLARE_FUNCTION(execGetNumTracks); \
	DECLARE_FUNCTION(execGetMediaName); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDesiredPlayerName); \
	DECLARE_FUNCTION(execGetAudioTrackType); \
	DECLARE_FUNCTION(execGetAudioTrackSampleRate); \
	DECLARE_FUNCTION(execGetAudioTrackChannels); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execCanPlayUrl); \
	DECLARE_FUNCTION(execCanPlaySource); \
	DECLARE_FUNCTION(execCanPause);


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend struct Z_Construct_UClass_UMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend struct Z_Construct_UClass_UMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Playlist() { return STRUCT_OFFSET(UMediaPlayer, Playlist); } \
	FORCEINLINE static uint32 __PPO__PlaylistIndex() { return STRUCT_OFFSET(UMediaPlayer, PlaylistIndex); } \
	FORCEINLINE static uint32 __PPO__TimeDelay() { return STRUCT_OFFSET(UMediaPlayer, TimeDelay); } \
	FORCEINLINE static uint32 __PPO__HorizontalFieldOfView() { return STRUCT_OFFSET(UMediaPlayer, HorizontalFieldOfView); } \
	FORCEINLINE static uint32 __PPO__VerticalFieldOfView() { return STRUCT_OFFSET(UMediaPlayer, VerticalFieldOfView); } \
	FORCEINLINE static uint32 __PPO__ViewRotation() { return STRUCT_OFFSET(UMediaPlayer, ViewRotation); } \
	FORCEINLINE static uint32 __PPO__PlayerGuid() { return STRUCT_OFFSET(UMediaPlayer, PlayerGuid); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h


#define FOREACH_ENUM_EMEDIAPLAYERTRACK(op) \
	op(EMediaPlayerTrack::Audio) \
	op(EMediaPlayerTrack::Caption) \
	op(EMediaPlayerTrack::Metadata) \
	op(EMediaPlayerTrack::Script) \
	op(EMediaPlayerTrack::Subtitle) \
	op(EMediaPlayerTrack::Text) \
	op(EMediaPlayerTrack::Video) 

enum class EMediaPlayerTrack : uint8;
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaPlayerTrack>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
