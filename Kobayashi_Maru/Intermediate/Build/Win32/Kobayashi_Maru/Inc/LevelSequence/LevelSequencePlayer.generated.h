// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UObject;
class ULevelSequence;
struct FMovieSceneSequencePlaybackSettings;
class ALevelSequenceActor;
class ULevelSequencePlayer;
#ifdef LEVELSEQUENCE_LevelSequencePlayer_generated_h
#error "LevelSequencePlayer.generated.h already included, missing '#pragma once' in LevelSequencePlayer.h"
#endif
#define LEVELSEQUENCE_LevelSequencePlayer_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceCameraSettings>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequencePlayerSnapshot>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceSnapshotSettings>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_29_DELEGATE \
struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms \
{ \
	UCameraComponent* CameraComponent; \
}; \
static inline void FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLevelSequencePlayerCameraCutEvent, UCameraComponent* CameraComponent) \
{ \
	_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms Parms; \
	Parms.CameraComponent=CameraComponent; \
	OnLevelSequencePlayerCameraCutEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveCameraComponent); \
	DECLARE_FUNCTION(execCreateLevelSequencePlayer);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveCameraComponent); \
	DECLARE_FUNCTION(execCreateLevelSequencePlayer);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequencePlayer(); \
	friend struct Z_Construct_UClass_ULevelSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequencePlayer)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequencePlayer(); \
	friend struct Z_Construct_UClass_ULevelSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequencePlayer)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequencePlayer(ULevelSequencePlayer&&); \
	NO_API ULevelSequencePlayer(const ULevelSequencePlayer&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequencePlayer(ULevelSequencePlayer&&); \
	NO_API ULevelSequencePlayer(const ULevelSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlayer)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_113_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_120_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
