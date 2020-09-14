// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_AtmosphericFogComponent_generated_h
#error "AtmosphericFogComponent.generated.h already included, missing '#pragma once' in AtmosphericFogComponent.h"
#endif
#define ENGINE_AtmosphericFogComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAtmospherePrecomputeInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAtmospherePrecomputeParameters>();

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartPrecompute); \
	DECLARE_FUNCTION(execSetPrecomputeParams); \
	DECLARE_FUNCTION(execDisableGroundScattering); \
	DECLARE_FUNCTION(execDisableSunDisk); \
	DECLARE_FUNCTION(execSetDistanceOffset); \
	DECLARE_FUNCTION(execSetStartDistance); \
	DECLARE_FUNCTION(execSetAltitudeScale); \
	DECLARE_FUNCTION(execSetDistanceScale); \
	DECLARE_FUNCTION(execSetDensityOffset); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetFogMultiplier); \
	DECLARE_FUNCTION(execSetSunMultiplier); \
	DECLARE_FUNCTION(execSetDefaultLightColor); \
	DECLARE_FUNCTION(execSetDefaultBrightness);


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartPrecompute); \
	DECLARE_FUNCTION(execSetPrecomputeParams); \
	DECLARE_FUNCTION(execDisableGroundScattering); \
	DECLARE_FUNCTION(execDisableSunDisk); \
	DECLARE_FUNCTION(execSetDistanceOffset); \
	DECLARE_FUNCTION(execSetStartDistance); \
	DECLARE_FUNCTION(execSetAltitudeScale); \
	DECLARE_FUNCTION(execSetDistanceScale); \
	DECLARE_FUNCTION(execSetDensityOffset); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetFogMultiplier); \
	DECLARE_FUNCTION(execSetSunMultiplier); \
	DECLARE_FUNCTION(execSetDefaultLightColor); \
	DECLARE_FUNCTION(execSetDefaultBrightness);


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtmosphericFogComponent, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
public: \
	DECLARE_CLASS(UAtmosphericFogComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
public: \
	DECLARE_CLASS(UAtmosphericFogComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAtmosphericFogComponent(UAtmosphericFogComponent&&); \
	ENGINE_API UAtmosphericFogComponent(const UAtmosphericFogComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAtmosphericFogComponent(UAtmosphericFogComponent&&); \
	ENGINE_API UAtmosphericFogComponent(const UAtmosphericFogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrecomputeParams() { return STRUCT_OFFSET(UAtmosphericFogComponent, PrecomputeParams); }


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_100_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_103_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtmosphericFogComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAtmosphericFogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
