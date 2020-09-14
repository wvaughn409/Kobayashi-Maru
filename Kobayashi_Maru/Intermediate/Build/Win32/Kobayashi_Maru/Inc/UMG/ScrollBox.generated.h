// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EDescendantScrollDestination : uint8;
struct FMargin;
struct FVector2D;
enum class ESlateVisibility : uint8;
enum class EConsumeMouseWheel : uint8;
#ifdef UMG_ScrollBox_generated_h
#error "ScrollBox.generated.h already included, missing '#pragma once' in ScrollBox.h"
#endif
#define UMG_ScrollBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_13_DELEGATE \
struct _Script_UMG_eventOnUserScrolledEvent_Parms \
{ \
	float CurrentOffset; \
}; \
static inline void FOnUserScrolledEvent_DelegateWrapper(const FMulticastScriptDelegate& OnUserScrolledEvent, float CurrentOffset) \
{ \
	_Script_UMG_eventOnUserScrolledEvent_Parms Parms; \
	Parms.CurrentOffset=CurrentOffset; \
	OnUserScrolledEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScrollWidgetIntoView); \
	DECLARE_FUNCTION(execScrollToEnd); \
	DECLARE_FUNCTION(execScrollToStart); \
	DECLARE_FUNCTION(execGetViewOffsetFraction); \
	DECLARE_FUNCTION(execGetScrollOffsetOfEnd); \
	DECLARE_FUNCTION(execGetScrollOffset); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execEndInertialScrolling); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetAnimateWheelScrolling); \
	DECLARE_FUNCTION(execSetAllowOverscroll); \
	DECLARE_FUNCTION(execSetAlwaysShowScrollbar); \
	DECLARE_FUNCTION(execSetScrollbarPadding); \
	DECLARE_FUNCTION(execSetScrollbarThickness); \
	DECLARE_FUNCTION(execSetScrollBarVisibility); \
	DECLARE_FUNCTION(execSetOrientation); \
	DECLARE_FUNCTION(execSetConsumeMouseWheel);


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScrollWidgetIntoView); \
	DECLARE_FUNCTION(execScrollToEnd); \
	DECLARE_FUNCTION(execScrollToStart); \
	DECLARE_FUNCTION(execGetViewOffsetFraction); \
	DECLARE_FUNCTION(execGetScrollOffsetOfEnd); \
	DECLARE_FUNCTION(execGetScrollOffset); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execEndInertialScrolling); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetAnimateWheelScrolling); \
	DECLARE_FUNCTION(execSetAllowOverscroll); \
	DECLARE_FUNCTION(execSetAlwaysShowScrollbar); \
	DECLARE_FUNCTION(execSetScrollbarPadding); \
	DECLARE_FUNCTION(execSetScrollbarThickness); \
	DECLARE_FUNCTION(execSetScrollBarVisibility); \
	DECLARE_FUNCTION(execSetOrientation); \
	DECLARE_FUNCTION(execSetConsumeMouseWheel);


#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBox, NO_API)


#else
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScrollBox(); \
	friend struct Z_Construct_UClass_UScrollBox_Statics; \
public: \
	DECLARE_CLASS(UScrollBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBox) \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBox(); \
	friend struct Z_Construct_UClass_UScrollBox_Statics; \
public: \
	DECLARE_CLASS(UScrollBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBox) \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBox(UScrollBox&&); \
	NO_API UScrollBox(const UScrollBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBox(UScrollBox&&); \
	NO_API UScrollBox(const UScrollBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBox)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScrollBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
