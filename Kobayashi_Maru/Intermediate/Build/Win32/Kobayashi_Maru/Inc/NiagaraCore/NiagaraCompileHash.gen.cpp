// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraCompileHash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCompileHash() {}
// Cross Module References
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
	UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References
class UScriptStruct* FNiagaraCompileHash::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARACORE_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHash_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHash, Z_Construct_UPackage__Script_NiagaraCore(), TEXT("NiagaraCompileHash"), sizeof(FNiagaraCompileHash), Get_Z_Construct_UScriptStruct_FNiagaraCompileHash_Hash());
	}
	return Singleton;
}
template<> NIAGARACORE_API UScriptStruct* StaticStruct<FNiagaraCompileHash>()
{
	return FNiagaraCompileHash::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraCompileHash(FNiagaraCompileHash::StaticStruct, TEXT("/Script/NiagaraCore"), TEXT("NiagaraCompileHash"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraCore_StaticRegisterNativesFNiagaraCompileHash
{
	FScriptStruct_NiagaraCore_StaticRegisterNativesFNiagaraCompileHash()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraCompileHash")),new UScriptStruct::TCppStructOps<FNiagaraCompileHash>);
	}
} ScriptStruct_NiagaraCore_StaticRegisterNativesFNiagaraCompileHash;
	struct Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataHash;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataHash_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHash.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileHash>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHash.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash = { "DataHash", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHash, DataHash), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_Inner = { "DataHash", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
		nullptr,
		&NewStructOps,
		"NiagaraCompileHash",
		sizeof(FNiagaraCompileHash),
		alignof(FNiagaraCompileHash),
		Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHash_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraCompileHash"), sizeof(FNiagaraCompileHash), Get_Z_Construct_UScriptStruct_FNiagaraCompileHash_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHash_Hash() { return 2220937933U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
