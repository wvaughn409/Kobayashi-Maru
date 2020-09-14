// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UUserWidget;
#ifdef UMG_DynamicEntryBoxBase_generated_h
#error "DynamicEntryBoxBase.generated.h already included, missing '#pragma once' in DynamicEntryBoxBase.h"
#endif
#define UMG_DynamicEntryBoxBase_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEntrySpacing); \
	DECLARE_FUNCTION(execGetNumEntries); \
	DECLARE_FUNCTION(execGetAllEntries);


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEntrySpacing); \
	DECLARE_FUNCTION(execGetNumEntries); \
	DECLARE_FUNCTION(execGetAllEntries);


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicEntryBoxBase(); \
	friend struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBoxBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBoxBase)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicEntryBoxBase(); \
	friend struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBoxBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBoxBase)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicEntryBoxBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBoxBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBoxBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBoxBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBoxBase(UDynamicEntryBoxBase&&); \
	NO_API UDynamicEntryBoxBase(const UDynamicEntryBoxBase&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBoxBase(UDynamicEntryBoxBase&&); \
	NO_API UDynamicEntryBoxBase(const UDynamicEntryBoxBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBoxBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBoxBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBoxBase)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EntryBoxType() { return STRUCT_OFFSET(UDynamicEntryBoxBase, EntryBoxType); } \
	FORCEINLINE static uint32 __PPO__EntrySpacing() { return STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySpacing); } \
	FORCEINLINE static uint32 __PPO__SpacingPattern() { return STRUCT_OFFSET(UDynamicEntryBoxBase, SpacingPattern); } \
	FORCEINLINE static uint32 __PPO__EntrySizeRule() { return STRUCT_OFFSET(UDynamicEntryBoxBase, EntrySizeRule); } \
	FORCEINLINE static uint32 __PPO__EntryHorizontalAlignment() { return STRUCT_OFFSET(UDynamicEntryBoxBase, EntryHorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__EntryVerticalAlignment() { return STRUCT_OFFSET(UDynamicEntryBoxBase, EntryVerticalAlignment); } \
	FORCEINLINE static uint32 __PPO__MaxElementSize() { return STRUCT_OFFSET(UDynamicEntryBoxBase, MaxElementSize); } \
	FORCEINLINE static uint32 __PPO__EntryWidgetPool() { return STRUCT_OFFSET(UDynamicEntryBoxBase, EntryWidgetPool); }


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_28_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UDynamicEntryBoxBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h


#define FOREACH_ENUM_EDYNAMICBOXTYPE(op) \
	op(EDynamicBoxType::Horizontal) \
	op(EDynamicBoxType::Vertical) \
	op(EDynamicBoxType::Wrap) \
	op(EDynamicBoxType::Overlay) 

enum class EDynamicBoxType : uint8;
template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
