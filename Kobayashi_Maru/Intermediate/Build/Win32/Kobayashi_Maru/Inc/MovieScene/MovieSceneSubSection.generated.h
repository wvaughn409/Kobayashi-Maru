// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSequence;
#ifdef MOVIESCENE_MovieSceneSubSection_generated_h
#error "MovieSceneSubSection.generated.h already included, missing '#pragma once' in MovieSceneSubSection.h"
#endif
#define MOVIESCENE_MovieSceneSubSection_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSubSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSubSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubSection)


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSubSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSubSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubSection)


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSubSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubSection(UMovieSceneSubSection&&); \
	NO_API UMovieSceneSubSection(const UMovieSceneSubSection&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubSection(UMovieSceneSubSection&&); \
	NO_API UMovieSceneSubSection(const UMovieSceneSubSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneSubSection)


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartOffset_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TimeScale_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PrerollTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SubSequence() { return STRUCT_OFFSET(UMovieSceneSubSection, SubSequence); } \
	FORCEINLINE static uint32 __PPO__ActorToRecord() { return STRUCT_OFFSET(UMovieSceneSubSection, ActorToRecord); } \
	FORCEINLINE static uint32 __PPO__TargetSequenceName() { return STRUCT_OFFSET(UMovieSceneSubSection, TargetSequenceName); } \
	FORCEINLINE static uint32 __PPO__TargetPathToRecordTo() { return STRUCT_OFFSET(UMovieSceneSubSection, TargetPathToRecordTo); }


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_36_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSubSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
