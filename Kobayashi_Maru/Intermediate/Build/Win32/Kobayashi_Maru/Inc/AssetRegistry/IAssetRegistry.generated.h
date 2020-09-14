// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
struct FARFilter;
struct FAssetRegistryDependencyOptions;
#ifdef ASSETREGISTRY_IAssetRegistry_generated_h
#error "IAssetRegistry.generated.h already included, missing '#pragma once' in IAssetRegistry.h"
#endif
#define ASSETREGISTRY_IAssetRegistry_generated_h

#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<struct FAssetRegistryDependencyOptions>();

#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_SPARSE_DATA
#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoadingAssets); \
	DECLARE_FUNCTION(execScanModifiedAssetFiles); \
	DECLARE_FUNCTION(execPrioritizeSearchPath); \
	DECLARE_FUNCTION(execSearchAllAssets); \
	DECLARE_FUNCTION(execScanFilesSynchronous); \
	DECLARE_FUNCTION(execScanPathsSynchronous); \
	DECLARE_FUNCTION(execUseFilterToExcludeAssets); \
	DECLARE_FUNCTION(execRunAssetsThroughFilter); \
	DECLARE_FUNCTION(execGetSubPaths); \
	DECLARE_FUNCTION(execGetAllCachedPaths); \
	DECLARE_FUNCTION(execK2_GetReferencers); \
	DECLARE_FUNCTION(execK2_GetDependencies); \
	DECLARE_FUNCTION(execGetAllAssets); \
	DECLARE_FUNCTION(execGetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetAssetsByClass); \
	DECLARE_FUNCTION(execGetAssetsByPath); \
	DECLARE_FUNCTION(execGetAssetsByPackageName); \
	DECLARE_FUNCTION(execHasAssets);


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoadingAssets); \
	DECLARE_FUNCTION(execScanModifiedAssetFiles); \
	DECLARE_FUNCTION(execPrioritizeSearchPath); \
	DECLARE_FUNCTION(execSearchAllAssets); \
	DECLARE_FUNCTION(execScanFilesSynchronous); \
	DECLARE_FUNCTION(execScanPathsSynchronous); \
	DECLARE_FUNCTION(execUseFilterToExcludeAssets); \
	DECLARE_FUNCTION(execRunAssetsThroughFilter); \
	DECLARE_FUNCTION(execGetSubPaths); \
	DECLARE_FUNCTION(execGetAllCachedPaths); \
	DECLARE_FUNCTION(execK2_GetReferencers); \
	DECLARE_FUNCTION(execK2_GetDependencies); \
	DECLARE_FUNCTION(execGetAllAssets); \
	DECLARE_FUNCTION(execGetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetAssetsByClass); \
	DECLARE_FUNCTION(execGetAssetsByPath); \
	DECLARE_FUNCTION(execGetAssetsByPackageName); \
	DECLARE_FUNCTION(execHasAssets);


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETREGISTRY_API UAssetRegistry(UAssetRegistry&&); \
	ASSETREGISTRY_API UAssetRegistry(const UAssetRegistry&); \
public:


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETREGISTRY_API UAssetRegistry(UAssetRegistry&&); \
	ASSETREGISTRY_API UAssetRegistry(const UAssetRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry)


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetRegistry(); \
	friend struct Z_Construct_UClass_UAssetRegistry_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AssetRegistry"), ASSETREGISTRY_API) \
	DECLARE_SERIALIZER(UAssetRegistry)


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	typedef IAssetRegistry ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	typedef IAssetRegistry ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_103_PROLOG
#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_SPARSE_DATA \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_RPC_WRAPPERS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_SPARSE_DATA \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_106_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRY_API UClass* StaticClass<class UAssetRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
