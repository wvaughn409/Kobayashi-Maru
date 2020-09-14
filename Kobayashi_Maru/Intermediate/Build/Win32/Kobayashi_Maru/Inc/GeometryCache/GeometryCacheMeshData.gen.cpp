// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheMeshData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheMeshData() {}
// Cross Module References
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheVertexInfo();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo();
// End Cross Module References
class UScriptStruct* FGeometryCacheMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshData, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshData"), sizeof(FGeometryCacheMeshData), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FGeometryCacheMeshData>()
{
	return FGeometryCacheMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheMeshData(FGeometryCacheMeshData::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheMeshData")),new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData;
	struct Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores per Track/Mesh data used for rendering*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
		{ "ToolTip", "Stores per Track/Mesh data used for rendering" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"GeometryCacheMeshData",
		sizeof(FGeometryCacheMeshData),
		alignof(FGeometryCacheMeshData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheMeshData"), sizeof(FGeometryCacheMeshData), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_Hash() { return 2004980086U; }
class UScriptStruct* FGeometryCacheVertexInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheVertexInfo, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheVertexInfo"), sizeof(FGeometryCacheVertexInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FGeometryCacheVertexInfo>()
{
	return FGeometryCacheVertexInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheVertexInfo(FGeometryCacheVertexInfo::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheVertexInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheVertexInfo
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheVertexInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheVertexInfo")),new UScriptStruct::TCppStructOps<FGeometryCacheVertexInfo>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheVertexInfo;
	struct Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores info on the attributes of a vertex in a mesh */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
		{ "ToolTip", "Stores info on the attributes of a vertex in a mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheVertexInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"GeometryCacheVertexInfo",
		sizeof(FGeometryCacheVertexInfo),
		alignof(FGeometryCacheVertexInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheVertexInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheVertexInfo"), sizeof(FGeometryCacheVertexInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Hash() { return 2369543586U; }
class UScriptStruct* FGeometryCacheMeshBatchInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshBatchInfo"), sizeof(FGeometryCacheMeshBatchInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FGeometryCacheMeshBatchInfo>()
{
	return FGeometryCacheMeshBatchInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheMeshBatchInfo(FGeometryCacheMeshBatchInfo::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheMeshBatchInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheMeshBatchInfo")),new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo;
	struct Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores per-batch data used for rendering */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
		{ "ToolTip", "Stores per-batch data used for rendering" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"GeometryCacheMeshBatchInfo",
		sizeof(FGeometryCacheMeshBatchInfo),
		alignof(FGeometryCacheMeshBatchInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheMeshBatchInfo"), sizeof(FGeometryCacheMeshBatchInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Hash() { return 1140787754U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
