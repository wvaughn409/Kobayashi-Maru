// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAssetData;
enum class ECollectionScriptingShareType : uint8;
#ifdef ASSETTAGS_AssetTagsSubsystem_generated_h
#error "AssetTagsSubsystem.generated.h already included, missing '#pragma once' in AssetTagsSubsystem.h"
#endif
#define ASSETTAGS_AssetTagsSubsystem_generated_h

#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_SPARSE_DATA
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetPtr); \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetData); \
	DECLARE_FUNCTION(execGetCollectionsContainingAsset); \
	DECLARE_FUNCTION(execGetAssetsInCollection); \
	DECLARE_FUNCTION(execGetCollections); \
	DECLARE_FUNCTION(execCollectionExists);


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetPtr); \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetData); \
	DECLARE_FUNCTION(execGetCollectionsContainingAsset); \
	DECLARE_FUNCTION(execGetAssetsInCollection); \
	DECLARE_FUNCTION(execGetCollections); \
	DECLARE_FUNCTION(execCollectionExists);


#if WITH_EDITOR
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAssetPtrsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDatasFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetPtrFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDataFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetFromCollection); \
	DECLARE_FUNCTION(execAddAssetPtrsToCollection); \
	DECLARE_FUNCTION(execAddAssetDatasToCollection); \
	DECLARE_FUNCTION(execAddAssetsToCollection); \
	DECLARE_FUNCTION(execAddAssetPtrToCollection); \
	DECLARE_FUNCTION(execAddAssetDataToCollection); \
	DECLARE_FUNCTION(execAddAssetToCollection); \
	DECLARE_FUNCTION(execEmptyCollection); \
	DECLARE_FUNCTION(execReparentCollection); \
	DECLARE_FUNCTION(execRenameCollection); \
	DECLARE_FUNCTION(execDestroyCollection); \
	DECLARE_FUNCTION(execCreateCollection);


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAssetPtrsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDatasFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetPtrFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDataFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetFromCollection); \
	DECLARE_FUNCTION(execAddAssetPtrsToCollection); \
	DECLARE_FUNCTION(execAddAssetDatasToCollection); \
	DECLARE_FUNCTION(execAddAssetsToCollection); \
	DECLARE_FUNCTION(execAddAssetPtrToCollection); \
	DECLARE_FUNCTION(execAddAssetDataToCollection); \
	DECLARE_FUNCTION(execAddAssetToCollection); \
	DECLARE_FUNCTION(execEmptyCollection); \
	DECLARE_FUNCTION(execReparentCollection); \
	DECLARE_FUNCTION(execRenameCollection); \
	DECLARE_FUNCTION(execDestroyCollection); \
	DECLARE_FUNCTION(execCreateCollection);


#else
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetTagsSubsystem(); \
	friend struct Z_Construct_UClass_UAssetTagsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAssetTagsSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetTags"), NO_API) \
	DECLARE_SERIALIZER(UAssetTagsSubsystem)


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAssetTagsSubsystem(); \
	friend struct Z_Construct_UClass_UAssetTagsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAssetTagsSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetTags"), NO_API) \
	DECLARE_SERIALIZER(UAssetTagsSubsystem)


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetTagsSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetTagsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetTagsSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTagsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetTagsSubsystem(UAssetTagsSubsystem&&); \
	NO_API UAssetTagsSubsystem(const UAssetTagsSubsystem&); \
public:


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetTagsSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetTagsSubsystem(UAssetTagsSubsystem&&); \
	NO_API UAssetTagsSubsystem(const UAssetTagsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetTagsSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTagsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetTagsSubsystem)


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_21_PROLOG
#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_SPARSE_DATA \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_INCLASS \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_SPARSE_DATA \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTAGS_API UClass* StaticClass<class UAssetTagsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h


#define FOREACH_ENUM_ECOLLECTIONSCRIPTINGSHARETYPE(op) \
	op(ECollectionScriptingShareType::Local) \
	op(ECollectionScriptingShareType::Private) \
	op(ECollectionScriptingShareType::Shared) 

enum class ECollectionScriptingShareType : uint8;
template<> ASSETTAGS_API UEnum* StaticEnum<ECollectionScriptingShareType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
