// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimClassData_generated_h
#error "AnimClassData.generated.h already included, missing '#pragma once' in AnimClassData.h"
#endif
#define ENGINE_AnimClassData_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimBlueprintFunctionData>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimClassData(); \
	friend struct Z_Construct_UClass_UAnimClassData_Statics; \
public: \
	DECLARE_CLASS(UAnimClassData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimClassData) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimClassData*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAnimClassData(); \
	friend struct Z_Construct_UClass_UAnimClassData_Statics; \
public: \
	DECLARE_CLASS(UAnimClassData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimClassData) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimClassData*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimClassData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimClassData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimClassData(UAnimClassData&&); \
	NO_API UAnimClassData(const UAnimClassData&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimClassData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimClassData(UAnimClassData&&); \
	NO_API UAnimClassData(const UAnimClassData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimClassData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassData)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_35_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimClassData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimClassData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
