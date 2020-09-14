// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceMeshCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshCommon() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTriCoordinate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FMeshTriCoordinate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FMeshTriCoordinate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshTriCoordinate, Z_Construct_UPackage__Script_Niagara(), TEXT("MeshTriCoordinate"), sizeof(FMeshTriCoordinate), Get_Z_Construct_UScriptStruct_FMeshTriCoordinate_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMeshTriCoordinate>()
{
	return FMeshTriCoordinate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshTriCoordinate(FMeshTriCoordinate::StaticStruct, TEXT("/Script/Niagara"), TEXT("MeshTriCoordinate"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFMeshTriCoordinate
{
	FScriptStruct_Niagara_StaticRegisterNativesFMeshTriCoordinate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshTriCoordinate")),new UScriptStruct::TCppStructOps<FMeshTriCoordinate>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFMeshTriCoordinate;
	struct Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaryCoord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaryCoord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tri_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//A coordinate on a mesh usable in Niagara.\n//Do not alter this struct without updating the data interfaces that use it!\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshCommon.h" },
		{ "ToolTip", "A coordinate on a mesh usable in Niagara.\nDo not alter this struct without updating the data interfaces that use it!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshTriCoordinate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord_MetaData[] = {
		{ "Category", "Coordinate" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord = { "BaryCoord", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshTriCoordinate, BaryCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri_MetaData[] = {
		{ "Category", "Coordinate" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri = { "Tri", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshTriCoordinate, Tri), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"MeshTriCoordinate",
		sizeof(FMeshTriCoordinate),
		alignof(FMeshTriCoordinate),
		Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshTriCoordinate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshTriCoordinate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshTriCoordinate"), sizeof(FMeshTriCoordinate), Get_Z_Construct_UScriptStruct_FMeshTriCoordinate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshTriCoordinate_Hash() { return 3012371238U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
