// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceControlState;
#ifdef SOURCECONTROL_SourceControlHelpers_generated_h
#error "SourceControlHelpers.generated.h already included, missing '#pragma once' in SourceControlHelpers.h"
#endif
#define SOURCECONTROL_SourceControlHelpers_generated_h

#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceControlState_Statics; \
	SOURCECONTROL_API static class UScriptStruct* StaticStruct();


template<> SOURCECONTROL_API UScriptStruct* StaticStruct<struct FSourceControlState>();

#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_SPARSE_DATA
#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryFileState); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execCheckInFiles); \
	DECLARE_FUNCTION(execCheckInFile); \
	DECLARE_FUNCTION(execRevertUnchangedFiles); \
	DECLARE_FUNCTION(execRevertUnchangedFile); \
	DECLARE_FUNCTION(execRevertFiles); \
	DECLARE_FUNCTION(execRevertFile); \
	DECLARE_FUNCTION(execMarkFileForDelete); \
	DECLARE_FUNCTION(execMarkFilesForAdd); \
	DECLARE_FUNCTION(execMarkFileForAdd); \
	DECLARE_FUNCTION(execCheckOutOrAddFile); \
	DECLARE_FUNCTION(execCheckOutFiles); \
	DECLARE_FUNCTION(execCheckOutFile); \
	DECLARE_FUNCTION(execLastErrorMsg); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execCurrentProvider);


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryFileState); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execCheckInFiles); \
	DECLARE_FUNCTION(execCheckInFile); \
	DECLARE_FUNCTION(execRevertUnchangedFiles); \
	DECLARE_FUNCTION(execRevertUnchangedFile); \
	DECLARE_FUNCTION(execRevertFiles); \
	DECLARE_FUNCTION(execRevertFile); \
	DECLARE_FUNCTION(execMarkFileForDelete); \
	DECLARE_FUNCTION(execMarkFilesForAdd); \
	DECLARE_FUNCTION(execMarkFileForAdd); \
	DECLARE_FUNCTION(execCheckOutOrAddFile); \
	DECLARE_FUNCTION(execCheckOutFiles); \
	DECLARE_FUNCTION(execCheckOutFile); \
	DECLARE_FUNCTION(execLastErrorMsg); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execCurrentProvider);


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceControlHelpers(); \
	friend struct Z_Construct_UClass_USourceControlHelpers_Statics; \
public: \
	DECLARE_CLASS(USourceControlHelpers, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SourceControl"), NO_API) \
	DECLARE_SERIALIZER(USourceControlHelpers)


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUSourceControlHelpers(); \
	friend struct Z_Construct_UClass_USourceControlHelpers_Statics; \
public: \
	DECLARE_CLASS(USourceControlHelpers, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SourceControl"), NO_API) \
	DECLARE_SERIALIZER(USourceControlHelpers)


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceControlHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceControlHelpers(USourceControlHelpers&&); \
	NO_API USourceControlHelpers(const USourceControlHelpers&); \
public:


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceControlHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceControlHelpers(USourceControlHelpers&&); \
	NO_API USourceControlHelpers(const USourceControlHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlHelpers)


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_142_PROLOG
#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_SPARSE_DATA \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_RPC_WRAPPERS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_INCLASS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_SPARSE_DATA \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCECONTROL_API UClass* StaticClass<class USourceControlHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
