// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/BlueprintPathsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPathsLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPathsLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPathsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execCombine)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::Combine(Z_Param_Out_InPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetRelativePathToRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetRelativePathToRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execSplit)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PathPart);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FilenamePart);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExtensionPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::Split(Z_Param_InPath,Z_Param_Out_PathPart,Z_Param_Out_FilenamePart,Z_Param_Out_ExtensionPart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execValidatePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_UBOOL_REF(Z_Param_Out_bDidSucceed);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::ValidatePath(Z_Param_InPath,Z_Param_Out_bDidSucceed,Z_Param_Out_OutReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execMakeValidFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FStrProperty,Z_Param_InReplacementChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::MakeValidFileName(Z_Param_InString,Z_Param_InReplacementChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetInvalidFileSystemChars)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetInvalidFileSystemChars();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execCreateTempFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::CreateTempFilename(Z_Param_Path,Z_Param_Prefix,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execConvertFromSandboxPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSandboxName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertFromSandboxPath(Z_Param_InPath,Z_Param_InSandboxName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execConvertToSandboxPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSandboxName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertToSandboxPath(Z_Param_InPath,Z_Param_InSandboxName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execConvertRelativePathToFull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBasePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertRelativePathToFull(Z_Param_InPath,Z_Param_InBasePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execMakePathRelativeTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InRelativeTo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::MakePathRelativeTo(Z_Param_InPath,Z_Param_InRelativeTo,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execMakePlatformFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::MakePlatformFilename(Z_Param_InPath,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execMakeStandardFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::MakeStandardFilename(Z_Param_InPath,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execRemoveDuplicateSlashes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::RemoveDuplicateSlashes(Z_Param_InPath,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execCollapseRelativeDirectories)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::CollapseRelativeDirectories(Z_Param_InPath,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execNormalizeDirectoryName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::NormalizeDirectoryName(Z_Param_InPath,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execIsSamePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathA);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsSamePath(Z_Param_PathA,Z_Param_PathB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execNormalizeFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::NormalizeFilename(Z_Param_InPath,Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execIsRelative)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsRelative(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execIsDrive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsDrive(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execDirectoryExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::DirectoryExists(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::FileExists(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execSetExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SetExtension(Z_Param_InPath,Z_Param_InNewExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execChangeExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ChangeExtension(Z_Param_InPath,Z_Param_InNewExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetPath(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetBaseFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_UBOOL(Z_Param_bRemovePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetBaseFilename(Z_Param_InPath,Z_Param_bRemovePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetCleanFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetCleanFilename(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_UBOOL(Z_Param_bIncludeDot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetExtension(Z_Param_InPath,Z_Param_bIncludeDot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execSetProjectFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewGameProjectFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPathsLibrary::SetProjectFilePath(Z_Param_NewGameProjectFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetProjectFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetProjectFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execIsProjectFilePathSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsProjectFilePathSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execFeaturePackDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::FeaturePackDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGameSourceDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameSourceDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineSourceDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineSourceDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGameAgnosticSavedDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameAgnosticSavedDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execIsRestrictedPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsRestrictedPath(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetRestrictedFolderNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetRestrictedFolderNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetGameLocalizationPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetGameLocalizationPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetToolTipLocalizationPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetToolTipLocalizationPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetPropertyNameLocalizationPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetEditorLocalizationPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetEditorLocalizationPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGetEngineLocalizationPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetEngineLocalizationPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execDiffDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::DiffDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGameUserDeveloperDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameUserDeveloperDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGameDevelopersDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameDevelopersDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execCloudDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::CloudDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execAutomationLogDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationLogDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execAutomationTransientDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationTransientDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execAutomationDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectLogDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectLogDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execVideoCaptureDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::VideoCaptureDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execBugItDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::BugItDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execScreenShotDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ScreenShotDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProfilingDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProfilingDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execSandboxesDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SandboxesDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execGeneratedConfigDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GeneratedConfigDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execSourceConfigDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SourceConfigDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectPersistentDownloadDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectPersistentDownloadDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execHasProjectPersistentDownloadDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::HasProjectPersistentDownloadDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectModsDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectModsDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectPluginsDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectPluginsDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execShaderWorkingDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ShaderWorkingDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectIntermediateDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectIntermediateDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectSavedDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectSavedDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectConfigDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectConfigDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectContentDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectContentDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectUserDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectUserDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execProjectDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execRootDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::RootDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEnterpriseFeaturePackDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterpriseFeaturePackDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEnterprisePluginsDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterprisePluginsDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEnterpriseDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterpriseDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEnginePluginsDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnginePluginsDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineSavedDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineSavedDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineIntermediateDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineIntermediateDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineConfigDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineConfigDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineContentDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineContentDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineVersionAgnosticUserDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineVersionAgnosticUserDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineUserDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineUserDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execEngineDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execLaunchDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::LaunchDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPathsLibrary::execShouldSaveToUserDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::ShouldSaveToUserDir();
		P_NATIVE_END;
	}
	void UBlueprintPathsLibrary::StaticRegisterNativesUBlueprintPathsLibrary()
	{
		UClass* Class = UBlueprintPathsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutomationDir", &UBlueprintPathsLibrary::execAutomationDir },
			{ "AutomationLogDir", &UBlueprintPathsLibrary::execAutomationLogDir },
			{ "AutomationTransientDir", &UBlueprintPathsLibrary::execAutomationTransientDir },
			{ "BugItDir", &UBlueprintPathsLibrary::execBugItDir },
			{ "ChangeExtension", &UBlueprintPathsLibrary::execChangeExtension },
			{ "CloudDir", &UBlueprintPathsLibrary::execCloudDir },
			{ "CollapseRelativeDirectories", &UBlueprintPathsLibrary::execCollapseRelativeDirectories },
			{ "Combine", &UBlueprintPathsLibrary::execCombine },
			{ "ConvertFromSandboxPath", &UBlueprintPathsLibrary::execConvertFromSandboxPath },
			{ "ConvertRelativePathToFull", &UBlueprintPathsLibrary::execConvertRelativePathToFull },
			{ "ConvertToSandboxPath", &UBlueprintPathsLibrary::execConvertToSandboxPath },
			{ "CreateTempFilename", &UBlueprintPathsLibrary::execCreateTempFilename },
			{ "DiffDir", &UBlueprintPathsLibrary::execDiffDir },
			{ "DirectoryExists", &UBlueprintPathsLibrary::execDirectoryExists },
			{ "EngineConfigDir", &UBlueprintPathsLibrary::execEngineConfigDir },
			{ "EngineContentDir", &UBlueprintPathsLibrary::execEngineContentDir },
			{ "EngineDir", &UBlueprintPathsLibrary::execEngineDir },
			{ "EngineIntermediateDir", &UBlueprintPathsLibrary::execEngineIntermediateDir },
			{ "EnginePluginsDir", &UBlueprintPathsLibrary::execEnginePluginsDir },
			{ "EngineSavedDir", &UBlueprintPathsLibrary::execEngineSavedDir },
			{ "EngineSourceDir", &UBlueprintPathsLibrary::execEngineSourceDir },
			{ "EngineUserDir", &UBlueprintPathsLibrary::execEngineUserDir },
			{ "EngineVersionAgnosticUserDir", &UBlueprintPathsLibrary::execEngineVersionAgnosticUserDir },
			{ "EnterpriseDir", &UBlueprintPathsLibrary::execEnterpriseDir },
			{ "EnterpriseFeaturePackDir", &UBlueprintPathsLibrary::execEnterpriseFeaturePackDir },
			{ "EnterprisePluginsDir", &UBlueprintPathsLibrary::execEnterprisePluginsDir },
			{ "FeaturePackDir", &UBlueprintPathsLibrary::execFeaturePackDir },
			{ "FileExists", &UBlueprintPathsLibrary::execFileExists },
			{ "GameAgnosticSavedDir", &UBlueprintPathsLibrary::execGameAgnosticSavedDir },
			{ "GameDevelopersDir", &UBlueprintPathsLibrary::execGameDevelopersDir },
			{ "GameSourceDir", &UBlueprintPathsLibrary::execGameSourceDir },
			{ "GameUserDeveloperDir", &UBlueprintPathsLibrary::execGameUserDeveloperDir },
			{ "GeneratedConfigDir", &UBlueprintPathsLibrary::execGeneratedConfigDir },
			{ "GetBaseFilename", &UBlueprintPathsLibrary::execGetBaseFilename },
			{ "GetCleanFilename", &UBlueprintPathsLibrary::execGetCleanFilename },
			{ "GetEditorLocalizationPaths", &UBlueprintPathsLibrary::execGetEditorLocalizationPaths },
			{ "GetEngineLocalizationPaths", &UBlueprintPathsLibrary::execGetEngineLocalizationPaths },
			{ "GetExtension", &UBlueprintPathsLibrary::execGetExtension },
			{ "GetGameLocalizationPaths", &UBlueprintPathsLibrary::execGetGameLocalizationPaths },
			{ "GetInvalidFileSystemChars", &UBlueprintPathsLibrary::execGetInvalidFileSystemChars },
			{ "GetPath", &UBlueprintPathsLibrary::execGetPath },
			{ "GetProjectFilePath", &UBlueprintPathsLibrary::execGetProjectFilePath },
			{ "GetPropertyNameLocalizationPaths", &UBlueprintPathsLibrary::execGetPropertyNameLocalizationPaths },
			{ "GetRelativePathToRoot", &UBlueprintPathsLibrary::execGetRelativePathToRoot },
			{ "GetRestrictedFolderNames", &UBlueprintPathsLibrary::execGetRestrictedFolderNames },
			{ "GetToolTipLocalizationPaths", &UBlueprintPathsLibrary::execGetToolTipLocalizationPaths },
			{ "HasProjectPersistentDownloadDir", &UBlueprintPathsLibrary::execHasProjectPersistentDownloadDir },
			{ "IsDrive", &UBlueprintPathsLibrary::execIsDrive },
			{ "IsProjectFilePathSet", &UBlueprintPathsLibrary::execIsProjectFilePathSet },
			{ "IsRelative", &UBlueprintPathsLibrary::execIsRelative },
			{ "IsRestrictedPath", &UBlueprintPathsLibrary::execIsRestrictedPath },
			{ "IsSamePath", &UBlueprintPathsLibrary::execIsSamePath },
			{ "LaunchDir", &UBlueprintPathsLibrary::execLaunchDir },
			{ "MakePathRelativeTo", &UBlueprintPathsLibrary::execMakePathRelativeTo },
			{ "MakePlatformFilename", &UBlueprintPathsLibrary::execMakePlatformFilename },
			{ "MakeStandardFilename", &UBlueprintPathsLibrary::execMakeStandardFilename },
			{ "MakeValidFileName", &UBlueprintPathsLibrary::execMakeValidFileName },
			{ "NormalizeDirectoryName", &UBlueprintPathsLibrary::execNormalizeDirectoryName },
			{ "NormalizeFilename", &UBlueprintPathsLibrary::execNormalizeFilename },
			{ "ProfilingDir", &UBlueprintPathsLibrary::execProfilingDir },
			{ "ProjectConfigDir", &UBlueprintPathsLibrary::execProjectConfigDir },
			{ "ProjectContentDir", &UBlueprintPathsLibrary::execProjectContentDir },
			{ "ProjectDir", &UBlueprintPathsLibrary::execProjectDir },
			{ "ProjectIntermediateDir", &UBlueprintPathsLibrary::execProjectIntermediateDir },
			{ "ProjectLogDir", &UBlueprintPathsLibrary::execProjectLogDir },
			{ "ProjectModsDir", &UBlueprintPathsLibrary::execProjectModsDir },
			{ "ProjectPersistentDownloadDir", &UBlueprintPathsLibrary::execProjectPersistentDownloadDir },
			{ "ProjectPluginsDir", &UBlueprintPathsLibrary::execProjectPluginsDir },
			{ "ProjectSavedDir", &UBlueprintPathsLibrary::execProjectSavedDir },
			{ "ProjectUserDir", &UBlueprintPathsLibrary::execProjectUserDir },
			{ "RemoveDuplicateSlashes", &UBlueprintPathsLibrary::execRemoveDuplicateSlashes },
			{ "RootDir", &UBlueprintPathsLibrary::execRootDir },
			{ "SandboxesDir", &UBlueprintPathsLibrary::execSandboxesDir },
			{ "ScreenShotDir", &UBlueprintPathsLibrary::execScreenShotDir },
			{ "SetExtension", &UBlueprintPathsLibrary::execSetExtension },
			{ "SetProjectFilePath", &UBlueprintPathsLibrary::execSetProjectFilePath },
			{ "ShaderWorkingDir", &UBlueprintPathsLibrary::execShaderWorkingDir },
			{ "ShouldSaveToUserDir", &UBlueprintPathsLibrary::execShouldSaveToUserDir },
			{ "SourceConfigDir", &UBlueprintPathsLibrary::execSourceConfigDir },
			{ "Split", &UBlueprintPathsLibrary::execSplit },
			{ "ValidatePath", &UBlueprintPathsLibrary::execValidatePath },
			{ "VideoCaptureDir", &UBlueprintPathsLibrary::execVideoCaptureDir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics
	{
		struct BlueprintPathsLibrary_eventAutomationDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventAutomationDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory for automation save files */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory for automation save files" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "AutomationDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventAutomationDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics
	{
		struct BlueprintPathsLibrary_eventAutomationLogDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventAutomationLogDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory for automation log files */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory for automation log files" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "AutomationLogDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventAutomationLogDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics
	{
		struct BlueprintPathsLibrary_eventAutomationTransientDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventAutomationTransientDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory for automation save files that are meant to be deleted every run */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory for automation save files that are meant to be deleted every run" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "AutomationTransientDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventAutomationTransientDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics
	{
		struct BlueprintPathsLibrary_eventBugItDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventBugItDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine uses to output BugIt files.\n\x09*\n\x09* @return screenshot directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine uses to output BugIt files.\n\n@return screenshot directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "BugItDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventBugItDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics
	{
		struct BlueprintPathsLibrary_eventChangeExtension_Parms
		{
			FString InPath;
			FString InNewExtension;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNewExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InNewExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventChangeExtension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InNewExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InNewExtension = { "InNewExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventChangeExtension_Parms, InNewExtension), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InNewExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InNewExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventChangeExtension_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InNewExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Changes the extension of the given filename (does nothing if the file has no extension) */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Changes the extension of the given filename (does nothing if the file has no extension)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ChangeExtension", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventChangeExtension_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics
	{
		struct BlueprintPathsLibrary_eventCloudDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCloudDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory for local files used in cloud emulation or support */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory for local files used in cloud emulation or support" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "CloudDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventCloudDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics
	{
		struct BlueprintPathsLibrary_eventCollapseRelativeDirectories_Parms
		{
			FString InPath;
			FString OutPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventCollapseRelativeDirectories_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventCollapseRelativeDirectories_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCollapseRelativeDirectories_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCollapseRelativeDirectories_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Takes a fully pathed string and eliminates relative pathing (eg: annihilates \"..\" with the adjacent directory).\n\x09* Assumes all slashes have been converted to TEXT('/').\n\x09* For example, takes the string:\n\x09*\x09""BaseDirectory/SomeDirectory/../SomeOtherDirectory/Filename.ext\n\x09* and converts it to:\n\x09*\x09""BaseDirectory/SomeOtherDirectory/Filename.ext\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Takes a fully pathed string and eliminates relative pathing (eg: annihilates \"..\" with the adjacent directory).\nAssumes all slashes have been converted to TEXT('/').\nFor example, takes the string:\n      BaseDirectory/SomeDirectory/../SomeOtherDirectory/Filename.ext\nand converts it to:\n      BaseDirectory/SomeOtherDirectory/Filename.ext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "CollapseRelativeDirectories", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventCollapseRelativeDirectories_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics
	{
		struct BlueprintPathsLibrary_eventCombine_Parms
		{
			TArray<FString> InPaths;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCombine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths = { "InPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCombine_Parms, InPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths_Inner = { "InPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::NewProp_InPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Combine two or more Paths into one single Path */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Combine two or more Paths into one single Path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "Combine", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventCombine_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_Combine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_Combine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics
	{
		struct BlueprintPathsLibrary_eventConvertFromSandboxPath_Parms
		{
			FString InPath;
			FString InSandboxName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSandboxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSandboxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertFromSandboxPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InSandboxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InSandboxName = { "InSandboxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertFromSandboxPath_Parms, InSandboxName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InSandboxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InSandboxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertFromSandboxPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InSandboxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Converts a sandbox (in Saved/Sandboxes) path to a normal path.\n\x09*\n\x09* @param InSandboxName The name of the sandbox.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Converts a sandbox (in Saved/Sandboxes) path to a normal path.\n\n@param InSandboxName The name of the sandbox." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ConvertFromSandboxPath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventConvertFromSandboxPath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics
	{
		struct BlueprintPathsLibrary_eventConvertRelativePathToFull_Parms
		{
			FString InPath;
			FString InBasePath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBasePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertRelativePathToFull_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InBasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InBasePath = { "InBasePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertRelativePathToFull_Parms, InBasePath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InBasePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertRelativePathToFull_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InBasePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Converts a relative path name to a fully qualified name relative to the specified BasePath.\n\x09* BasePath will be the process BaseDir() if not BasePath is given\n\x09*/" },
		{ "CPP_Default_InBasePath", "" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Converts a relative path name to a fully qualified name relative to the specified BasePath.\nBasePath will be the process BaseDir() if not BasePath is given" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ConvertRelativePathToFull", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventConvertRelativePathToFull_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics
	{
		struct BlueprintPathsLibrary_eventConvertToSandboxPath_Parms
		{
			FString InPath;
			FString InSandboxName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSandboxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSandboxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertToSandboxPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InSandboxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InSandboxName = { "InSandboxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertToSandboxPath_Parms, InSandboxName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InSandboxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InSandboxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventConvertToSandboxPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InSandboxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Converts a normal path to a sandbox path (in Saved/Sandboxes).\n\x09*\n\x09* @param InSandboxName The name of the sandbox.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Converts a normal path to a sandbox path (in Saved/Sandboxes).\n\n@param InSandboxName The name of the sandbox." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ConvertToSandboxPath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventConvertToSandboxPath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics
	{
		struct BlueprintPathsLibrary_eventCreateTempFilename_Parms
		{
			FString Path;
			FString Prefix;
			FString Extension;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCreateTempFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCreateTempFilename_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCreateTempFilename_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventCreateTempFilename_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Extension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Creates a temporary filename with the specified prefix.\n\x09*\n\x09* @param Path The file pathname.\n\x09* @param Prefix The file prefix.\n\x09* @param Extension File extension ('.' required).\n\x09*/" },
		{ "CPP_Default_Extension", ".tmp" },
		{ "CPP_Default_Prefix", "" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Creates a temporary filename with the specified prefix.\n\n@param Path The file pathname.\n@param Prefix The file prefix.\n@param Extension File extension ('.' required)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "CreateTempFilename", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventCreateTempFilename_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics
	{
		struct BlueprintPathsLibrary_eventDiffDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventDiffDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory for temp files used for diffing */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory for temp files used for diffing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "DiffDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventDiffDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics
	{
		struct BlueprintPathsLibrary_eventDirectoryExists_Parms
		{
			FString InPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventDirectoryExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventDirectoryExists_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventDirectoryExists_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns true if this directory was found, false otherwise */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns true if this directory was found, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "DirectoryExists", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventDirectoryExists_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineConfigDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineConfigDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the root configuration files are located.\n\x09*\n\x09* @return root config directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the root configuration files are located.\n\n@return root config directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineConfigDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineConfigDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineContentDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineContentDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the content directory of the \"core\" engine that can be shared across\n\x09* several games or across games & mods.\n\x09*\n\x09* @return engine content directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the content directory of the \"core\" engine that can be shared across\nseveral games or across games & mods.\n\n@return engine content directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineContentDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineContentDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the base directory of the \"core\" engine that can be shared across\n\x09* several games or across games & mods. Shaders and base localization files\n\x09* e.g. reside in the engine directory.\n\x09*\n\x09* @return engine directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the base directory of the \"core\" engine that can be shared across\nseveral games or across games & mods. Shaders and base localization files\ne.g. reside in the engine directory.\n\n@return engine directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineIntermediateDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineIntermediateDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the intermediate directory of the engine\n\x09*\n\x09* @return content directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the intermediate directory of the engine\n\n@return content directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineIntermediateDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineIntermediateDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics
	{
		struct BlueprintPathsLibrary_eventEnginePluginsDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEnginePluginsDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the plugins directory of the engine\n\x09*\n\x09* @return Plugins directory.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the plugins directory of the engine\n\n@return Plugins directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EnginePluginsDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEnginePluginsDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineSavedDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineSavedDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the saved directory of the engine\n\x09*\n\x09* @return Saved directory.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the saved directory of the engine\n\n@return Saved directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineSavedDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineSavedDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineSourceDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineSourceDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory where engine source code files are kept */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory where engine source code files are kept" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineSourceDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineSourceDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineUserDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineUserDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the root directory for user-specific engine files. Always writable.\n\x09*\n\x09* @return root user directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the root directory for user-specific engine files. Always writable.\n\n@return root user directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineUserDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineUserDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics
	{
		struct BlueprintPathsLibrary_eventEngineVersionAgnosticUserDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEngineVersionAgnosticUserDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the root directory for user-specific engine files which can be shared between versions. Always writable.\n\x09*\n\x09* @return root user directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the root directory for user-specific engine files which can be shared between versions. Always writable.\n\n@return root user directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EngineVersionAgnosticUserDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEngineVersionAgnosticUserDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics
	{
		struct BlueprintPathsLibrary_eventEnterpriseDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEnterpriseDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the base directory enterprise directory.\n\x09*\n\x09* @return enterprise directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the base directory enterprise directory.\n\n@return enterprise directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EnterpriseDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEnterpriseDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics
	{
		struct BlueprintPathsLibrary_eventEnterpriseFeaturePackDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEnterpriseFeaturePackDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the enterprise FeaturePack directory\n\x09*\n\x09* @return FeaturePack directory.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the enterprise FeaturePack directory\n\n@return FeaturePack directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EnterpriseFeaturePackDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEnterpriseFeaturePackDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics
	{
		struct BlueprintPathsLibrary_eventEnterprisePluginsDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventEnterprisePluginsDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the enterprise plugins directory\n\x09*\n\x09* @return Plugins directory.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the enterprise plugins directory\n\n@return Plugins directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "EnterprisePluginsDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventEnterprisePluginsDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics
	{
		struct BlueprintPathsLibrary_eventFeaturePackDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventFeaturePackDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory where feature packs are kept */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory where feature packs are kept" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "FeaturePackDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventFeaturePackDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics
	{
		struct BlueprintPathsLibrary_eventFileExists_Parms
		{
			FString InPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventFileExists_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventFileExists_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns true if this file was found, false otherwise */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns true if this file was found, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "FileExists", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventFileExists_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics
	{
		struct BlueprintPathsLibrary_eventGameAgnosticSavedDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGameAgnosticSavedDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the saved directory that is not game specific. This is usually the same as\n\x09* EngineSavedDir().\n\x09*\n\x09* @return saved directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the saved directory that is not game specific. This is usually the same as\nEngineSavedDir().\n\n@return saved directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GameAgnosticSavedDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGameAgnosticSavedDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics
	{
		struct BlueprintPathsLibrary_eventGameDevelopersDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGameDevelopersDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory that contains subfolders for developer-specific content */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory that contains subfolders for developer-specific content" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GameDevelopersDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGameDevelopersDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics
	{
		struct BlueprintPathsLibrary_eventGameSourceDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGameSourceDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory where game source code files are kept */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory where game source code files are kept" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GameSourceDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGameSourceDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics
	{
		struct BlueprintPathsLibrary_eventGameUserDeveloperDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGameUserDeveloperDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns the directory that contains developer-specific content for the current user */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory that contains developer-specific content for the current user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GameUserDeveloperDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGameUserDeveloperDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics
	{
		struct BlueprintPathsLibrary_eventGeneratedConfigDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGeneratedConfigDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine saves generated config files.\n\x09*\n\x09* @return config directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine saves generated config files.\n\n@return config directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GeneratedConfigDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGeneratedConfigDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics
	{
		struct BlueprintPathsLibrary_eventGetBaseFilename_Parms
		{
			FString InPath;
			bool bRemovePath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bRemovePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemovePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetBaseFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_bRemovePath_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventGetBaseFilename_Parms*)Obj)->bRemovePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_bRemovePath = { "bRemovePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventGetBaseFilename_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_bRemovePath_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetBaseFilename_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_bRemovePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "// Returns the same thing as GetCleanFilename, but without the extension\n" },
		{ "CPP_Default_bRemovePath", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the same thing as GetCleanFilename, but without the extension" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetBaseFilename", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetBaseFilename_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics
	{
		struct BlueprintPathsLibrary_eventGetCleanFilename_Parms
		{
			FString InPath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetCleanFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetCleanFilename_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "// Returns the filename (with extension), minus any path information.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the filename (with extension), minus any path information." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetCleanFilename", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetCleanFilename_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics
	{
		struct BlueprintPathsLibrary_eventGetEditorLocalizationPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetEditorLocalizationPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns a list of editor-specific localization paths\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a list of editor-specific localization paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetEditorLocalizationPaths", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetEditorLocalizationPaths_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics
	{
		struct BlueprintPathsLibrary_eventGetEngineLocalizationPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetEngineLocalizationPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns a list of engine-specific localization paths\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a list of engine-specific localization paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetEngineLocalizationPaths", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetEngineLocalizationPaths_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics
	{
		struct BlueprintPathsLibrary_eventGetExtension_Parms
		{
			FString InPath;
			bool bIncludeDot;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeDot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetExtension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_bIncludeDot_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventGetExtension_Parms*)Obj)->bIncludeDot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_bIncludeDot = { "bIncludeDot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventGetExtension_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_bIncludeDot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetExtension_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_bIncludeDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Gets the extension for this filename.\n\x09*\n\x09* @param\x09""bIncludeDot\x09\x09if true, includes the leading dot in the result\n\x09*\n\x09* @return\x09the extension of this filename, or an empty string if the filename doesn't have an extension.\n\x09*/" },
		{ "CPP_Default_bIncludeDot", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Gets the extension for this filename.\n\n@param        bIncludeDot             if true, includes the leading dot in the result\n\n@return       the extension of this filename, or an empty string if the filename doesn't have an extension." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetExtension", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetExtension_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics
	{
		struct BlueprintPathsLibrary_eventGetGameLocalizationPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetGameLocalizationPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns a list of game-specific localization paths\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a list of game-specific localization paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetGameLocalizationPaths", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetGameLocalizationPaths_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics
	{
		struct BlueprintPathsLibrary_eventGetInvalidFileSystemChars_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetInvalidFileSystemChars_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns a string containing all invalid characters as dictated by the operating system */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a string containing all invalid characters as dictated by the operating system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetInvalidFileSystemChars", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetInvalidFileSystemChars_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics
	{
		struct BlueprintPathsLibrary_eventGetPath_Parms
		{
			FString InPath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "// Returns the path in front of the filename\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the path in front of the filename" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetPath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetPath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics
	{
		struct BlueprintPathsLibrary_eventGetProjectFilePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetProjectFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Gets the path to the project file.\n\x09*\n\x09* @return Project file path.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Gets the path to the project file.\n\n@return Project file path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetProjectFilePath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetProjectFilePath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics
	{
		struct BlueprintPathsLibrary_eventGetPropertyNameLocalizationPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetPropertyNameLocalizationPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns a list of property name localization paths\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a list of property name localization paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetPropertyNameLocalizationPaths", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetPropertyNameLocalizationPaths_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics
	{
		struct BlueprintPathsLibrary_eventGetRelativePathToRoot_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetRelativePathToRoot_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Gets the relative path to get from BaseDir to RootDirectory  */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Gets the relative path to get from BaseDir to RootDirectory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetRelativePathToRoot", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetRelativePathToRoot_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics
	{
		struct BlueprintPathsLibrary_eventGetRestrictedFolderNames_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetRestrictedFolderNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns a list of restricted/internal folder names (without any slashes) which may be tested against full paths to determine if a path is restricted or not.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a list of restricted/internal folder names (without any slashes) which may be tested against full paths to determine if a path is restricted or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetRestrictedFolderNames", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetRestrictedFolderNames_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics
	{
		struct BlueprintPathsLibrary_eventGetToolTipLocalizationPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventGetToolTipLocalizationPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns a list of tool tip localization paths\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a list of tool tip localization paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "GetToolTipLocalizationPaths", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventGetToolTipLocalizationPaths_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics
	{
		struct BlueprintPathsLibrary_eventHasProjectPersistentDownloadDir_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventHasProjectPersistentDownloadDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventHasProjectPersistentDownloadDir_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/*\n\x09* Returns true if a writable directory for downloaded data that persists across play sessions is available\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "* Returns true if a writable directory for downloaded data that persists across play sessions is available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "HasProjectPersistentDownloadDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventHasProjectPersistentDownloadDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics
	{
		struct BlueprintPathsLibrary_eventIsDrive_Parms
		{
			FString InPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventIsDrive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventIsDrive_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventIsDrive_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns true if this path represents a root drive or volume  */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns true if this path represents a root drive or volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "IsDrive", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventIsDrive_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics
	{
		struct BlueprintPathsLibrary_eventIsProjectFilePathSet_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventIsProjectFilePathSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventIsProjectFilePathSet_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Checks whether the path to the project file, if any, is set.\n\x09*\n\x09* @return true if the path is set, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Checks whether the path to the project file, if any, is set.\n\n@return true if the path is set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "IsProjectFilePathSet", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventIsProjectFilePathSet_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics
	{
		struct BlueprintPathsLibrary_eventIsRelative_Parms
		{
			FString InPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventIsRelative_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventIsRelative_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventIsRelative_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Returns true if this path is relative to another path */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns true if this path is relative to another path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "IsRelative", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventIsRelative_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics
	{
		struct BlueprintPathsLibrary_eventIsRestrictedPath_Parms
		{
			FString InPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventIsRestrictedPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventIsRestrictedPath_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventIsRestrictedPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Determines if supplied path uses a restricted/internal subdirectory.\x09Note that slashes are normalized and character case is ignored for the comparison.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Determines if supplied path uses a restricted/internal subdirectory.  Note that slashes are normalized and character case is ignored for the comparison." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "IsRestrictedPath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventIsRestrictedPath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics
	{
		struct BlueprintPathsLibrary_eventIsSamePath_Parms
		{
			FString PathA;
			FString PathB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventIsSamePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventIsSamePath_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathB = { "PathB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventIsSamePath_Parms, PathB), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathA = { "PathA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventIsSamePath_Parms, PathA), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::NewProp_PathA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Checks if two paths are the same.\n\x09*\n\x09* @param PathA First path to check.\n\x09* @param PathB Second path to check.\n\x09*\n\x09* @returns True if both paths are the same. False otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Checks if two paths are the same.\n\n@param PathA First path to check.\n@param PathB Second path to check.\n\n@returns True if both paths are the same. False otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "IsSamePath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventIsSamePath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics
	{
		struct BlueprintPathsLibrary_eventLaunchDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventLaunchDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the application was launched from (useful for commandline utilities)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the application was launched from (useful for commandline utilities)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "LaunchDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventLaunchDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics
	{
		struct BlueprintPathsLibrary_eventMakePathRelativeTo_Parms
		{
			FString InPath;
			FString InRelativeTo;
			FString OutPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRelativeTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InRelativeTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventMakePathRelativeTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventMakePathRelativeTo_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakePathRelativeTo_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InRelativeTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InRelativeTo = { "InRelativeTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakePathRelativeTo_Parms, InRelativeTo), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InRelativeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InRelativeTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakePathRelativeTo_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InRelativeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09 * Assuming both paths (or filenames) are relative to the same base dir, converts InPath to be relative to InRelativeTo\n\x09 *\n\x09 * @param InPath Path to change to be relative to InRelativeTo\n\x09 * @param InRelativeTo Path to use as the new relative base\n\x09 * @param InPath New path relative to InRelativeTo\n\x09 * @returns true if OutPath was changed to be relative\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Assuming both paths (or filenames) are relative to the same base dir, converts InPath to be relative to InRelativeTo\n\n@param InPath Path to change to be relative to InRelativeTo\n@param InRelativeTo Path to use as the new relative base\n@param InPath New path relative to InRelativeTo\n@returns true if OutPath was changed to be relative" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "MakePathRelativeTo", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventMakePathRelativeTo_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics
	{
		struct BlueprintPathsLibrary_eventMakePlatformFilename_Parms
		{
			FString InPath;
			FString OutPath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakePlatformFilename_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakePlatformFilename_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Takes an \"Unreal\" pathname and converts it to a platform filename. */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Takes an \"Unreal\" pathname and converts it to a platform filename." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "MakePlatformFilename", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventMakePlatformFilename_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics
	{
		struct BlueprintPathsLibrary_eventMakeStandardFilename_Parms
		{
			FString InPath;
			FString OutPath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakeStandardFilename_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakeStandardFilename_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Make fully standard \"Unreal\" pathname:\n\x09*    - Normalizes path separators [NormalizeFilename]\n\x09*    - Removes extraneous separators  [NormalizeDirectoryName, as well removing adjacent separators]\n\x09*    - Collapses internal ..'s\n\x09*    - Makes relative to Engine\\Binaries\\<Platform> (will ALWAYS start with ..\\..\\..)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Make fully standard \"Unreal\" pathname:\n   - Normalizes path separators [NormalizeFilename]\n   - Removes extraneous separators  [NormalizeDirectoryName, as well removing adjacent separators]\n   - Collapses internal ..'s\n   - Makes relative to Engine\\Binaries\\<Platform> (will ALWAYS start with ..\\..\\..)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "MakeStandardFilename", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventMakeStandardFilename_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics
	{
		struct BlueprintPathsLibrary_eventMakeValidFileName_Parms
		{
			FString InString;
			FString InReplacementChar;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InReplacementChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InReplacementChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakeValidFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InReplacementChar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InReplacementChar = { "InReplacementChar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakeValidFileName_Parms, InReplacementChar), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InReplacementChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InReplacementChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventMakeValidFileName_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InReplacementChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09*\x09Returns a string that is safe to use as a filename because all items in\n\x09*\x09GetInvalidFileSystemChars() are removed\n\x09*\n\x09*\x09Optionally specify the character to replace invalid characters with\n\x09*\n\x09* @param  InString\n\x09* @param  InReplacementChar\n\x09*/" },
		{ "CPP_Default_InReplacementChar", "" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns a string that is safe to use as a filename because all items in\nGetInvalidFileSystemChars() are removed\n\nOptionally specify the character to replace invalid characters with\n\n@param  InString\n@param  InReplacementChar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "MakeValidFileName", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventMakeValidFileName_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics
	{
		struct BlueprintPathsLibrary_eventNormalizeDirectoryName_Parms
		{
			FString InPath;
			FString OutPath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventNormalizeDirectoryName_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventNormalizeDirectoryName_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Normalize all / and \\ to TEXT(\"/\") and remove any trailing TEXT(\"/\") if the character before that is not a TEXT(\"/\") or a colon */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Normalize all / and \\ to TEXT(\"/\") and remove any trailing TEXT(\"/\") if the character before that is not a TEXT(\"/\") or a colon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "NormalizeDirectoryName", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventNormalizeDirectoryName_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics
	{
		struct BlueprintPathsLibrary_eventNormalizeFilename_Parms
		{
			FString InPath;
			FString OutPath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventNormalizeFilename_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventNormalizeFilename_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Convert all / and \\ to TEXT(\"/\") */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Convert all / and \\ to TEXT(\"/\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "NormalizeFilename", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventNormalizeFilename_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics
	{
		struct BlueprintPathsLibrary_eventProfilingDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProfilingDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine uses to output profiling files.\n\x09*\n\x09* @return log directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine uses to output profiling files.\n\n@return log directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProfilingDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProfilingDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectConfigDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectConfigDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the root configuration files are located.\n\x09*\n\x09* @return root config directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the root configuration files are located.\n\n@return root config directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectConfigDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectConfigDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectContentDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectContentDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the content directory of the current game by looking at FApp::GetProjectName().\n\x09*\n\x09* @return content directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the content directory of the current game by looking at FApp::GetProjectName().\n\n@return content directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectContentDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectContentDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the base directory of the current project by looking at FApp::GetProjectName().\n\x09* This is usually a subdirectory of the installation\n\x09* root directory and can be overridden on the command line to allow self\n\x09* contained mod support.\n\x09*\n\x09* @return base directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the base directory of the current project by looking at FApp::GetProjectName().\nThis is usually a subdirectory of the installation\nroot directory and can be overridden on the command line to allow self\ncontained mod support.\n\n@return base directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectIntermediateDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectIntermediateDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the intermediate directory of the current game by looking at FApp::GetProjectName().\n\x09*\n\x09* @return intermediate directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the intermediate directory of the current game by looking at FApp::GetProjectName().\n\n@return intermediate directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectIntermediateDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectIntermediateDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectLogDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectLogDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine uses to output logs. This currently can't\n\x09* be an .ini setting as the game starts logging before it can read from .ini\n\x09* files.\n\x09*\n\x09* @return log directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine uses to output logs. This currently can't\nbe an .ini setting as the game starts logging before it can read from .ini\nfiles.\n\n@return log directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectLogDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectLogDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectModsDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectModsDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the mods directory of the current project by looking at FApp::GetProjectName().\n\x09*\n\x09* @return mods directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the mods directory of the current project by looking at FApp::GetProjectName().\n\n@return mods directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectModsDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectModsDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectPersistentDownloadDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectPersistentDownloadDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/*\n\x09* Returns the writable directory for downloaded data that persists across play sessions.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "* Returns the writable directory for downloaded data that persists across play sessions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectPersistentDownloadDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectPersistentDownloadDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectPluginsDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectPluginsDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the plugins directory of the current game by looking at FApp::GetProjectName().\n\x09*\n\x09* @return plugins directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the plugins directory of the current game by looking at FApp::GetProjectName().\n\n@return plugins directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectPluginsDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectPluginsDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectSavedDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectSavedDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the saved directory of the current game by looking at FApp::GetProjectName().\n\x09*\n\x09* @return saved directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the saved directory of the current game by looking at FApp::GetProjectName().\n\n@return saved directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectSavedDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectSavedDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics
	{
		struct BlueprintPathsLibrary_eventProjectUserDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventProjectUserDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the root directory for user-specific game files.\n\x09*\n\x09* @return game user directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the root directory for user-specific game files.\n\n@return game user directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ProjectUserDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventProjectUserDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics
	{
		struct BlueprintPathsLibrary_eventRemoveDuplicateSlashes_Parms
		{
			FString InPath;
			FString OutPath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventRemoveDuplicateSlashes_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventRemoveDuplicateSlashes_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Removes duplicate slashes in paths.\n\x09* Assumes all slashes have been converted to TEXT('/').\n\x09* For example, takes the string:\n\x09*\x09""BaseDirectory/SomeDirectory//SomeOtherDirectory////Filename.ext\n\x09* and converts it to:\n\x09*\x09""BaseDirectory/SomeDirectory/SomeOtherDirectory/Filename.ext\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Removes duplicate slashes in paths.\nAssumes all slashes have been converted to TEXT('/').\nFor example, takes the string:\n      BaseDirectory/SomeDirectory//SomeOtherDirectory////Filename.ext\nand converts it to:\n      BaseDirectory/SomeDirectory/SomeOtherDirectory/Filename.ext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "RemoveDuplicateSlashes", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventRemoveDuplicateSlashes_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics
	{
		struct BlueprintPathsLibrary_eventRootDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventRootDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the root directory of the engine directory tree\n\x09*\n\x09* @return Root directory.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the root directory of the engine directory tree\n\n@return Root directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "RootDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventRootDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics
	{
		struct BlueprintPathsLibrary_eventSandboxesDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSandboxesDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine stores sandbox output\n\x09*\n\x09* @return sandbox directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine stores sandbox output\n\n@return sandbox directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "SandboxesDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventSandboxesDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics
	{
		struct BlueprintPathsLibrary_eventScreenShotDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventScreenShotDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine uses to output screenshot files.\n\x09*\n\x09* @return screenshot directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine uses to output screenshot files.\n\n@return screenshot directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ScreenShotDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventScreenShotDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics
	{
		struct BlueprintPathsLibrary_eventSetExtension_Parms
		{
			FString InPath;
			FString InNewExtension;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNewExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InNewExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSetExtension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InNewExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InNewExtension = { "InNewExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSetExtension_Parms, InNewExtension), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InNewExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InNewExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSetExtension_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InNewExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/** Sets the extension of the given filename (like ChangeExtension, but also applies the extension if the file doesn't have one) */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Sets the extension of the given filename (like ChangeExtension, but also applies the extension if the file doesn't have one)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "SetExtension", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventSetExtension_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics
	{
		struct BlueprintPathsLibrary_eventSetProjectFilePath_Parms
		{
			FString NewGameProjectFilePath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGameProjectFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewGameProjectFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::NewProp_NewGameProjectFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::NewProp_NewGameProjectFilePath = { "NewGameProjectFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSetProjectFilePath_Parms, NewGameProjectFilePath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::NewProp_NewGameProjectFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::NewProp_NewGameProjectFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::NewProp_NewGameProjectFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Sets the path to the project file.\n\x09*\n\x09* @param NewGameProjectFilePath - The project file path to set.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Sets the path to the project file.\n\n@param NewGameProjectFilePath - The project file path to set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "SetProjectFilePath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventSetProjectFilePath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics
	{
		struct BlueprintPathsLibrary_eventShaderWorkingDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventShaderWorkingDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09 * Returns the Shader Working Directory\n\x09 *\n\x09 * @return shader working directory\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the Shader Working Directory\n\n@return shader working directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ShaderWorkingDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventShaderWorkingDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics
	{
		struct BlueprintPathsLibrary_eventShouldSaveToUserDir_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventShouldSaveToUserDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventShouldSaveToUserDir_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Should the \"saved\" directory structures be rooted in the user dir or relative to the \"engine/game\"\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Should the \"saved\" directory structures be rooted in the user dir or relative to the \"engine/game\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ShouldSaveToUserDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventShouldSaveToUserDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics
	{
		struct BlueprintPathsLibrary_eventSourceConfigDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSourceConfigDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine uses to look for the source leaf ini files. This\n\x09* can't be an .ini variable for obvious reasons.\n\x09*\n\x09* @return source config directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine uses to look for the source leaf ini files. This\ncan't be an .ini variable for obvious reasons.\n\n@return source config directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "SourceConfigDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventSourceConfigDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics
	{
		struct BlueprintPathsLibrary_eventSplit_Parms
		{
			FString InPath;
			FString PathPart;
			FString FilenamePart;
			FString ExtensionPart;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtensionPart;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilenamePart;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_ExtensionPart = { "ExtensionPart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSplit_Parms, ExtensionPart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_FilenamePart = { "FilenamePart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSplit_Parms, FilenamePart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_PathPart = { "PathPart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSplit_Parms, PathPart), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventSplit_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_ExtensionPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_FilenamePart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_PathPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Parses a fully qualified or relative filename into its components (filename, path, extension).\n\x09*\n\x09* @param\x09Path\x09\x09[out] receives the value of the path portion of the input string\n\x09* @param\x09""Filename\x09[out] receives the value of the filename portion of the input string\n\x09* @param\x09""Extension\x09[out] receives the value of the extension portion of the input string\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Parses a fully qualified or relative filename into its components (filename, path, extension).\n\n@param        Path            [out] receives the value of the path portion of the input string\n@param        Filename        [out] receives the value of the filename portion of the input string\n@param        Extension       [out] receives the value of the extension portion of the input string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "Split", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventSplit_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_Split()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_Split_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics
	{
		struct BlueprintPathsLibrary_eventValidatePath_Parms
		{
			FString InPath;
			bool bDidSucceed;
			FText OutReason;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutReason;
		static void NewProp_bDidSucceed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDidSucceed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_OutReason = { "OutReason", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventValidatePath_Parms, OutReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_bDidSucceed_SetBit(void* Obj)
	{
		((BlueprintPathsLibrary_eventValidatePath_Parms*)Obj)->bDidSucceed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_bDidSucceed = { "bDidSucceed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintPathsLibrary_eventValidatePath_Parms), &Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_bDidSucceed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventValidatePath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_OutReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_bDidSucceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Validates that the parts that make up the path contain no invalid characters as dictated by the operating system\n\x09* Note that this is a different set of restrictions to those imposed by FPackageName\n\x09*\n\x09* @param InPath - path to validate\n\x09* @param OutReason - If validation fails, this is filled with the failure reason\n\x09* @param bDidSucceed - Whether the path could be validated\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Validates that the parts that make up the path contain no invalid characters as dictated by the operating system\nNote that this is a different set of restrictions to those imposed by FPackageName\n\n@param InPath - path to validate\n@param OutReason - If validation fails, this is filled with the failure reason\n@param bDidSucceed - Whether the path could be validated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "ValidatePath", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventValidatePath_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics
	{
		struct BlueprintPathsLibrary_eventVideoCaptureDir_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPathsLibrary_eventVideoCaptureDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Paths" },
		{ "Comment", "/**\n\x09* Returns the directory the engine uses to output user requested video capture files.\n\x09*\n\x09* @return Video capture directory\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ToolTip", "Returns the directory the engine uses to output user requested video capture files.\n\n@return Video capture directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPathsLibrary, nullptr, "VideoCaptureDir", nullptr, nullptr, sizeof(BlueprintPathsLibrary_eventVideoCaptureDir_Parms), Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintPathsLibrary_NoRegister()
	{
		return UBlueprintPathsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPathsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPathsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintPathsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationDir, "AutomationDir" }, // 875166786
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationLogDir, "AutomationLogDir" }, // 2617981651
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_AutomationTransientDir, "AutomationTransientDir" }, // 3057813156
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_BugItDir, "BugItDir" }, // 467819757
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ChangeExtension, "ChangeExtension" }, // 3143669075
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_CloudDir, "CloudDir" }, // 4263515885
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_CollapseRelativeDirectories, "CollapseRelativeDirectories" }, // 739862949
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_Combine, "Combine" }, // 142891718
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertFromSandboxPath, "ConvertFromSandboxPath" }, // 3696408513
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertRelativePathToFull, "ConvertRelativePathToFull" }, // 2004802101
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ConvertToSandboxPath, "ConvertToSandboxPath" }, // 3960036305
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_CreateTempFilename, "CreateTempFilename" }, // 469145684
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_DiffDir, "DiffDir" }, // 161461487
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_DirectoryExists, "DirectoryExists" }, // 4175014924
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineConfigDir, "EngineConfigDir" }, // 2042042464
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineContentDir, "EngineContentDir" }, // 300739404
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineDir, "EngineDir" }, // 3434508094
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineIntermediateDir, "EngineIntermediateDir" }, // 3750511868
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EnginePluginsDir, "EnginePluginsDir" }, // 2297860921
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSavedDir, "EngineSavedDir" }, // 1795328923
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineSourceDir, "EngineSourceDir" }, // 1507115510
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineUserDir, "EngineUserDir" }, // 1827728499
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EngineVersionAgnosticUserDir, "EngineVersionAgnosticUserDir" }, // 2229822443
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseDir, "EnterpriseDir" }, // 12690836
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EnterpriseFeaturePackDir, "EnterpriseFeaturePackDir" }, // 1661895919
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_EnterprisePluginsDir, "EnterprisePluginsDir" }, // 4174226565
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_FeaturePackDir, "FeaturePackDir" }, // 1908665047
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_FileExists, "FileExists" }, // 2457144153
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GameAgnosticSavedDir, "GameAgnosticSavedDir" }, // 2343327138
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GameDevelopersDir, "GameDevelopersDir" }, // 3277153599
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GameSourceDir, "GameSourceDir" }, // 1979934123
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GameUserDeveloperDir, "GameUserDeveloperDir" }, // 1609532332
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GeneratedConfigDir, "GeneratedConfigDir" }, // 2341347825
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetBaseFilename, "GetBaseFilename" }, // 4261211316
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetCleanFilename, "GetCleanFilename" }, // 3098773037
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetEditorLocalizationPaths, "GetEditorLocalizationPaths" }, // 2769775726
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetEngineLocalizationPaths, "GetEngineLocalizationPaths" }, // 2238159186
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetExtension, "GetExtension" }, // 417451300
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetGameLocalizationPaths, "GetGameLocalizationPaths" }, // 2768010319
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetInvalidFileSystemChars, "GetInvalidFileSystemChars" }, // 3979207163
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetPath, "GetPath" }, // 1839522600
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetProjectFilePath, "GetProjectFilePath" }, // 4238087077
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths, "GetPropertyNameLocalizationPaths" }, // 3780280118
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetRelativePathToRoot, "GetRelativePathToRoot" }, // 3786190010
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetRestrictedFolderNames, "GetRestrictedFolderNames" }, // 1944890620
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_GetToolTipLocalizationPaths, "GetToolTipLocalizationPaths" }, // 4087666602
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_HasProjectPersistentDownloadDir, "HasProjectPersistentDownloadDir" }, // 1886972812
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_IsDrive, "IsDrive" }, // 2939724488
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_IsProjectFilePathSet, "IsProjectFilePathSet" }, // 10981567
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_IsRelative, "IsRelative" }, // 195797037
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_IsRestrictedPath, "IsRestrictedPath" }, // 2275718169
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_IsSamePath, "IsSamePath" }, // 3478534502
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_LaunchDir, "LaunchDir" }, // 1079858385
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_MakePathRelativeTo, "MakePathRelativeTo" }, // 1068649791
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_MakePlatformFilename, "MakePlatformFilename" }, // 2317033264
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_MakeStandardFilename, "MakeStandardFilename" }, // 2972540221
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_MakeValidFileName, "MakeValidFileName" }, // 116460164
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeDirectoryName, "NormalizeDirectoryName" }, // 2294236067
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_NormalizeFilename, "NormalizeFilename" }, // 2463593742
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProfilingDir, "ProfilingDir" }, // 2581082743
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectConfigDir, "ProjectConfigDir" }, // 1346551166
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectContentDir, "ProjectContentDir" }, // 3283095273
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectDir, "ProjectDir" }, // 2854935502
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectIntermediateDir, "ProjectIntermediateDir" }, // 2814614287
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectLogDir, "ProjectLogDir" }, // 130014963
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectModsDir, "ProjectModsDir" }, // 4123848384
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPersistentDownloadDir, "ProjectPersistentDownloadDir" }, // 3454840471
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectPluginsDir, "ProjectPluginsDir" }, // 2820628864
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectSavedDir, "ProjectSavedDir" }, // 3823709021
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ProjectUserDir, "ProjectUserDir" }, // 717090324
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_RemoveDuplicateSlashes, "RemoveDuplicateSlashes" }, // 2910131721
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_RootDir, "RootDir" }, // 3384112106
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_SandboxesDir, "SandboxesDir" }, // 4273142839
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ScreenShotDir, "ScreenShotDir" }, // 2212774578
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_SetExtension, "SetExtension" }, // 3517561812
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_SetProjectFilePath, "SetProjectFilePath" }, // 2695201646
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ShaderWorkingDir, "ShaderWorkingDir" }, // 1734808264
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ShouldSaveToUserDir, "ShouldSaveToUserDir" }, // 2908186326
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_SourceConfigDir, "SourceConfigDir" }, // 2609921879
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_Split, "Split" }, // 676972175
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_ValidatePath, "ValidatePath" }, // 3972302432
		{ &Z_Construct_UFunction_UBlueprintPathsLibrary_VideoCaptureDir, "VideoCaptureDir" }, // 1308298267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPathsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library to expose FPaths to Blueprints and Python\n *\n * Function signatures are preserved for the most part with adjustments made to some \n * signatures to better match Blueprints / Python workflow\n */" },
		{ "IncludePath", "Kismet/BlueprintPathsLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPathsLibrary.h" },
		{ "ScriptName", "Paths" },
		{ "ToolTip", "Function library to expose FPaths to Blueprints and Python\n\nFunction signatures are preserved for the most part with adjustments made to some\nsignatures to better match Blueprints / Python workflow" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPathsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPathsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPathsLibrary_Statics::ClassParams = {
		&UBlueprintPathsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPathsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPathsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPathsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintPathsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintPathsLibrary, 420410421);
	template<> ENGINE_API UClass* StaticClass<UBlueprintPathsLibrary>()
	{
		return UBlueprintPathsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintPathsLibrary(Z_Construct_UClass_UBlueprintPathsLibrary, &UBlueprintPathsLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintPathsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPathsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
