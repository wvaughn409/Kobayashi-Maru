// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FImportanceTexture;
struct FVector2D;
struct FLinearColor;
class UTexture2D;
struct FVector;
#ifdef ENGINE_ImportanceSamplingLibrary_generated_h
#error "ImportanceSamplingLibrary.generated.h already included, missing '#pragma once' in ImportanceSamplingLibrary.h"
#endif
#define ENGINE_ImportanceSamplingLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportanceTexture_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FImportanceTexture>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImportanceSample); \
	DECLARE_FUNCTION(execBreakImportanceTexture); \
	DECLARE_FUNCTION(execMakeImportanceTexture); \
	DECLARE_FUNCTION(execNextSobolCell3D); \
	DECLARE_FUNCTION(execRandomSobolCell3D); \
	DECLARE_FUNCTION(execNextSobolCell2D); \
	DECLARE_FUNCTION(execRandomSobolCell2D); \
	DECLARE_FUNCTION(execNextSobolFloat); \
	DECLARE_FUNCTION(execRandomSobolFloat);


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportanceSample); \
	DECLARE_FUNCTION(execBreakImportanceTexture); \
	DECLARE_FUNCTION(execMakeImportanceTexture); \
	DECLARE_FUNCTION(execNextSobolCell3D); \
	DECLARE_FUNCTION(execRandomSobolCell3D); \
	DECLARE_FUNCTION(execNextSobolCell2D); \
	DECLARE_FUNCTION(execRandomSobolCell2D); \
	DECLARE_FUNCTION(execNextSobolFloat); \
	DECLARE_FUNCTION(execRandomSobolFloat);


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportanceSamplingLibrary(); \
	friend struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics; \
public: \
	DECLARE_CLASS(UImportanceSamplingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UImportanceSamplingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUImportanceSamplingLibrary(); \
	friend struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics; \
public: \
	DECLARE_CLASS(UImportanceSamplingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UImportanceSamplingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportanceSamplingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportanceSamplingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportanceSamplingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportanceSamplingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UImportanceSamplingLibrary(UImportanceSamplingLibrary&&); \
	ENGINE_API UImportanceSamplingLibrary(const UImportanceSamplingLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportanceSamplingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UImportanceSamplingLibrary(UImportanceSamplingLibrary&&); \
	ENGINE_API UImportanceSamplingLibrary(const UImportanceSamplingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportanceSamplingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportanceSamplingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportanceSamplingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_110_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h_113_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ImportanceSamplingLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UImportanceSamplingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h


#define FOREACH_ENUM_EIMPORTANCEWEIGHT(op) \
	op(EImportanceWeight::Luminance) \
	op(EImportanceWeight::Red) \
	op(EImportanceWeight::Green) \
	op(EImportanceWeight::Blue) \
	op(EImportanceWeight::Alpha) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
