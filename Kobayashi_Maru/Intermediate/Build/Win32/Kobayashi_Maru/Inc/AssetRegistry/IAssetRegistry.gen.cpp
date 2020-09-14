// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Public/IAssetRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetRegistry() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
// End Cross Module References
class UScriptStruct* FAssetRegistryDependencyOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetRegistryDependencyOptions"), sizeof(FAssetRegistryDependencyOptions), Get_Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Hash());
	}
	return Singleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FAssetRegistryDependencyOptions>()
{
	return FAssetRegistryDependencyOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetRegistryDependencyOptions(FAssetRegistryDependencyOptions::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetRegistryDependencyOptions"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetRegistryDependencyOptions
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetRegistryDependencyOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetRegistryDependencyOptions")),new UScriptStruct::TCppStructOps<FAssetRegistryDependencyOptions>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetRegistryDependencyOptions;
	struct Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeHardManagementReferences_MetaData[];
#endif
		static void NewProp_bIncludeHardManagementReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeHardManagementReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeSoftManagementReferences_MetaData[];
#endif
		static void NewProp_bIncludeSoftManagementReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSoftManagementReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeSearchableNames_MetaData[];
#endif
		static void NewProp_bIncludeSearchableNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSearchableNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeHardPackageReferences_MetaData[];
#endif
		static void NewProp_bIncludeHardPackageReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeHardPackageReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeSoftPackageReferences_MetaData[];
#endif
		static void NewProp_bIncludeSoftPackageReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSoftPackageReferences;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetRegistryDependencyOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Reference that says one object directly manages another object, set when Primary Assets manage things explicitly */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Reference that says one object directly manages another object, set when Primary Assets manage things explicitly" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_SetBit(void* Obj)
	{
		((FAssetRegistryDependencyOptions*)Obj)->bIncludeHardManagementReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences = { "bIncludeHardManagementReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Indirect management references, these are set through recursion for Primary Assets that manage packages or other primary assets */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Indirect management references, these are set through recursion for Primary Assets that manage packages or other primary assets" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_SetBit(void* Obj)
	{
		((FAssetRegistryDependencyOptions*)Obj)->bIncludeSoftManagementReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences = { "bIncludeSoftManagementReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** References to specific SearchableNames inside a package */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "References to specific SearchableNames inside a package" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_SetBit(void* Obj)
	{
		((FAssetRegistryDependencyOptions*)Obj)->bIncludeSearchableNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames = { "bIncludeSearchableNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Dependencies which are required for correct usage of the source asset, and must be loaded at the same time */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Dependencies which are required for correct usage of the source asset, and must be loaded at the same time" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_SetBit(void* Obj)
	{
		((FAssetRegistryDependencyOptions*)Obj)->bIncludeHardPackageReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences = { "bIncludeHardPackageReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Dependencies which don't need to be loaded for the object to be used (i.e. soft object paths) */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Dependencies which don't need to be loaded for the object to be used (i.e. soft object paths)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_SetBit(void* Obj)
	{
		((FAssetRegistryDependencyOptions*)Obj)->bIncludeSoftPackageReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences = { "bIncludeSoftPackageReferences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
		nullptr,
		&NewStructOps,
		"AssetRegistryDependencyOptions",
		sizeof(FAssetRegistryDependencyOptions),
		alignof(FAssetRegistryDependencyOptions),
		Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetRegistryDependencyOptions"), sizeof(FAssetRegistryDependencyOptions), Get_Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Hash() { return 2288498429U; }
	DEFINE_FUNCTION(IAssetRegistry::execIsLoadingAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadingAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execScanModifiedAssetFiles)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFilePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScanModifiedAssetFiles(Z_Param_Out_InFilePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execPrioritizeSearchPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToPrioritize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrioritizeSearchPath(Z_Param_PathToPrioritize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execSearchAllAssets)
	{
		P_GET_UBOOL(Z_Param_bSynchronousSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchAllAssets(Z_Param_bSynchronousSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execScanFilesSynchronous)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFilePaths);
		P_GET_UBOOL(Z_Param_bForceRescan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScanFilesSynchronous(Z_Param_Out_InFilePaths,Z_Param_bForceRescan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execScanPathsSynchronous)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPaths);
		P_GET_UBOOL(Z_Param_bForceRescan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScanPathsSynchronous(Z_Param_Out_InPaths,Z_Param_bForceRescan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execUseFilterToExcludeAssets)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList);
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseFilterToExcludeAssets(Z_Param_Out_AssetDataList,Z_Param_Out_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execRunAssetsThroughFilter)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList);
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunAssetsThroughFilter(Z_Param_Out_AssetDataList,Z_Param_Out_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetSubPaths)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBasePath);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList);
		P_GET_UBOOL(Z_Param_bInRecurse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSubPaths(Z_Param_InBasePath,Z_Param_Out_OutPathList,Z_Param_bInRecurse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAllCachedPaths)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllCachedPaths(Z_Param_Out_OutPathList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execK2_GetReferencers)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_STRUCT_REF(FAssetRegistryDependencyOptions,Z_Param_Out_ReferenceOptions);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutReferencers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_GetReferencers(Z_Param_PackageName,Z_Param_Out_ReferenceOptions,Z_Param_Out_OutReferencers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execK2_GetDependencies)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_STRUCT_REF(FAssetRegistryDependencyOptions,Z_Param_Out_DependencyOptions);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_GetDependencies(Z_Param_PackageName,Z_Param_Out_DependencyOptions,Z_Param_Out_OutDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAllAssets)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllAssets(Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAssetByObjectPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ObjectPath);
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=P_THIS->GetAssetByObjectPath(Z_Param_ObjectPath,Z_Param_bIncludeOnlyOnDiskAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAssets)
	{
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAssets(Z_Param_Out_Filter,Z_Param_Out_OutAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClassName);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
		P_GET_UBOOL(Z_Param_bSearchSubClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAssetsByClass(Z_Param_ClassName,Z_Param_Out_OutAssetData,Z_Param_bSearchSubClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackagePath);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAssetsByPath(Z_Param_PackagePath,Z_Param_Out_OutAssetData,Z_Param_bRecursive,Z_Param_bIncludeOnlyOnDiskAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByPackageName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAssetsByPackageName(Z_Param_PackageName,Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetRegistry::execHasAssets)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackagePath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAssets(Z_Param_PackagePath,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	void UAssetRegistry::StaticRegisterNativesUAssetRegistry()
	{
		UClass* Class = UAssetRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAssets", &IAssetRegistry::execGetAllAssets },
			{ "GetAllCachedPaths", &IAssetRegistry::execGetAllCachedPaths },
			{ "GetAssetByObjectPath", &IAssetRegistry::execGetAssetByObjectPath },
			{ "GetAssets", &IAssetRegistry::execGetAssets },
			{ "GetAssetsByClass", &IAssetRegistry::execGetAssetsByClass },
			{ "GetAssetsByPackageName", &IAssetRegistry::execGetAssetsByPackageName },
			{ "GetAssetsByPath", &IAssetRegistry::execGetAssetsByPath },
			{ "GetSubPaths", &IAssetRegistry::execGetSubPaths },
			{ "HasAssets", &IAssetRegistry::execHasAssets },
			{ "IsLoadingAssets", &IAssetRegistry::execIsLoadingAssets },
			{ "K2_GetDependencies", &IAssetRegistry::execK2_GetDependencies },
			{ "K2_GetReferencers", &IAssetRegistry::execK2_GetReferencers },
			{ "PrioritizeSearchPath", &IAssetRegistry::execPrioritizeSearchPath },
			{ "RunAssetsThroughFilter", &IAssetRegistry::execRunAssetsThroughFilter },
			{ "ScanFilesSynchronous", &IAssetRegistry::execScanFilesSynchronous },
			{ "ScanModifiedAssetFiles", &IAssetRegistry::execScanModifiedAssetFiles },
			{ "ScanPathsSynchronous", &IAssetRegistry::execScanPathsSynchronous },
			{ "SearchAllAssets", &IAssetRegistry::execSearchAllAssets },
			{ "UseFilterToExcludeAssets", &IAssetRegistry::execUseFilterToExcludeAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics
	{
		struct AssetRegistry_eventGetAllAssets_Parms
		{
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAllAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAllAssets_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAllAssets_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets in the registry.\n\x09 * This method may be slow, use a filter if possible to avoid iterating over the entire registry.\n\x09 *\n\x09 * @param OutAssetData the list of assets in this path\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in the registry.\nThis method may be slow, use a filter if possible to avoid iterating over the entire registry.\n\n@param OutAssetData the list of assets in this path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAllAssets", nullptr, nullptr, sizeof(AssetRegistry_eventGetAllAssets_Parms), Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics
	{
		struct AssetRegistry_eventGetAllCachedPaths_Parms
		{
			TArray<FString> OutPathList;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList = { "OutPathList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAllCachedPaths_Parms, OutPathList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList_Inner = { "OutPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Gets a list of all paths that are currently cached */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets a list of all paths that are currently cached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAllCachedPaths", nullptr, nullptr, sizeof(AssetRegistry_eventGetAllCachedPaths_Parms), Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics
	{
		struct AssetRegistry_eventGetAssetByObjectPath_Parms
		{
			FName ObjectPath;
			bool bIncludeOnlyOnDiskAssets;
			FAssetData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetByObjectPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ObjectPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets the asset data for the specified object path\n\x09 *\n\x09 * @param ObjectPath the path of the object to be looked up\n\x09 * @param bIncludeOnlyOnDiskAssets if true, in-memory objects will be ignored. The call will be faster.\n\x09 * @return the assets data;Will be invalid if object could not be found\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets the asset data for the specified object path\n\n@param ObjectPath the path of the object to be looked up\n@param bIncludeOnlyOnDiskAssets if true, in-memory objects will be ignored. The call will be faster.\n@return the assets data;Will be invalid if object could not be found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetByObjectPath", nullptr, nullptr, sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics
	{
		struct AssetRegistry_eventGetAssets_Parms
		{
			FARFilter Filter;
			TArray<FAssetData> OutAssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets that match the filter.\n\x09 * Assets returned must satisfy every filter component if there is at least one element in the component's array.\n\x09 * Assets will satisfy a component if they match any of the elements in it.\n\x09 *\n\x09 * @param Filter filter to apply to the assets in the AssetRegistry\n\x09 * @param OutAssetData the list of assets in this path\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets that match the filter.\nAssets returned must satisfy every filter component if there is at least one element in the component's array.\nAssets will satisfy a component if they match any of the elements in it.\n\n@param Filter filter to apply to the assets in the AssetRegistry\n@param OutAssetData the list of assets in this path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssets", nullptr, nullptr, sizeof(AssetRegistry_eventGetAssets_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics
	{
		struct AssetRegistry_eventGetAssetsByClass_Parms
		{
			FName ClassName;
			TArray<FAssetData> OutAssetData;
			bool bSearchSubClasses;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSearchSubClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchSubClasses;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->bSearchSubClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses = { "bSearchSubClasses", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, ClassName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ClassName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets with the supplied class\n\x09 *\n\x09 * @param ClassName the class name of the assets requested\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bSearchSubClasses if true, all subclasses of the passed in class will be searched as well\n\x09 */" },
		{ "CPP_Default_bSearchSubClasses", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets with the supplied class\n\n@param ClassName the class name of the assets requested\n@param OutAssetData the list of assets in this path\n@param bSearchSubClasses if true, all subclasses of the passed in class will be searched as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByClass", nullptr, nullptr, sizeof(AssetRegistry_eventGetAssetsByClass_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics
	{
		struct AssetRegistry_eventGetAssetsByPackageName_Parms
		{
			FName PackageName;
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for the assets in the package with the specified package name\n\x09 *\n\x09 * @param PackageName the package name for the requested assets (eg, /Game/MyFolder/MyAsset)\n\x09 * @param OutAssetData the list of assets in this path\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for the assets in the package with the specified package name\n\n@param PackageName the package name for the requested assets (eg, /Game/MyFolder/MyAsset)\n@param OutAssetData the list of assets in this path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPackageName", nullptr, nullptr, sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics
	{
		struct AssetRegistry_eventGetAssetsByPath_Parms
		{
			FName PackagePath;
			TArray<FAssetData> OutAssetData;
			bool bRecursive;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, PackagePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_PackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets in the supplied folder path\n\x09 *\n\x09 * @param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bRecursive if true, all supplied paths will be searched recursively\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in the supplied folder path\n\n@param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n@param OutAssetData the list of assets in this path\n@param bRecursive if true, all supplied paths will be searched recursively" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPath", nullptr, nullptr, sizeof(AssetRegistry_eventGetAssetsByPath_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics
	{
		struct AssetRegistry_eventGetSubPaths_Parms
		{
			FString InBasePath;
			TArray<FString> OutPathList;
			bool bInRecurse;
		};
		static void NewProp_bInRecurse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRecurse;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBasePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetSubPaths_Parms*)Obj)->bInRecurse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse = { "bInRecurse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetSubPaths_Parms), &Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList = { "OutPathList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, OutPathList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList_Inner = { "OutPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath = { "InBasePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, InBasePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Gets a list of all paths that are currently cached below the passed-in base path */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets a list of all paths that are currently cached below the passed-in base path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetSubPaths", nullptr, nullptr, sizeof(AssetRegistry_eventGetSubPaths_Parms), Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetSubPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics
	{
		struct AssetRegistry_eventHasAssets_Parms
		{
			FName PackagePath;
			bool bRecursive;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventHasAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventHasAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((AssetRegistry_eventHasAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventHasAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventHasAssets_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Does the given path contain assets, optionally also testing sub-paths?\n\x09 *\n\x09 * @param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n\x09 * @param bRecursive if true, the supplied path will be tested recursively\n\x09 */" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Does the given path contain assets, optionally also testing sub-paths?\n\n@param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n@param bRecursive if true, the supplied path will be tested recursively" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "HasAssets", nullptr, nullptr, sizeof(AssetRegistry_eventHasAssets_Parms), Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_HasAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics
	{
		struct AssetRegistry_eventIsLoadingAssets_Parms
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
	void Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventIsLoadingAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventIsLoadingAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Returns true if the asset registry is currently loading files and does not yet know about all assets */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Returns true if the asset registry is currently loading files and does not yet know about all assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "IsLoadingAssets", nullptr, nullptr, sizeof(AssetRegistry_eventIsLoadingAssets_Parms), Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics
	{
		struct AssetRegistry_eventK2_GetDependencies_Parms
		{
			FName PackageName;
			FAssetRegistryDependencyOptions DependencyOptions;
			TArray<FName> OutDependencies;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependencyOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DependencyOptions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventK2_GetDependencies_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventK2_GetDependencies_Parms), &Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions = { "DependencyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetDependencies_Parms, DependencyOptions), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetDependencies_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets a list of paths to objects that are referenced by the supplied package. (On disk references ONLY)\n\x09 *\n\x09 * @param PackageName\x09\x09the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n\x09 * @param DependencyOptions\x09which kinds of dependencies to include in the output list\n\x09 * @param OutDependencies\x09""a list of packages that are referenced by the package whose path is PackageName\n\x09 */" },
		{ "DisplayName", "Get Dependencies" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ScriptName", "GetDependencies" },
		{ "ToolTip", "Gets a list of paths to objects that are referenced by the supplied package. (On disk references ONLY)\n\n@param PackageName           the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n@param DependencyOptions     which kinds of dependencies to include in the output list\n@param OutDependencies       a list of packages that are referenced by the package whose path is PackageName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "K2_GetDependencies", nullptr, nullptr, sizeof(AssetRegistry_eventK2_GetDependencies_Parms), Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics
	{
		struct AssetRegistry_eventK2_GetReferencers_Parms
		{
			FName PackageName;
			FAssetRegistryDependencyOptions ReferenceOptions;
			TArray<FName> OutReferencers;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutReferencers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutReferencers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceOptions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventK2_GetReferencers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventK2_GetReferencers_Parms), &Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers = { "OutReferencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetReferencers_Parms, OutReferencers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers_Inner = { "OutReferencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions = { "ReferenceOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetReferencers_Parms, ReferenceOptions), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetReferencers_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets a list of packages that reference the supplied package. (On disk references ONLY)\n\x09 *\n\x09 * @param PackageName\x09\x09the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n\x09 * @param ReferenceOptions\x09which kinds of references to include in the output list\n\x09 * @param OutReferencers\x09""a list of packages that reference the package whose path is PackageName\n\x09 */" },
		{ "DisplayName", "Get Referencers" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ScriptName", "GetReferencers" },
		{ "ToolTip", "Gets a list of packages that reference the supplied package. (On disk references ONLY)\n\n@param PackageName           the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n@param ReferenceOptions      which kinds of references to include in the output list\n@param OutReferencers        a list of packages that reference the package whose path is PackageName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "K2_GetReferencers", nullptr, nullptr, sizeof(AssetRegistry_eventK2_GetReferencers_Parms), Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics
	{
		struct AssetRegistry_eventPrioritizeSearchPath_Parms
		{
			FString PathToPrioritize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToPrioritize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToPrioritize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize = { "PathToPrioritize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventPrioritizeSearchPath_Parms, PathToPrioritize), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** If assets are currently being asynchronously scanned in the specified path, this will cause them to be scanned before other assets. */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "If assets are currently being asynchronously scanned in the specified path, this will cause them to be scanned before other assets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "PrioritizeSearchPath", nullptr, nullptr, sizeof(AssetRegistry_eventPrioritizeSearchPath_Parms), Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics
	{
		struct AssetRegistry_eventRunAssetsThroughFilter_Parms
		{
			TArray<FAssetData> AssetDataList;
			FARFilter Filter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, AssetDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Trims items out of the asset data list that do not pass the supplied filter */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Trims items out of the asset data list that do not pass the supplied filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "RunAssetsThroughFilter", nullptr, nullptr, sizeof(AssetRegistry_eventRunAssetsThroughFilter_Parms), Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics
	{
		struct AssetRegistry_eventScanFilesSynchronous_Parms
		{
			TArray<FString> InFilePaths;
			bool bForceRescan;
		};
		static void NewProp_bForceRescan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRescan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFilePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit(void* Obj)
	{
		((AssetRegistry_eventScanFilesSynchronous_Parms*)Obj)->bForceRescan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan = { "bForceRescan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventScanFilesSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths = { "InFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventScanFilesSynchronous_Parms, InFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_Inner = { "InFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Scan the specified individual files right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned */" },
		{ "CPP_Default_bForceRescan", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Scan the specified individual files right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanFilesSynchronous", nullptr, nullptr, sizeof(AssetRegistry_eventScanFilesSynchronous_Parms), Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics
	{
		struct AssetRegistry_eventScanModifiedAssetFiles_Parms
		{
			TArray<FString> InFilePaths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFilePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths = { "InFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventScanModifiedAssetFiles_Parms, InFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_Inner = { "InFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Forces a rescan of specific filenames, call this when you need to refresh from disk */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Forces a rescan of specific filenames, call this when you need to refresh from disk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanModifiedAssetFiles", nullptr, nullptr, sizeof(AssetRegistry_eventScanModifiedAssetFiles_Parms), Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics
	{
		struct AssetRegistry_eventScanPathsSynchronous_Parms
		{
			TArray<FString> InPaths;
			bool bForceRescan;
		};
		static void NewProp_bForceRescan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRescan;
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
	void Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit(void* Obj)
	{
		((AssetRegistry_eventScanPathsSynchronous_Parms*)Obj)->bForceRescan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan = { "bForceRescan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventScanPathsSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths = { "InPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventScanPathsSynchronous_Parms, InPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_Inner = { "InPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Scan the supplied paths recursively right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned */" },
		{ "CPP_Default_bForceRescan", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Scan the supplied paths recursively right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanPathsSynchronous", nullptr, nullptr, sizeof(AssetRegistry_eventScanPathsSynchronous_Parms), Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics
	{
		struct AssetRegistry_eventSearchAllAssets_Parms
		{
			bool bSynchronousSearch;
		};
		static void NewProp_bSynchronousSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSynchronousSearch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit(void* Obj)
	{
		((AssetRegistry_eventSearchAllAssets_Parms*)Obj)->bSynchronousSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch = { "bSynchronousSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventSearchAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Look for all assets on disk (can be async or synchronous) */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Look for all assets on disk (can be async or synchronous)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "SearchAllAssets", nullptr, nullptr, sizeof(AssetRegistry_eventSearchAllAssets_Parms), Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_SearchAllAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics
	{
		struct AssetRegistry_eventUseFilterToExcludeAssets_Parms
		{
			TArray<FAssetData> AssetDataList;
			FARFilter Filter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventUseFilterToExcludeAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventUseFilterToExcludeAssets_Parms, AssetDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Trims items out of the asset data list that do not pass the supplied filter */" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Trims items out of the asset data list that do not pass the supplied filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "UseFilterToExcludeAssets", nullptr, nullptr, sizeof(AssetRegistry_eventUseFilterToExcludeAssets_Parms), Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetRegistry_NoRegister()
	{
		return UAssetRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UAssetRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetRegistry_GetAllAssets, "GetAllAssets" }, // 1549648282
		{ &Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths, "GetAllCachedPaths" }, // 4237704828
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath, "GetAssetByObjectPath" }, // 3957343510
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssets, "GetAssets" }, // 1476695285
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass, "GetAssetsByClass" }, // 1828964151
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName, "GetAssetsByPackageName" }, // 3095438178
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath, "GetAssetsByPath" }, // 905492172
		{ &Z_Construct_UFunction_UAssetRegistry_GetSubPaths, "GetSubPaths" }, // 3576057781
		{ &Z_Construct_UFunction_UAssetRegistry_HasAssets, "HasAssets" }, // 3738110103
		{ &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets, "IsLoadingAssets" }, // 784666658
		{ &Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies, "K2_GetDependencies" }, // 4211790324
		{ &Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers, "K2_GetReferencers" }, // 1967476950
		{ &Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath, "PrioritizeSearchPath" }, // 572804881
		{ &Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter, "RunAssetsThroughFilter" }, // 4279126986
		{ &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous, "ScanFilesSynchronous" }, // 1164819770
		{ &Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles, "ScanModifiedAssetFiles" }, // 2023469023
		{ &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous, "ScanPathsSynchronous" }, // 1831192617
		{ &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets, "SearchAllAssets" }, // 4148011152
		{ &Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets, "UseFilterToExcludeAssets" }, // 1257138141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistry_Statics::ClassParams = {
		&UAssetRegistry::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetRegistry, 3153851564);
	template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistry>()
	{
		return UAssetRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistry(Z_Construct_UClass_UAssetRegistry, &UAssetRegistry::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
