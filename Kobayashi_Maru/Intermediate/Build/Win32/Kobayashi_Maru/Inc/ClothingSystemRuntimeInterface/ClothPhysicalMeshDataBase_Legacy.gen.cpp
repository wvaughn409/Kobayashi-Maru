// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothPhysicalMeshDataBase_Legacy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataBase_Legacy() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UClothPhysicalMeshDataBase_Legacy::StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy()
	{
	}
	UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister()
	{
		return UClothPhysicalMeshDataBase_Legacy::StaticClass();
	}
	struct Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelfCollisionIndices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SelfCollisionIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBoneWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBoneWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFixedVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFixedVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseMasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InverseMasses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InverseMasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, use FClothPhysicalMeshData instead.\n * Simulation mesh points, topology, and spatial parameters defined on that \n * topology.\n *\n * Created curing asset import or created from a skeletal mesh.\n */" },
		{ "IncludePath", "ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Deprecated, use FClothPhysicalMeshData instead.\nSimulation mesh points, topology, and spatial parameters defined on that\ntopology.\n\nCreated curing asset import or created from a skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_MetaData[] = {
		{ "Comment", "// Valid indices to use for self collisions (reduced set of Indices)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Valid indices to use for self collisions (reduced set of Indices)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_Inner = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights_MetaData[] = {
		{ "Comment", "// Maximum number of bone weights of any vetex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Maximum number of bone weights of any vetex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights = { "MaxBoneWeights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, MaxBoneWeights), METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts_MetaData[] = {
		{ "Comment", "// Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts = { "NumFixedVerts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, NumFixedVerts), METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_MetaData[] = {
		{ "Comment", "// Indices and weights for each vertex, used to skin the mesh to create the reference pose\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Indices and weights for each vertex, used to skin the mesh to create the reference pose" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, BoneData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_Inner = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_MetaData[] = {
		{ "Comment", "// Inverse mass for each vertex in the physical mesh\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Inverse mass for each vertex in the physical mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses = { "InverseMasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, InverseMasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_Inner = { "InverseMasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_MetaData[] = {
		{ "Comment", "// Indices of the simulation mesh triangles\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Indices of the simulation mesh triangles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Comment", "// Color at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Color at each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_MetaData[] = {
		{ "Comment", "// Normal at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Normal at each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_MetaData[] = {
		{ "Comment", "// Positions of each simulation vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Positions of each simulation vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPhysicalMeshDataBase_Legacy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::ClassParams = {
		&UClothPhysicalMeshDataBase_Legacy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPhysicalMeshDataBase_Legacy, 3634279733);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothPhysicalMeshDataBase_Legacy>()
	{
		return UClothPhysicalMeshDataBase_Legacy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPhysicalMeshDataBase_Legacy(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy, &UClothPhysicalMeshDataBase_Legacy::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothPhysicalMeshDataBase_Legacy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPhysicalMeshDataBase_Legacy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
