// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionViewProperty_generated_h
#error "MaterialExpressionViewProperty.generated.h already included, missing '#pragma once' in MaterialExpressionViewProperty.h"
#endif
#define ENGINE_MaterialExpressionViewProperty_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionViewProperty(); \
	friend struct Z_Construct_UClass_UMaterialExpressionViewProperty_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionViewProperty, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionViewProperty)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionViewProperty(); \
	friend struct Z_Construct_UClass_UMaterialExpressionViewProperty_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionViewProperty, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionViewProperty)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionViewProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionViewProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionViewProperty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionViewProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionViewProperty(UMaterialExpressionViewProperty&&); \
	ENGINE_API UMaterialExpressionViewProperty(const UMaterialExpressionViewProperty&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionViewProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionViewProperty(UMaterialExpressionViewProperty&&); \
	ENGINE_API UMaterialExpressionViewProperty(const UMaterialExpressionViewProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionViewProperty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionViewProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionViewProperty)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_44_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionViewProperty."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionViewProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h


#define FOREACH_ENUM_EMATERIALEXPOSEDVIEWPROPERTY(op) \
	op(MEVP_BufferSize) \
	op(MEVP_FieldOfView) \
	op(MEVP_TanHalfFieldOfView) \
	op(MEVP_ViewSize) \
	op(MEVP_WorldSpaceViewPosition) \
	op(MEVP_WorldSpaceCameraPosition) \
	op(MEVP_ViewportOffset) \
	op(MEVP_TemporalSampleCount) \
	op(MEVP_TemporalSampleIndex) \
	op(MEVP_TemporalSampleOffset) \
	op(MEVP_RuntimeVirtualTextureOutputLevel) \
	op(MEVP_RuntimeVirtualTextureOutputDerivative) \
	op(MEVP_PreExposure) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
