// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FVector2D;
#ifdef SYNTHESIS_Synth2DSlider_generated_h
#error "Synth2DSlider.generated.h already included, missing '#pragma once' in Synth2DSlider.h"
#endif
#define SYNTHESIS_Synth2DSlider_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_21_DELEGATE \
struct _Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms \
{ \
	float Value; \
}; \
static inline void FOnFloatValueChangedEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEventSynth2D, float Value) \
{ \
	_Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms Parms; \
	Parms.Value=Value; \
	OnFloatValueChangedEventSynth2D.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_20_DELEGATE \
static inline void FOnControllerCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEventSynth2D) \
{ \
	OnControllerCaptureEndEventSynth2D.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_19_DELEGATE \
static inline void FOnControllerCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEventSynth2D) \
{ \
	OnControllerCaptureBeginEventSynth2D.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_18_DELEGATE \
static inline void FOnMouseCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEventSynth2D) \
{ \
	OnMouseCaptureEndEventSynth2D.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_17_DELEGATE \
static inline void FOnMouseCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEventSynth2D) \
{ \
	OnMouseCaptureBeginEventSynth2D.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynth2DSlider(); \
	friend struct Z_Construct_UClass_USynth2DSlider_Statics; \
public: \
	DECLARE_CLASS(USynth2DSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynth2DSlider)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSynth2DSlider(); \
	friend struct Z_Construct_UClass_USynth2DSlider_Statics; \
public: \
	DECLARE_CLASS(USynth2DSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynth2DSlider)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynth2DSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynth2DSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynth2DSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynth2DSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynth2DSlider(USynth2DSlider&&); \
	NO_API USynth2DSlider(const USynth2DSlider&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynth2DSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynth2DSlider(USynth2DSlider&&); \
	NO_API USynth2DSlider(const USynth2DSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynth2DSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynth2DSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynth2DSlider)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_28_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Synth2DSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynth2DSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
