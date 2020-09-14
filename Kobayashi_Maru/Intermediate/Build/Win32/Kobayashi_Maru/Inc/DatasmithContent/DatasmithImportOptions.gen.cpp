// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithImportOptions.h"
#include "Serialization/StructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithImportOptions() {}
// Cross Module References
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportHierarchy();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithReimportOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithImportOptions_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithImportOptions();
// End Cross Module References
	static UEnum* EDatasmithCADStitchingTechnique_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithCADStitchingTechnique"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithCADStitchingTechnique>()
	{
		return EDatasmithCADStitchingTechnique_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithCADStitchingTechnique(EDatasmithCADStitchingTechnique_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithCADStitchingTechnique"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Hash() { return 3029361319U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithCADStitchingTechnique"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithCADStitchingTechnique::StitchingNone", (int64)EDatasmithCADStitchingTechnique::StitchingNone },
				{ "EDatasmithCADStitchingTechnique::StitchingHeal", (int64)EDatasmithCADStitchingTechnique::StitchingHeal },
				{ "EDatasmithCADStitchingTechnique::StitchingSew", (int64)EDatasmithCADStitchingTechnique::StitchingSew },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
				{ "StitchingHeal.Name", "EDatasmithCADStitchingTechnique::StitchingHeal" },
				{ "StitchingNone.Name", "EDatasmithCADStitchingTechnique::StitchingNone" },
				{ "StitchingSew.Name", "EDatasmithCADStitchingTechnique::StitchingSew" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithCADStitchingTechnique",
				"EDatasmithCADStitchingTechnique",
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
	static UEnum* EDatasmithImportHierarchy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportHierarchy, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportHierarchy"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportHierarchy>()
	{
		return EDatasmithImportHierarchy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportHierarchy(EDatasmithImportHierarchy_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportHierarchy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportHierarchy_Hash() { return 2015737109U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportHierarchy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportHierarchy"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportHierarchy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportHierarchy::UseMultipleActors", (int64)EDatasmithImportHierarchy::UseMultipleActors },
				{ "EDatasmithImportHierarchy::UseSingleActor", (int64)EDatasmithImportHierarchy::UseSingleActor },
				{ "EDatasmithImportHierarchy::UseOneBlueprint", (int64)EDatasmithImportHierarchy::UseOneBlueprint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
				{ "UseMultipleActors.DisplayName", "One StaticMeshActor per Geometric Object" },
				{ "UseMultipleActors.Name", "EDatasmithImportHierarchy::UseMultipleActors" },
				{ "UseMultipleActors.ToolTip", "Create an StaticMeshActor for every node in the hierarchy of the model." },
				{ "UseOneBlueprint.DisplayName", "Blueprint" },
				{ "UseOneBlueprint.Name", "EDatasmithImportHierarchy::UseOneBlueprint" },
				{ "UseOneBlueprint.ToolTip", "Create one root blueprint then one component for every node in the hierarchy of the model. Recommended to import CAD files." },
				{ "UseSingleActor.DisplayName", "Single StaticMeshActor with Components" },
				{ "UseSingleActor.Name", "EDatasmithImportHierarchy::UseSingleActor" },
				{ "UseSingleActor.ToolTip", "Create one root StaticMeshActor then one component for every node in the hierarchy of the model. Recommended to import udatasmith files." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportHierarchy",
				"EDatasmithImportHierarchy",
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
	static UEnum* EDatasmithImportScene_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportScene"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportScene>()
	{
		return EDatasmithImportScene_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportScene(EDatasmithImportScene_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportScene"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Hash() { return 1218073502U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportScene"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportScene::NewLevel", (int64)EDatasmithImportScene::NewLevel },
				{ "EDatasmithImportScene::CurrentLevel", (int64)EDatasmithImportScene::CurrentLevel },
				{ "EDatasmithImportScene::AssetsOnly", (int64)EDatasmithImportScene::AssetsOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetsOnly.DisplayName", "Assets Only" },
				{ "AssetsOnly.Name", "EDatasmithImportScene::AssetsOnly" },
				{ "AssetsOnly.ToolTip", "Do not modify the Level after import. No actor will be created (including the Blueprint if requested by the ImportHierarchy" },
				{ "CurrentLevel.DisplayName", "Merge to Current Level" },
				{ "CurrentLevel.Name", "EDatasmithImportScene::CurrentLevel" },
				{ "CurrentLevel.ToolTip", "Use the current Level to spawn the actors after the import." },
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
				{ "NewLevel.DisplayName", "Create New Level" },
				{ "NewLevel.Name", "EDatasmithImportScene::NewLevel" },
				{ "NewLevel.ToolTip", "Create a new Level and spawn the actors after the import." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportScene",
				"EDatasmithImportScene",
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
	static UEnum* EDatasmithImportLightmapMax_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportLightmapMax"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportLightmapMax>()
	{
		return EDatasmithImportLightmapMax_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportLightmapMax(EDatasmithImportLightmapMax_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportLightmapMax"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Hash() { return 130742819U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportLightmapMax"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportLightmapMax::LIGHTMAP_64", (int64)EDatasmithImportLightmapMax::LIGHTMAP_64 },
				{ "EDatasmithImportLightmapMax::LIGHTMAP_128", (int64)EDatasmithImportLightmapMax::LIGHTMAP_128 },
				{ "EDatasmithImportLightmapMax::LIGHTMAP_256", (int64)EDatasmithImportLightmapMax::LIGHTMAP_256 },
				{ "EDatasmithImportLightmapMax::LIGHTMAP_512", (int64)EDatasmithImportLightmapMax::LIGHTMAP_512 },
				{ "EDatasmithImportLightmapMax::LIGHTMAP_1024", (int64)EDatasmithImportLightmapMax::LIGHTMAP_1024 },
				{ "EDatasmithImportLightmapMax::LIGHTMAP_2048", (int64)EDatasmithImportLightmapMax::LIGHTMAP_2048 },
				{ "EDatasmithImportLightmapMax::LIGHTMAP_4096", (int64)EDatasmithImportLightmapMax::LIGHTMAP_4096 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LIGHTMAP_1024.DisplayName", "1024" },
				{ "LIGHTMAP_1024.Name", "EDatasmithImportLightmapMax::LIGHTMAP_1024" },
				{ "LIGHTMAP_128.DisplayName", "128" },
				{ "LIGHTMAP_128.Name", "EDatasmithImportLightmapMax::LIGHTMAP_128" },
				{ "LIGHTMAP_2048.DisplayName", "2048" },
				{ "LIGHTMAP_2048.Name", "EDatasmithImportLightmapMax::LIGHTMAP_2048" },
				{ "LIGHTMAP_256.DisplayName", "256" },
				{ "LIGHTMAP_256.Name", "EDatasmithImportLightmapMax::LIGHTMAP_256" },
				{ "LIGHTMAP_4096.DisplayName", "4096" },
				{ "LIGHTMAP_4096.Name", "EDatasmithImportLightmapMax::LIGHTMAP_4096" },
				{ "LIGHTMAP_512.DisplayName", "512" },
				{ "LIGHTMAP_512.Name", "EDatasmithImportLightmapMax::LIGHTMAP_512" },
				{ "LIGHTMAP_64.DisplayName", "64" },
				{ "LIGHTMAP_64.Name", "EDatasmithImportLightmapMax::LIGHTMAP_64" },
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportLightmapMax",
				"EDatasmithImportLightmapMax",
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
	static UEnum* EDatasmithImportLightmapMin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportLightmapMin"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportLightmapMin>()
	{
		return EDatasmithImportLightmapMin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportLightmapMin(EDatasmithImportLightmapMin_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportLightmapMin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Hash() { return 2835215416U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportLightmapMin"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportLightmapMin::LIGHTMAP_16", (int64)EDatasmithImportLightmapMin::LIGHTMAP_16 },
				{ "EDatasmithImportLightmapMin::LIGHTMAP_32", (int64)EDatasmithImportLightmapMin::LIGHTMAP_32 },
				{ "EDatasmithImportLightmapMin::LIGHTMAP_64", (int64)EDatasmithImportLightmapMin::LIGHTMAP_64 },
				{ "EDatasmithImportLightmapMin::LIGHTMAP_128", (int64)EDatasmithImportLightmapMin::LIGHTMAP_128 },
				{ "EDatasmithImportLightmapMin::LIGHTMAP_256", (int64)EDatasmithImportLightmapMin::LIGHTMAP_256 },
				{ "EDatasmithImportLightmapMin::LIGHTMAP_512", (int64)EDatasmithImportLightmapMin::LIGHTMAP_512 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LIGHTMAP_128.DisplayName", "128" },
				{ "LIGHTMAP_128.Name", "EDatasmithImportLightmapMin::LIGHTMAP_128" },
				{ "LIGHTMAP_16.DisplayName", "16" },
				{ "LIGHTMAP_16.Name", "EDatasmithImportLightmapMin::LIGHTMAP_16" },
				{ "LIGHTMAP_256.DisplayName", "256" },
				{ "LIGHTMAP_256.Name", "EDatasmithImportLightmapMin::LIGHTMAP_256" },
				{ "LIGHTMAP_32.DisplayName", "32" },
				{ "LIGHTMAP_32.Name", "EDatasmithImportLightmapMin::LIGHTMAP_32" },
				{ "LIGHTMAP_512.DisplayName", "512" },
				{ "LIGHTMAP_512.Name", "EDatasmithImportLightmapMin::LIGHTMAP_512" },
				{ "LIGHTMAP_64.DisplayName", "64" },
				{ "LIGHTMAP_64.Name", "EDatasmithImportLightmapMin::LIGHTMAP_64" },
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportLightmapMin",
				"EDatasmithImportLightmapMin",
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
	static UEnum* EDatasmithImportMaterialQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportMaterialQuality"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportMaterialQuality>()
	{
		return EDatasmithImportMaterialQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportMaterialQuality(EDatasmithImportMaterialQuality_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportMaterialQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Hash() { return 3658277921U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportMaterialQuality"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportMaterialQuality::UseNoFresnelCurves", (int64)EDatasmithImportMaterialQuality::UseNoFresnelCurves },
				{ "EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves", (int64)EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves },
				{ "EDatasmithImportMaterialQuality::UseRealFresnelCurves", (int64)EDatasmithImportMaterialQuality::UseRealFresnelCurves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
				{ "UseNoFresnelCurves.Name", "EDatasmithImportMaterialQuality::UseNoFresnelCurves" },
				{ "UseRealFresnelCurves.Name", "EDatasmithImportMaterialQuality::UseRealFresnelCurves" },
				{ "UseSimplifierFresnelCurves.Name", "EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportMaterialQuality",
				"EDatasmithImportMaterialQuality",
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
	static UEnum* EDatasmithImportActorPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportActorPolicy"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportActorPolicy>()
	{
		return EDatasmithImportActorPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportActorPolicy(EDatasmithImportActorPolicy_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportActorPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Hash() { return 976526158U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportActorPolicy"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportActorPolicy::Update", (int64)EDatasmithImportActorPolicy::Update },
				{ "EDatasmithImportActorPolicy::Full", (int64)EDatasmithImportActorPolicy::Full },
				{ "EDatasmithImportActorPolicy::Ignore", (int64)EDatasmithImportActorPolicy::Ignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Full.Comment", "/** Same as update but recreates deleted actors so that the source and destination are the same. */" },
				{ "Full.Name", "EDatasmithImportActorPolicy::Full" },
				{ "Full.ToolTip", "Same as update but recreates deleted actors so that the source and destination are the same." },
				{ "Ignore.Comment", "/** Skip importing a certain type of actors */" },
				{ "Ignore.Name", "EDatasmithImportActorPolicy::Ignore" },
				{ "Ignore.ToolTip", "Skip importing a certain type of actors" },
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
				{ "Update.Comment", "/** Import new actors, update and delete existing actors. Doesn't recreate actors that exist in the source both not in the destination. */" },
				{ "Update.Name", "EDatasmithImportActorPolicy::Update" },
				{ "Update.ToolTip", "Import new actors, update and delete existing actors. Doesn't recreate actors that exist in the source both not in the destination." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportActorPolicy",
				"EDatasmithImportActorPolicy",
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
	static UEnum* EDatasmithImportAssetConflictPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportAssetConflictPolicy"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportAssetConflictPolicy>()
	{
		return EDatasmithImportAssetConflictPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportAssetConflictPolicy(EDatasmithImportAssetConflictPolicy_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportAssetConflictPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Hash() { return 4283097109U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportAssetConflictPolicy"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportAssetConflictPolicy::Replace", (int64)EDatasmithImportAssetConflictPolicy::Replace },
				{ "EDatasmithImportAssetConflictPolicy::Update", (int64)EDatasmithImportAssetConflictPolicy::Update },
				{ "EDatasmithImportAssetConflictPolicy::Use", (int64)EDatasmithImportAssetConflictPolicy::Use },
				{ "EDatasmithImportAssetConflictPolicy::Ignore", (int64)EDatasmithImportAssetConflictPolicy::Ignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ignore.Comment", "/** Skip new asset */" },
				{ "Ignore.Name", "EDatasmithImportAssetConflictPolicy::Ignore" },
				{ "Ignore.ToolTip", "Skip new asset" },
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
				{ "Replace.Comment", "/** Replace existing asset with new one */" },
				{ "Replace.Name", "EDatasmithImportAssetConflictPolicy::Replace" },
				{ "Replace.ToolTip", "Replace existing asset with new one" },
				{ "Update.Comment", "/** Update existing asset with new values */" },
				{ "Update.Name", "EDatasmithImportAssetConflictPolicy::Update" },
				{ "Update.ToolTip", "Update existing asset with new values" },
				{ "Use.Comment", "/** Use existing asset instead of creating new one */" },
				{ "Use.Name", "EDatasmithImportAssetConflictPolicy::Use" },
				{ "Use.ToolTip", "Use existing asset instead of creating new one" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportAssetConflictPolicy",
				"EDatasmithImportAssetConflictPolicy",
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
	static UEnum* EDatasmithImportSearchPackagePolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportSearchPackagePolicy"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportSearchPackagePolicy>()
	{
		return EDatasmithImportSearchPackagePolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithImportSearchPackagePolicy(EDatasmithImportSearchPackagePolicy_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithImportSearchPackagePolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Hash() { return 1222278287U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithImportSearchPackagePolicy"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithImportSearchPackagePolicy::Current", (int64)EDatasmithImportSearchPackagePolicy::Current },
				{ "EDatasmithImportSearchPackagePolicy::All", (int64)EDatasmithImportSearchPackagePolicy::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "/** Search in all packages */" },
				{ "All.Name", "EDatasmithImportSearchPackagePolicy::All" },
				{ "All.ToolTip", "Search in all packages" },
				{ "Current.Comment", "/** Search only in current package */" },
				{ "Current.DisplayName", "Current" },
				{ "Current.DisplayValue", "Current" },
				{ "Current.Name", "EDatasmithImportSearchPackagePolicy::Current" },
				{ "Current.ToolTip", "Search only in current package" },
				{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithImportSearchPackagePolicy",
				"EDatasmithImportSearchPackagePolicy",
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
class UScriptStruct* FDatasmithTessellationOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithTessellationOptions, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithTessellationOptions"), sizeof(FDatasmithTessellationOptions), Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithTessellationOptions>()
{
	return FDatasmithTessellationOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithTessellationOptions(FDatasmithTessellationOptions::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithTessellationOptions"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithTessellationOptions
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithTessellationOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithTessellationOptions")),new UScriptStruct::TCppStructOps<FDatasmithTessellationOptions>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithTessellationOptions;
	struct Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StitchingTechnique_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StitchingTechnique;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StitchingTechnique_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEdgeLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEdgeLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChordTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChordTolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithTessellationOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Stitching technique applied on model before tessellation. Sewing could impact number of objects." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique = { "StitchingTechnique", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, StitchingTechnique), Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum angle between adjacent triangles. Smaller values make more triangles." },
		{ "Units", "deg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance = { "NormalTolerance", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, NormalTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max Edge Length" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum length of any edge in the generated triangles. Smaller values make more triangles." },
		{ "Units", "cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength = { "MaxEdgeLength", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, MaxEdgeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum distance between any generated triangle and the original surface. Smaller values make more triangles." },
		{ "Units", "cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance = { "ChordTolerance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, ChordTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithTessellationOptions",
		sizeof(FDatasmithTessellationOptions),
		alignof(FDatasmithTessellationOptions),
		Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithTessellationOptions"), sizeof(FDatasmithTessellationOptions), Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Hash() { return 3362087493U; }
class UScriptStruct* FDatasmithImportBaseOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithImportBaseOptions"), sizeof(FDatasmithImportBaseOptions), Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithImportBaseOptions>()
{
	return FDatasmithImportBaseOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithImportBaseOptions(FDatasmithImportBaseOptions::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithImportBaseOptions"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithImportBaseOptions
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithImportBaseOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithImportBaseOptions")),new UScriptStruct::TCppStructOps<FDatasmithImportBaseOptions>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithImportBaseOptions;
	struct Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeAnimation_MetaData[];
#endif
		static void NewProp_bIncludeAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeCamera_MetaData[];
#endif
		static void NewProp_bIncludeCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeLight_MetaData[];
#endif
		static void NewProp_bIncludeLight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeMaterial_MetaData[];
#endif
		static void NewProp_bIncludeMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeGeometry_MetaData[];
#endif
		static void NewProp_bIncludeGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneHandling_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SceneHandling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SceneHandling_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithImportBaseOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions_MetaData[] = {
		{ "Category", "Process" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions = { "StaticMeshOptions", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithImportBaseOptions, StaticMeshOptions), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions_MetaData[] = {
		{ "Category", "Process" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions = { "AssetOptions", nullptr, (EPropertyFlags)0x0010040000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithImportBaseOptions, AssetOptions), Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import animations */" },
		{ "DisplayName", "Animations" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import animations" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_SetBit(void* Obj)
	{
		((FDatasmithImportBaseOptions*)Obj)->bIncludeAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation = { "bIncludeAnimation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import cameras */" },
		{ "DisplayName", "Cameras" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import cameras" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_SetBit(void* Obj)
	{
		((FDatasmithImportBaseOptions*)Obj)->bIncludeCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera = { "bIncludeCamera", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import lights */" },
		{ "DisplayName", "Lights" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_SetBit(void* Obj)
	{
		((FDatasmithImportBaseOptions*)Obj)->bIncludeLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight = { "bIncludeLight", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import materials and textures */" },
		{ "DisplayName", "Materials & Textures" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import materials and textures" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_SetBit(void* Obj)
	{
		((FDatasmithImportBaseOptions*)Obj)->bIncludeMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial = { "bIncludeMaterial", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import geometry */" },
		{ "DisplayName", "Geometry" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import geometry" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_SetBit(void* Obj)
	{
		((FDatasmithImportBaseOptions*)Obj)->bIncludeGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry = { "bIncludeGeometry", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** Specifies where to put the content */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies where to put the content" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling = { "SceneHandling", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithImportBaseOptions, SceneHandling), Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithImportBaseOptions",
		sizeof(FDatasmithImportBaseOptions),
		alignof(FDatasmithImportBaseOptions),
		Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithImportBaseOptions"), sizeof(FDatasmithImportBaseOptions), Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Hash() { return 299499966U; }
class UScriptStruct* FDatasmithReimportOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithReimportOptions, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithReimportOptions"), sizeof(FDatasmithReimportOptions), Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithReimportOptions>()
{
	return FDatasmithReimportOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithReimportOptions(FDatasmithReimportOptions::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithReimportOptions"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithReimportOptions
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithReimportOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithReimportOptions")),new UScriptStruct::TCppStructOps<FDatasmithReimportOptions>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithReimportOptions;
	struct Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRespawnDeletedActors_MetaData[];
#endif
		static void NewProp_bRespawnDeletedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRespawnDeletedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateActors_MetaData[];
#endif
		static void NewProp_bUpdateActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithReimportOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_MetaData[] = {
		{ "Category", "SyncCurrentLevelActors" },
		{ "Comment", "/** Specifies whether or not to add back Actors you've deleted from the current Level */" },
		{ "DisplayName", "Re-Spawn Deleted Actors" },
		{ "EditCondition", "bUpdateActors" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to add back Actors you've deleted from the current Level" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_SetBit(void* Obj)
	{
		((FDatasmithReimportOptions*)Obj)->bRespawnDeletedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors = { "bRespawnDeletedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithReimportOptions), &Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_MetaData[] = {
		{ "Category", "SyncCurrentLevelActors" },
		{ "Comment", "/** Specifies whether or not to update Datasmith Scene Actors in the current Level */" },
		{ "DisplayName", "Datasmith Scene Actors" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to update Datasmith Scene Actors in the current Level" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_SetBit(void* Obj)
	{
		((FDatasmithReimportOptions*)Obj)->bUpdateActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors = { "bUpdateActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithReimportOptions), &Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithReimportOptions",
		sizeof(FDatasmithReimportOptions),
		alignof(FDatasmithReimportOptions),
		Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithReimportOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithReimportOptions"), sizeof(FDatasmithReimportOptions), Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_Hash() { return 982183299U; }
class UScriptStruct* FDatasmithStaticMeshImportOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithStaticMeshImportOptions"), sizeof(FDatasmithStaticMeshImportOptions), Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithStaticMeshImportOptions>()
{
	return FDatasmithStaticMeshImportOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithStaticMeshImportOptions(FDatasmithStaticMeshImportOptions::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithStaticMeshImportOptions"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticMeshImportOptions
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticMeshImportOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithStaticMeshImportOptions")),new UScriptStruct::TCppStructOps<FDatasmithStaticMeshImportOptions>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticMeshImportOptions;
	struct Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLightmapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxLightmapResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxLightmapResolution_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinLightmapResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinLightmapResolution_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithStaticMeshImportOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((FDatasmithStaticMeshImportOptions*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithStaticMeshImportOptions), &Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Lightmap" },
		{ "DisplayName", "Generate Lightmap UVs" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((FDatasmithStaticMeshImportOptions*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDatasmithStaticMeshImportOptions), &Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_MetaData[] = {
		{ "Category", "Lightmap" },
		{ "Comment", "/** Maximum resolution for auto-generated lightmap UVs */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum resolution for auto-generated lightmap UVs" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution = { "MaxLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithStaticMeshImportOptions, MaxLightmapResolution), Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "Lightmap" },
		{ "Comment", "/** Minimum resolution for auto-generated lightmap UVs */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Minimum resolution for auto-generated lightmap UVs" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithStaticMeshImportOptions, MinLightmapResolution), Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithStaticMeshImportOptions",
		sizeof(FDatasmithStaticMeshImportOptions),
		alignof(FDatasmithStaticMeshImportOptions),
		Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithStaticMeshImportOptions"), sizeof(FDatasmithStaticMeshImportOptions), Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Hash() { return 1736199185U; }
class UScriptStruct* FDatasmithAssetImportOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithAssetImportOptions"), sizeof(FDatasmithAssetImportOptions), Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithAssetImportOptions>()
{
	return FDatasmithAssetImportOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithAssetImportOptions(FDatasmithAssetImportOptions::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithAssetImportOptions"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithAssetImportOptions
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithAssetImportOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithAssetImportOptions")),new UScriptStruct::TCppStructOps<FDatasmithAssetImportOptions>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithAssetImportOptions;
	struct Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithAssetImportOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithAssetImportOptions, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithAssetImportOptions",
		sizeof(FDatasmithAssetImportOptions),
		alignof(FDatasmithAssetImportOptions),
		Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithAssetImportOptions"), sizeof(FDatasmithAssetImportOptions), Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Hash() { return 1816924577U; }
	void UDatasmithOptionsBase::StaticRegisterNativesUDatasmithOptionsBase()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister()
	{
		return UDatasmithOptionsBase::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithOptionsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithOptionsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithOptionsBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all import options in datasmith.\n *\n * Notable feature: forces a full serialization of its properties (by opposition\n * to the standard delta serialization which stores only the diff wrt the CDO)\n * The intent is to store the exact options used in a previous import.\n */" },
		{ "IncludePath", "DatasmithImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Base class for all import options in datasmith.\n\nNotable feature: forces a full serialization of its properties (by opposition\nto the standard delta serialization which stores only the diff wrt the CDO)\nThe intent is to store the exact options used in a previous import." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithOptionsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithOptionsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithOptionsBase_Statics::ClassParams = {
		&UDatasmithOptionsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithOptionsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithOptionsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithOptionsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithOptionsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithOptionsBase, 2708654536);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithOptionsBase>()
	{
		return UDatasmithOptionsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithOptionsBase(Z_Construct_UClass_UDatasmithOptionsBase, &UDatasmithOptionsBase::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithOptionsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithOptionsBase);
	IMPLEMENT_FARCHIVE_SERIALIZER(UDatasmithOptionsBase)
	void UDatasmithCommonTessellationOptions::StaticRegisterNativesUDatasmithCommonTessellationOptions()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister()
	{
		return UDatasmithCommonTessellationOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCommonTessellationOptions, Options), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCommonTessellationOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::ClassParams = {
		&UDatasmithCommonTessellationOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithCommonTessellationOptions, 224885481);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCommonTessellationOptions>()
	{
		return UDatasmithCommonTessellationOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithCommonTessellationOptions(Z_Construct_UClass_UDatasmithCommonTessellationOptions, &UDatasmithCommonTessellationOptions::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithCommonTessellationOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCommonTessellationOptions);
	void UDatasmithImportOptions::StaticRegisterNativesUDatasmithImportOptions()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithImportOptions_NoRegister()
	{
		return UDatasmithImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReimportOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActorImportPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OtherActorImportPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OtherActorImportPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraImportPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraImportPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraImportPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightImportPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightImportPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightImportPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActorImportPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaticMeshActorImportPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaticMeshActorImportPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureConflictPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureConflictPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureConflictPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConflictPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialConflictPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialConflictPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchPackagePolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchPackagePolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchPackagePolicy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "NotVisible" },
		{ "IncludePath", "DatasmithImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "NotVisible" },
		{ "Comment", "/** Full path of the imported file */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Full path of the imported file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, FilePath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "NotVisible" },
		{ "Comment", "/** Name of the imported file without its path */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Name of the imported file without its path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, FileName), METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions_MetaData[] = {
		{ "Category", "Reimport" },
		{ "Comment", "/** Options specific to the reimport process */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Options specific to the reimport process" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions = { "ReimportOptions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, ReimportOptions), Z_Construct_UScriptStruct_FDatasmithReimportOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, BaseOptions), Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_MetaData[] = {
		{ "Comment", "/** Specifies what to do when material conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when material conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality = { "MaterialQuality", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, MaterialQuality), Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when actor conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when actor conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy = { "OtherActorImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, OtherActorImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when material conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when material conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy = { "CameraImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, CameraImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when light conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when light conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy = { "LightImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, LightImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when actor conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when actor conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy = { "StaticMeshActorImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, StaticMeshActorImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when texture conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when texture conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy = { "TextureConflictPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, TextureConflictPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when material conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when material conflicts" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy = { "MaterialConflictPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, MaterialConflictPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_MetaData[] = {
		{ "Comment", "/** Specifies where to search for assets */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies where to search for assets" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy = { "SearchPackagePolicy", nullptr, (EPropertyFlags)0x0010040000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithImportOptions, SearchPackagePolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy, METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithImportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithImportOptions_Statics::ClassParams = {
		&UDatasmithImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithImportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithImportOptions, 3029344800);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithImportOptions>()
	{
		return UDatasmithImportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithImportOptions(Z_Construct_UClass_UDatasmithImportOptions, &UDatasmithImportOptions::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
