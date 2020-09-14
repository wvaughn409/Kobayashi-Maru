// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SlateWrapperTypes_generated_h
#error "SlateWrapperTypes.generated.h already included, missing '#pragma once' in SlateWrapperTypes.h"
#endif
#define UMG_SlateWrapperTypes_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateChildSize_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FSlateChildSize>();

#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventReply_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FEventReply>();

#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_66_DELEGATE \
struct SlateAccessibleWidgetData_eventGetText_Parms \
{ \
	FText ReturnValue; \
}; \
static inline FText FGetText_DelegateWrapper(const FScriptDelegate& GetText) \
{ \
	SlateAccessibleWidgetData_eventGetText_Parms Parms; \
	GetText.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateAccessibleWidgetData(); \
	friend struct Z_Construct_UClass_USlateAccessibleWidgetData_Statics; \
public: \
	DECLARE_CLASS(USlateAccessibleWidgetData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlateAccessibleWidgetData)


#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUSlateAccessibleWidgetData(); \
	friend struct Z_Construct_UClass_USlateAccessibleWidgetData_Statics; \
public: \
	DECLARE_CLASS(USlateAccessibleWidgetData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlateAccessibleWidgetData)


#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateAccessibleWidgetData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateAccessibleWidgetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateAccessibleWidgetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateAccessibleWidgetData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateAccessibleWidgetData(USlateAccessibleWidgetData&&); \
	NO_API USlateAccessibleWidgetData(const USlateAccessibleWidgetData&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateAccessibleWidgetData(USlateAccessibleWidgetData&&); \
	NO_API USlateAccessibleWidgetData(const USlateAccessibleWidgetData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateAccessibleWidgetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateAccessibleWidgetData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlateAccessibleWidgetData)


#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_60_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USlateAccessibleWidgetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h


#define FOREACH_ENUM_EVIRTUALKEYBOARDTYPE(op) \
	op(EVirtualKeyboardType::Default) \
	op(EVirtualKeyboardType::Number) \
	op(EVirtualKeyboardType::Web) \
	op(EVirtualKeyboardType::Email) \
	op(EVirtualKeyboardType::Password) \
	op(EVirtualKeyboardType::AlphaNumeric) 
#define FOREACH_ENUM_ESLATESIZERULE(op) \
	op(ESlateSizeRule::Automatic) \
	op(ESlateSizeRule::Fill) 
#define FOREACH_ENUM_ESLATEACCESSIBLEBEHAVIOR(op) \
	op(ESlateAccessibleBehavior::NotAccessible) \
	op(ESlateAccessibleBehavior::Auto) \
	op(ESlateAccessibleBehavior::Summary) \
	op(ESlateAccessibleBehavior::Custom) \
	op(ESlateAccessibleBehavior::ToolTip) 

enum class ESlateAccessibleBehavior : uint8;
template<> UMG_API UEnum* StaticEnum<ESlateAccessibleBehavior>();

#define FOREACH_ENUM_ESLATEVISIBILITY(op) \
	op(ESlateVisibility::Visible) \
	op(ESlateVisibility::Collapsed) \
	op(ESlateVisibility::Hidden) \
	op(ESlateVisibility::HitTestInvisible) \
	op(ESlateVisibility::SelfHitTestInvisible) 

enum class ESlateVisibility : uint8;
template<> UMG_API UEnum* StaticEnum<ESlateVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
