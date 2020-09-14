// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameRate;
struct FTimecode;
struct FFrameNumber;
struct FFrameTime;
struct FQualifiedFrameTime;
#ifdef TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h
#error "TimeManagementBlueprintLibrary.generated.h already included, missing '#pragma once' in TimeManagementBlueprintLibrary.h"
#endif
#define TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h

#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_SPARSE_DATA
#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimecodeFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger); \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger); \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger); \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execSnapFrameTimeToRate); \
	DECLARE_FUNCTION(execTransformTime); \
	DECLARE_FUNCTION(execIsValid_MultipleOf); \
	DECLARE_FUNCTION(execIsValid_Framerate); \
	DECLARE_FUNCTION(execConv_TimecodeToString); \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate); \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds); \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds);


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimecodeFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger); \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger); \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger); \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execSnapFrameTimeToRate); \
	DECLARE_FUNCTION(execTransformTime); \
	DECLARE_FUNCTION(execIsValid_MultipleOf); \
	DECLARE_FUNCTION(execIsValid_Framerate); \
	DECLARE_FUNCTION(execConv_TimecodeToString); \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate); \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds); \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds);


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeManagementBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&); \
	NO_API UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&); \
	NO_API UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeManagementBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary)


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_15_PROLOG
#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_SPARSE_DATA \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_SPARSE_DATA \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UTimeManagementBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
