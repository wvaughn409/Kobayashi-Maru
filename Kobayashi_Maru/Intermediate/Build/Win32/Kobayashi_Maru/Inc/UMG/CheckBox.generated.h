// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
#ifdef UMG_CheckBox_generated_h
#error "CheckBox.generated.h already included, missing '#pragma once' in CheckBox.h"
#endif
#define UMG_CheckBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_19_DELEGATE \
struct _Script_UMG_eventOnCheckBoxComponentStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCheckBoxComponentStateChanged, bool bIsChecked) \
{ \
	_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	OnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed);


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed);


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend struct Z_Construct_UClass_UCheckBox_Statics; \
public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCheckBox)


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend struct Z_Construct_UClass_UCheckBox_Statics; \
public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCheckBox)


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBox(UCheckBox&&); \
	NO_API UCheckBox(const UCheckBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBox(UCheckBox&&); \
	NO_API UCheckBox(const UCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox)


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_29_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheckBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCheckBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_CheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
