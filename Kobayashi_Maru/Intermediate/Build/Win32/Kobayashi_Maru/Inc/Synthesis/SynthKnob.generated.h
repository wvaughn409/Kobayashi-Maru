// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SYNTHESIS_SynthKnob_generated_h
#error "SynthKnob.generated.h already included, missing '#pragma once' in SynthKnob.h"
#endif
#define SYNTHESIS_SynthKnob_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_23_DELEGATE \
struct _Script_Synthesis_eventOnFloatValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEvent, float Value) \
{ \
	_Script_Synthesis_eventOnFloatValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	OnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_22_DELEGATE \
static inline void FOnControllerCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEvent) \
{ \
	OnControllerCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_DELEGATE \
static inline void FOnControllerCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEvent) \
{ \
	OnControllerCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_20_DELEGATE \
static inline void FOnMouseCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEvent) \
{ \
	OnMouseCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_DELEGATE \
static inline void FOnMouseCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEvent) \
{ \
	OnMouseCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthKnob(); \
	friend struct Z_Construct_UClass_USynthKnob_Statics; \
public: \
	DECLARE_CLASS(USynthKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthKnob)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUSynthKnob(); \
	friend struct Z_Construct_UClass_USynthKnob_Statics; \
public: \
	DECLARE_CLASS(USynthKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthKnob)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthKnob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthKnob) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthKnob); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthKnob); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthKnob(USynthKnob&&); \
	NO_API USynthKnob(const USynthKnob&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthKnob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthKnob(USynthKnob&&); \
	NO_API USynthKnob(const USynthKnob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthKnob); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthKnob); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthKnob)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_31_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SynthKnob."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynthKnob>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
