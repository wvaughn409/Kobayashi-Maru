// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UOculusMR_Settings;
#ifdef OCULUSMR_OculusMRFunctionLibrary_generated_h
#error "OculusMRFunctionLibrary.generated.h already included, missing '#pragma once' in OculusMRFunctionLibrary.h"
#endif
#define OCULUSMR_OculusMRFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_SPARSE_DATA
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusMRSettings);


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusMRSettings);


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMRFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOculusMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMRFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMRFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMRFunctionLibrary(UOculusMRFunctionLibrary&&); \
	NO_API UOculusMRFunctionLibrary(const UOculusMRFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMRFunctionLibrary(UOculusMRFunctionLibrary&&); \
	NO_API UOculusMRFunctionLibrary(const UOculusMRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMRFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMRFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_17_PROLOG
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_SPARSE_DATA \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_SPARSE_DATA \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusMRFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSMR_API UClass* StaticClass<class UOculusMRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
