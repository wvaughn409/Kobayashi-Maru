// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FVector;
struct FRotator;
struct FVector2D;
#ifdef HEADMOUNTEDDISPLAY_XRLoadingScreenFunctionLibrary_generated_h
#error "XRLoadingScreenFunctionLibrary.generated.h already included, missing '#pragma once' in XRLoadingScreenFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_XRLoadingScreenFunctionLibrary_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideLoadingScreen); \
	DECLARE_FUNCTION(execShowLoadingScreen); \
	DECLARE_FUNCTION(execAddLoadingScreenSplash); \
	DECLARE_FUNCTION(execClearLoadingScreenSplashes); \
	DECLARE_FUNCTION(execSetLoadingScreen);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideLoadingScreen); \
	DECLARE_FUNCTION(execShowLoadingScreen); \
	DECLARE_FUNCTION(execAddLoadingScreenSplash); \
	DECLARE_FUNCTION(execClearLoadingScreenSplashes); \
	DECLARE_FUNCTION(execSetLoadingScreen);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRLoadingScreenFunctionLibrary(); \
	friend struct Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRLoadingScreenFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UXRLoadingScreenFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUXRLoadingScreenFunctionLibrary(); \
	friend struct Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRLoadingScreenFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UXRLoadingScreenFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRLoadingScreenFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRLoadingScreenFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRLoadingScreenFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRLoadingScreenFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRLoadingScreenFunctionLibrary(UXRLoadingScreenFunctionLibrary&&); \
	NO_API UXRLoadingScreenFunctionLibrary(const UXRLoadingScreenFunctionLibrary&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRLoadingScreenFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRLoadingScreenFunctionLibrary(UXRLoadingScreenFunctionLibrary&&); \
	NO_API UXRLoadingScreenFunctionLibrary(const UXRLoadingScreenFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRLoadingScreenFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRLoadingScreenFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRLoadingScreenFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_17_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class XRLoadingScreenFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UXRLoadingScreenFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_XRLoadingScreenFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
