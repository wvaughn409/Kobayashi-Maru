// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWidget;
class UWidgetSwitcherSlot;
class UWrapBoxSlot;
class USizeBoxSlot;
class UScaleBoxSlot;
class USafeZoneSlot;
class UScrollBoxSlot;
class UVerticalBoxSlot;
class UUniformGridSlot;
class UOverlaySlot;
class UHorizontalBoxSlot;
class UGridSlot;
class UCanvasPanelSlot;
class UBorderSlot;
class APlayerController;
struct FVector2D;
struct FGeometry;
struct FVector;
#ifdef UMG_WidgetLayoutLibrary_generated_h
#error "WidgetLayoutLibrary.generated.h already included, missing '#pragma once' in WidgetLayoutLibrary.h"
#endif
#define UMG_WidgetLayoutLibrary_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllWidgets); \
	DECLARE_FUNCTION(execSlotAsWidgetSwitcherSlot); \
	DECLARE_FUNCTION(execSlotAsWrapBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSizeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScaleBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSafeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScrollBoxSlot); \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot); \
	DECLARE_FUNCTION(execSlotAsOverlaySlot); \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsGridSlot); \
	DECLARE_FUNCTION(execSlotAsCanvasSlot); \
	DECLARE_FUNCTION(execSlotAsBorderSlot); \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI); \
	DECLARE_FUNCTION(execGetMousePositionOnViewport); \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform); \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetViewportScale); \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition);


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllWidgets); \
	DECLARE_FUNCTION(execSlotAsWidgetSwitcherSlot); \
	DECLARE_FUNCTION(execSlotAsWrapBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSizeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScaleBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSafeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScrollBoxSlot); \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot); \
	DECLARE_FUNCTION(execSlotAsOverlaySlot); \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsGridSlot); \
	DECLARE_FUNCTION(execSlotAsCanvasSlot); \
	DECLARE_FUNCTION(execSlotAsBorderSlot); \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI); \
	DECLARE_FUNCTION(execGetMousePositionOnViewport); \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform); \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetViewportScale); \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition);


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLayoutLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLayoutLibrary(UWidgetLayoutLibrary&&); \
	NO_API UWidgetLayoutLibrary(const UWidgetLayoutLibrary&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLayoutLibrary(UWidgetLayoutLibrary&&); \
	NO_API UWidgetLayoutLibrary(const UWidgetLayoutLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLayoutLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_26_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetLayoutLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetLayoutLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
