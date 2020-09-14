// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraScriptExecutionParameterStore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptExecutionParameterStore() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo();
// End Cross Module References
class UScriptStruct* FNiagaraScriptExecutionParameterStore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptExecutionParameterStore"), sizeof(FNiagaraScriptExecutionParameterStore), Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptExecutionParameterStore>()
{
	return FNiagaraScriptExecutionParameterStore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptExecutionParameterStore(FNiagaraScriptExecutionParameterStore::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptExecutionParameterStore"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionParameterStore
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionParameterStore()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScriptExecutionParameterStore")),new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionParameterStore>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionParameterStore;
	struct Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaddingInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddedParameterSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PaddedParameterSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nStorage class containing actual runtime buffers to be used by the VM and the GPU.\nIs not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "Storage class containing actual runtime buffers to be used by the VM and the GPU.\nIs not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionParameterStore>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FNiagaraScriptExecutionParameterStore*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScriptExecutionParameterStore), &Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo = { "PaddingInfo", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, PaddingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_Inner = { "PaddingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize = { "PaddedParameterSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, PaddedParameterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize_MetaData[] = {
		{ "Comment", "/** Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize = { "ParameterSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, ParameterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraParameterStore,
		&NewStructOps,
		"NiagaraScriptExecutionParameterStore",
		sizeof(FNiagaraScriptExecutionParameterStore),
		alignof(FNiagaraScriptExecutionParameterStore),
		Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptExecutionParameterStore"), sizeof(FNiagaraScriptExecutionParameterStore), Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Hash() { return 2497384088U; }
class UScriptStruct* FNiagaraScriptExecutionPaddingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptExecutionPaddingInfo"), sizeof(FNiagaraScriptExecutionPaddingInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptExecutionPaddingInfo>()
{
	return FNiagaraScriptExecutionPaddingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo(FNiagaraScriptExecutionPaddingInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptExecutionPaddingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionPaddingInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionPaddingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScriptExecutionPaddingInfo")),new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionPaddingInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionPaddingInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_DestSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_SrcSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_DestOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_SrcOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionPaddingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize = { "DestSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, DestSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize = { "SrcSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, SrcSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset = { "DestOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, DestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset = { "SrcOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, SrcOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptExecutionPaddingInfo",
		sizeof(FNiagaraScriptExecutionPaddingInfo),
		alignof(FNiagaraScriptExecutionPaddingInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptExecutionPaddingInfo"), sizeof(FNiagaraScriptExecutionPaddingInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Hash() { return 1746119772U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
