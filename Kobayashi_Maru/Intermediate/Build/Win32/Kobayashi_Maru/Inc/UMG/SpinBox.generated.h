// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateColor;
#ifdef UMG_SpinBox_generated_h
#error "SpinBox.generated.h already included, missing '#pragma once' in SpinBox.h"
#endif
#define UMG_SpinBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_26_DELEGATE \
static inline void FOnSpinBoxBeginSliderMovement_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxBeginSliderMovement) \
{ \
	OnSpinBoxBeginSliderMovement.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_25_DELEGATE \
struct SpinBox_eventOnSpinBoxValueCommittedEvent_Parms \
{ \
	float InValue; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnSpinBoxValueCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueCommittedEvent, float InValue, ETextCommit::Type CommitMethod) \
{ \
	SpinBox_eventOnSpinBoxValueCommittedEvent_Parms Parms; \
	Parms.InValue=InValue; \
	Parms.CommitMethod=CommitMethod; \
	OnSpinBoxValueCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_24_DELEGATE \
struct SpinBox_eventOnSpinBoxValueChangedEvent_Parms \
{ \
	float InValue; \
}; \
static inline void FOnSpinBoxValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueChangedEvent, float InValue) \
{ \
	SpinBox_eventOnSpinBoxValueChangedEvent_Parms Parms; \
	Parms.InValue=InValue; \
	OnSpinBoxValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execClearMaxSliderValue); \
	DECLARE_FUNCTION(execSetMaxSliderValue); \
	DECLARE_FUNCTION(execGetMaxSliderValue); \
	DECLARE_FUNCTION(execClearMinSliderValue); \
	DECLARE_FUNCTION(execSetMinSliderValue); \
	DECLARE_FUNCTION(execGetMinSliderValue); \
	DECLARE_FUNCTION(execClearMaxValue); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execClearMinValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetDelta); \
	DECLARE_FUNCTION(execGetDelta); \
	DECLARE_FUNCTION(execSetAlwaysUsesDeltaSnap); \
	DECLARE_FUNCTION(execGetAlwaysUsesDeltaSnap); \
	DECLARE_FUNCTION(execSetMaxFractionalDigits); \
	DECLARE_FUNCTION(execGetMaxFractionalDigits); \
	DECLARE_FUNCTION(execSetMinFractionalDigits); \
	DECLARE_FUNCTION(execGetMinFractionalDigits); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execClearMaxSliderValue); \
	DECLARE_FUNCTION(execSetMaxSliderValue); \
	DECLARE_FUNCTION(execGetMaxSliderValue); \
	DECLARE_FUNCTION(execClearMinSliderValue); \
	DECLARE_FUNCTION(execSetMinSliderValue); \
	DECLARE_FUNCTION(execGetMinSliderValue); \
	DECLARE_FUNCTION(execClearMaxValue); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execClearMinValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetDelta); \
	DECLARE_FUNCTION(execGetDelta); \
	DECLARE_FUNCTION(execSetAlwaysUsesDeltaSnap); \
	DECLARE_FUNCTION(execGetAlwaysUsesDeltaSnap); \
	DECLARE_FUNCTION(execSetMaxFractionalDigits); \
	DECLARE_FUNCTION(execGetMaxFractionalDigits); \
	DECLARE_FUNCTION(execSetMinFractionalDigits); \
	DECLARE_FUNCTION(execGetMinFractionalDigits); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpinBox(); \
	friend struct Z_Construct_UClass_USpinBox_Statics; \
public: \
	DECLARE_CLASS(USpinBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USpinBox)


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSpinBox(); \
	friend struct Z_Construct_UClass_USpinBox_Statics; \
public: \
	DECLARE_CLASS(USpinBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USpinBox)


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpinBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpinBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpinBox(USpinBox&&); \
	NO_API USpinBox(const USpinBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpinBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpinBox(USpinBox&&); \
	NO_API USpinBox(const USpinBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpinBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinBox)


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(USpinBox, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(USpinBox, MaxValue); } \
	FORCEINLINE static uint32 __PPO__MinSliderValue() { return STRUCT_OFFSET(USpinBox, MinSliderValue); } \
	FORCEINLINE static uint32 __PPO__MaxSliderValue() { return STRUCT_OFFSET(USpinBox, MaxSliderValue); }


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpinBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USpinBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SpinBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
