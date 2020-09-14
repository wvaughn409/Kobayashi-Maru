// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef UMG_DynamicEntryBox_generated_h
#error "DynamicEntryBox.generated.h already included, missing '#pragma once' in DynamicEntryBox.h"
#endif
#define UMG_DynamicEntryBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_CreateEntryOfClass); \
	DECLARE_FUNCTION(execBP_CreateEntry); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execReset);


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_CreateEntryOfClass); \
	DECLARE_FUNCTION(execBP_CreateEntry); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execReset);


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicEntryBox(); \
	friend struct Z_Construct_UClass_UDynamicEntryBox_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBox, UDynamicEntryBoxBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBox)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicEntryBox(); \
	friend struct Z_Construct_UClass_UDynamicEntryBox_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBox, UDynamicEntryBoxBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBox)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicEntryBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBox(UDynamicEntryBox&&); \
	NO_API UDynamicEntryBox(const UDynamicEntryBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicEntryBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBox(UDynamicEntryBox&&); \
	NO_API UDynamicEntryBox(const UDynamicEntryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBox)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EntryWidgetClass() { return STRUCT_OFFSET(UDynamicEntryBox, EntryWidgetClass); }


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UDynamicEntryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
