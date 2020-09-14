// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystem() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FEmitterCompiledScriptPair();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FNiagaraSystemCompileRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemCompileRequest"), sizeof(FNiagaraSystemCompileRequest), Get_Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemCompileRequest>()
{
	return FNiagaraSystemCompileRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemCompileRequest(FNiagaraSystemCompileRequest::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemCompileRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemCompileRequest
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemCompileRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemCompileRequest")),new UScriptStruct::TCppStructOps<FNiagaraSystemCompileRequest>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemCompileRequest;
	struct Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemCompileRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects = { "RootObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompileRequest, RootObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_Inner = { "RootObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemCompileRequest",
		sizeof(FNiagaraSystemCompileRequest),
		alignof(FNiagaraSystemCompileRequest),
		Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemCompileRequest"), sizeof(FNiagaraSystemCompileRequest), Get_Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Hash() { return 902121896U; }
class UScriptStruct* FEmitterCompiledScriptPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmitterCompiledScriptPair, Z_Construct_UPackage__Script_Niagara(), TEXT("EmitterCompiledScriptPair"), sizeof(FEmitterCompiledScriptPair), Get_Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FEmitterCompiledScriptPair>()
{
	return FEmitterCompiledScriptPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmitterCompiledScriptPair(FEmitterCompiledScriptPair::StaticStruct, TEXT("/Script/Niagara"), TEXT("EmitterCompiledScriptPair"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFEmitterCompiledScriptPair
{
	FScriptStruct_Niagara_StaticRegisterNativesFEmitterCompiledScriptPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmitterCompiledScriptPair")),new UScriptStruct::TCppStructOps<FEmitterCompiledScriptPair>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFEmitterCompiledScriptPair;
	struct Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmitterCompiledScriptPair>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"EmitterCompiledScriptPair",
		sizeof(FEmitterCompiledScriptPair),
		alignof(FEmitterCompiledScriptPair),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmitterCompiledScriptPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmitterCompiledScriptPair"), sizeof(FEmitterCompiledScriptPair), Get_Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Hash() { return 616806428U; }
class UScriptStruct* FNiagaraSystemCompiledData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemCompiledData"), sizeof(FNiagaraSystemCompiledData), Get_Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemCompiledData>()
{
	return FNiagaraSystemCompiledData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemCompiledData(FNiagaraSystemCompiledData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemCompiledData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemCompiledData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemCompiledData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraSystemCompiledData")),new UScriptStruct::TCppStructOps<FNiagaraSystemCompiledData>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemCompiledData;
	struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceEmitterBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdateInstanceEmitterBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceEmitterBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceOwnerBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceOwnerBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceSystemBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceSystemBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceGlobalBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceGlobalBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceEmitterBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnInstanceEmitterBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceEmitterBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceOwnerBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceOwnerBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceSystemBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceSystemBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceGlobalBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceGlobalBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceParamsDataSetCompiledData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceParamsDataSetCompiledData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceParamStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParamStore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemCompiledData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings = { "UpdateInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_Inner = { "UpdateInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding = { "UpdateInstanceOwnerBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding = { "UpdateInstanceSystemBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding = { "UpdateInstanceGlobalBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings = { "SpawnInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_Inner = { "SpawnInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding = { "SpawnInstanceOwnerBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding = { "SpawnInstanceSystemBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding = { "SpawnInstanceGlobalBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData = { "UpdateInstanceParamsDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData = { "SpawnInstanceParamsDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore = { "InstanceParamStore", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, InstanceParamStore), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemCompiledData",
		sizeof(FNiagaraSystemCompiledData),
		alignof(FNiagaraSystemCompiledData),
		Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemCompiledData"), sizeof(FNiagaraSystemCompiledData), Get_Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Hash() { return 1584069358U; }
class UScriptStruct* FNiagaraParameterDataSetBindingCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterDataSetBindingCollection"), sizeof(FNiagaraParameterDataSetBindingCollection), Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterDataSetBindingCollection>()
{
	return FNiagaraParameterDataSetBindingCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraParameterDataSetBindingCollection(FNiagaraParameterDataSetBindingCollection::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraParameterDataSetBindingCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterDataSetBindingCollection
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterDataSetBindingCollection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraParameterDataSetBindingCollection")),new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBindingCollection>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterDataSetBindingCollection;
	struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Offsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32Offsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Int32Offsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatOffsets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBindingCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets = { "Int32Offsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBindingCollection, Int32Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_Inner = { "Int32Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets = { "FloatOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBindingCollection, FloatOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_Inner = { "FloatOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterDataSetBindingCollection",
		sizeof(FNiagaraParameterDataSetBindingCollection),
		alignof(FNiagaraParameterDataSetBindingCollection),
		Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraParameterDataSetBindingCollection"), sizeof(FNiagaraParameterDataSetBindingCollection), Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Hash() { return 665425379U; }
class UScriptStruct* FNiagaraParameterDataSetBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterDataSetBinding"), sizeof(FNiagaraParameterDataSetBinding), Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterDataSetBinding>()
{
	return FNiagaraParameterDataSetBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraParameterDataSetBinding(FNiagaraParameterDataSetBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraParameterDataSetBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterDataSetBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterDataSetBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraParameterDataSetBinding")),new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBinding>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterDataSetBinding;
	struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetComponentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataSetComponentOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset = { "DataSetComponentOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBinding, DataSetComponentOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset = { "ParameterOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBinding, ParameterOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterDataSetBinding",
		sizeof(FNiagaraParameterDataSetBinding),
		alignof(FNiagaraParameterDataSetBinding),
		Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraParameterDataSetBinding"), sizeof(FNiagaraParameterDataSetBinding), Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Hash() { return 258570359U; }
class UScriptStruct* FNiagaraEmitterCompiledData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterCompiledData"), sizeof(FNiagaraEmitterCompiledData), Get_Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterCompiledData>()
{
	return FNiagaraEmitterCompiledData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterCompiledData(FNiagaraEmitterCompiledData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterCompiledData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterCompiledData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterCompiledData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterCompiledData")),new UScriptStruct::TCppStructOps<FNiagaraEmitterCompiledData>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterCompiledData;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUCaptureDataSetCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GPUCaptureDataSetCompiledData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterTotalSpawnedParticlesVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterTotalSpawnedParticlesVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterRandomSeedVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterRandomSeedVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterAgeVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterAgeVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnGroupVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnGroupVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterInterpSpawnStartDTVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterInterpSpawnStartDTVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnIntervalVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnIntervalVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnAttributes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnAttributes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterCompiledData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData = { "GPUCaptureDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, GPUCaptureDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData_MetaData[] = {
		{ "Comment", "/** Per-Emitter DataSet Data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Per-Emitter DataSet Data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar = { "EmitterTotalSpawnedParticlesVar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar = { "EmitterRandomSeedVar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterRandomSeedVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar = { "EmitterAgeVar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterAgeVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar = { "EmitterSpawnGroupVar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar = { "EmitterInterpSpawnStartDTVar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar_MetaData[] = {
		{ "Comment", "/** Explicit list of Niagara Variables to bind to Emitter instances. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Explicit list of Niagara Variables to bind to Emitter instances." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar = { "EmitterSpawnIntervalVar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_MetaData[] = {
		{ "Comment", "/** Attribute names in the data set that are driving each emitter's spawning. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Attribute names in the data set that are driving each emitter's spawning." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes = { "SpawnAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, SpawnAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_Inner = { "SpawnAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterCompiledData",
		sizeof(FNiagaraEmitterCompiledData),
		alignof(FNiagaraEmitterCompiledData),
		Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterCompiledData"), sizeof(FNiagaraEmitterCompiledData), Get_Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Hash() { return 3046200482U; }
	void UNiagaraSystem::StaticRegisterNativesUNiagaraSystem()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister()
	{
		return UNiagaraSystem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDINamesReadInSystemScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserDINamesReadInSystemScripts;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UserDINamesReadInSystemScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData[];
#endif
		static void NewProp_bHasSystemScriptDIsWithPerInstanceData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSystemScriptDIsWithPerInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTickDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTickDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTickCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WarmupTickCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivate_MetaData[];
#endif
		static void NewProp_bAutoDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposedParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExposedParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemCompiledData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemCompiledData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemUpdateScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemSpawnScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemSpawnScript;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCompilations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveCompilations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveCompilations_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollectionOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmitterHandles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterHandles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemScalabilityOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemScalabilityOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalabilityOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideScalabilitySettings_MetaData[];
#endif
		static void NewProp_bOverrideScalabilitySettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideScalabilitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedBounds_MetaData[];
#endif
		static void NewProp_bFixedBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDumpDebugEmitterInfo_MetaData[];
#endif
		static void NewProp_bDumpDebugEmitterInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDumpDebugEmitterInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDumpDebugSystemInfo_MetaData[];
#endif
		static void NewProp_bDumpDebugSystemInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDumpDebugSystemInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeOutRapidIteration_MetaData[];
#endif
		static void NewProp_bBakeOutRapidIteration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeOutRapidIteration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyAddedParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorOnlyAddedParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScratchPadScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScratchPadScripts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScratchPadScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TemplateAssetDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTemplateAsset_MetaData[];
#endif
		static void NewProp_bIsTemplateAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTemplateAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageOutOfDate_MetaData[];
#endif
		static void NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThumbnailImageOutOfDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFXSystemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Container for multiple emitters that combine together to create a particle system effect.*/" },
		{ "IncludePath", "NiagaraSystem.h" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Container for multiple emitters that combine together to create a particle system effect." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts = { "UserDINamesReadInSystemScripts", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, UserDINamesReadInSystemScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_Inner = { "UserDINamesReadInSystemScripts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bHasSystemScriptDIsWithPerInstanceData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData = { "bHasSystemScriptDIsWithPerInstanceData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Delta time to use for warmup ticks. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Delta time to use for warmup ticks." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta = { "WarmupTickDelta", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, WarmupTickDelta), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Number of ticks to process for warmup. You can set by this or by time via WarmupTime. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Number of ticks to process for warmup. You can set by this or by time via WarmupTime." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount = { "WarmupTickCount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, WarmupTickCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Warm up time in seconds. Used to calculate WarmupTickCount. Rounds down to the nearest multiple of WarmupTickDelta. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Warm up time in seconds. Used to calculate WarmupTickCount. Rounds down to the nearest multiple of WarmupTickDelta." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Auto-deactivate system if all emitters are determined to not spawn particles again, regardless of lifetime." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bAutoDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate = { "bAutoDeactivate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited. */" },
		{ "EditCondition", "bFixedBounds" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Data used by the editor to maintain UI state etc.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Data used by the editor to maintain UI state etc.." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, EditorData), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters_MetaData[] = {
		{ "Comment", "/** Variables exposed to the outside work for tweaking*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Variables exposed to the outside work for tweaking" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters = { "ExposedParameters", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, ExposedParameters), Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData_MetaData[] = {
		{ "Comment", "//** Post compile generated data used for initializing System Instances during runtime. */\n" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "/ Post compile generated data used for initializing System Instances during runtime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData = { "SystemCompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, SystemCompiledData), Z_Construct_UScriptStruct_FNiagaraSystemCompiledData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript_MetaData[] = {
		{ "Comment", "/** The script which defines the System parameters, and which generates the bindings from System\n\x09parameter to emitter parameter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The script which defines the System parameters, and which generates the bindings from System\n      parameter to emitter parameter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript = { "SystemUpdateScript", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, SystemUpdateScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript_MetaData[] = {
		{ "Comment", "/** The script which defines the System parameters, and which generates the bindings from System\n\x09\x09parameter to emitter parameter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The script which defines the System parameters, and which generates the bindings from System\n              parameter to emitter parameter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript = { "SystemSpawnScript", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, SystemSpawnScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations = { "ActiveCompilations", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, ActiveCompilations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_Inner = { "ActiveCompilations", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides = { "ParameterCollectionOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, ParameterCollectionOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_Inner = { "ParameterCollectionOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_MetaData[] = {
		{ "Comment", "/** Handles to the emitter this System will simulate. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Handles to the emitter this System will simulate." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles = { "EmitterHandles", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, EmitterHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_Inner = { "EmitterHandles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides_MetaData[] = {
		{ "Category", "System" },
		{ "EditCondition", "bOverrideScalabilitySettings" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides = { "SystemScalabilityOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, SystemScalabilityOverrides), Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, ScalabilityOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_Inner = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_MetaData[] = {
		{ "Category", "System" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideScalabilitySettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings = { "bOverrideScalabilitySettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Whether or not fixed bounds are enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Whether or not fixed bounds are enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bFixedBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds = { "bFixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDumpDebugEmitterInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo = { "bDumpDebugEmitterInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDumpDebugSystemInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo = { "bDumpDebugSystemInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Experimental feature that allows us to bake out rapid iteration parameters during the normal compile process. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Experimental feature that allows us to bake out rapid iteration parameters during the normal compile process." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bBakeOutRapidIteration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration = { "bBakeOutRapidIteration", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010008800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, UpdateContext), Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters = { "EditorOnlyAddedParameters", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, EditorOnlyAddedParameters), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, ScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_Inner = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription = { "TemplateAssetDescription", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, TemplateAssetDescription), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bIsTemplateAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset = { "bIsTemplateAsset", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/* If this system is exposed to the library. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If this system is exposed to the library." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bExposeToLibrary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010050800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData[] = {
		{ "Comment", "/** Internal: Indicates the thumbnail image is out of date.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Internal: Indicates the thumbnail image is out of date." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->ThumbnailImageOutOfDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate = { "ThumbnailImageOutOfDate", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Internal: The thumbnail image.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Internal: The thumbnail image." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSystem, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImageOutOfDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams = {
		&UNiagaraSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraSystem, 802066257);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSystem>()
	{
		return UNiagaraSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSystem(Z_Construct_UClass_UNiagaraSystem, &UNiagaraSystem::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraSystem"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
