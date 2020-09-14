// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELocalizedTextSourceCategory : uint8;
#ifdef ENGINE_KismetInternationalizationLibrary_generated_h
#error "KismetInternationalizationLibrary.generated.h already included, missing '#pragma once' in KismetInternationalizationLibrary.h"
#endif
#define ENGINE_KismetInternationalizationLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCultureDisplayName); \
	DECLARE_FUNCTION(execGetSuitableCulture); \
	DECLARE_FUNCTION(execGetLocalizedCultures); \
	DECLARE_FUNCTION(execGetNativeCulture); \
	DECLARE_FUNCTION(execClearCurrentAssetGroupCulture); \
	DECLARE_FUNCTION(execGetCurrentAssetGroupCulture); \
	DECLARE_FUNCTION(execSetCurrentAssetGroupCulture); \
	DECLARE_FUNCTION(execSetCurrentLanguageAndLocale); \
	DECLARE_FUNCTION(execGetCurrentLocale); \
	DECLARE_FUNCTION(execSetCurrentLocale); \
	DECLARE_FUNCTION(execGetCurrentLanguage); \
	DECLARE_FUNCTION(execSetCurrentLanguage); \
	DECLARE_FUNCTION(execGetCurrentCulture); \
	DECLARE_FUNCTION(execSetCurrentCulture);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCultureDisplayName); \
	DECLARE_FUNCTION(execGetSuitableCulture); \
	DECLARE_FUNCTION(execGetLocalizedCultures); \
	DECLARE_FUNCTION(execGetNativeCulture); \
	DECLARE_FUNCTION(execClearCurrentAssetGroupCulture); \
	DECLARE_FUNCTION(execGetCurrentAssetGroupCulture); \
	DECLARE_FUNCTION(execSetCurrentAssetGroupCulture); \
	DECLARE_FUNCTION(execSetCurrentLanguageAndLocale); \
	DECLARE_FUNCTION(execGetCurrentLocale); \
	DECLARE_FUNCTION(execSetCurrentLocale); \
	DECLARE_FUNCTION(execGetCurrentLanguage); \
	DECLARE_FUNCTION(execSetCurrentLanguage); \
	DECLARE_FUNCTION(execGetCurrentCulture); \
	DECLARE_FUNCTION(execSetCurrentCulture);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetInternationalizationLibrary(); \
	friend struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInternationalizationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInternationalizationLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUKismetInternationalizationLibrary(); \
	friend struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInternationalizationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInternationalizationLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInternationalizationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInternationalizationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInternationalizationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInternationalizationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInternationalizationLibrary(UKismetInternationalizationLibrary&&); \
	NO_API UKismetInternationalizationLibrary(const UKismetInternationalizationLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInternationalizationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInternationalizationLibrary(UKismetInternationalizationLibrary&&); \
	NO_API UKismetInternationalizationLibrary(const UKismetInternationalizationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInternationalizationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInternationalizationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInternationalizationLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetInternationalizationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
