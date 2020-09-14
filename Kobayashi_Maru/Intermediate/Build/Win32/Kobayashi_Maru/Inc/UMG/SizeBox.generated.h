// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SizeBox_generated_h
#error "SizeBox.generated.h already included, missing '#pragma once' in SizeBox.h"
#endif
#define UMG_SizeBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearMaxAspectRatio); \
	DECLARE_FUNCTION(execClearMinAspectRatio); \
	DECLARE_FUNCTION(execSetMaxAspectRatio); \
	DECLARE_FUNCTION(execSetMinAspectRatio); \
	DECLARE_FUNCTION(execClearMaxDesiredHeight); \
	DECLARE_FUNCTION(execSetMaxDesiredHeight); \
	DECLARE_FUNCTION(execClearMaxDesiredWidth); \
	DECLARE_FUNCTION(execSetMaxDesiredWidth); \
	DECLARE_FUNCTION(execClearMinDesiredHeight); \
	DECLARE_FUNCTION(execSetMinDesiredHeight); \
	DECLARE_FUNCTION(execClearMinDesiredWidth); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execClearHeightOverride); \
	DECLARE_FUNCTION(execSetHeightOverride); \
	DECLARE_FUNCTION(execClearWidthOverride); \
	DECLARE_FUNCTION(execSetWidthOverride);


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearMaxAspectRatio); \
	DECLARE_FUNCTION(execClearMinAspectRatio); \
	DECLARE_FUNCTION(execSetMaxAspectRatio); \
	DECLARE_FUNCTION(execSetMinAspectRatio); \
	DECLARE_FUNCTION(execClearMaxDesiredHeight); \
	DECLARE_FUNCTION(execSetMaxDesiredHeight); \
	DECLARE_FUNCTION(execClearMaxDesiredWidth); \
	DECLARE_FUNCTION(execSetMaxDesiredWidth); \
	DECLARE_FUNCTION(execClearMinDesiredHeight); \
	DECLARE_FUNCTION(execSetMinDesiredHeight); \
	DECLARE_FUNCTION(execClearMinDesiredWidth); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execClearHeightOverride); \
	DECLARE_FUNCTION(execSetHeightOverride); \
	DECLARE_FUNCTION(execClearWidthOverride); \
	DECLARE_FUNCTION(execSetWidthOverride);


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSizeBox(); \
	friend struct Z_Construct_UClass_USizeBox_Statics; \
public: \
	DECLARE_CLASS(USizeBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USizeBox)


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSizeBox(); \
	friend struct Z_Construct_UClass_USizeBox_Statics; \
public: \
	DECLARE_CLASS(USizeBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USizeBox)


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USizeBox(USizeBox&&); \
	NO_API USizeBox(const USizeBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USizeBox(USizeBox&&); \
	NO_API USizeBox(const USizeBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBox)


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SizeBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USizeBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SizeBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
