// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSXVEHICLES_VehicleWheel_generated_h
#error "VehicleWheel.generated.h already included, missing '#pragma once' in VehicleWheel.h"
#endif
#define PHYSXVEHICLES_VehicleWheel_generated_h

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_SPARSE_DATA
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execGetSuspensionOffset); \
	DECLARE_FUNCTION(execGetRotationAngle); \
	DECLARE_FUNCTION(execGetSteerAngle);


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execGetSuspensionOffset); \
	DECLARE_FUNCTION(execGetRotationAngle); \
	DECLARE_FUNCTION(execGetSteerAngle);


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleWheel(); \
	friend struct Z_Construct_UClass_UVehicleWheel_Statics; \
public: \
	DECLARE_CLASS(UVehicleWheel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(UVehicleWheel)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleWheel(); \
	friend struct Z_Construct_UClass_UVehicleWheel_Statics; \
public: \
	DECLARE_CLASS(UVehicleWheel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(UVehicleWheel)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleWheel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleWheel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleWheel(UVehicleWheel&&); \
	NO_API UVehicleWheel(const UVehicleWheel&); \
public:


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleWheel(UVehicleWheel&&); \
	NO_API UVehicleWheel(const UVehicleWheel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleWheel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleWheel)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_37_PROLOG
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_SPARSE_DATA \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_RPC_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_INCLASS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_SPARSE_DATA \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VehicleWheel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSXVEHICLES_API UClass* StaticClass<class UVehicleWheel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_VehicleWheel_h


#define FOREACH_ENUM_EWHEELSWEEPTYPE(op) \
	op(SimpleAndComplex) \
	op(Simple) \
	op(Complex) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
