// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureLightProfile;
struct FColor;
struct FVector;
class UMaterialInterface;
struct FLinearColor;
#ifdef ENGINE_LightComponent_generated_h
#error "LightComponent.generated.h already included, missing '#pragma once' in LightComponent.h"
#endif
#define ENGINE_LightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_467_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrecomputedLightInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetForceCachedShadowsForMovablePrimitives); \
	DECLARE_FUNCTION(execSetSpecularScale); \
	DECLARE_FUNCTION(execSetShadowSlopeBias); \
	DECLARE_FUNCTION(execSetShadowBias); \
	DECLARE_FUNCTION(execSetIESBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIESBrightness); \
	DECLARE_FUNCTION(execSetIESTexture); \
	DECLARE_FUNCTION(execSetBloomTint); \
	DECLARE_FUNCTION(execSetBloomMaxBrightness); \
	DECLARE_FUNCTION(execSetBloomThreshold); \
	DECLARE_FUNCTION(execSetBloomScale); \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom); \
	DECLARE_FUNCTION(execSetTransmission); \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting); \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting); \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness); \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance); \
	DECLARE_FUNCTION(execSetLightFunctionScale); \
	DECLARE_FUNCTION(execSetLightFunctionMaterial); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity); \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity); \
	DECLARE_FUNCTION(execSetIntensity);


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetForceCachedShadowsForMovablePrimitives); \
	DECLARE_FUNCTION(execSetSpecularScale); \
	DECLARE_FUNCTION(execSetShadowSlopeBias); \
	DECLARE_FUNCTION(execSetShadowBias); \
	DECLARE_FUNCTION(execSetIESBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIESBrightness); \
	DECLARE_FUNCTION(execSetIESTexture); \
	DECLARE_FUNCTION(execSetBloomTint); \
	DECLARE_FUNCTION(execSetBloomMaxBrightness); \
	DECLARE_FUNCTION(execSetBloomThreshold); \
	DECLARE_FUNCTION(execSetBloomScale); \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom); \
	DECLARE_FUNCTION(execSetTransmission); \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting); \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting); \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness); \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance); \
	DECLARE_FUNCTION(execSetLightFunctionScale); \
	DECLARE_FUNCTION(execSetLightFunctionMaterial); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity); \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity); \
	DECLARE_FUNCTION(execSetIntensity);


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend struct Z_Construct_UClass_ULightComponent_Statics; \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend struct Z_Construct_UClass_ULightComponent_Statics; \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponent(ULightComponent&&); \
	NO_API ULightComponent(const ULightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponent(ULightComponent&&); \
	NO_API ULightComponent(const ULightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
