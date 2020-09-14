// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshLODImporterData_generated_h
#error "SkeletalMeshLODImporterData.generated.h already included, missing '#pragma once' in SkeletalMeshLODImporterData.h"
#endif
#define ENGINE_SkeletalMeshLODImporterData_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshLODImporterData_h


#define FOREACH_ENUM_ESKELETALMESHSKINNINGIMPORTVERSIONS(op) \
	op(ESkeletalMeshSkinningImportVersions::Before_Versionning) \
	op(ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor) \
	op(ESkeletalMeshSkinningImportVersions::VersionPlusOne) \
	op(ESkeletalMeshSkinningImportVersions::LatestVersion) 

enum class ESkeletalMeshSkinningImportVersions : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshSkinningImportVersions>();

#define FOREACH_ENUM_ESKELETALMESHGEOIMPORTVERSIONS(op) \
	op(ESkeletalMeshGeoImportVersions::Before_Versionning) \
	op(ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor) \
	op(ESkeletalMeshGeoImportVersions::VersionPlusOne) \
	op(ESkeletalMeshGeoImportVersions::LatestVersion) 

enum class ESkeletalMeshGeoImportVersions : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshGeoImportVersions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
