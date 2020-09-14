// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSXVEHICLES_WheeledVehicle_generated_h
#error "WheeledVehicle.generated.h already included, missing '#pragma once' in WheeledVehicle.h"
#endif
#define PHYSXVEHICLES_WheeledVehicle_generated_h

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_SPARSE_DATA
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_RPC_WRAPPERS
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWheeledVehicle(); \
	friend struct Z_Construct_UClass_AWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AWheeledVehicle, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(AWheeledVehicle)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAWheeledVehicle(); \
	friend struct Z_Construct_UClass_AWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AWheeledVehicle, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(AWheeledVehicle)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWheeledVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWheeledVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWheeledVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWheeledVehicle(AWheeledVehicle&&); \
	NO_API AWheeledVehicle(const AWheeledVehicle&); \
public:


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWheeledVehicle(AWheeledVehicle&&); \
	NO_API AWheeledVehicle(const AWheeledVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWheeledVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWheeledVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWheeledVehicle)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AWheeledVehicle, Mesh); } \
	FORCEINLINE static uint32 __PPO__VehicleMovement() { return STRUCT_OFFSET(AWheeledVehicle, VehicleMovement); }


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_22_PROLOG
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_SPARSE_DATA \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_RPC_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_INCLASS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_SPARSE_DATA \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WheeledVehicle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSXVEHICLES_API UClass* StaticClass<class AWheeledVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
