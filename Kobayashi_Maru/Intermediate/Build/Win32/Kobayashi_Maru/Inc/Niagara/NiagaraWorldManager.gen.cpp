// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraWorldManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraWorldManager() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
// End Cross Module References
class UScriptStruct* FNiagaraWorldManagerTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraWorldManagerTickFunction"), sizeof(FNiagaraWorldManagerTickFunction), Get_Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraWorldManagerTickFunction>()
{
	return FNiagaraWorldManagerTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraWorldManagerTickFunction(FNiagaraWorldManagerTickFunction::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraWorldManagerTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraWorldManagerTickFunction
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraWorldManagerTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraWorldManagerTickFunction")),new UScriptStruct::TCppStructOps<FNiagaraWorldManagerTickFunction>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraWorldManagerTickFunction;
	struct Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraWorldManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraWorldManagerTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"NiagaraWorldManagerTickFunction",
		sizeof(FNiagaraWorldManagerTickFunction),
		alignof(FNiagaraWorldManagerTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraWorldManagerTickFunction"), sizeof(FNiagaraWorldManagerTickFunction), Get_Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Hash() { return 176123826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
