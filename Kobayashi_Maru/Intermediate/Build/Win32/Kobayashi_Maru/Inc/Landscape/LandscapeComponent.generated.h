// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ULandscapeLayerInfoObject;
class UMaterialInstanceDynamic;
#ifdef LANDSCAPE_LandscapeComponent_generated_h
#error "LandscapeComponent.generated.h already included, missing '#pragma once' in LandscapeComponent.h"
#endif
#define LANDSCAPE_LandscapeComponent_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerComponentData>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHeightmapData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FHeightmapData>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightmapData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FWeightmapData>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeComponentMaterialOverride>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FWeightmapLayerAllocationInfo>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeEditToolRenderData>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightByNameAtLocation); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightAtLocation); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic);


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightByNameAtLocation); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightAtLocation); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic);


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeComponent, LANDSCAPE_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend struct Z_Construct_UClass_ULandscapeComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend struct Z_Construct_UClass_ULandscapeComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeComponent(ULandscapeComponent&&); \
	LANDSCAPE_API ULandscapeComponent(const ULandscapeComponent&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeComponent(ULandscapeComponent&&); \
	LANDSCAPE_API ULandscapeComponent(const ULandscapeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeightmapTexture() { return STRUCT_OFFSET(ULandscapeComponent, HeightmapTexture); } \
	FORCEINLINE static uint32 __PPO__WeightmapLayerAllocations() { return STRUCT_OFFSET(ULandscapeComponent, WeightmapLayerAllocations); } \
	FORCEINLINE static uint32 __PPO__WeightmapTextures() { return STRUCT_OFFSET(ULandscapeComponent, WeightmapTextures); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_361_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_364_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h


#define FOREACH_ENUM_ELANDSCAPECLEARMODE(op) \
	op(Clear_Weightmap) \
	op(Clear_Heightmap) \
	op(Clear_All) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
