// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARIANTMANAGERCONTENT_PropertyValue_generated_h
#error "PropertyValue.generated.h already included, missing '#pragma once' in PropertyValue.h"
#endif
#define VARIANTMANAGERCONTENT_PropertyValue_generated_h

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturedPropSegment_Statics; \
	VARIANTMANAGERCONTENT_API static class UScriptStruct* StaticStruct();


template<> VARIANTMANAGERCONTENT_API UScriptStruct* StaticStruct<struct FCapturedPropSegment>();

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_SPARSE_DATA
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasRecordedData); \
	DECLARE_FUNCTION(execGetFullDisplayString); \
	DECLARE_FUNCTION(execGetPropertyTooltip);


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasRecordedData); \
	DECLARE_FUNCTION(execGetFullDisplayString); \
	DECLARE_FUNCTION(execGetPropertyTooltip);


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValue, NO_API)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyValue(); \
	friend struct Z_Construct_UClass_UPropertyValue_Statics; \
public: \
	DECLARE_CLASS(UPropertyValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UPropertyValue) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValue(); \
	friend struct Z_Construct_UClass_UPropertyValue_Statics; \
public: \
	DECLARE_CLASS(UPropertyValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UPropertyValue) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyValue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyValue(UPropertyValue&&); \
	NO_API UPropertyValue(const UPropertyValue&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyValue(UPropertyValue&&); \
	NO_API UPropertyValue(const UPropertyValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyValue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValue)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Properties_DEPRECATED() { return STRUCT_OFFSET(UPropertyValue, Properties_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PropertyIndices_DEPRECATED() { return STRUCT_OFFSET(UPropertyValue, PropertyIndices_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__CapturedPropSegments() { return STRUCT_OFFSET(UPropertyValue, CapturedPropSegments); } \
	FORCEINLINE static uint32 __PPO__FullDisplayString() { return STRUCT_OFFSET(UPropertyValue, FullDisplayString); } \
	FORCEINLINE static uint32 __PPO__PropertySetterName() { return STRUCT_OFFSET(UPropertyValue, PropertySetterName); } \
	FORCEINLINE static uint32 __PPO__PropertySetterParameterDefaults() { return STRUCT_OFFSET(UPropertyValue, PropertySetterParameterDefaults); } \
	FORCEINLINE static uint32 __PPO__bHasRecordedData() { return STRUCT_OFFSET(UPropertyValue, bHasRecordedData); } \
	FORCEINLINE static uint32 __PPO__LeafPropertyClass_DEPRECATED() { return STRUCT_OFFSET(UPropertyValue, LeafPropertyClass_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__ValueBytes() { return STRUCT_OFFSET(UPropertyValue, ValueBytes); } \
	FORCEINLINE static uint32 __PPO__PropCategory() { return STRUCT_OFFSET(UPropertyValue, PropCategory); }


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_57_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_60_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PropertyValue."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class UPropertyValue>();

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_SPARSE_DATA
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueTransform, NO_API)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyValueTransform(); \
	friend struct Z_Construct_UClass_UPropertyValueTransform_Statics; \
public: \
	DECLARE_CLASS(UPropertyValueTransform, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UPropertyValueTransform) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueTransform(); \
	friend struct Z_Construct_UClass_UPropertyValueTransform_Statics; \
public: \
	DECLARE_CLASS(UPropertyValueTransform, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UPropertyValueTransform) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyValueTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyValueTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyValueTransform(UPropertyValueTransform&&); \
	NO_API UPropertyValueTransform(const UPropertyValueTransform&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyValueTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyValueTransform(UPropertyValueTransform&&); \
	NO_API UPropertyValueTransform(const UPropertyValueTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyValueTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueTransform)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_231_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_234_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PropertyValueTransform."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class UPropertyValueTransform>();

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_SPARSE_DATA
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueVisibility, NO_API)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyValueVisibility(); \
	friend struct Z_Construct_UClass_UPropertyValueVisibility_Statics; \
public: \
	DECLARE_CLASS(UPropertyValueVisibility, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UPropertyValueVisibility) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueVisibility(); \
	friend struct Z_Construct_UClass_UPropertyValueVisibility_Statics; \
public: \
	DECLARE_CLASS(UPropertyValueVisibility, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UPropertyValueVisibility) \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_ARCHIVESERIALIZER


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyValueVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueVisibility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyValueVisibility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueVisibility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyValueVisibility(UPropertyValueVisibility&&); \
	NO_API UPropertyValueVisibility(const UPropertyValueVisibility&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyValueVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyValueVisibility(UPropertyValueVisibility&&); \
	NO_API UPropertyValueVisibility(const UPropertyValueVisibility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyValueVisibility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueVisibility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueVisibility)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_242_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_245_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PropertyValueVisibility."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class UPropertyValueVisibility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h


#define FOREACH_ENUM_EPROPERTYVALUECATEGORY(op) \
	op(EPropertyValueCategory::Undefined) \
	op(EPropertyValueCategory::Generic) \
	op(EPropertyValueCategory::RelativeLocation) \
	op(EPropertyValueCategory::RelativeRotation) \
	op(EPropertyValueCategory::RelativeScale3D) \
	op(EPropertyValueCategory::Visibility) \
	op(EPropertyValueCategory::Material) \
	op(EPropertyValueCategory::Color) \
	op(EPropertyValueCategory::Option) 

enum class EPropertyValueCategory : uint8;
template<> VARIANTMANAGERCONTENT_API UEnum* StaticEnum<EPropertyValueCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
