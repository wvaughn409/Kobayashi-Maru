// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMENV_ClothConfigNv_generated_h
#error "ClothConfigNv.generated.h already included, missing '#pragma once' in ClothConfigNv.h"
#endif
#define CLOTHINGSYSTEMRUNTIMENV_ClothConfigNv_generated_h

#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics; \
	CLOTHINGSYSTEMRUNTIMENV_API static class UScriptStruct* StaticStruct();


template<> CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* StaticStruct<struct FClothConstraintSetupNv>();

#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_SPARSE_DATA
#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_RPC_WRAPPERS
#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UClothConfigNv, NO_API)


#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothConfigNv(); \
	friend struct Z_Construct_UClass_UClothConfigNv_Statics; \
public: \
	DECLARE_CLASS(UClothConfigNv, UClothConfigCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeNv"), NO_API) \
	DECLARE_SERIALIZER(UClothConfigNv) \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_ARCHIVESERIALIZER


#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUClothConfigNv(); \
	friend struct Z_Construct_UClass_UClothConfigNv_Statics; \
public: \
	DECLARE_CLASS(UClothConfigNv, UClothConfigCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeNv"), NO_API) \
	DECLARE_SERIALIZER(UClothConfigNv) \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_ARCHIVESERIALIZER


#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothConfigNv(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothConfigNv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothConfigNv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothConfigNv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothConfigNv(UClothConfigNv&&); \
	NO_API UClothConfigNv(const UClothConfigNv&); \
public:


#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothConfigNv(UClothConfigNv&&); \
	NO_API UClothConfigNv(const UClothConfigNv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothConfigNv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothConfigNv); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothConfigNv)


#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_56_PROLOG
#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_SPARSE_DATA \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_RPC_WRAPPERS \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_INCLASS \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_SPARSE_DATA \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<class UClothConfigNv>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h


#define FOREACH_ENUM_ECLOTHINGWINDMETHODNV(op) \
	op(EClothingWindMethodNv::Legacy) \
	op(EClothingWindMethodNv::Accurate) 

enum class EClothingWindMethodNv : uint8;
template<> CLOTHINGSYSTEMRUNTIMENV_API UEnum* StaticEnum<EClothingWindMethodNv>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
