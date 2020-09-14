// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaSoundComponentSpectralData;
enum class EMediaSoundComponentFFTSize : uint8;
class UMediaPlayer;
struct FSoundAttenuationSettings;
#ifdef MEDIAASSETS_MediaSoundComponent_generated_h
#error "MediaSoundComponent.generated.h already included, missing '#pragma once' in MediaSoundComponent.h"
#endif
#define MEDIAASSETS_MediaSoundComponent_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics; \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


template<> MEDIAASSETS_API UScriptStruct* StaticStruct<struct FMediaSoundComponentSpectralData>();

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_SPARSE_DATA
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnvelopeValue); \
	DECLARE_FUNCTION(execSetEnvelopeFollowingsettings); \
	DECLARE_FUNCTION(execSetEnableEnvelopeFollowing); \
	DECLARE_FUNCTION(execGetSpectralData); \
	DECLARE_FUNCTION(execSetSpectralAnalysisSettings); \
	DECLARE_FUNCTION(execSetEnableSpectralAnalysis); \
	DECLARE_FUNCTION(execSetMediaPlayer); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply);


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnvelopeValue); \
	DECLARE_FUNCTION(execSetEnvelopeFollowingsettings); \
	DECLARE_FUNCTION(execSetEnableEnvelopeFollowing); \
	DECLARE_FUNCTION(execGetSpectralData); \
	DECLARE_FUNCTION(execSetSpectralAnalysisSettings); \
	DECLARE_FUNCTION(execSetEnableSpectralAnalysis); \
	DECLARE_FUNCTION(execSetMediaPlayer); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply);


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend struct Z_Construct_UClass_UMediaSoundComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend struct Z_Construct_UClass_UMediaSoundComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_71_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaSoundComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h


#define FOREACH_ENUM_EMEDIASOUNDCOMPONENTFFTSIZE(op) \
	op(EMediaSoundComponentFFTSize::Min_64) \
	op(EMediaSoundComponentFFTSize::Small_256) \
	op(EMediaSoundComponentFFTSize::Medium_512) \
	op(EMediaSoundComponentFFTSize::Large_1024) 

enum class EMediaSoundComponentFFTSize : uint8;
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundComponentFFTSize>();

#define FOREACH_ENUM_EMEDIASOUNDCHANNELS(op) \
	op(EMediaSoundChannels::Mono) \
	op(EMediaSoundChannels::Stereo) \
	op(EMediaSoundChannels::Surround) 

enum class EMediaSoundChannels;
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
