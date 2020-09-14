// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCACHE_GeometryCache_generated_h
#error "GeometryCache.generated.h already included, missing '#pragma once' in GeometryCache.h"
#endif
#define GEOMETRYCACHE_GeometryCache_generated_h

#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_SPARSE_DATA
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_RPC_WRAPPERS
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCache, NO_API)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCache(); \
	friend struct Z_Construct_UClass_UGeometryCache_Statics; \
public: \
	DECLARE_CLASS(UGeometryCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCache) \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCache*>(this); }


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCache(); \
	friend struct Z_Construct_UClass_UGeometryCache_Statics; \
public: \
	DECLARE_CLASS(UGeometryCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCache) \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCache*>(this); }


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCache); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCache(UGeometryCache&&); \
	NO_API UGeometryCache(const UGeometryCache&); \
public:


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCache(UGeometryCache&&); \
	NO_API UGeometryCache(const UGeometryCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCache); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCache)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartFrame() { return STRUCT_OFFSET(UGeometryCache, StartFrame); } \
	FORCEINLINE static uint32 __PPO__EndFrame() { return STRUCT_OFFSET(UGeometryCache, EndFrame); }


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_21_PROLOG
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_SPARSE_DATA \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_RPC_WRAPPERS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_INCLASS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_SPARSE_DATA \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCache."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCACHE_API UClass* StaticClass<class UGeometryCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
