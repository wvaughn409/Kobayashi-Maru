// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EWindowTitleBarMode : uint8;
class UObject;
struct FVector2D;
enum class EColorVisionDeficiency : uint8;
struct FVector4;
struct FNavigationEvent;
struct FInputEvent;
struct FPointerEvent;
struct FCharacterEvent;
struct FAnalogInputEvent;
struct FKeyEvent;
class UUserWidget;
class UInterface;
struct FSlateBrush;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
class UDragDropOperation;
struct FEventReply;
struct FKey;
struct FPaintContext;
class UFont;
struct FLinearColor;
class APlayerController;
enum class EMouseLockMode : uint8;
#ifdef UMG_WidgetBlueprintLibrary_generated_h
#error "WidgetBlueprintLibrary.generated.h already included, missing '#pragma once' in WidgetBlueprintLibrary.h"
#endif
#define UMG_WidgetBlueprintLibrary_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_345_DELEGATE \
static inline void FOnGameWindowCloseButtonClickedDelegate_DelegateWrapper(const FScriptDelegate& OnGameWindowCloseButtonClickedDelegate) \
{ \
	OnGameWindowCloseButtonClickedDelegate.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarCloseButtonActive); \
	DECLARE_FUNCTION(execSetWindowTitleBarOnCloseClickedDelegate); \
	DECLARE_FUNCTION(execRestorePreviousWindowTitleBarState); \
	DECLARE_FUNCTION(execSetWindowTitleBarState); \
	DECLARE_FUNCTION(execSetHardwareCursor); \
	DECLARE_FUNCTION(execSetColorVisionDeficiencyType); \
	DECLARE_FUNCTION(execGetSafeZonePadding); \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent); \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent); \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent); \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent); \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent); \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface); \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass); \
	DECLARE_FUNCTION(execDismissAllMenus); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execNoResourceBrush); \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial); \
	DECLARE_FUNCTION(execSetBrushResourceToTexture); \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial); \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D); \
	DECLARE_FUNCTION(execGetBrushResource); \
	DECLARE_FUNCTION(execMakeBrushFromMaterial); \
	DECLARE_FUNCTION(execMakeBrushFromTexture); \
	DECLARE_FUNCTION(execMakeBrushFromAsset); \
	DECLARE_FUNCTION(execCancelDragDrop); \
	DECLARE_FUNCTION(execGetDragDroppingContent); \
	DECLARE_FUNCTION(execIsDragDropping); \
	DECLARE_FUNCTION(execEndDragDrop); \
	DECLARE_FUNCTION(execDetectDragIfPressed); \
	DECLARE_FUNCTION(execDetectDrag); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execReleaseJoystickCapture); \
	DECLARE_FUNCTION(execClearUserFocus); \
	DECLARE_FUNCTION(execCaptureJoystick); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execUnlockMouse); \
	DECLARE_FUNCTION(execLockMouse); \
	DECLARE_FUNCTION(execReleaseMouseCapture); \
	DECLARE_FUNCTION(execCaptureMouse); \
	DECLARE_FUNCTION(execUnhandled); \
	DECLARE_FUNCTION(execHandled); \
	DECLARE_FUNCTION(execDrawTextFormatted); \
	DECLARE_FUNCTION(execDrawText); \
	DECLARE_FUNCTION(execDrawLines); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execSetFocusToGameViewport); \
	DECLARE_FUNCTION(execSetInputMode_GameOnly); \
	DECLARE_FUNCTION(execSetInputMode_GameAndUIEx); \
	DECLARE_FUNCTION(execSetInputMode_GameAndUI); \
	DECLARE_FUNCTION(execSetInputMode_UIOnlyEx); \
	DECLARE_FUNCTION(execSetInputMode_UIOnly); \
	DECLARE_FUNCTION(execCreateDragDropOperation); \
	DECLARE_FUNCTION(execCreate);


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarCloseButtonActive); \
	DECLARE_FUNCTION(execSetWindowTitleBarOnCloseClickedDelegate); \
	DECLARE_FUNCTION(execRestorePreviousWindowTitleBarState); \
	DECLARE_FUNCTION(execSetWindowTitleBarState); \
	DECLARE_FUNCTION(execSetHardwareCursor); \
	DECLARE_FUNCTION(execSetColorVisionDeficiencyType); \
	DECLARE_FUNCTION(execGetSafeZonePadding); \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent); \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent); \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent); \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent); \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent); \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface); \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass); \
	DECLARE_FUNCTION(execDismissAllMenus); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execNoResourceBrush); \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial); \
	DECLARE_FUNCTION(execSetBrushResourceToTexture); \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial); \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D); \
	DECLARE_FUNCTION(execGetBrushResource); \
	DECLARE_FUNCTION(execMakeBrushFromMaterial); \
	DECLARE_FUNCTION(execMakeBrushFromTexture); \
	DECLARE_FUNCTION(execMakeBrushFromAsset); \
	DECLARE_FUNCTION(execCancelDragDrop); \
	DECLARE_FUNCTION(execGetDragDroppingContent); \
	DECLARE_FUNCTION(execIsDragDropping); \
	DECLARE_FUNCTION(execEndDragDrop); \
	DECLARE_FUNCTION(execDetectDragIfPressed); \
	DECLARE_FUNCTION(execDetectDrag); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execReleaseJoystickCapture); \
	DECLARE_FUNCTION(execClearUserFocus); \
	DECLARE_FUNCTION(execCaptureJoystick); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execUnlockMouse); \
	DECLARE_FUNCTION(execLockMouse); \
	DECLARE_FUNCTION(execReleaseMouseCapture); \
	DECLARE_FUNCTION(execCaptureMouse); \
	DECLARE_FUNCTION(execUnhandled); \
	DECLARE_FUNCTION(execHandled); \
	DECLARE_FUNCTION(execDrawTextFormatted); \
	DECLARE_FUNCTION(execDrawText); \
	DECLARE_FUNCTION(execDrawLines); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execSetFocusToGameViewport); \
	DECLARE_FUNCTION(execSetInputMode_GameOnly); \
	DECLARE_FUNCTION(execSetInputMode_GameAndUIEx); \
	DECLARE_FUNCTION(execSetInputMode_GameAndUI); \
	DECLARE_FUNCTION(execSetInputMode_UIOnlyEx); \
	DECLARE_FUNCTION(execSetInputMode_UIOnly); \
	DECLARE_FUNCTION(execCreateDragDropOperation); \
	DECLARE_FUNCTION(execCreate);


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprintLibrary(UWidgetBlueprintLibrary&&); \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprintLibrary(UWidgetBlueprintLibrary&&); \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_26_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
