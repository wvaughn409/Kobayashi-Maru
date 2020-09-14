// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FVector;
#ifdef ENGINE_SkyAtmosphereComponent_generated_h
#error "SkyAtmosphereComponent.generated.h already included, missing '#pragma once' in SkyAtmosphereComponent.h"
#endif
#define ENGINE_SkyAtmosphereComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTentDistribution_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTentDistribution>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHeightFogContribution); \
	DECLARE_FUNCTION(execSetAerialPespectiveViewDistanceScale); \
	DECLARE_FUNCTION(execSetSkyLuminanceFactor); \
	DECLARE_FUNCTION(execSetOtherAbsorption); \
	DECLARE_FUNCTION(execSetOtherAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieExponentialDistribution); \
	DECLARE_FUNCTION(execSetMieAnisotropy); \
	DECLARE_FUNCTION(execSetMieAbsorption); \
	DECLARE_FUNCTION(execSetMieAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieScattering); \
	DECLARE_FUNCTION(execSetMieScatteringScale); \
	DECLARE_FUNCTION(execSetRayleighExponentialDistribution); \
	DECLARE_FUNCTION(execSetRayleighScattering); \
	DECLARE_FUNCTION(execSetRayleighScatteringScale); \
	DECLARE_FUNCTION(execOverrideAtmosphereLightDirection);


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHeightFogContribution); \
	DECLARE_FUNCTION(execSetAerialPespectiveViewDistanceScale); \
	DECLARE_FUNCTION(execSetSkyLuminanceFactor); \
	DECLARE_FUNCTION(execSetOtherAbsorption); \
	DECLARE_FUNCTION(execSetOtherAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieExponentialDistribution); \
	DECLARE_FUNCTION(execSetMieAnisotropy); \
	DECLARE_FUNCTION(execSetMieAbsorption); \
	DECLARE_FUNCTION(execSetMieAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieScattering); \
	DECLARE_FUNCTION(execSetMieScatteringScale); \
	DECLARE_FUNCTION(execSetRayleighExponentialDistribution); \
	DECLARE_FUNCTION(execSetRayleighScattering); \
	DECLARE_FUNCTION(execSetRayleighScatteringScale); \
	DECLARE_FUNCTION(execOverrideAtmosphereLightDirection);


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkyAtmosphereComponent, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyAtmosphereComponent(); \
	friend struct Z_Construct_UClass_USkyAtmosphereComponent_Statics; \
public: \
	DECLARE_CLASS(USkyAtmosphereComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkyAtmosphereComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUSkyAtmosphereComponent(); \
	friend struct Z_Construct_UClass_USkyAtmosphereComponent_Statics; \
public: \
	DECLARE_CLASS(USkyAtmosphereComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkyAtmosphereComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyAtmosphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkyAtmosphereComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyAtmosphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkyAtmosphereComponent(USkyAtmosphereComponent&&); \
	ENGINE_API USkyAtmosphereComponent(const USkyAtmosphereComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkyAtmosphereComponent(USkyAtmosphereComponent&&); \
	ENGINE_API USkyAtmosphereComponent(const USkyAtmosphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkyAtmosphereComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyAtmosphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyAtmosphereComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bStaticLightingBuiltGUID() { return STRUCT_OFFSET(USkyAtmosphereComponent, bStaticLightingBuiltGUID); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_44_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyAtmosphereComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkyAtmosphereComponent>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkyAtmosphere(); \
	friend struct Z_Construct_UClass_ASkyAtmosphere_Statics; \
public: \
	DECLARE_CLASS(ASkyAtmosphere, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASkyAtmosphere)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_INCLASS \
private: \
	static void StaticRegisterNativesASkyAtmosphere(); \
	friend struct Z_Construct_UClass_ASkyAtmosphere_Statics; \
public: \
	DECLARE_CLASS(ASkyAtmosphere, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASkyAtmosphere)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkyAtmosphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyAtmosphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkyAtmosphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyAtmosphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASkyAtmosphere(ASkyAtmosphere&&); \
	ENGINE_API ASkyAtmosphere(const ASkyAtmosphere&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkyAtmosphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASkyAtmosphere(ASkyAtmosphere&&); \
	ENGINE_API ASkyAtmosphere(const ASkyAtmosphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkyAtmosphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyAtmosphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyAtmosphere)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkyAtmosphereComponent() { return STRUCT_OFFSET(ASkyAtmosphere, SkyAtmosphereComponent); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_245_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_248_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyAtmosphere."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASkyAtmosphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h


#define FOREACH_ENUM_ESKYATMOSPHERETRANSFORMMODE(op) \
	op(ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin) \
	op(ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform) \
	op(ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform) 

enum class ESkyAtmosphereTransformMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESkyAtmosphereTransformMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
