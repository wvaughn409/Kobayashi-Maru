// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothCollisionPrim() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
// End Cross Module References
class UScriptStruct* FClothCollisionPrim_Box::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Box, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Box"), sizeof(FClothCollisionPrim_Box), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_Box>()
{
	return FClothCollisionPrim_Box::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Box(FClothCollisionPrim_Box::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Box"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Box
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Box()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Box")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Box>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Box;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single box primitive. */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single box primitive." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Box>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents = { "HalfExtents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, HalfExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, LocalRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_Box",
		sizeof(FClothCollisionPrim_Box),
		alignof(FClothCollisionPrim_Box),
		Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Box"), sizeof(FClothCollisionPrim_Box), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Hash() { return 3171165111U; }
class UScriptStruct* FClothCollisionPrim_Convex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_Convex>()
{
	return FClothCollisionPrim_Convex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Convex(FClothCollisionPrim_Convex::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Convex"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Convex")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfacePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurfacePoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfacePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Planes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Data for a single convex element\n *\x09""A convex is a collection of planes, in which the clothing will attempt to stay outside of the\n *\x09shape created by the planes combined.\n */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single convex element\nA convex is a collection of planes, in which the clothing will attempt to stay outside of the\nshape created by the planes combined." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Comment", "// Surface points, used by Chaos and also for visualization\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Surface points, used by Chaos and also for visualization" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints = { "SurfacePoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, SurfacePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_Inner = { "SurfacePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, Planes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_Convex",
		sizeof(FClothCollisionPrim_Convex),
		alignof(FClothCollisionPrim_Convex),
		Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Hash() { return 317861061U; }
class UScriptStruct* FClothCollisionPrim_SphereConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_SphereConnection>()
{
	return FClothCollisionPrim_SphereConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_SphereConnection(FClothCollisionPrim_SphereConnection::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_SphereConnection"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_SphereConnection")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SphereIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single connected sphere primitive. This should be configured after all spheres have\n *  been processed as they are really just indexing the existing spheres\n */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single connected sphere primitive. This should be configured after all spheres have\nbeen processed as they are really just indexing the existing spheres" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices = { "SphereIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SphereIndices, FClothCollisionPrim_SphereConnection), STRUCT_OFFSET(FClothCollisionPrim_SphereConnection, SphereIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_SphereConnection",
		sizeof(FClothCollisionPrim_SphereConnection),
		alignof(FClothCollisionPrim_SphereConnection),
		Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Hash() { return 1641727885U; }
class UScriptStruct* FClothCollisionPrim_Sphere::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_Sphere>()
{
	return FClothCollisionPrim_Sphere::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Sphere(FClothCollisionPrim_Sphere::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Sphere"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Sphere")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single sphere primitive in the clothing simulation. This can either be a \n *  sphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule\n */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single sphere primitive in the clothing simulation. This can either be a\nsphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Sphere, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Sphere, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionPrim_Sphere, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_Sphere",
		sizeof(FClothCollisionPrim_Sphere),
		alignof(FClothCollisionPrim_Sphere),
		Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Hash() { return 502634287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
