// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditableMesh/EditableStaticMeshAdapter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableStaticMeshAdapter() {}
// Cross Module References
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FRenderingPolygonGroup();
	UPackage* Z_Construct_UPackage__Script_EditableMesh();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FRenderingPolygon();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableStaticMeshAdapter_NoRegister();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableStaticMeshAdapter();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshAdapter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FRenderingPolygonGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderingPolygonGroup, Z_Construct_UPackage__Script_EditableMesh(), TEXT("RenderingPolygonGroup"), sizeof(FRenderingPolygonGroup), Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FRenderingPolygonGroup>()
{
	return FRenderingPolygonGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderingPolygonGroup(FRenderingPolygonGroup::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("RenderingPolygonGroup"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFRenderingPolygonGroup
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFRenderingPolygonGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RenderingPolygonGroup")),new UScriptStruct::TCppStructOps<FRenderingPolygonGroup>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFRenderingPolygonGroup;
	struct Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderingPolygonGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaxTriangles_MetaData[] = {
		{ "Comment", "/** Maximum number of triangles which have been reserved in the index buffer */" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
		{ "ToolTip", "Maximum number of triangles which have been reserved in the index buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaxTriangles = { "MaxTriangles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderingPolygonGroup, MaxTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaxTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaxTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Comment", "/** The material slot index assigned to this polygon group's material */" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
		{ "ToolTip", "The material slot index assigned to this polygon group's material" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderingPolygonGroup, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_RenderingSectionIndex_MetaData[] = {
		{ "Comment", "/** The rendering section index for this mesh section */" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
		{ "ToolTip", "The rendering section index for this mesh section" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_RenderingSectionIndex = { "RenderingSectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderingPolygonGroup, RenderingSectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_RenderingSectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_RenderingSectionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaxTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::NewProp_RenderingSectionIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"RenderingPolygonGroup",
		sizeof(FRenderingPolygonGroup),
		alignof(FRenderingPolygonGroup),
		Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderingPolygonGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderingPolygonGroup"), sizeof(FRenderingPolygonGroup), Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderingPolygonGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_Hash() { return 1266843832U; }
class UScriptStruct* FRenderingPolygon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITABLEMESH_API uint32 Get_Z_Construct_UScriptStruct_FRenderingPolygon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderingPolygon, Z_Construct_UPackage__Script_EditableMesh(), TEXT("RenderingPolygon"), sizeof(FRenderingPolygon), Get_Z_Construct_UScriptStruct_FRenderingPolygon_Hash());
	}
	return Singleton;
}
template<> EDITABLEMESH_API UScriptStruct* StaticStruct<FRenderingPolygon>()
{
	return FRenderingPolygon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderingPolygon(FRenderingPolygon::StaticStruct, TEXT("/Script/EditableMesh"), TEXT("RenderingPolygon"), false, nullptr, nullptr);
static struct FScriptStruct_EditableMesh_StaticRegisterNativesFRenderingPolygon
{
	FScriptStruct_EditableMesh_StaticRegisterNativesFRenderingPolygon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RenderingPolygon")),new UScriptStruct::TCppStructOps<FRenderingPolygon>);
	}
} ScriptStruct_EditableMesh_StaticRegisterNativesFRenderingPolygon;
	struct Z_Construct_UScriptStruct_FRenderingPolygon_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderingPolygon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_MetaData[] = {
		{ "Comment", "/** This is a list of indices of triangles in the FRenderingPolygonGroup::Triangles array.\n\x09    We use this to maintain a record of which triangles in the section belong to this polygon. */" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
		{ "ToolTip", "This is a list of indices of triangles in the FRenderingPolygonGroup::Triangles array.\n          We use this to maintain a record of which triangles in the section belong to this polygon." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices = { "TriangulatedPolygonTriangleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderingPolygon, TriangulatedPolygonTriangleIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_Inner = { "TriangulatedPolygonTriangleIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "Comment", "/** Which rendering polygon group the polygon is in */" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
		{ "ToolTip", "Which rendering polygon group the polygon is in" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderingPolygon, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_PolygonGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_PolygonGroupID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderingPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_TriangulatedPolygonTriangleIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderingPolygon_Statics::NewProp_PolygonGroupID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderingPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
		nullptr,
		&NewStructOps,
		"RenderingPolygon",
		sizeof(FRenderingPolygon),
		alignof(FRenderingPolygon),
		Z_Construct_UScriptStruct_FRenderingPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderingPolygon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderingPolygon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderingPolygon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderingPolygon"), sizeof(FRenderingPolygon), Get_Z_Construct_UScriptStruct_FRenderingPolygon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderingPolygon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderingPolygon_Hash() { return 575270749U; }
	void UEditableStaticMeshAdapter::StaticRegisterNativesUEditableStaticMeshAdapter()
	{
	}
	UClass* Z_Construct_UClass_UEditableStaticMeshAdapter_NoRegister()
	{
		return UEditableStaticMeshAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UEditableStaticMeshAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticMeshLODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableMeshAdapter,
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditableStaticMeshAdapter.h" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMeshLODIndex_MetaData[] = {
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMeshLODIndex = { "StaticMeshLODIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableStaticMeshAdapter, StaticMeshLODIndex), METADATA_PARAMS(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMeshLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMeshLODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_OriginalStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_OriginalStaticMesh = { "OriginalStaticMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableStaticMeshAdapter, OriginalStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_OriginalStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_OriginalStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "/** The static mesh asset we're representing */" },
		{ "ModuleRelativePath", "EditableStaticMeshAdapter.h" },
		{ "ToolTip", "The static mesh asset we're representing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableStaticMeshAdapter, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMeshLODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_OriginalStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableStaticMeshAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::ClassParams = {
		&UEditableStaticMeshAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableStaticMeshAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableStaticMeshAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableStaticMeshAdapter, 1724746028);
	template<> EDITABLEMESH_API UClass* StaticClass<UEditableStaticMeshAdapter>()
	{
		return UEditableStaticMeshAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableStaticMeshAdapter(Z_Construct_UClass_UEditableStaticMeshAdapter, &UEditableStaticMeshAdapter::StaticClass, TEXT("/Script/EditableMesh"), TEXT("UEditableStaticMeshAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableStaticMeshAdapter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableStaticMeshAdapter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
