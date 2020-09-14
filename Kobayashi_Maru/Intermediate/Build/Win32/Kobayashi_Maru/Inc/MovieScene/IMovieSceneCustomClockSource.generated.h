// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQualifiedFrameTime;
struct FFrameTime;
#ifdef MOVIESCENE_IMovieSceneCustomClockSource_generated_h
#error "IMovieSceneCustomClockSource.generated.h already included, missing '#pragma once' in IMovieSceneCustomClockSource.h"
#endif
#define MOVIESCENE_IMovieSceneCustomClockSource_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRequestCurrentTime); \
	DECLARE_FUNCTION(execOnStopPlaying); \
	DECLARE_FUNCTION(execOnStartPlaying); \
	DECLARE_FUNCTION(execOnTick);


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRequestCurrentTime); \
	DECLARE_FUNCTION(execOnStopPlaying); \
	DECLARE_FUNCTION(execOnStartPlaying); \
	DECLARE_FUNCTION(execOnTick);


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCustomClockSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCustomClockSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCustomClockSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCustomClockSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCustomClockSource(UMovieSceneCustomClockSource&&); \
	NO_API UMovieSceneCustomClockSource(const UMovieSceneCustomClockSource&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCustomClockSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCustomClockSource(UMovieSceneCustomClockSource&&); \
	NO_API UMovieSceneCustomClockSource(const UMovieSceneCustomClockSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCustomClockSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCustomClockSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCustomClockSource)


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneCustomClockSource(); \
	friend struct Z_Construct_UClass_UMovieSceneCustomClockSource_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCustomClockSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCustomClockSource)


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneCustomClockSource() {} \
public: \
	typedef UMovieSceneCustomClockSource UClassType; \
	typedef IMovieSceneCustomClockSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneCustomClockSource() {} \
public: \
	typedef UMovieSceneCustomClockSource UClassType; \
	typedef IMovieSceneCustomClockSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_12_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCustomClockSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
