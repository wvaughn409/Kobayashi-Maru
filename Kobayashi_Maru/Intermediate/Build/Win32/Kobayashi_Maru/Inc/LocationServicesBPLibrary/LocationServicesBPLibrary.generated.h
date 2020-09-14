// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLocationServicesData;
class ULocationServicesImpl;
enum class ELocationAccuracy : uint8;
#ifdef LOCATIONSERVICESBPLIBRARY_LocationServicesBPLibrary_generated_h
#error "LocationServicesBPLibrary.generated.h already included, missing '#pragma once' in LocationServicesBPLibrary.h"
#endif
#define LOCATIONSERVICESBPLIBRARY_LocationServicesBPLibrary_generated_h

#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationServicesData_Statics; \
	LOCATIONSERVICESBPLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOCATIONSERVICESBPLIBRARY_API UScriptStruct* StaticStruct<struct FLocationServicesData>();

#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_69_DELEGATE \
struct _Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms \
{ \
	FLocationServicesData LocationData; \
}; \
static inline void FLocationServicesData_OnLocationChanged_DelegateWrapper(const FMulticastScriptDelegate& LocationServicesData_OnLocationChanged, FLocationServicesData LocationData) \
{ \
	_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms Parms; \
	Parms.LocationData=LocationData; \
	LocationServicesData_OnLocationChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_SPARSE_DATA
#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocationServicesImpl); \
	DECLARE_FUNCTION(execIsLocationAccuracyAvailable); \
	DECLARE_FUNCTION(execAreLocationServicesEnabled); \
	DECLARE_FUNCTION(execGetLastKnownLocation); \
	DECLARE_FUNCTION(execStopLocationServices); \
	DECLARE_FUNCTION(execStartLocationServices); \
	DECLARE_FUNCTION(execInitLocationServices);


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocationServicesImpl); \
	DECLARE_FUNCTION(execIsLocationAccuracyAvailable); \
	DECLARE_FUNCTION(execAreLocationServicesEnabled); \
	DECLARE_FUNCTION(execGetLastKnownLocation); \
	DECLARE_FUNCTION(execStopLocationServices); \
	DECLARE_FUNCTION(execStartLocationServices); \
	DECLARE_FUNCTION(execInitLocationServices);


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocationServices(); \
	friend struct Z_Construct_UClass_ULocationServices_Statics; \
public: \
	DECLARE_CLASS(ULocationServices, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocationServicesBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULocationServices)


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS \
private: \
	static void StaticRegisterNativesULocationServices(); \
	friend struct Z_Construct_UClass_ULocationServices_Statics; \
public: \
	DECLARE_CLASS(ULocationServices, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocationServicesBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULocationServices)


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationServices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationServices) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationServices); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationServices); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationServices(ULocationServices&&); \
	NO_API ULocationServices(const ULocationServices&); \
public:


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationServices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationServices(ULocationServices&&); \
	NO_API ULocationServices(const ULocationServices&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationServices); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationServices); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationServices)


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_73_PROLOG
#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_SPARSE_DATA \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_SPARSE_DATA \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocationServices."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<class ULocationServices>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h


#define FOREACH_ENUM_ELOCATIONACCURACY(op) \
	op(ELocationAccuracy::LA_ThreeKilometers) \
	op(ELocationAccuracy::LA_OneKilometer) \
	op(ELocationAccuracy::LA_HundredMeters) \
	op(ELocationAccuracy::LA_TenMeters) \
	op(ELocationAccuracy::LA_Best) \
	op(ELocationAccuracy::LA_Navigation) 

enum class ELocationAccuracy : uint8;
template<> LOCATIONSERVICESBPLIBRARY_API UEnum* StaticEnum<ELocationAccuracy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
