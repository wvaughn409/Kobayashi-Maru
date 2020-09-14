// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UPanelSlot;
#ifdef UMG_PanelWidget_generated_h
#error "PanelWidget.generated.h already included, missing '#pragma once' in PanelWidget.h"
#endif
#define UMG_PanelWidget_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearChildren); \
	DECLARE_FUNCTION(execHasAnyChildren); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execRemoveChildAt); \
	DECLARE_FUNCTION(execHasChild); \
	DECLARE_FUNCTION(execGetChildIndex); \
	DECLARE_FUNCTION(execGetAllChildren); \
	DECLARE_FUNCTION(execGetChildAt); \
	DECLARE_FUNCTION(execGetChildrenCount);


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearChildren); \
	DECLARE_FUNCTION(execHasAnyChildren); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execRemoveChildAt); \
	DECLARE_FUNCTION(execHasChild); \
	DECLARE_FUNCTION(execGetChildIndex); \
	DECLARE_FUNCTION(execGetAllChildren); \
	DECLARE_FUNCTION(execGetChildAt); \
	DECLARE_FUNCTION(execGetChildrenCount);


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPanelWidget(); \
	friend struct Z_Construct_UClass_UPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UPanelWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPanelWidget)


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPanelWidget(); \
	friend struct Z_Construct_UClass_UPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UPanelWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPanelWidget)


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPanelWidget(UPanelWidget&&); \
	NO_API UPanelWidget(const UPanelWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPanelWidget(UPanelWidget&&); \
	NO_API UPanelWidget(const UPanelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelWidget)


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Slots() { return STRUCT_OFFSET(UPanelWidget, Slots); }


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PanelWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPanelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
