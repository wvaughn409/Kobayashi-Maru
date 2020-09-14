// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothCollisionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothCollisionData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
// End Cross Module References
class UScriptStruct* FClothCollisionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionData>()
{
	return FClothCollisionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionData(FClothCollisionData::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionData")),new UScriptStruct::TCppStructOps<FClothCollisionData>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData;
	struct Z_Construct_UScriptStruct_FClothCollisionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Boxes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Convexes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphereConnections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Box data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Box data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Box, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Convex Data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Convex Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes = { "Convexes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, Convexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner = { "Convexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Capsule data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Capsule data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections = { "SphereConnections", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, SphereConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner = { "SphereConnections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Sphere data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Sphere data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionData",
		sizeof(FClothCollisionData),
		alignof(FClothCollisionData),
		Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_Hash() { return 1854584266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
