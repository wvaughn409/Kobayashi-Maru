// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneCaptureProtocolBase;
#ifdef MOVIESCENECAPTURE_MovieSceneCapture_generated_h
#error "MovieSceneCapture.generated.h already included, missing '#pragma once' in MovieSceneCapture.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCapture_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAudioCaptureProtocolType); \
	DECLARE_FUNCTION(execSetImageCaptureProtocolType); \
	DECLARE_FUNCTION(execGetAudioCaptureProtocol); \
	DECLARE_FUNCTION(execGetImageCaptureProtocol);


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAudioCaptureProtocolType); \
	DECLARE_FUNCTION(execSetImageCaptureProtocolType); \
	DECLARE_FUNCTION(execGetAudioCaptureProtocol); \
	DECLARE_FUNCTION(execGetImageCaptureProtocol);


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCapture(); \
	friend struct Z_Construct_UClass_UMovieSceneCapture_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCapture, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCapture) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCapture*>(this); }


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCapture(); \
	friend struct Z_Construct_UClass_UMovieSceneCapture_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCapture, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCapture) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCapture*>(this); }


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCapture(UMovieSceneCapture&&); \
	NO_API UMovieSceneCapture(const UMovieSceneCapture&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCapture(UMovieSceneCapture&&); \
	NO_API UMovieSceneCapture(const UMovieSceneCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCapture)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_36_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
