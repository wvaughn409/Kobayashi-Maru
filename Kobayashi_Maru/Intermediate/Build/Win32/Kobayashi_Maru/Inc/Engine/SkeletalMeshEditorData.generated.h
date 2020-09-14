// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshEditorData_generated_h
#error "SkeletalMeshEditorData.generated.h already included, missing '#pragma once' in SkeletalMeshEditorData.h"
#endif
#define ENGINE_SkeletalMeshEditorData_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshEditorData, NO_API)


#else
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorData(); \
	friend struct Z_Construct_UClass_USkeletalMeshEditorData_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshEditorData) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorData(); \
	friend struct Z_Construct_UClass_USkeletalMeshEditorData_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshEditorData) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshEditorData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshEditorData(USkeletalMeshEditorData&&); \
	NO_API USkeletalMeshEditorData(const USkeletalMeshEditorData&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshEditorData(USkeletalMeshEditorData&&); \
	NO_API USkeletalMeshEditorData(const USkeletalMeshEditorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshEditorData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorData)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshEditorData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
