// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UScriptStruct;
class UCurveTable;
struct FTableRowBase;
#ifdef ENGINE_DataTableFunctionLibrary_generated_h
#error "DataTableFunctionLibrary.generated.h already included, missing '#pragma once' in DataTableFunctionLibrary.h"
#endif
#define ENGINE_DataTableFunctionLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataTableColumnAsString); \
	DECLARE_FUNCTION(execGetDataTableRowNames); \
	DECLARE_FUNCTION(execDoesDataTableRowExist); \
	DECLARE_FUNCTION(execEvaluateCurveTableRow);


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataTableColumnAsString); \
	DECLARE_FUNCTION(execGetDataTableRowNames); \
	DECLARE_FUNCTION(execDoesDataTableRowExist); \
	DECLARE_FUNCTION(execEvaluateCurveTableRow);


#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile); \
	DECLARE_FUNCTION(execFillDataTableFromJSONString); \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile); \
	DECLARE_FUNCTION(execFillDataTableFromCSVString);


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile); \
	DECLARE_FUNCTION(execFillDataTableFromJSONString); \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile); \
	DECLARE_FUNCTION(execFillDataTableFromCSVString);


#else
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDataTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataTableFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDataTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataTableFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableFunctionLibrary(UDataTableFunctionLibrary&&); \
	NO_API UDataTableFunctionLibrary(const UDataTableFunctionLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableFunctionLibrary(UDataTableFunctionLibrary&&); \
	NO_API UDataTableFunctionLibrary(const UDataTableFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_30_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataTableFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataTableFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h


#define FOREACH_ENUM_EEVALUATECURVETABLERESULT(op) \
	op(EEvaluateCurveTableResult::RowFound) \
	op(EEvaluateCurveTableResult::RowNotFound) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
