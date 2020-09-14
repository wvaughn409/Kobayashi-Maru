// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
struct FRotator;
#ifdef AIMODULE_NavLocalGridManager_generated_h
#error "NavLocalGridManager.generated.h already included, missing '#pragma once' in NavLocalGridManager.h"
#endif
#define AIMODULE_NavLocalGridManager_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_SPARSE_DATA
#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindLocalNavigationGridPath); \
	DECLARE_FUNCTION(execRemoveLocalNavigationGrid); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForCapsule); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForBox); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoints); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoint); \
	DECLARE_FUNCTION(execSetLocalNavigationGridDensity);


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindLocalNavigationGridPath); \
	DECLARE_FUNCTION(execRemoveLocalNavigationGrid); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForCapsule); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForBox); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoints); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoint); \
	DECLARE_FUNCTION(execSetLocalNavigationGridDensity);


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavLocalGridManager(); \
	friend struct Z_Construct_UClass_UNavLocalGridManager_Statics; \
public: \
	DECLARE_CLASS(UNavLocalGridManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UNavLocalGridManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUNavLocalGridManager(); \
	friend struct Z_Construct_UClass_UNavLocalGridManager_Statics; \
public: \
	DECLARE_CLASS(UNavLocalGridManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UNavLocalGridManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLocalGridManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLocalGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLocalGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLocalGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLocalGridManager(UNavLocalGridManager&&); \
	NO_API UNavLocalGridManager(const UNavLocalGridManager&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLocalGridManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLocalGridManager(UNavLocalGridManager&&); \
	NO_API UNavLocalGridManager(const UNavLocalGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLocalGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLocalGridManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLocalGridManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_26_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_SPARSE_DATA \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLocalGridManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UNavLocalGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
