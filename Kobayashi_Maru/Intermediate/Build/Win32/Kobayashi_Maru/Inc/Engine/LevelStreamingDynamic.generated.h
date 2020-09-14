// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWorld;
struct FVector;
struct FRotator;
class ULevelStreamingDynamic;
#ifdef ENGINE_LevelStreamingDynamic_generated_h
#error "LevelStreamingDynamic.generated.h already included, missing '#pragma once' in LevelStreamingDynamic.h"
#endif
#define ENGINE_LevelStreamingDynamic_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadLevelInstanceBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadLevelInstance);


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadLevelInstanceBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadLevelInstance);


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingDynamic(); \
	friend struct Z_Construct_UClass_ULevelStreamingDynamic_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingDynamic, ULevelStreaming, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingDynamic)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingDynamic(); \
	friend struct Z_Construct_UClass_ULevelStreamingDynamic_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingDynamic, ULevelStreaming, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingDynamic)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingDynamic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingDynamic(ULevelStreamingDynamic&&); \
	NO_API ULevelStreamingDynamic(const ULevelStreamingDynamic&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingDynamic(ULevelStreamingDynamic&&); \
	NO_API ULevelStreamingDynamic(const ULevelStreamingDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingDynamic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingDynamic)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreamingDynamic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreamingDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
