// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef STEAMVRINPUTDEVICE_SteamVRTrackingRefComponent_generated_h
#error "SteamVRTrackingRefComponent.generated.h already included, missing '#pragma once' in SteamVRTrackingRefComponent.h"
#endif
#define STEAMVRINPUTDEVICE_SteamVRTrackingRefComponent_generated_h

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_40_DELEGATE \
struct _Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms \
{ \
	int32 DeviceID; \
	FName DeviceClass; \
	FString DeviceModel; \
}; \
static inline void FComponentTrackingDeactivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentTrackingDeactivatedSignature, int32 DeviceID, FName DeviceClass, const FString& DeviceModel) \
{ \
	_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.DeviceClass=DeviceClass; \
	Parms.DeviceModel=DeviceModel; \
	ComponentTrackingDeactivatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_39_DELEGATE \
struct _Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms \
{ \
	int32 DeviceID; \
	FName DeviceClass; \
	FString DeviceModel; \
}; \
static inline void FComponentTrackingActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentTrackingActivatedSignature, int32 DeviceID, FName DeviceClass, const FString& DeviceModel) \
{ \
	_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms Parms; \
	Parms.DeviceID=DeviceID; \
	Parms.DeviceClass=DeviceClass; \
	Parms.DeviceModel=DeviceModel; \
	ComponentTrackingActivatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_SPARSE_DATA
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideTrackingReferences); \
	DECLARE_FUNCTION(execShowTrackingReferences);


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideTrackingReferences); \
	DECLARE_FUNCTION(execShowTrackingReferences);


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRTrackingReferences(); \
	friend struct Z_Construct_UClass_USteamVRTrackingReferences_Statics; \
public: \
	DECLARE_CLASS(USteamVRTrackingReferences, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(USteamVRTrackingReferences)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRTrackingReferences(); \
	friend struct Z_Construct_UClass_USteamVRTrackingReferences_Statics; \
public: \
	DECLARE_CLASS(USteamVRTrackingReferences, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(USteamVRTrackingReferences)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRTrackingReferences(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRTrackingReferences) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRTrackingReferences); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRTrackingReferences); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRTrackingReferences(USteamVRTrackingReferences&&); \
	NO_API USteamVRTrackingReferences(const USteamVRTrackingReferences&); \
public:


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRTrackingReferences(USteamVRTrackingReferences&&); \
	NO_API USteamVRTrackingReferences(const USteamVRTrackingReferences&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRTrackingReferences); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRTrackingReferences); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamVRTrackingReferences)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_42_PROLOG
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_SPARSE_DATA \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_SPARSE_DATA \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<class USteamVRTrackingReferences>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
