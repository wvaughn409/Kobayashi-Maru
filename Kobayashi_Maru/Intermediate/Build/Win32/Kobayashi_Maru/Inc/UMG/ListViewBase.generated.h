// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class ESlateVisibility : uint8;
#ifdef UMG_ListViewBase_generated_h
#error "ListViewBase.generated.h already included, missing '#pragma once' in ListViewBase.h"
#endif
#define UMG_ListViewBase_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_16_DELEGATE \
struct _Script_UMG_eventOnListEntryReleasedDynamic_Parms \
{ \
	UUserWidget* Widget; \
}; \
static inline void FOnListEntryReleasedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryReleasedDynamic, UUserWidget* Widget) \
{ \
	_Script_UMG_eventOnListEntryReleasedDynamic_Parms Parms; \
	Parms.Widget=Widget; \
	OnListEntryReleasedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_15_DELEGATE \
struct _Script_UMG_eventOnListEntryGeneratedDynamic_Parms \
{ \
	UUserWidget* Widget; \
}; \
static inline void FOnListEntryGeneratedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryGeneratedDynamic, UUserWidget* Widget) \
{ \
	_Script_UMG_eventOnListEntryGeneratedDynamic_Parms Parms; \
	Parms.Widget=Widget; \
	OnListEntryGeneratedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestRefresh); \
	DECLARE_FUNCTION(execSetScrollbarVisibility); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execScrollToBottom); \
	DECLARE_FUNCTION(execScrollToTop); \
	DECLARE_FUNCTION(execRegenerateAllEntries); \
	DECLARE_FUNCTION(execGetDisplayedEntryWidgets);


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestRefresh); \
	DECLARE_FUNCTION(execSetScrollbarVisibility); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execScrollToBottom); \
	DECLARE_FUNCTION(execScrollToTop); \
	DECLARE_FUNCTION(execRegenerateAllEntries); \
	DECLARE_FUNCTION(execGetDisplayedEntryWidgets);


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListViewBase(); \
	friend struct Z_Construct_UClass_UListViewBase_Statics; \
public: \
	DECLARE_CLASS(UListViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListViewBase)


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_INCLASS \
private: \
	static void StaticRegisterNativesUListViewBase(); \
	friend struct Z_Construct_UClass_UListViewBase_Statics; \
public: \
	DECLARE_CLASS(UListViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListViewBase)


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListViewBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListViewBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListViewBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListViewBase(UListViewBase&&); \
	NO_API UListViewBase(const UListViewBase&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListViewBase(UListViewBase&&); \
	NO_API UListViewBase(const UListViewBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListViewBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListViewBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListViewBase)


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EntryWidgetClass() { return STRUCT_OFFSET(UListViewBase, EntryWidgetClass); } \
	FORCEINLINE static uint32 __PPO__WheelScrollMultiplier() { return STRUCT_OFFSET(UListViewBase, WheelScrollMultiplier); } \
	FORCEINLINE static uint32 __PPO__bEnableScrollAnimation() { return STRUCT_OFFSET(UListViewBase, bEnableScrollAnimation); } \
	FORCEINLINE static uint32 __PPO__bEnableFixedLineOffset() { return STRUCT_OFFSET(UListViewBase, bEnableFixedLineOffset); } \
	FORCEINLINE static uint32 __PPO__FixedLineScrollOffset() { return STRUCT_OFFSET(UListViewBase, FixedLineScrollOffset); } \
	FORCEINLINE static uint32 __PPO__BP_OnEntryGenerated() { return STRUCT_OFFSET(UListViewBase, BP_OnEntryGenerated); } \
	FORCEINLINE static uint32 __PPO__BP_OnEntryReleased() { return STRUCT_OFFSET(UListViewBase, BP_OnEntryReleased); } \
	FORCEINLINE static uint32 __PPO__EntryWidgetPool() { return STRUCT_OFFSET(UListViewBase, EntryWidgetPool); }


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_519_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_522_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UListViewBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
