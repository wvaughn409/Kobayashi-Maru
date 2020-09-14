// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaSource;
#ifdef MEDIAASSETS_MediaPlaylist_generated_h
#error "MediaPlaylist.generated.h already included, missing '#pragma once' in MediaPlaylist.h"
#endif
#define MEDIAASSETS_MediaPlaylist_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_SPARSE_DATA
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execRemoveAt); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInsert); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execGetPrevious); \
	DECLARE_FUNCTION(execGetNext); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execAddUrl); \
	DECLARE_FUNCTION(execAddFile); \
	DECLARE_FUNCTION(execAdd);


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execRemoveAt); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInsert); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execGetPrevious); \
	DECLARE_FUNCTION(execGetNext); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execAddUrl); \
	DECLARE_FUNCTION(execAddFile); \
	DECLARE_FUNCTION(execAdd);


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlaylist(); \
	friend struct Z_Construct_UClass_UMediaPlaylist_Statics; \
public: \
	DECLARE_CLASS(UMediaPlaylist, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlaylist)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlaylist(); \
	friend struct Z_Construct_UClass_UMediaPlaylist_Statics; \
public: \
	DECLARE_CLASS(UMediaPlaylist, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlaylist)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlaylist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlaylist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlaylist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlaylist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlaylist(UMediaPlaylist&&); \
	NO_API UMediaPlaylist(const UMediaPlaylist&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlaylist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlaylist(UMediaPlaylist&&); \
	NO_API UMediaPlaylist(const UMediaPlaylist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlaylist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlaylist); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlaylist)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Items() { return STRUCT_OFFSET(UMediaPlaylist, Items); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_16_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_SPARSE_DATA \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaPlaylist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
