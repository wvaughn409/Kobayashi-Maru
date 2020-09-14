// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UOBJECTPLUGIN_MyPluginObject_generated_h
#error "MyPluginObject.generated.h already included, missing '#pragma once' in MyPluginObject.h"
#endif
#define UOBJECTPLUGIN_MyPluginObject_generated_h

#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyPluginStruct_Statics; \
	UOBJECTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> UOBJECTPLUGIN_API UScriptStruct* StaticStruct<struct FMyPluginStruct>();

#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_SPARSE_DATA
#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS
#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPluginObject(); \
	friend struct Z_Construct_UClass_UMyPluginObject_Statics; \
public: \
	DECLARE_CLASS(UMyPluginObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UObjectPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginObject)


#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMyPluginObject(); \
	friend struct Z_Construct_UClass_UMyPluginObject_Statics; \
public: \
	DECLARE_CLASS(UMyPluginObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UObjectPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginObject)


#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginObject(UMyPluginObject&&); \
	NO_API UMyPluginObject(const UMyPluginObject&); \
public:


#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginObject(UMyPluginObject&&); \
	NO_API UMyPluginObject(const UMyPluginObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginObject)


#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyStruct() { return STRUCT_OFFSET(UMyPluginObject, MyStruct); }


#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_27_PROLOG
#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_SPARSE_DATA \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_SPARSE_DATA \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyPluginObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UOBJECTPLUGIN_API UClass* StaticClass<class UMyPluginObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
