// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraScalabilityManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityManager() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityManager();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
// End Cross Module References
class UScriptStruct* FNiagaraScalabilityManager::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScalabilityManager, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScalabilityManager"), sizeof(FNiagaraScalabilityManager), Get_Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScalabilityManager>()
{
	return FNiagaraScalabilityManager::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScalabilityManager(FNiagaraScalabilityManager::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScalabilityManager"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScalabilityManager
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScalabilityManager()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraScalabilityManager")),new UScriptStruct::TCppStructOps<FNiagaraScalabilityManager>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScalabilityManager;
	struct Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManagedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManagedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScalabilityManager>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents = { "ManagedComponents", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScalabilityManager, ManagedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_Inner = { "ManagedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScalabilityManager, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScalabilityManager",
		sizeof(FNiagaraScalabilityManager),
		alignof(FNiagaraScalabilityManager),
		Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityManager()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScalabilityManager"), sizeof(FNiagaraScalabilityManager), Get_Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Hash() { return 3504625588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
