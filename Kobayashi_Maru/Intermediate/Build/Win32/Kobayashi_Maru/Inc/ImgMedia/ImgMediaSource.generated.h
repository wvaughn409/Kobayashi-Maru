// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMGMEDIA_ImgMediaSource_generated_h
#error "ImgMediaSource.generated.h already included, missing '#pragma once' in ImgMediaSource.h"
#endif
#define IMGMEDIA_ImgMediaSource_generated_h

#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_SPARSE_DATA
#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSequencePath); \
	DECLARE_FUNCTION(execGetSequencePath); \
	DECLARE_FUNCTION(execGetProxies);


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSequencePath); \
	DECLARE_FUNCTION(execGetSequencePath); \
	DECLARE_FUNCTION(execGetProxies);


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImgMediaSource(); \
	friend struct Z_Construct_UClass_UImgMediaSource_Statics; \
public: \
	DECLARE_CLASS(UImgMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImgMedia"), NO_API) \
	DECLARE_SERIALIZER(UImgMediaSource)


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUImgMediaSource(); \
	friend struct Z_Construct_UClass_UImgMediaSource_Statics; \
public: \
	DECLARE_CLASS(UImgMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImgMedia"), NO_API) \
	DECLARE_SERIALIZER(UImgMediaSource)


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImgMediaSource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImgMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImgMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImgMediaSource(UImgMediaSource&&); \
	NO_API UImgMediaSource(const UImgMediaSource&); \
public:


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImgMediaSource(UImgMediaSource&&); \
	NO_API UImgMediaSource(const UImgMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImgMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImgMediaSource)


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SequencePath() { return STRUCT_OFFSET(UImgMediaSource, SequencePath); }


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_31_PROLOG
#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_SPARSE_DATA \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_RPC_WRAPPERS \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_INCLASS \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_SPARSE_DATA \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMGMEDIA_API UClass* StaticClass<class UImgMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
