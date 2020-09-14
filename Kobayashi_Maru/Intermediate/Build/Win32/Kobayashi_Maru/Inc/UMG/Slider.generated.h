// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UMG_Slider_generated_h
#error "Slider.generated.h already included, missing '#pragma once' in Slider.h"
#endif
#define UMG_Slider_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_18_DELEGATE \
struct _Script_UMG_eventOnFloatValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEvent, float Value) \
{ \
	_Script_UMG_eventOnFloatValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	OnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_17_DELEGATE \
static inline void FOnControllerCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEvent) \
{ \
	OnControllerCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_16_DELEGATE \
static inline void FOnControllerCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEvent) \
{ \
	OnControllerCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_15_DELEGATE \
static inline void FOnMouseCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEvent) \
{ \
	OnMouseCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_14_DELEGATE \
static inline void FOnMouseCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEvent) \
{ \
	OnMouseCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetNormalizedValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetNormalizedValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlider(); \
	friend struct Z_Construct_UClass_USlider_Statics; \
public: \
	DECLARE_CLASS(USlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlider)


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSlider(); \
	friend struct Z_Construct_UClass_USlider_Statics; \
public: \
	DECLARE_CLASS(USlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlider)


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlider(USlider&&); \
	NO_API USlider(const USlider&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlider(USlider&&); \
	NO_API USlider(const USlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider)


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_25_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Slider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Slider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
