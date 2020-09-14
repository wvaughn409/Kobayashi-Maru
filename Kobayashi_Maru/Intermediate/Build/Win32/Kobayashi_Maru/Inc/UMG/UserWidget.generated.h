// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
class UWidgetAnimation;
class UUMGSequencePlayer;
struct FMargin;
struct FSlateColor;
struct FLinearColor;
enum class EWidgetAnimationEvent : uint8;
class APawn;
class APlayerController;
struct FVector2D;
struct FAnchors;
struct FFocusEvent;
struct FGeometry;
struct FAnalogInputEvent;
struct FEventReply;
struct FPointerEvent;
class UDragDropOperation;
struct FCharacterEvent;
struct FKeyEvent;
struct FMotionEvent;
struct FPaintContext;
#ifdef UMG_UserWidget_generated_h
#error "UserWidget.generated.h already included, missing '#pragma once' in UserWidget.h"
#endif
#define UMG_UserWidget_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedSlotBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FNamedSlotBinding>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FPaintContext>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationEventBinding_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FAnimationEventBinding>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_196_DELEGATE \
static inline void FOnInputAction_DelegateWrapper(const FScriptDelegate& OnInputAction) \
{ \
	OnInputAction.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_194_DELEGATE \
static inline void FOnConstructEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConstructEvent) \
{ \
	OnConstructEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_RPC_WRAPPERS \
	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation); \
	virtual void OnAnimationStarted_Implementation(const UWidgetAnimation* Animation); \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking); \
	DECLARE_FUNCTION(execSetInputActionPriority); \
	DECLARE_FUNCTION(execIsListeningForInputAction); \
	DECLARE_FUNCTION(execUnregisterInputComponent); \
	DECLARE_FUNCTION(execRegisterInputComponent); \
	DECLARE_FUNCTION(execStopListeningForAllInputActions); \
	DECLARE_FUNCTION(execStopListeningForInputAction); \
	DECLARE_FUNCTION(execListenForInputAction); \
	DECLARE_FUNCTION(execIsPlayingAnimation); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execIsAnimationPlayingForward); \
	DECLARE_FUNCTION(execReverseAnimation); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetNumLoopsToPlay); \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying); \
	DECLARE_FUNCTION(execIsAnimationPlaying); \
	DECLARE_FUNCTION(execGetAnimationCurrentTime); \
	DECLARE_FUNCTION(execPauseAnimation); \
	DECLARE_FUNCTION(execStopAllAnimations); \
	DECLARE_FUNCTION(execStopAnimation); \
	DECLARE_FUNCTION(execPlayAnimationReverse); \
	DECLARE_FUNCTION(execPlayAnimationForward); \
	DECLARE_FUNCTION(execPlayAnimationTimeRange); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execOnAnimationFinished); \
	DECLARE_FUNCTION(execOnAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationEvent); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished); \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished); \
	DECLARE_FUNCTION(execBindToAnimationFinished); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted); \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationStarted); \
	DECLARE_FUNCTION(execStopAnimationsAndLatentActions); \
	DECLARE_FUNCTION(execCancelLatentActions); \
	DECLARE_FUNCTION(execGetOwningPlayerPawn); \
	DECLARE_FUNCTION(execSetOwningPlayer); \
	DECLARE_FUNCTION(execIsInViewport); \
	DECLARE_FUNCTION(execGetIsVisible); \
	DECLARE_FUNCTION(execGetAlignmentInViewport); \
	DECLARE_FUNCTION(execGetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetAlignmentInViewport); \
	DECLARE_FUNCTION(execSetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport); \
	DECLARE_FUNCTION(execSetPositionInViewport); \
	DECLARE_FUNCTION(execRemoveFromViewport); \
	DECLARE_FUNCTION(execAddToPlayerScreen); \
	DECLARE_FUNCTION(execAddToViewport);


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking); \
	DECLARE_FUNCTION(execSetInputActionPriority); \
	DECLARE_FUNCTION(execIsListeningForInputAction); \
	DECLARE_FUNCTION(execUnregisterInputComponent); \
	DECLARE_FUNCTION(execRegisterInputComponent); \
	DECLARE_FUNCTION(execStopListeningForAllInputActions); \
	DECLARE_FUNCTION(execStopListeningForInputAction); \
	DECLARE_FUNCTION(execListenForInputAction); \
	DECLARE_FUNCTION(execIsPlayingAnimation); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execIsAnimationPlayingForward); \
	DECLARE_FUNCTION(execReverseAnimation); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetNumLoopsToPlay); \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying); \
	DECLARE_FUNCTION(execIsAnimationPlaying); \
	DECLARE_FUNCTION(execGetAnimationCurrentTime); \
	DECLARE_FUNCTION(execPauseAnimation); \
	DECLARE_FUNCTION(execStopAllAnimations); \
	DECLARE_FUNCTION(execStopAnimation); \
	DECLARE_FUNCTION(execPlayAnimationReverse); \
	DECLARE_FUNCTION(execPlayAnimationForward); \
	DECLARE_FUNCTION(execPlayAnimationTimeRange); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execOnAnimationFinished); \
	DECLARE_FUNCTION(execOnAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationEvent); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished); \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished); \
	DECLARE_FUNCTION(execBindToAnimationFinished); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted); \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationStarted); \
	DECLARE_FUNCTION(execStopAnimationsAndLatentActions); \
	DECLARE_FUNCTION(execCancelLatentActions); \
	DECLARE_FUNCTION(execGetOwningPlayerPawn); \
	DECLARE_FUNCTION(execSetOwningPlayer); \
	DECLARE_FUNCTION(execIsInViewport); \
	DECLARE_FUNCTION(execGetIsVisible); \
	DECLARE_FUNCTION(execGetAlignmentInViewport); \
	DECLARE_FUNCTION(execGetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetAlignmentInViewport); \
	DECLARE_FUNCTION(execSetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport); \
	DECLARE_FUNCTION(execSetPositionInViewport); \
	DECLARE_FUNCTION(execRemoveFromViewport); \
	DECLARE_FUNCTION(execAddToPlayerScreen); \
	DECLARE_FUNCTION(execAddToViewport);


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_EVENT_PARMS \
	struct UserWidget_eventIsInteractable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventIsInteractable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnAddedToFocusPath_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnAnalogValueChanged_Parms \
	{ \
		FGeometry MyGeometry; \
		FAnalogInputEvent InAnalogInputEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnAnimationFinished_Parms \
	{ \
		const UWidgetAnimation* Animation; \
	}; \
	struct UserWidget_eventOnAnimationStarted_Parms \
	{ \
		const UWidgetAnimation* Animation; \
	}; \
	struct UserWidget_eventOnDragCancelled_Parms \
	{ \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragDetected_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragEnter_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragLeave_Parms \
	{ \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragOver_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventOnDragOver_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnDrop_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnFocusLost_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnFocusReceived_Parms \
	{ \
		FGeometry MyGeometry; \
		FFocusEvent InFocusEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyChar_Parms \
	{ \
		FGeometry MyGeometry; \
		FCharacterEvent InCharacterEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyUp_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMotionDetected_Parms \
	{ \
		FGeometry MyGeometry; \
		FMotionEvent InMotionEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonDoubleClick_Parms \
	{ \
		FGeometry InMyGeometry; \
		FPointerEvent InMouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonUp_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseEnter_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
	}; \
	struct UserWidget_eventOnMouseLeave_Parms \
	{ \
		FPointerEvent MouseEvent; \
	}; \
	struct UserWidget_eventOnMouseMove_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseWheel_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnPaint_Parms \
	{ \
		FPaintContext Context; \
	}; \
	struct UserWidget_eventOnPreviewKeyDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnPreviewMouseButtonDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnRemovedFromFocusPath_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnTouchEnded_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchForceChanged_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchGesture_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent GestureEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchMoved_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchStarted_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventPreConstruct_Parms \
	{ \
		bool IsDesignTime; \
	}; \
	struct UserWidget_eventTick_Parms \
	{ \
		FGeometry MyGeometry; \
		float InDeltaTime; \
	};


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUserWidget, NO_API)


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend struct Z_Construct_UClass_UUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_INCLASS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend struct Z_Construct_UClass_UUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget)


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NamedSlotBindings() { return STRUCT_OFFSET(UUserWidget, NamedSlotBindings); } \
	FORCEINLINE static uint32 __PPO__TickFrequency() { return STRUCT_OFFSET(UUserWidget, TickFrequency); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UUserWidget, InputComponent); } \
	FORCEINLINE static uint32 __PPO__AnimationCallbacks() { return STRUCT_OFFSET(UUserWidget, AnimationCallbacks); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_201_PROLOG \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_EVENT_PARMS


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_204_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h


#define FOREACH_ENUM_EDESIGNPREVIEWSIZEMODE(op) \
	op(EDesignPreviewSizeMode::FillScreen) \
	op(EDesignPreviewSizeMode::Custom) \
	op(EDesignPreviewSizeMode::CustomOnScreen) \
	op(EDesignPreviewSizeMode::Desired) \
	op(EDesignPreviewSizeMode::DesiredOnScreen) 

enum class EDesignPreviewSizeMode : uint8;
template<> UMG_API UEnum* StaticEnum<EDesignPreviewSizeMode>();

#define FOREACH_ENUM_EUMGSEQUENCEPLAYMODE(op) \
	op(EUMGSequencePlayMode::Forward) \
	op(EUMGSequencePlayMode::Reverse) \
	op(EUMGSequencePlayMode::PingPong) 
#define FOREACH_ENUM_EWIDGETANIMATIONEVENT(op) \
	op(EWidgetAnimationEvent::Started) \
	op(EWidgetAnimationEvent::Finished) 

enum class EWidgetAnimationEvent : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetAnimationEvent>();

#define FOREACH_ENUM_EWIDGETTICKFREQUENCY(op) \
	op(EWidgetTickFrequency::Never) \
	op(EWidgetTickFrequency::Auto) 

enum class EWidgetTickFrequency : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetTickFrequency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
