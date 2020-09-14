// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAppleImageUtilsImageConversionResult;
class UTexture;
enum class ETextureRotationDirection : uint8;
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
#ifdef APPLEIMAGEUTILS_AppleImageUtilsBlueprintProxy_generated_h
#error "AppleImageUtilsBlueprintProxy.generated.h already included, missing '#pragma once' in AppleImageUtilsBlueprintProxy.h"
#endif
#define APPLEIMAGEUTILS_AppleImageUtilsBlueprintProxy_generated_h

#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics; \
	APPLEIMAGEUTILS_API static class UScriptStruct* StaticStruct();


template<> APPLEIMAGEUTILS_API UScriptStruct* StaticStruct<struct FAppleImageUtilsImageConversionResult>();

#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_29_DELEGATE \
struct _Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms \
{ \
	FAppleImageUtilsImageConversionResult ConversionResult; \
}; \
static inline void FAppleImageConversionDelegate_DelegateWrapper(const FMulticastScriptDelegate& AppleImageConversionDelegate, FAppleImageUtilsImageConversionResult const& ConversionResult) \
{ \
	_Script_AppleImageUtils_eventAppleImageConversionDelegate_Parms Parms; \
	Parms.ConversionResult=ConversionResult; \
	AppleImageConversionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_SPARSE_DATA
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToPNG); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToTIFF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToHEIF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToJPEG);


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToPNG); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToTIFF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToHEIF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToJPEG);


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), APPLEIMAGEUTILS_API) \
	DECLARE_SERIALIZER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy)


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), APPLEIMAGEUTILS_API) \
	DECLARE_SERIALIZER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy)


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEIMAGEUTILS_API, UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(UAppleImageUtilsBaseAsyncTaskBlueprintProxy&&); \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const UAppleImageUtilsBaseAsyncTaskBlueprintProxy&); \
public:


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(UAppleImageUtilsBaseAsyncTaskBlueprintProxy&&); \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const UAppleImageUtilsBaseAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEIMAGEUTILS_API, UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageUtilsBaseAsyncTaskBlueprintProxy)


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_31_PROLOG
#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_SPARSE_DATA \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_INCLASS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_SPARSE_DATA \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AppleImageUtilsBaseAsyncTaskBlueprintProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEIMAGEUTILS_API UClass* StaticClass<class UAppleImageUtilsBaseAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
