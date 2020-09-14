// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuat;
struct FLinearColor;
struct FVector4;
struct FVector;
struct FVector2D;
#ifdef NIAGARA_NiagaraParameterCollection_generated_h
#error "NiagaraParameterCollection.generated.h already included, missing '#pragma once' in NiagaraParameterCollection.h"
#endif
#define NIAGARA_NiagaraParameterCollection_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetQuatParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetVector2DParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execGetColorParameter); \
	DECLARE_FUNCTION(execGetQuatParameter); \
	DECLARE_FUNCTION(execGetVector4Parameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetVector2DParameter); \
	DECLARE_FUNCTION(execGetIntParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execGetBoolParameter);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetQuatParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetVector2DParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execGetColorParameter); \
	DECLARE_FUNCTION(execGetQuatParameter); \
	DECLARE_FUNCTION(execGetVector4Parameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetVector2DParameter); \
	DECLARE_FUNCTION(execGetIntParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execGetBoolParameter);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollectionInstance)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollectionInstance)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollectionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollectionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollectionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollectionInstance(UNiagaraParameterCollectionInstance&&); \
	NO_API UNiagaraParameterCollectionInstance(const UNiagaraParameterCollectionInstance&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollectionInstance(UNiagaraParameterCollectionInstance&&); \
	NO_API UNiagaraParameterCollectionInstance(const UNiagaraParameterCollectionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollectionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollectionInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollectionInstance)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParameterStorage() { return STRUCT_OFFSET(UNiagaraParameterCollectionInstance, ParameterStorage); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_12_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraParameterCollectionInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraParameterCollectionInstance>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollection(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollection)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollection(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollection)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollection(UNiagaraParameterCollection&&); \
	NO_API UNiagaraParameterCollection(const UNiagaraParameterCollection&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollection(UNiagaraParameterCollection&&); \
	NO_API UNiagaraParameterCollection(const UNiagaraParameterCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollection)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Namespace() { return STRUCT_OFFSET(UNiagaraParameterCollection, Namespace); } \
	FORCEINLINE static uint32 __PPO__Parameters() { return STRUCT_OFFSET(UNiagaraParameterCollection, Parameters); } \
	FORCEINLINE static uint32 __PPO__DefaultInstance() { return STRUCT_OFFSET(UNiagaraParameterCollection, DefaultInstance); } \
	FORCEINLINE static uint32 __PPO__CompileId() { return STRUCT_OFFSET(UNiagaraParameterCollection, CompileId); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_116_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_119_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraParameterCollection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraParameterCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
