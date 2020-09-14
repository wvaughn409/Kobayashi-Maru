// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditableMesh/EditableGeometryCollectionAdapter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableGeometryCollectionAdapter() {}
// Cross Module References
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAdaptorPolygon2Group();
	UPackage* Z_Construct_UPackage__Script_EditableMesh();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAdaptorPolygon();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAdaptorTriangleID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FElementID();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableGeometryCollectionAdapter_NoRegister();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableGeometryCollectionAdapter();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshAdapter();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
// End Cross Module References
class UScriptStruct* FAdaptorPolygon2Group::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdaptorPolygon2Group, Z_Construct_UPackage__Script_EditableMesh(), TEXT("AdaptorPolygon2Group"), sizeof(FAdaptorPolygon2Group), Get_Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FAdaptorPolygon2Group>()
{
	return FAdaptorPolygon2Group::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdaptorPolygon2Group(FAdaptorPolygon2Group::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("AdaptorPolygon2Group"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorPolygon2Group
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorPolygon2Group()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdaptorPolygon2Group")),new UScriptStruct::TCppStructOps<FAdaptorPolygon2Group>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorPolygon2Group;
	struct Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingSectionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RenderingSectionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdaptorPolygon2Group>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaxTriangles_MetaData[] = {
		{ "Comment", "/** Maximum number of triangles which have been reserved in the index buffer */" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
		{ "ToolTip", "Maximum number of triangles which have been reserved in the index buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaxTriangles = { "MaxTriangles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdaptorPolygon2Group, MaxTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaxTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaxTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Comment", "/** The material slot index assigned to this polygon group's material */" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
		{ "ToolTip", "The material slot index assigned to this polygon group's material" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdaptorPolygon2Group, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_RenderingSectionIndex_MetaData[] = {
		{ "Comment", "/** The rendering section index for this mesh section */" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
		{ "ToolTip", "The rendering section index for this mesh section" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_RenderingSectionIndex = { "RenderingSectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdaptorPolygon2Group, RenderingSectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_RenderingSectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_RenderingSectionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaxTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::NewProp_RenderingSectionIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"AdaptorPolygon2Group",
		sizeof(FAdaptorPolygon2Group),
		alignof(FAdaptorPolygon2Group),
		Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdaptorPolygon2Group()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdaptorPolygon2Group"), sizeof(FAdaptorPolygon2Group), Get_Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdaptorPolygon2Group_Hash() { return 1790308767U; }
class UScriptStruct* FAdaptorPolygon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FAdaptorPolygon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdaptorPolygon, Z_Construct_UPackage__Script_EditableMesh(), TEXT("AdaptorPolygon"), sizeof(FAdaptorPolygon), Get_Z_Construct_UScriptStruct_FAdaptorPolygon_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FAdaptorPolygon>()
{
	return FAdaptorPolygon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdaptorPolygon(FAdaptorPolygon::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("AdaptorPolygon"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorPolygon
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorPolygon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdaptorPolygon")),new UScriptStruct::TCppStructOps<FAdaptorPolygon>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorPolygon;
	struct Z_Construct_UScriptStruct_FAdaptorPolygon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangulatedPolygonTriangleIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriangulatedPolygonTriangleIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangulatedPolygonTriangleIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdaptorPolygon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_MetaData[] = {
		{ "Comment", "/** This is a list of indices of triangles in the FRenderingPolygon2Group2::Triangles array.\n\x09    We use this to maintain a record of which triangles in the section belong to this polygon. */" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
		{ "ToolTip", "This is a list of indices of triangles in the FRenderingPolygon2Group2::Triangles array.\n          We use this to maintain a record of which triangles in the section belong to this polygon." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices = { "TriangulatedPolygonTriangleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdaptorPolygon, TriangulatedPolygonTriangleIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_Inner = { "TriangulatedPolygonTriangleIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdaptorTriangleID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "Comment", "/** Which rendering polygon group the polygon is in */" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
		{ "ToolTip", "Which rendering polygon group the polygon is in" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdaptorPolygon, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_PolygonGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_PolygonGroupID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::NewProp_PolygonGroupID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"AdaptorPolygon",
		sizeof(FAdaptorPolygon),
		alignof(FAdaptorPolygon),
		Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdaptorPolygon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdaptorPolygon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdaptorPolygon"), sizeof(FAdaptorPolygon), Get_Z_Construct_UScriptStruct_FAdaptorPolygon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdaptorPolygon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdaptorPolygon_Hash() { return 3072453679U; }
class UScriptStruct* FAdaptorTriangleID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FAdaptorTriangleID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdaptorTriangleID, Z_Construct_UPackage__Script_EditableMesh(), TEXT("AdaptorTriangleID"), sizeof(FAdaptorTriangleID), Get_Z_Construct_UScriptStruct_FAdaptorTriangleID_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FAdaptorTriangleID>()
{
	return FAdaptorTriangleID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdaptorTriangleID(FAdaptorTriangleID::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("AdaptorTriangleID"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorTriangleID
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorTriangleID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdaptorTriangleID")),new UScriptStruct::TCppStructOps<FAdaptorTriangleID>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFAdaptorTriangleID;
	struct Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdaptorTriangleID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"AdaptorTriangleID",
		sizeof(FAdaptorTriangleID),
		alignof(FAdaptorTriangleID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdaptorTriangleID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdaptorTriangleID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdaptorTriangleID"), sizeof(FAdaptorTriangleID), Get_Z_Construct_UScriptStruct_FAdaptorTriangleID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdaptorTriangleID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdaptorTriangleID_Hash() { return 1697094034U; }
	void UEditableGeometryCollectionAdapter::StaticRegisterNativesUEditableGeometryCollectionAdapter()
	{
	}
	UClass* Z_Construct_UClass_UEditableGeometryCollectionAdapter_NoRegister()
	{
		return UEditableGeometryCollectionAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionLODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeometryCollectionLODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalGeometryCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalGeometryCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableMeshAdapter,
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditableGeometryCollectionAdapter.h" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollectionLODIndex_MetaData[] = {
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollectionLODIndex = { "GeometryCollectionLODIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableGeometryCollectionAdapter, GeometryCollectionLODIndex), METADATA_PARAMS(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollectionLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollectionLODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_OriginalGeometryCollection_MetaData[] = {
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_OriginalGeometryCollection = { "OriginalGeometryCollection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableGeometryCollectionAdapter, OriginalGeometryCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_OriginalGeometryCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_OriginalGeometryCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollection_MetaData[] = {
		{ "Comment", "/** The Geometry Collection asset we're representing */" },
		{ "ModuleRelativePath", "EditableGeometryCollectionAdapter.h" },
		{ "ToolTip", "The Geometry Collection asset we're representing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollection = { "GeometryCollection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableGeometryCollectionAdapter, GeometryCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollectionLODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_OriginalGeometryCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::NewProp_GeometryCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGeometryCollectionAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::ClassParams = {
		&UEditableGeometryCollectionAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGeometryCollectionAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGeometryCollectionAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGeometryCollectionAdapter, 2552569197);
	template<> EDITABLEMESH_API UClass* StaticClass<UEditableGeometryCollectionAdapter>()
	{
		return UEditableGeometryCollectionAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGeometryCollectionAdapter(Z_Construct_UClass_UEditableGeometryCollectionAdapter, &UEditableGeometryCollectionAdapter::StaticClass, TEXT("/Script/EditableMesh"), TEXT("UEditableGeometryCollectionAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGeometryCollectionAdapter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableGeometryCollectionAdapter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
