// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstance;
class UMaterialInterface;
struct FMaterialParameterInfo;
struct FLinearColor;
class UTexture;
#ifdef ENGINE_MaterialInstanceDynamic_generated_h
#error "MaterialInstanceDynamic.generated.h already included, missing '#pragma once' in MaterialInstanceDynamic.h"
#endif
#define ENGINE_MaterialInstanceDynamic_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyParameterOverrides); \
	DECLARE_FUNCTION(execCopyInterpParameters); \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters); \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execSetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyParameterOverrides); \
	DECLARE_FUNCTION(execCopyInterpParameters); \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters); \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execSetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialInstanceDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialInstanceDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialInstanceDynamic(UMaterialInstanceDynamic&&); \
	NO_API UMaterialInstanceDynamic(const UMaterialInstanceDynamic&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialInstanceDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialInstanceDynamic(UMaterialInstanceDynamic&&); \
	NO_API UMaterialInstanceDynamic(const UMaterialInstanceDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialInstanceDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceDynamic)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstanceDynamic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
