// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameTime;
enum class EUpdatePositionMethod : uint8;
class UObject;
struct FMovieSceneObjectBindingID;
struct FQualifiedFrameTime;
struct FFrameRate;
#ifdef MOVIESCENE_MovieSceneSequencePlayer_generated_h
#error "MovieSceneSequencePlayer.generated.h already included, missing '#pragma once' in MovieSceneSequencePlayer.h"
#endif
#define MOVIESCENE_MovieSceneSequencePlayer_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequencePlaybackSettings>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceReplProperties>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceLoopCount>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_16_DELEGATE \
static inline void FOnMovieSceneSequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMovieSceneSequencePlayerEvent) \
{ \
	OnMovieSceneSequencePlayerEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_RPC_WRAPPERS \
	virtual void RPC_OnStopEvent_Implementation(FFrameTime StoppedTime); \
	virtual void RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime); \
 \
	DECLARE_FUNCTION(execRPC_OnStopEvent); \
	DECLARE_FUNCTION(execRPC_ExplicitServerUpdateEvent); \
	DECLARE_FUNCTION(execGetObjectBindings); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetDisableCameraCuts); \
	DECLARE_FUNCTION(execSetDisableCameraCuts); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execJumpToMarkedFrame); \
	DECLARE_FUNCTION(execScrubToMarkedFrame); \
	DECLARE_FUNCTION(execPlayToMarkedFrame); \
	DECLARE_FUNCTION(execJumpToSeconds); \
	DECLARE_FUNCTION(execScrubToSeconds); \
	DECLARE_FUNCTION(execPlayToSeconds); \
	DECLARE_FUNCTION(execJumpToFrame); \
	DECLARE_FUNCTION(execScrubToFrame); \
	DECLARE_FUNCTION(execPlayToFrame); \
	DECLARE_FUNCTION(execSetTimeRange); \
	DECLARE_FUNCTION(execSetFrameRange); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetFrameDuration); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execJumpToPosition); \
	DECLARE_FUNCTION(execSetPlaybackRange); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execGetPlaybackEnd); \
	DECLARE_FUNCTION(execGetPlaybackStart); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execGoToEndAndStop); \
	DECLARE_FUNCTION(execStopAtCurrentTime); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execScrub); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayLooping); \
	DECLARE_FUNCTION(execChangePlaybackDirection); \
	DECLARE_FUNCTION(execPlayReverse); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPC_OnStopEvent_Implementation(FFrameTime StoppedTime); \
	virtual void RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime); \
 \
	DECLARE_FUNCTION(execRPC_OnStopEvent); \
	DECLARE_FUNCTION(execRPC_ExplicitServerUpdateEvent); \
	DECLARE_FUNCTION(execGetObjectBindings); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetDisableCameraCuts); \
	DECLARE_FUNCTION(execSetDisableCameraCuts); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execJumpToMarkedFrame); \
	DECLARE_FUNCTION(execScrubToMarkedFrame); \
	DECLARE_FUNCTION(execPlayToMarkedFrame); \
	DECLARE_FUNCTION(execJumpToSeconds); \
	DECLARE_FUNCTION(execScrubToSeconds); \
	DECLARE_FUNCTION(execPlayToSeconds); \
	DECLARE_FUNCTION(execJumpToFrame); \
	DECLARE_FUNCTION(execScrubToFrame); \
	DECLARE_FUNCTION(execPlayToFrame); \
	DECLARE_FUNCTION(execSetTimeRange); \
	DECLARE_FUNCTION(execSetFrameRange); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetFrameDuration); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execJumpToPosition); \
	DECLARE_FUNCTION(execSetPlaybackRange); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execGetPlaybackEnd); \
	DECLARE_FUNCTION(execGetPlaybackStart); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execGoToEndAndStop); \
	DECLARE_FUNCTION(execStopAtCurrentTime); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execScrub); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayLooping); \
	DECLARE_FUNCTION(execChangePlaybackDirection); \
	DECLARE_FUNCTION(execPlayReverse); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_EVENT_PARMS \
	struct MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms \
	{ \
		EUpdatePositionMethod Method; \
		FFrameTime RelevantTime; \
	}; \
	struct MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms \
	{ \
		FFrameTime StoppedTime; \
	};


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReversePlayback=NETFIELD_REP_START, \
		StartTime, \
		DurationFrames, \
		PlaybackSettings, \
		NetSyncProps, \
		NETFIELD_REP_END=NetSyncProps	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMovieSceneSequencePlayer) \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReversePlayback=NETFIELD_REP_START, \
		StartTime, \
		DurationFrames, \
		PlaybackSettings, \
		NetSyncProps, \
		NETFIELD_REP_END=NetSyncProps	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMovieSceneSequencePlayer) \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&); \
	NO_API UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&); \
	NO_API UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, Status); } \
	FORCEINLINE static uint32 __PPO__Sequence() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence); } \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime); } \
	FORCEINLINE static uint32 __PPO__DurationFrames() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationFrames); } \
	FORCEINLINE static uint32 __PPO__CurrentNumLoops() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops); } \
	FORCEINLINE static uint32 __PPO__PlaybackSettings() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings); } \
	FORCEINLINE static uint32 __PPO__RootTemplateInstance() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, RootTemplateInstance); } \
	FORCEINLINE static uint32 __PPO__NetSyncProps() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, NetSyncProps); } \
	FORCEINLINE static uint32 __PPO__PlaybackClient() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackClient); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_169_PROLOG \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_EVENT_PARMS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h


#define FOREACH_ENUM_EUPDATEPOSITIONMETHOD(op) \
	op(EUpdatePositionMethod::Play) \
	op(EUpdatePositionMethod::Jump) \
	op(EUpdatePositionMethod::Scrub) 

enum class EUpdatePositionMethod : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EUpdatePositionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
