// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef ENGINE_KismetGuidLibrary_generated_h
#error "KismetGuidLibrary.generated.h already included, missing '#pragma once' in KismetGuidLibrary.h"
#endif
#define ENGINE_KismetGuidLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execParse_StringToGuid); \
	DECLARE_FUNCTION(execConv_GuidToString); \
	DECLARE_FUNCTION(execNewGuid); \
	DECLARE_FUNCTION(execInvalidate_Guid); \
	DECLARE_FUNCTION(execIsValid_Guid); \
	DECLARE_FUNCTION(execNotEqual_GuidGuid); \
	DECLARE_FUNCTION(execEqualEqual_GuidGuid);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execParse_StringToGuid); \
	DECLARE_FUNCTION(execConv_GuidToString); \
	DECLARE_FUNCTION(execNewGuid); \
	DECLARE_FUNCTION(execInvalidate_Guid); \
	DECLARE_FUNCTION(execIsValid_Guid); \
	DECLARE_FUNCTION(execNotEqual_GuidGuid); \
	DECLARE_FUNCTION(execEqualEqual_GuidGuid);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetGuidLibrary(); \
	friend struct Z_Construct_UClass_UKismetGuidLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetGuidLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetGuidLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUKismetGuidLibrary(); \
	friend struct Z_Construct_UClass_UKismetGuidLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetGuidLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetGuidLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetGuidLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetGuidLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetGuidLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetGuidLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetGuidLibrary(UKismetGuidLibrary&&); \
	NO_API UKismetGuidLibrary(const UKismetGuidLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetGuidLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetGuidLibrary(UKismetGuidLibrary&&); \
	NO_API UKismetGuidLibrary(const UKismetGuidLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetGuidLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetGuidLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetGuidLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetGuidLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetGuidLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetGuidLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
