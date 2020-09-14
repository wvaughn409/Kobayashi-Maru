// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraParameterStore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterStore() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableWithOffset();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter();
// End Cross Module References
class UScriptStruct* FNiagaraParameterStore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterStore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterStore, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterStore"), sizeof(FNiagaraParameterStore), Get_Z_Construct_UScriptStruct_FNiagaraParameterStore_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterStore>()
{
	return FNiagaraParameterStore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraParameterStore(FNiagaraParameterStore::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraParameterStore"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterStore
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterStore()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraParameterStore")),new UScriptStruct::TCppStructOps<FNiagaraParameterStore>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterStore;
	struct Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParameterData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedParameterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedParameterOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedParameterOffsets_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParameterOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterOffsets_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterOffsets_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base storage class for Niagara parameter values. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Base storage class for Niagara parameter values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterStore>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_MetaData[] = {
		{ "Comment", "/** UObjects referenced by this store. Also indexed by ParameterOffsets.*/" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "UObjects referenced by this store. Also indexed by ParameterOffsets." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects = { "UObjects", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, UObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_Inner = { "UObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_MetaData[] = {
		{ "Comment", "/** Data interfaces for this script. Possibly overridden with externally owned interfaces. Also indexed by ParameterOffsets. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Data interfaces for this script. Possibly overridden with externally owned interfaces. Also indexed by ParameterOffsets." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces = { "DataInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, DataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_Inner = { "DataInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Comment", "/** Buffer containing parameter data. Indexed using offsets in ParameterOffsets */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Buffer containing parameter data. Indexed using offsets in ParameterOffsets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, ParameterData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_Inner = { "ParameterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_MetaData[] = {
		{ "Comment", "// WITH_EDITORONLY_DATA\n" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "WITH_EDITORONLY_DATA" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets = { "SortedParameterOffsets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, SortedParameterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_Inner = { "SortedParameterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableWithOffset, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_MetaData[] = {
		{ "Comment", "/** Map from parameter defs to their offset in the data table or the data interface. TODO: Separate out into a layout and instance class to reduce duplicated data for this?  */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Map from parameter defs to their offset in the data table or the data interface. TODO: Separate out into a layout and instance class to reduce duplicated data for this?" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets = { "ParameterOffsets", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, ParameterOffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_Key_KeyProp = { "ParameterOffsets_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_ValueProp = { "ParameterOffsets", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Owner of this store. Used to provide an outer to data interfaces in this store. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Owner of this store. Used to provide an outer to data interfaces in this store." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterStore, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterStore",
		sizeof(FNiagaraParameterStore),
		alignof(FNiagaraParameterStore),
		Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterStore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraParameterStore"), sizeof(FNiagaraParameterStore), Get_Z_Construct_UScriptStruct_FNiagaraParameterStore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterStore_Hash() { return 3988616236U; }
class UScriptStruct* FNiagaraVariableWithOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableWithOffset"), sizeof(FNiagaraVariableWithOffset), Get_Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableWithOffset>()
{
	return FNiagaraVariableWithOffset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableWithOffset(FNiagaraVariableWithOffset::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableWithOffset"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableWithOffset
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableWithOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableWithOffset")),new UScriptStruct::TCppStructOps<FNiagaraVariableWithOffset>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableWithOffset;
	struct Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableWithOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableWithOffset, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraVariableBase,
		&NewStructOps,
		"NiagaraVariableWithOffset",
		sizeof(FNiagaraVariableWithOffset),
		alignof(FNiagaraVariableWithOffset),
		Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableWithOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableWithOffset"), sizeof(FNiagaraVariableWithOffset), Get_Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Hash() { return 3703031661U; }
class UScriptStruct* FNiagaraBoundParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraBoundParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBoundParameter, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBoundParameter"), sizeof(FNiagaraBoundParameter), Get_Z_Construct_UScriptStruct_FNiagaraBoundParameter_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBoundParameter>()
{
	return FNiagaraBoundParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraBoundParameter(FNiagaraBoundParameter::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraBoundParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBoundParameter
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBoundParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraBoundParameter")),new UScriptStruct::TCppStructOps<FNiagaraBoundParameter>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraBoundParameter;
	struct Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBoundParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset = { "DestOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBoundParameter, DestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset = { "SrcOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBoundParameter, SrcOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBoundParameter, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBoundParameter",
		sizeof(FNiagaraBoundParameter),
		alignof(FNiagaraBoundParameter),
		Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraBoundParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraBoundParameter"), sizeof(FNiagaraBoundParameter), Get_Z_Construct_UScriptStruct_FNiagaraBoundParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraBoundParameter_Hash() { return 3801801455U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
