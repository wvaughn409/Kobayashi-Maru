// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintPathsLibrary_generated_h
#error "BlueprintPathsLibrary.generated.h already included, missing '#pragma once' in BlueprintPathsLibrary.h"
#endif
#define ENGINE_BlueprintPathsLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCombine); \
	DECLARE_FUNCTION(execGetRelativePathToRoot); \
	DECLARE_FUNCTION(execSplit); \
	DECLARE_FUNCTION(execValidatePath); \
	DECLARE_FUNCTION(execMakeValidFileName); \
	DECLARE_FUNCTION(execGetInvalidFileSystemChars); \
	DECLARE_FUNCTION(execCreateTempFilename); \
	DECLARE_FUNCTION(execConvertFromSandboxPath); \
	DECLARE_FUNCTION(execConvertToSandboxPath); \
	DECLARE_FUNCTION(execConvertRelativePathToFull); \
	DECLARE_FUNCTION(execMakePathRelativeTo); \
	DECLARE_FUNCTION(execMakePlatformFilename); \
	DECLARE_FUNCTION(execMakeStandardFilename); \
	DECLARE_FUNCTION(execRemoveDuplicateSlashes); \
	DECLARE_FUNCTION(execCollapseRelativeDirectories); \
	DECLARE_FUNCTION(execNormalizeDirectoryName); \
	DECLARE_FUNCTION(execIsSamePath); \
	DECLARE_FUNCTION(execNormalizeFilename); \
	DECLARE_FUNCTION(execIsRelative); \
	DECLARE_FUNCTION(execIsDrive); \
	DECLARE_FUNCTION(execDirectoryExists); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execSetExtension); \
	DECLARE_FUNCTION(execChangeExtension); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetBaseFilename); \
	DECLARE_FUNCTION(execGetCleanFilename); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execSetProjectFilePath); \
	DECLARE_FUNCTION(execGetProjectFilePath); \
	DECLARE_FUNCTION(execIsProjectFilePathSet); \
	DECLARE_FUNCTION(execFeaturePackDir); \
	DECLARE_FUNCTION(execGameSourceDir); \
	DECLARE_FUNCTION(execEngineSourceDir); \
	DECLARE_FUNCTION(execGameAgnosticSavedDir); \
	DECLARE_FUNCTION(execIsRestrictedPath); \
	DECLARE_FUNCTION(execGetRestrictedFolderNames); \
	DECLARE_FUNCTION(execGetGameLocalizationPaths); \
	DECLARE_FUNCTION(execGetToolTipLocalizationPaths); \
	DECLARE_FUNCTION(execGetPropertyNameLocalizationPaths); \
	DECLARE_FUNCTION(execGetEditorLocalizationPaths); \
	DECLARE_FUNCTION(execGetEngineLocalizationPaths); \
	DECLARE_FUNCTION(execDiffDir); \
	DECLARE_FUNCTION(execGameUserDeveloperDir); \
	DECLARE_FUNCTION(execGameDevelopersDir); \
	DECLARE_FUNCTION(execCloudDir); \
	DECLARE_FUNCTION(execAutomationLogDir); \
	DECLARE_FUNCTION(execAutomationTransientDir); \
	DECLARE_FUNCTION(execAutomationDir); \
	DECLARE_FUNCTION(execProjectLogDir); \
	DECLARE_FUNCTION(execVideoCaptureDir); \
	DECLARE_FUNCTION(execBugItDir); \
	DECLARE_FUNCTION(execScreenShotDir); \
	DECLARE_FUNCTION(execProfilingDir); \
	DECLARE_FUNCTION(execSandboxesDir); \
	DECLARE_FUNCTION(execGeneratedConfigDir); \
	DECLARE_FUNCTION(execSourceConfigDir); \
	DECLARE_FUNCTION(execProjectPersistentDownloadDir); \
	DECLARE_FUNCTION(execHasProjectPersistentDownloadDir); \
	DECLARE_FUNCTION(execProjectModsDir); \
	DECLARE_FUNCTION(execProjectPluginsDir); \
	DECLARE_FUNCTION(execShaderWorkingDir); \
	DECLARE_FUNCTION(execProjectIntermediateDir); \
	DECLARE_FUNCTION(execProjectSavedDir); \
	DECLARE_FUNCTION(execProjectConfigDir); \
	DECLARE_FUNCTION(execProjectContentDir); \
	DECLARE_FUNCTION(execProjectUserDir); \
	DECLARE_FUNCTION(execProjectDir); \
	DECLARE_FUNCTION(execRootDir); \
	DECLARE_FUNCTION(execEnterpriseFeaturePackDir); \
	DECLARE_FUNCTION(execEnterprisePluginsDir); \
	DECLARE_FUNCTION(execEnterpriseDir); \
	DECLARE_FUNCTION(execEnginePluginsDir); \
	DECLARE_FUNCTION(execEngineSavedDir); \
	DECLARE_FUNCTION(execEngineIntermediateDir); \
	DECLARE_FUNCTION(execEngineConfigDir); \
	DECLARE_FUNCTION(execEngineContentDir); \
	DECLARE_FUNCTION(execEngineVersionAgnosticUserDir); \
	DECLARE_FUNCTION(execEngineUserDir); \
	DECLARE_FUNCTION(execEngineDir); \
	DECLARE_FUNCTION(execLaunchDir); \
	DECLARE_FUNCTION(execShouldSaveToUserDir);


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCombine); \
	DECLARE_FUNCTION(execGetRelativePathToRoot); \
	DECLARE_FUNCTION(execSplit); \
	DECLARE_FUNCTION(execValidatePath); \
	DECLARE_FUNCTION(execMakeValidFileName); \
	DECLARE_FUNCTION(execGetInvalidFileSystemChars); \
	DECLARE_FUNCTION(execCreateTempFilename); \
	DECLARE_FUNCTION(execConvertFromSandboxPath); \
	DECLARE_FUNCTION(execConvertToSandboxPath); \
	DECLARE_FUNCTION(execConvertRelativePathToFull); \
	DECLARE_FUNCTION(execMakePathRelativeTo); \
	DECLARE_FUNCTION(execMakePlatformFilename); \
	DECLARE_FUNCTION(execMakeStandardFilename); \
	DECLARE_FUNCTION(execRemoveDuplicateSlashes); \
	DECLARE_FUNCTION(execCollapseRelativeDirectories); \
	DECLARE_FUNCTION(execNormalizeDirectoryName); \
	DECLARE_FUNCTION(execIsSamePath); \
	DECLARE_FUNCTION(execNormalizeFilename); \
	DECLARE_FUNCTION(execIsRelative); \
	DECLARE_FUNCTION(execIsDrive); \
	DECLARE_FUNCTION(execDirectoryExists); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execSetExtension); \
	DECLARE_FUNCTION(execChangeExtension); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetBaseFilename); \
	DECLARE_FUNCTION(execGetCleanFilename); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execSetProjectFilePath); \
	DECLARE_FUNCTION(execGetProjectFilePath); \
	DECLARE_FUNCTION(execIsProjectFilePathSet); \
	DECLARE_FUNCTION(execFeaturePackDir); \
	DECLARE_FUNCTION(execGameSourceDir); \
	DECLARE_FUNCTION(execEngineSourceDir); \
	DECLARE_FUNCTION(execGameAgnosticSavedDir); \
	DECLARE_FUNCTION(execIsRestrictedPath); \
	DECLARE_FUNCTION(execGetRestrictedFolderNames); \
	DECLARE_FUNCTION(execGetGameLocalizationPaths); \
	DECLARE_FUNCTION(execGetToolTipLocalizationPaths); \
	DECLARE_FUNCTION(execGetPropertyNameLocalizationPaths); \
	DECLARE_FUNCTION(execGetEditorLocalizationPaths); \
	DECLARE_FUNCTION(execGetEngineLocalizationPaths); \
	DECLARE_FUNCTION(execDiffDir); \
	DECLARE_FUNCTION(execGameUserDeveloperDir); \
	DECLARE_FUNCTION(execGameDevelopersDir); \
	DECLARE_FUNCTION(execCloudDir); \
	DECLARE_FUNCTION(execAutomationLogDir); \
	DECLARE_FUNCTION(execAutomationTransientDir); \
	DECLARE_FUNCTION(execAutomationDir); \
	DECLARE_FUNCTION(execProjectLogDir); \
	DECLARE_FUNCTION(execVideoCaptureDir); \
	DECLARE_FUNCTION(execBugItDir); \
	DECLARE_FUNCTION(execScreenShotDir); \
	DECLARE_FUNCTION(execProfilingDir); \
	DECLARE_FUNCTION(execSandboxesDir); \
	DECLARE_FUNCTION(execGeneratedConfigDir); \
	DECLARE_FUNCTION(execSourceConfigDir); \
	DECLARE_FUNCTION(execProjectPersistentDownloadDir); \
	DECLARE_FUNCTION(execHasProjectPersistentDownloadDir); \
	DECLARE_FUNCTION(execProjectModsDir); \
	DECLARE_FUNCTION(execProjectPluginsDir); \
	DECLARE_FUNCTION(execShaderWorkingDir); \
	DECLARE_FUNCTION(execProjectIntermediateDir); \
	DECLARE_FUNCTION(execProjectSavedDir); \
	DECLARE_FUNCTION(execProjectConfigDir); \
	DECLARE_FUNCTION(execProjectContentDir); \
	DECLARE_FUNCTION(execProjectUserDir); \
	DECLARE_FUNCTION(execProjectDir); \
	DECLARE_FUNCTION(execRootDir); \
	DECLARE_FUNCTION(execEnterpriseFeaturePackDir); \
	DECLARE_FUNCTION(execEnterprisePluginsDir); \
	DECLARE_FUNCTION(execEnterpriseDir); \
	DECLARE_FUNCTION(execEnginePluginsDir); \
	DECLARE_FUNCTION(execEngineSavedDir); \
	DECLARE_FUNCTION(execEngineIntermediateDir); \
	DECLARE_FUNCTION(execEngineConfigDir); \
	DECLARE_FUNCTION(execEngineContentDir); \
	DECLARE_FUNCTION(execEngineVersionAgnosticUserDir); \
	DECLARE_FUNCTION(execEngineUserDir); \
	DECLARE_FUNCTION(execEngineDir); \
	DECLARE_FUNCTION(execLaunchDir); \
	DECLARE_FUNCTION(execShouldSaveToUserDir);


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintPathsLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPathsLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPathsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPathsLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPathsLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPathsLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPathsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPathsLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPathsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPathsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPathsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPathsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPathsLibrary(UBlueprintPathsLibrary&&); \
	NO_API UBlueprintPathsLibrary(const UBlueprintPathsLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPathsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPathsLibrary(UBlueprintPathsLibrary&&); \
	NO_API UBlueprintPathsLibrary(const UBlueprintPathsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPathsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPathsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPathsLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintPathsLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintPathsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
