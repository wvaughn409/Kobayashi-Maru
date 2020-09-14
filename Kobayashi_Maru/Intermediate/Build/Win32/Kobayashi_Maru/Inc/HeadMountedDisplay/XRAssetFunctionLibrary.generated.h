// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FTransform;
struct FXRDeviceId;
class UAsyncTask_LoadXRDeviceVisComponent;
#ifdef HEADMOUNTEDDISPLAY_XRAssetFunctionLibrary_generated_h
#error "XRAssetFunctionLibrary.generated.h already included, missing '#pragma once' in XRAssetFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_XRAssetFunctionLibrary_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_64_DELEGATE \
struct _Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms \
{ \
	const UPrimitiveComponent* LoadedComponent; \
}; \
static inline void FDeviceModelLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeviceModelLoadedDelegate, const UPrimitiveComponent* LoadedComponent) \
{ \
	_Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms Parms; \
	Parms.LoadedComponent=LoadedComponent; \
	DeviceModelLoadedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNamedDeviceVisualizationComponentBlocking); \
	DECLARE_FUNCTION(execAddDeviceVisualizationComponentBlocking);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNamedDeviceVisualizationComponentBlocking); \
	DECLARE_FUNCTION(execAddDeviceVisualizationComponentBlocking);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRAssetFunctionLibrary(); \
	friend struct Z_Construct_UClass_UXRAssetFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRAssetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UXRAssetFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUXRAssetFunctionLibrary(); \
	friend struct Z_Construct_UClass_UXRAssetFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRAssetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UXRAssetFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRAssetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRAssetFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRAssetFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRAssetFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRAssetFunctionLibrary(UXRAssetFunctionLibrary&&); \
	NO_API UXRAssetFunctionLibrary(const UXRAssetFunctionLibrary&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRAssetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRAssetFunctionLibrary(UXRAssetFunctionLibrary&&); \
	NO_API UXRAssetFunctionLibrary(const UXRAssetFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRAssetFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRAssetFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRAssetFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_19_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class XRAssetFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UXRAssetFunctionLibrary>();

#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddDeviceVisualizationComponentAsync); \
	DECLARE_FUNCTION(execAddNamedDeviceVisualizationComponentAsync);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddDeviceVisualizationComponentAsync); \
	DECLARE_FUNCTION(execAddNamedDeviceVisualizationComponentAsync);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent(); \
	friend struct Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics; \
public: \
	DECLARE_CLASS(UAsyncTask_LoadXRDeviceVisComponent, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTask_LoadXRDeviceVisComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent(); \
	friend struct Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics; \
public: \
	DECLARE_CLASS(UAsyncTask_LoadXRDeviceVisComponent, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTask_LoadXRDeviceVisComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTask_LoadXRDeviceVisComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTask_LoadXRDeviceVisComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTask_LoadXRDeviceVisComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTask_LoadXRDeviceVisComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTask_LoadXRDeviceVisComponent(UAsyncTask_LoadXRDeviceVisComponent&&); \
	NO_API UAsyncTask_LoadXRDeviceVisComponent(const UAsyncTask_LoadXRDeviceVisComponent&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTask_LoadXRDeviceVisComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTask_LoadXRDeviceVisComponent(UAsyncTask_LoadXRDeviceVisComponent&&); \
	NO_API UAsyncTask_LoadXRDeviceVisComponent(const UAsyncTask_LoadXRDeviceVisComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTask_LoadXRDeviceVisComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTask_LoadXRDeviceVisComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTask_LoadXRDeviceVisComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnedComponent() { return STRUCT_OFFSET(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent); }


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_66_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncTask_LoadXRDeviceVisComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UAsyncTask_LoadXRDeviceVisComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
