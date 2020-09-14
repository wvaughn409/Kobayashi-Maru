// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
struct FLinearColor;
#ifdef ENGINE_KismetMaterialLibrary_generated_h
#error "KismetMaterialLibrary.generated.h already included, missing '#pragma once' in KismetMaterialLibrary.h"
#endif
#define ENGINE_KismetMaterialLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetVectorParameterValue); \
	DECLARE_FUNCTION(execGetScalarParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetVectorParameterValue); \
	DECLARE_FUNCTION(execGetScalarParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetMaterialLibrary(); \
	friend struct Z_Construct_UClass_UKismetMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMaterialLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUKismetMaterialLibrary(); \
	friend struct Z_Construct_UClass_UKismetMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMaterialLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMaterialLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMaterialLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMaterialLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetMaterialLibrary(UKismetMaterialLibrary&&); \
	ENGINE_API UKismetMaterialLibrary(const UKismetMaterialLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetMaterialLibrary(UKismetMaterialLibrary&&); \
	ENGINE_API UKismetMaterialLibrary(const UKismetMaterialLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMaterialLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMaterialLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMaterialLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetMaterialLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetMaterialLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
