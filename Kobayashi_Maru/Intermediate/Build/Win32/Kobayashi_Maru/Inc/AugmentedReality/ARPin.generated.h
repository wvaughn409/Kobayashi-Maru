// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FLinearColor;
class USceneComponent;
class UARTrackedGeometry;
enum class EARTrackingState : uint8;
struct FTransform;
#ifdef AUGMENTEDREALITY_ARPin_generated_h
#error "ARPin.generated.h already included, missing '#pragma once' in ARPin.h"
#endif
#define AUGMENTEDREALITY_ARPin_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execDebugDraw); \
	DECLARE_FUNCTION(execGetPinnedComponent); \
	DECLARE_FUNCTION(execGetTrackedGeometry); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform);


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execDebugDraw); \
	DECLARE_FUNCTION(execGetPinnedComponent); \
	DECLARE_FUNCTION(execGetTrackedGeometry); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform);


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct Z_Construct_UClass_UARPin_Statics; \
public: \
	DECLARE_CLASS(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPin)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct Z_Construct_UClass_UARPin_Statics; \
public: \
	DECLARE_CLASS(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPin)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPin(UARPin&&); \
	NO_API UARPin(const UARPin&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPin(UARPin&&); \
	NO_API UARPin(const UARPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedGeometry() { return STRUCT_OFFSET(UARPin, TrackedGeometry); } \
	FORCEINLINE static uint32 __PPO__PinnedComponent() { return STRUCT_OFFSET(UARPin, PinnedComponent); } \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(UARPin, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__LocalToAlignedTrackingTransform() { return STRUCT_OFFSET(UARPin, LocalToAlignedTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackingState() { return STRUCT_OFFSET(UARPin, TrackingState); } \
	FORCEINLINE static uint32 __PPO__OnARTrackingStateChanged() { return STRUCT_OFFSET(UARPin, OnARTrackingStateChanged); } \
	FORCEINLINE static uint32 __PPO__OnARTransformUpdated() { return STRUCT_OFFSET(UARPin, OnARTransformUpdated); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_11_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARPin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
