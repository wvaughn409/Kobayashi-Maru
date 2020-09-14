// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraUserRedirectionParameterStore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraUserRedirectionParameterStore() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
// End Cross Module References
class UScriptStruct* FNiagaraUserRedirectionParameterStore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUserRedirectionParameterStore"), sizeof(FNiagaraUserRedirectionParameterStore), Get_Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUserRedirectionParameterStore>()
{
	return FNiagaraUserRedirectionParameterStore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraUserRedirectionParameterStore(FNiagaraUserRedirectionParameterStore::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraUserRedirectionParameterStore"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserRedirectionParameterStore
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserRedirectionParameterStore()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraUserRedirectionParameterStore")),new UScriptStruct::TCppStructOps<FNiagaraUserRedirectionParameterStore>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserRedirectionParameterStore;
	struct Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserParameterRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UserParameterRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserParameterRedirects_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserParameterRedirects_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Extension of the base parameter store to allow the user in the editor to use variable names without \n* the \"User.\" namespace prefix. The names without the prefix just redirect to the original variables, it is just done\n* for better usability.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraUserRedirectionParameterStore.h" },
		{ "ToolTip", "Extension of the base parameter store to allow the user in the editor to use variable names without\nthe \"User.\" namespace prefix. The names without the prefix just redirect to the original variables, it is just done\nfor better usability." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUserRedirectionParameterStore>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_MetaData[] = {
		{ "Comment", "/** Map from the variables with shortened display names to the original variables with the full namespace */" },
		{ "ModuleRelativePath", "Public/NiagaraUserRedirectionParameterStore.h" },
		{ "ToolTip", "Map from the variables with shortened display names to the original variables with the full namespace" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects = { "UserParameterRedirects", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraUserRedirectionParameterStore, UserParameterRedirects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_Key_KeyProp = { "UserParameterRedirects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_ValueProp = { "UserParameterRedirects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraParameterStore,
		&NewStructOps,
		"NiagaraUserRedirectionParameterStore",
		sizeof(FNiagaraUserRedirectionParameterStore),
		alignof(FNiagaraUserRedirectionParameterStore),
		Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraUserRedirectionParameterStore"), sizeof(FNiagaraUserRedirectionParameterStore), Get_Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Hash() { return 2101686743U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
