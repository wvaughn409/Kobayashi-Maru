// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPointerEvent;
struct FVector2D;
enum class ESlateGesture : uint8;
struct FKey;
struct FAnalogInputEvent;
struct FKeyEvent;
struct FInputChord;
struct FInputEvent;
enum class EUINavigation : uint8;
enum class EUINavigationAction : uint8;
#ifdef ENGINE_KismetInputLibrary_generated_h
#error "KismetInputLibrary.generated.h already included, missing '#pragma once' in KismetInputLibrary.h"
#endif
#define ENGINE_KismetInputLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointerEvent_GetGestureDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetGestureType); \
	DECLARE_FUNCTION(execPointerEvent_IsTouchEvent); \
	DECLARE_FUNCTION(execPointerEvent_GetTouchpadIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetPointerIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetUserIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetWheelDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetEffectingButton); \
	DECLARE_FUNCTION(execPointerEvent_IsMouseButtonDown); \
	DECLARE_FUNCTION(execPointerEvent_GetCursorDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetLastScreenSpacePosition); \
	DECLARE_FUNCTION(execPointerEvent_GetScreenSpacePosition); \
	DECLARE_FUNCTION(execGetAnalogValue); \
	DECLARE_FUNCTION(execGetUserIndex); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execInputChord_GetDisplayName); \
	DECLARE_FUNCTION(execInputEvent_IsRightCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsRepeat); \
	DECLARE_FUNCTION(execKey_GetDisplayName); \
	DECLARE_FUNCTION(execKey_GetNavigationDirectionFromAnalog); \
	DECLARE_FUNCTION(execKey_GetNavigationDirectionFromKey); \
	DECLARE_FUNCTION(execKey_GetNavigationActionFromKey); \
	DECLARE_FUNCTION(execKey_GetNavigationAction); \
	DECLARE_FUNCTION(execKey_IsValid); \
	DECLARE_FUNCTION(execKey_IsVectorAxis); \
	DECLARE_FUNCTION(execKey_IsFloatAxis); \
	DECLARE_FUNCTION(execKey_IsKeyboardKey); \
	DECLARE_FUNCTION(execKey_IsMouseButton); \
	DECLARE_FUNCTION(execKey_IsGamepadKey); \
	DECLARE_FUNCTION(execKey_IsModifierKey); \
	DECLARE_FUNCTION(execEqualEqual_InputChordInputChord); \
	DECLARE_FUNCTION(execEqualEqual_KeyKey); \
	DECLARE_FUNCTION(execCalibrateTilt);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointerEvent_GetGestureDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetGestureType); \
	DECLARE_FUNCTION(execPointerEvent_IsTouchEvent); \
	DECLARE_FUNCTION(execPointerEvent_GetTouchpadIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetPointerIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetUserIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetWheelDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetEffectingButton); \
	DECLARE_FUNCTION(execPointerEvent_IsMouseButtonDown); \
	DECLARE_FUNCTION(execPointerEvent_GetCursorDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetLastScreenSpacePosition); \
	DECLARE_FUNCTION(execPointerEvent_GetScreenSpacePosition); \
	DECLARE_FUNCTION(execGetAnalogValue); \
	DECLARE_FUNCTION(execGetUserIndex); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execInputChord_GetDisplayName); \
	DECLARE_FUNCTION(execInputEvent_IsRightCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsRepeat); \
	DECLARE_FUNCTION(execKey_GetDisplayName); \
	DECLARE_FUNCTION(execKey_GetNavigationDirectionFromAnalog); \
	DECLARE_FUNCTION(execKey_GetNavigationDirectionFromKey); \
	DECLARE_FUNCTION(execKey_GetNavigationActionFromKey); \
	DECLARE_FUNCTION(execKey_GetNavigationAction); \
	DECLARE_FUNCTION(execKey_IsValid); \
	DECLARE_FUNCTION(execKey_IsVectorAxis); \
	DECLARE_FUNCTION(execKey_IsFloatAxis); \
	DECLARE_FUNCTION(execKey_IsKeyboardKey); \
	DECLARE_FUNCTION(execKey_IsMouseButton); \
	DECLARE_FUNCTION(execKey_IsGamepadKey); \
	DECLARE_FUNCTION(execKey_IsModifierKey); \
	DECLARE_FUNCTION(execEqualEqual_InputChordInputChord); \
	DECLARE_FUNCTION(execEqualEqual_KeyKey); \
	DECLARE_FUNCTION(execCalibrateTilt);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetInputLibrary(); \
	friend struct Z_Construct_UClass_UKismetInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInputLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUKismetInputLibrary(); \
	friend struct Z_Construct_UClass_UKismetInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInputLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInputLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInputLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInputLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInputLibrary(UKismetInputLibrary&&); \
	NO_API UKismetInputLibrary(const UKismetInputLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInputLibrary(UKismetInputLibrary&&); \
	NO_API UKismetInputLibrary(const UKismetInputLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInputLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInputLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetInputLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetInputLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h


#define FOREACH_ENUM_ESLATEGESTURE(op) \
	op(ESlateGesture::None) \
	op(ESlateGesture::Scroll) \
	op(ESlateGesture::Magnify) \
	op(ESlateGesture::Swipe) \
	op(ESlateGesture::Rotate) \
	op(ESlateGesture::LongPress) 

enum class ESlateGesture : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESlateGesture>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
