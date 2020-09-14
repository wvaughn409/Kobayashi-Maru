// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef UMG_WidgetAnimation_generated_h
#error "WidgetAnimation.generated.h already included, missing '#pragma once' in WidgetAnimation.h"
#endif
#define UMG_WidgetAnimation_generated_h

#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_18_DELEGATE \
static inline void FWidgetAnimationDynamicEvents_DelegateWrapper(const FMulticastScriptDelegate& WidgetAnimationDynamicEvents) \
{ \
	WidgetAnimationDynamicEvents.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_17_DELEGATE \
static inline void FWidgetAnimationDynamicEvent_DelegateWrapper(const FScriptDelegate& WidgetAnimationDynamicEvent) \
{ \
	WidgetAnimationDynamicEvent.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_15_DELEGATE \
static inline void FOnWidgetAnimationPlaybackStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetAnimationPlaybackStatusChanged) \
{ \
	OnWidgetAnimationPlaybackStatusChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished); \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished); \
	DECLARE_FUNCTION(execBindToAnimationFinished); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted); \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationStarted); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime);


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished); \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished); \
	DECLARE_FUNCTION(execBindToAnimationFinished); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted); \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationStarted); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime);


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetAnimation(); \
	friend struct Z_Construct_UClass_UWidgetAnimation_Statics; \
public: \
	DECLARE_CLASS(UWidgetAnimation, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetAnimation)


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetAnimation(); \
	friend struct Z_Construct_UClass_UWidgetAnimation_Statics; \
public: \
	DECLARE_CLASS(UWidgetAnimation, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetAnimation)


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMG_API UWidgetAnimation(UWidgetAnimation&&); \
	UMG_API UWidgetAnimation(const UWidgetAnimation&); \
public:


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMG_API UWidgetAnimation(UWidgetAnimation&&); \
	UMG_API UWidgetAnimation(const UWidgetAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimation)


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bLegacyFinishOnStop() { return STRUCT_OFFSET(UWidgetAnimation, bLegacyFinishOnStop); } \
	FORCEINLINE static uint32 __PPO__DisplayLabel() { return STRUCT_OFFSET(UWidgetAnimation, DisplayLabel); }


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_23_PROLOG
#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_INCLASS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetAnimation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
