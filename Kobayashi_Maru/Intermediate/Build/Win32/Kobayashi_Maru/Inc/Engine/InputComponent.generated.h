// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FKey;
#ifdef ENGINE_InputComponent_generated_h
#error "InputComponent.generated.h already included, missing '#pragma once' in InputComponent.h"
#endif
#define ENGINE_InputComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_695_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCachedKeyToActionInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_626_DELEGATE \
struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms \
{ \
	float Value; \
}; \
static inline void FInputGestureHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputGestureHandlerDynamicSignature, float Value) \
{ \
	_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms Parms; \
	Parms.Value=Value; \
	InputGestureHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_563_DELEGATE \
struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms \
{ \
	FVector AxisValue; \
}; \
static inline void FInputVectorAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputVectorAxisHandlerDynamicSignature, FVector AxisValue) \
{ \
	_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputVectorAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_465_DELEGATE \
struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms \
{ \
	float AxisValue; \
}; \
static inline void FInputAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputAxisHandlerDynamicSignature, float AxisValue) \
{ \
	_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_412_DELEGATE \
struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	FVector Location; \
}; \
static inline void FInputTouchHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputTouchHandlerDynamicSignature, ETouchIndex::Type FingerIndex, FVector Location) \
{ \
	_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.Location=Location; \
	InputTouchHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_127_DELEGATE \
struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms \
{ \
	FKey Key; \
}; \
static inline void FInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputActionHandlerDynamicSignature, FKey Key) \
{ \
	_Script_Engine_eventInputActionHandlerDynamicSignature_Parms Parms; \
	Parms.Key=Key; \
	InputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState); \
	DECLARE_FUNCTION(execGetControllerMouseDelta); \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown); \
	DECLARE_FUNCTION(execGetTouchState); \
	DECLARE_FUNCTION(execGetControllerVectorKeyState); \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState); \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased); \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed); \
	DECLARE_FUNCTION(execIsControllerKeyDown);


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState); \
	DECLARE_FUNCTION(execGetControllerMouseDelta); \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown); \
	DECLARE_FUNCTION(execGetTouchState); \
	DECLARE_FUNCTION(execGetControllerVectorKeyState); \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState); \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased); \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed); \
	DECLARE_FUNCTION(execIsControllerKeyDown);


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend struct Z_Construct_UClass_UInputComponent_Statics; \
public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_INCLASS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend struct Z_Construct_UClass_UInputComponent_Statics; \
public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputComponent(UInputComponent&&); \
	NO_API UInputComponent(const UInputComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputComponent(UInputComponent&&); \
	NO_API UInputComponent(const UInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedKeyToActionInfo() { return STRUCT_OFFSET(UInputComponent, CachedKeyToActionInfo); }


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_726_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h


#define FOREACH_ENUM_ECONTROLLERANALOGSTICK(op) \
	op(EControllerAnalogStick::CAS_LeftStick) \
	op(EControllerAnalogStick::CAS_RightStick) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
