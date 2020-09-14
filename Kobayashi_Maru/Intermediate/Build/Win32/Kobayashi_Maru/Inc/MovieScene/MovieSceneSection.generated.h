// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneBlendType : uint8;
struct FOptionalMovieSceneBlendType;
enum class EMovieSceneCompletionMode : uint8;
#ifdef MOVIESCENE_MovieSceneSection_generated_h
#error "MovieSceneSection.generated.h already included, missing '#pragma once' in MovieSceneSection.h"
#endif
#define MOVIESCENE_MovieSceneSection_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEasingSettings>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSectionEvalOptions>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPostRollFrames); \
	DECLARE_FUNCTION(execSetPostRollFrames); \
	DECLARE_FUNCTION(execGetPreRollFrames); \
	DECLARE_FUNCTION(execSetPreRollFrames); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execGetOverlapPriority); \
	DECLARE_FUNCTION(execSetOverlapPriority); \
	DECLARE_FUNCTION(execGetRowIndex); \
	DECLARE_FUNCTION(execSetRowIndex); \
	DECLARE_FUNCTION(execSetBlendType); \
	DECLARE_FUNCTION(execGetBlendType); \
	DECLARE_FUNCTION(execSetCompletionMode); \
	DECLARE_FUNCTION(execGetCompletionMode);


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPostRollFrames); \
	DECLARE_FUNCTION(execSetPostRollFrames); \
	DECLARE_FUNCTION(execGetPreRollFrames); \
	DECLARE_FUNCTION(execSetPreRollFrames); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execGetOverlapPriority); \
	DECLARE_FUNCTION(execSetOverlapPriority); \
	DECLARE_FUNCTION(execGetRowIndex); \
	DECLARE_FUNCTION(execSetRowIndex); \
	DECLARE_FUNCTION(execSetBlendType); \
	DECLARE_FUNCTION(execGetBlendType); \
	DECLARE_FUNCTION(execSetCompletionMode); \
	DECLARE_FUNCTION(execGetCompletionMode);


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSection, MOVIESCENE_API)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSection, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSection, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSection(UMovieSceneSection&&); \
	MOVIESCENE_API UMovieSceneSection(const UMovieSceneSection&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSection(UMovieSceneSection&&); \
	MOVIESCENE_API UMovieSceneSection(const UMovieSceneSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreRollFrames() { return STRUCT_OFFSET(UMovieSceneSection, PreRollFrames); } \
	FORCEINLINE static uint32 __PPO__PostRollFrames() { return STRUCT_OFFSET(UMovieSceneSection, PostRollFrames); } \
	FORCEINLINE static uint32 __PPO__RowIndex() { return STRUCT_OFFSET(UMovieSceneSection, RowIndex); } \
	FORCEINLINE static uint32 __PPO__OverlapPriority() { return STRUCT_OFFSET(UMovieSceneSection, OverlapPriority); } \
	FORCEINLINE static uint32 __PPO__StartTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSection, StartTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__EndTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSection, EndTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PreRollTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSection, PreRollTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PostRollTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSection, PostRollTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bSupportsInfiniteRange() { return STRUCT_OFFSET(UMovieSceneSection, bSupportsInfiniteRange); } \
	FORCEINLINE static uint32 __PPO__BlendType() { return STRUCT_OFFSET(UMovieSceneSection, BlendType); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_135_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_139_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h


#define FOREACH_ENUM_EMOVIESCENECOMPLETIONMODE(op) \
	op(EMovieSceneCompletionMode::KeepState) \
	op(EMovieSceneCompletionMode::RestoreState) \
	op(EMovieSceneCompletionMode::ProjectDefault) 

enum class EMovieSceneCompletionMode : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneCompletionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
