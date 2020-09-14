// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Rendering/SkeletalMeshLODImporterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshLODImporterData() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions();
// End Cross Module References
	static UEnum* ESkeletalMeshSkinningImportVersions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions, Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshSkinningImportVersions"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshSkinningImportVersions>()
	{
		return ESkeletalMeshSkinningImportVersions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkeletalMeshSkinningImportVersions(ESkeletalMeshSkinningImportVersions_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkeletalMeshSkinningImportVersions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Hash() { return 1661998672U; }
	UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkeletalMeshSkinningImportVersions"), 0, Get_Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkeletalMeshSkinningImportVersions::Before_Versionning", (int64)ESkeletalMeshSkinningImportVersions::Before_Versionning },
				{ "ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor", (int64)ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor },
				{ "ESkeletalMeshSkinningImportVersions::VersionPlusOne", (int64)ESkeletalMeshSkinningImportVersions::VersionPlusOne },
				{ "ESkeletalMeshSkinningImportVersions::LatestVersion", (int64)ESkeletalMeshSkinningImportVersions::LatestVersion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Before_Versionning.Name", "ESkeletalMeshSkinningImportVersions::Before_Versionning" },
				{ "LatestVersion.Name", "ESkeletalMeshSkinningImportVersions::LatestVersion" },
				{ "ModuleRelativePath", "Public/Rendering/SkeletalMeshLODImporterData.h" },
				{ "SkeletalMeshBuildRefactor.Name", "ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor" },
				{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n" },
				{ "VersionPlusOne.Name", "ESkeletalMeshSkinningImportVersions::VersionPlusOne" },
				{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESkeletalMeshSkinningImportVersions",
				"ESkeletalMeshSkinningImportVersions",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkeletalMeshGeoImportVersions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions, Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshGeoImportVersions"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshGeoImportVersions>()
	{
		return ESkeletalMeshGeoImportVersions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkeletalMeshGeoImportVersions(ESkeletalMeshGeoImportVersions_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkeletalMeshGeoImportVersions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Hash() { return 4236752592U; }
	UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkeletalMeshGeoImportVersions"), 0, Get_Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkeletalMeshGeoImportVersions::Before_Versionning", (int64)ESkeletalMeshGeoImportVersions::Before_Versionning },
				{ "ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor", (int64)ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor },
				{ "ESkeletalMeshGeoImportVersions::VersionPlusOne", (int64)ESkeletalMeshGeoImportVersions::VersionPlusOne },
				{ "ESkeletalMeshGeoImportVersions::LatestVersion", (int64)ESkeletalMeshGeoImportVersions::LatestVersion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Before_Versionning.Name", "ESkeletalMeshGeoImportVersions::Before_Versionning" },
				{ "Comment", "//////////////////////////////////////////////////////////////////////////\n//uenum class cannot be inside a preprocessor like #if WITH_EDITOR\n" },
				{ "LatestVersion.Name", "ESkeletalMeshGeoImportVersions::LatestVersion" },
				{ "ModuleRelativePath", "Public/Rendering/SkeletalMeshLODImporterData.h" },
				{ "SkeletalMeshBuildRefactor.Name", "ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor" },
				{ "ToolTip", "uenum class cannot be inside a preprocessor like #if WITH_EDITOR" },
				{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n" },
				{ "VersionPlusOne.Name", "ESkeletalMeshGeoImportVersions::VersionPlusOne" },
				{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESkeletalMeshGeoImportVersions",
				"ESkeletalMeshGeoImportVersions",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
