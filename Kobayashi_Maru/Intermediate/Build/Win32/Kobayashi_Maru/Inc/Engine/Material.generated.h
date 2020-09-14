// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Material_generated_h
#error "Material.generated.h already included, missing '#pragma once' in Material.h"
#endif
#define ENGINE_Material_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_269_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameterGroupData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParameterGroupData>();

#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterial, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterial(); \
	friend struct Z_Construct_UClass_UMaterial_Statics; \
public: \
	DECLARE_CLASS(UMaterial, UMaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterial) \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_INCLASS \
private: \
	static void StaticRegisterNativesUMaterial(); \
	friend struct Z_Construct_UClass_UMaterial_Statics; \
public: \
	DECLARE_CLASS(UMaterial, UMaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterial) \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterial(UMaterial&&); \
	ENGINE_API UMaterial(const UMaterial&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterial(UMaterial&&); \
	ENGINE_API UMaterial(const UMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterial)


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShadingModel() { return STRUCT_OFFSET(UMaterial, ShadingModel); } \
	FORCEINLINE static uint32 __PPO__ShadingModels() { return STRUCT_OFFSET(UMaterial, ShadingModels); } \
	FORCEINLINE static uint32 __PPO__CachedExpressionData() { return STRUCT_OFFSET(UMaterial, CachedExpressionData); }


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_296_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_Material_h_299_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Material."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_Material_h


#define FOREACH_ENUM_EMATERIALDECALRESPONSE(op) \
	op(MDR_None) \
	op(MDR_ColorNormalRoughness) \
	op(MDR_Color) \
	op(MDR_ColorNormal) \
	op(MDR_ColorRoughness) \
	op(MDR_Normal) \
	op(MDR_NormalRoughness) \
	op(MDR_Roughness) 
#define FOREACH_ENUM_EDECALBLENDMODE(op) \
	op(DBM_Translucent) \
	op(DBM_Stain) \
	op(DBM_Normal) \
	op(DBM_Emissive) \
	op(DBM_DBuffer_ColorNormalRoughness) \
	op(DBM_DBuffer_Color) \
	op(DBM_DBuffer_ColorNormal) \
	op(DBM_DBuffer_ColorRoughness) \
	op(DBM_DBuffer_Normal) \
	op(DBM_DBuffer_NormalRoughness) \
	op(DBM_DBuffer_Roughness) \
	op(DBM_DBuffer_Emissive) \
	op(DBM_DBuffer_AlphaComposite) \
	op(DBM_DBuffer_EmissiveAlphaComposite) \
	op(DBM_Volumetric_DistanceFunction) \
	op(DBM_AlphaComposite) \
	op(DBM_AmbientOcclusion) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
