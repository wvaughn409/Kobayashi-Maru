// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
#ifdef GEOMETRYCACHE_GeometryCacheComponent_generated_h
#error "GeometryCacheComponent.generated.h already included, missing '#pragma once' in GeometryCacheComponent.h"
#endif
#define GEOMETRYCACHE_GeometryCacheComponent_generated_h

#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackRenderData_Statics; \
	GEOMETRYCACHE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<struct FTrackRenderData>();

#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_SPARSE_DATA
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTickAtThisTime); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetPlaybackDirection); \
	DECLARE_FUNCTION(execGetAnimationTime); \
	DECLARE_FUNCTION(execSetStartTimeOffset); \
	DECLARE_FUNCTION(execGetStartTimeOffset); \
	DECLARE_FUNCTION(execSetGeometryCache); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPlayingReversed); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayReversedFromEnd); \
	DECLARE_FUNCTION(execPlayReversed); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickAtThisTime); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetPlaybackDirection); \
	DECLARE_FUNCTION(execGetAnimationTime); \
	DECLARE_FUNCTION(execSetStartTimeOffset); \
	DECLARE_FUNCTION(execGetStartTimeOffset); \
	DECLARE_FUNCTION(execSetGeometryCache); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPlayingReversed); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayReversedFromEnd); \
	DECLARE_FUNCTION(execPlayReversed); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct Z_Construct_UClass_UGeometryCacheComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct Z_Construct_UClass_UGeometryCacheComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public:


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bRunning() { return STRUCT_OFFSET(UGeometryCacheComponent, bRunning); } \
	FORCEINLINE static uint32 __PPO__bLooping() { return STRUCT_OFFSET(UGeometryCacheComponent, bLooping); } \
	FORCEINLINE static uint32 __PPO__StartTimeOffset() { return STRUCT_OFFSET(UGeometryCacheComponent, StartTimeOffset); } \
	FORCEINLINE static uint32 __PPO__PlaybackSpeed() { return STRUCT_OFFSET(UGeometryCacheComponent, PlaybackSpeed); } \
	FORCEINLINE static uint32 __PPO__NumTracks() { return STRUCT_OFFSET(UGeometryCacheComponent, NumTracks); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(UGeometryCacheComponent, ElapsedTime); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(UGeometryCacheComponent, Duration); } \
	FORCEINLINE static uint32 __PPO__bManualTick() { return STRUCT_OFFSET(UGeometryCacheComponent, bManualTick); }


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_36_PROLOG
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_SPARSE_DATA \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_SPARSE_DATA \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCACHE_API UClass* StaticClass<class UGeometryCacheComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
