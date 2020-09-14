// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioCaptureDeviceInfo;
class UAudioCapture;
#ifdef AUDIOCAPTURE_AudioCapture_generated_h
#error "AudioCapture.generated.h already included, missing '#pragma once' in AudioCapture.h"
#endif
#define AUDIOCAPTURE_AudioCapture_generated_h

#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOCAPTURE_API UScriptStruct* StaticStruct<struct FAudioCaptureDeviceInfo>();

#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_SPARSE_DATA
#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCapturingAudio); \
	DECLARE_FUNCTION(execStopCapturingAudio); \
	DECLARE_FUNCTION(execStartCapturingAudio); \
	DECLARE_FUNCTION(execGetAudioCaptureDeviceInfo);


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCapturingAudio); \
	DECLARE_FUNCTION(execStopCapturingAudio); \
	DECLARE_FUNCTION(execStartCapturingAudio); \
	DECLARE_FUNCTION(execGetAudioCaptureDeviceInfo);


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCapture(); \
	friend struct Z_Construct_UClass_UAudioCapture_Statics; \
public: \
	DECLARE_CLASS(UAudioCapture, UAudioGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCapture)


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCapture(); \
	friend struct Z_Construct_UClass_UAudioCapture_Statics; \
public: \
	DECLARE_CLASS(UAudioCapture, UAudioGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCapture)


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCapture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCapture(UAudioCapture&&); \
	NO_API UAudioCapture(const UAudioCapture&); \
public:


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCapture(UAudioCapture&&); \
	NO_API UAudioCapture(const UAudioCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioCapture)


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_48_PROLOG
#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_SPARSE_DATA \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_SPARSE_DATA \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOCAPTURE_API UClass* StaticClass<class UAudioCapture>();

#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_SPARSE_DATA
#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateAudioCapture);


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateAudioCapture);


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCaptureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureFunctionLibrary)


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCaptureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureFunctionLibrary)


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCaptureFunctionLibrary(UAudioCaptureFunctionLibrary&&); \
	NO_API UAudioCaptureFunctionLibrary(const UAudioCaptureFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCaptureFunctionLibrary(UAudioCaptureFunctionLibrary&&); \
	NO_API UAudioCaptureFunctionLibrary(const UAudioCaptureFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureFunctionLibrary)


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_80_PROLOG
#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_SPARSE_DATA \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_SPARSE_DATA \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOCAPTURE_API UClass* StaticClass<class UAudioCaptureFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
