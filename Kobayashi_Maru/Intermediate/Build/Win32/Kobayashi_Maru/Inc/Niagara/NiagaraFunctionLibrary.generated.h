// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UNiagaraComponent;
class UVolumeTexture;
class UTexture;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UNiagaraSystem;
class USceneComponent;
struct FVector;
struct FRotator;
enum class ENCPoolMethod : uint8;
#ifdef NIAGARA_NiagaraFunctionLibrary_generated_h
#error "NiagaraFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraFunctionLibrary_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNiagaraParameterCollection); \
	DECLARE_FUNCTION(execSetVolumeTextureObject); \
	DECLARE_FUNCTION(execSetTextureObject); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableSkeletalMeshComponent); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMesh); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMeshComponent); \
	DECLARE_FUNCTION(execSpawnSystemAttached); \
	DECLARE_FUNCTION(execSpawnSystemAtLocation);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNiagaraParameterCollection); \
	DECLARE_FUNCTION(execSetVolumeTextureObject); \
	DECLARE_FUNCTION(execSetTextureObject); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableSkeletalMeshComponent); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMesh); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMeshComponent); \
	DECLARE_FUNCTION(execSpawnSystemAttached); \
	DECLARE_FUNCTION(execSpawnSystemAtLocation);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraFunctionLibrary)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraFunctionLibrary)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraFunctionLibrary(UNiagaraFunctionLibrary&&); \
	NO_API UNiagaraFunctionLibrary(const UNiagaraFunctionLibrary&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraFunctionLibrary(UNiagaraFunctionLibrary&&); \
	NO_API UNiagaraFunctionLibrary(const UNiagaraFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionLibrary)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_23_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
