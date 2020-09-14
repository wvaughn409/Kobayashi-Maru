// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
// End Cross Module References
class UScriptStruct* FDatasmithMeshSectionInfoMapTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithMeshSectionInfoMapTemplate"), sizeof(FDatasmithMeshSectionInfoMapTemplate), Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithMeshSectionInfoMapTemplate>()
{
	return FDatasmithMeshSectionInfoMapTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate(FDatasmithMeshSectionInfoMapTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithMeshSectionInfoMapTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshSectionInfoMapTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshSectionInfoMapTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithMeshSectionInfoMapTemplate")),new UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoMapTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshSectionInfoMapTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoMapTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithMeshSectionInfoMapTemplate, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithMeshSectionInfoMapTemplate",
		sizeof(FDatasmithMeshSectionInfoMapTemplate),
		alignof(FDatasmithMeshSectionInfoMapTemplate),
		Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithMeshSectionInfoMapTemplate"), sizeof(FDatasmithMeshSectionInfoMapTemplate), Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Hash() { return 894440340U; }
class UScriptStruct* FDatasmithMeshSectionInfoTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithMeshSectionInfoTemplate"), sizeof(FDatasmithMeshSectionInfoTemplate), Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithMeshSectionInfoTemplate>()
{
	return FDatasmithMeshSectionInfoTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithMeshSectionInfoTemplate(FDatasmithMeshSectionInfoTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithMeshSectionInfoTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshSectionInfoTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshSectionInfoTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithMeshSectionInfoTemplate")),new UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshSectionInfoTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithMeshSectionInfoTemplate, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithMeshSectionInfoTemplate",
		sizeof(FDatasmithMeshSectionInfoTemplate),
		alignof(FDatasmithMeshSectionInfoTemplate),
		Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithMeshSectionInfoTemplate"), sizeof(FDatasmithMeshSectionInfoTemplate), Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Hash() { return 1601669687U; }
class UScriptStruct* FDatasmithStaticMaterialTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithStaticMaterialTemplate"), sizeof(FDatasmithStaticMaterialTemplate), Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithStaticMaterialTemplate>()
{
	return FDatasmithStaticMaterialTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithStaticMaterialTemplate(FDatasmithStaticMaterialTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithStaticMaterialTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticMaterialTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticMaterialTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithStaticMaterialTemplate")),new UScriptStruct::TCppStructOps<FDatasmithStaticMaterialTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticMaterialTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithStaticMaterialTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithStaticMaterialTemplate, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithStaticMaterialTemplate, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithStaticMaterialTemplate",
		sizeof(FDatasmithStaticMaterialTemplate),
		alignof(FDatasmithStaticMaterialTemplate),
		Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithStaticMaterialTemplate"), sizeof(FDatasmithStaticMaterialTemplate), Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Hash() { return 2313852385U; }
class UScriptStruct* FDatasmithMeshBuildSettingsTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithMeshBuildSettingsTemplate"), sizeof(FDatasmithMeshBuildSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithMeshBuildSettingsTemplate>()
{
	return FDatasmithMeshBuildSettingsTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate(FDatasmithMeshBuildSettingsTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithMeshBuildSettingsTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshBuildSettingsTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshBuildSettingsTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithMeshBuildSettingsTemplate")),new UScriptStruct::TCppStructOps<FDatasmithMeshBuildSettingsTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithMeshBuildSettingsTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[];
#endif
		static void NewProp_bRecomputeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshBuildSettingsTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithMeshBuildSettingsTemplate, DstLightmapIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithMeshBuildSettingsTemplate, SrcLightmapIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithMeshBuildSettingsTemplate, MinLightmapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bUseHighPrecisionTangentBasis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bRecomputeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bRecomputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((FDatasmithMeshBuildSettingsTemplate*)Obj)->bUseMikkTSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithMeshBuildSettingsTemplate",
		sizeof(FDatasmithMeshBuildSettingsTemplate),
		alignof(FDatasmithMeshBuildSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithMeshBuildSettingsTemplate"), sizeof(FDatasmithMeshBuildSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Hash() { return 1262784870U; }
	void UDatasmithStaticMeshTemplate::StaticRegisterNativesUDatasmithStaticMeshTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate_NoRegister()
	{
		return UDatasmithStaticMeshTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionInfoMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithStaticMeshTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials = { "StaticMaterials", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, StaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_Inner = { "StaticMaterials", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, BuildSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_Inner = { "BuildSettings", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, LightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, LightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap = { "SectionInfoMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, SectionInfoMap), Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::ClassParams = {
		&UDatasmithStaticMeshTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithStaticMeshTemplate, 250500698);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshTemplate>()
	{
		return UDatasmithStaticMeshTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithStaticMeshTemplate(Z_Construct_UClass_UDatasmithStaticMeshTemplate, &UDatasmithStaticMeshTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithStaticMeshTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
