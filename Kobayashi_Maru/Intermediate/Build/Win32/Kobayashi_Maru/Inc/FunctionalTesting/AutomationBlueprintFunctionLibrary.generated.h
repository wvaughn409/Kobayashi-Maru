// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EComparisonTolerance : uint8;
struct FAutomationScreenshotOptions;
class ACameraActor;
class UAutomationEditorTask;
struct FLatentActionInfo;
#ifdef FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h
#error "AutomationBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AutomationBlueprintFunctionLibrary.h"
#endif
#define FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h

#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_SPARSE_DATA
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidTask); \
	DECLARE_FUNCTION(execIsTaskDone);


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidTask); \
	DECLARE_FUNCTION(execIsTaskDone);


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationEditorTask(); \
	friend struct Z_Construct_UClass_UAutomationEditorTask_Statics; \
public: \
	DECLARE_CLASS(UAutomationEditorTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationEditorTask)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationEditorTask(); \
	friend struct Z_Construct_UClass_UAutomationEditorTask_Statics; \
public: \
	DECLARE_CLASS(UAutomationEditorTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationEditorTask)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationEditorTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationEditorTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationEditorTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationEditorTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationEditorTask(UAutomationEditorTask&&); \
	NO_API UAutomationEditorTask(const UAutomationEditorTask&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationEditorTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationEditorTask(UAutomationEditorTask&&); \
	NO_API UAutomationEditorTask(const UAutomationEditorTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationEditorTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationEditorTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationEditorTask)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_34_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationEditorTask>();

#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_SPARSE_DATA
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow); \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic); \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax); \
	DECLARE_FUNCTION(execAddExpectedLogError); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay); \
	DECLARE_FUNCTION(execTakeHighResScreenshot); \
	DECLARE_FUNCTION(execAutomationWaitForLoading); \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning); \
	DECLARE_FUNCTION(execGetStatCallCount); \
	DECLARE_FUNCTION(execGetStatExcMax); \
	DECLARE_FUNCTION(execGetStatExcAverage); \
	DECLARE_FUNCTION(execGetStatIncMax); \
	DECLARE_FUNCTION(execGetStatIncAverage); \
	DECLARE_FUNCTION(execDisableStatGroup); \
	DECLARE_FUNCTION(execEnableStatGroup); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera); \
	DECLARE_FUNCTION(execTakeAutomationScreenshot);


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow); \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic); \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax); \
	DECLARE_FUNCTION(execAddExpectedLogError); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay); \
	DECLARE_FUNCTION(execTakeHighResScreenshot); \
	DECLARE_FUNCTION(execAutomationWaitForLoading); \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning); \
	DECLARE_FUNCTION(execGetStatCallCount); \
	DECLARE_FUNCTION(execGetStatExcMax); \
	DECLARE_FUNCTION(execGetStatExcAverage); \
	DECLARE_FUNCTION(execGetStatIncMax); \
	DECLARE_FUNCTION(execGetStatIncAverage); \
	DECLARE_FUNCTION(execDisableStatGroup); \
	DECLARE_FUNCTION(execEnableStatGroup); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera); \
	DECLARE_FUNCTION(execTakeAutomationScreenshot);


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&); \
	NO_API UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&); \
	NO_API UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary)


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_59_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AutomationBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
