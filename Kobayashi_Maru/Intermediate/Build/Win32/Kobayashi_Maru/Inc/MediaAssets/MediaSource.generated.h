// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaSource_generated_h
#error "MediaSource.generated.h already included, missing '#pragma once' in MediaSource.h"
#endif
#define MEDIAASSETS_MediaSource_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_SPARSE_DATA
#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMediaOptionString); \
	DECLARE_FUNCTION(execSetMediaOptionInt64); \
	DECLARE_FUNCTION(execSetMediaOptionFloat); \
	DECLARE_FUNCTION(execSetMediaOptionBool); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execGetUrl);


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMediaOptionString); \
	DECLARE_FUNCTION(execSetMediaOptionInt64); \
	DECLARE_FUNCTION(execSetMediaOptionFloat); \
	DECLARE_FUNCTION(execSetMediaOptionBool); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execGetUrl);


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSource(); \
	friend struct Z_Construct_UClass_UMediaSource_Statics; \
public: \
	DECLARE_CLASS(UMediaSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSource(); \
	friend struct Z_Construct_UClass_UMediaSource_Statics; \
public: \
	DECLARE_CLASS(UMediaSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSource(UMediaSource&&); \
	NO_API UMediaSource(const UMediaSource&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSource(UMediaSource&&); \
	NO_API UMediaSource(const UMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_25_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
