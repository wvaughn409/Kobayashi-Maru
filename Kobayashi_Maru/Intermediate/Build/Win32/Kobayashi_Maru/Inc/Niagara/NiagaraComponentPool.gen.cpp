// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraComponentPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentPool() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNCPool();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNCPoolElement();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentPool_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentPool();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	static UEnum* ENCPoolMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENCPoolMethod, Z_Construct_UPackage__Script_Niagara(), TEXT("ENCPoolMethod"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENCPoolMethod>()
	{
		return ENCPoolMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENCPoolMethod(ENCPoolMethod_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENCPoolMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENCPoolMethod_Hash() { return 3109365759U; }
	UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENCPoolMethod"), 0, Get_Z_Construct_UEnum_Niagara_ENCPoolMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENCPoolMethod::None", (int64)ENCPoolMethod::None },
				{ "ENCPoolMethod::AutoRelease", (int64)ENCPoolMethod::AutoRelease },
				{ "ENCPoolMethod::ManualRelease", (int64)ENCPoolMethod::ManualRelease },
				{ "ENCPoolMethod::ManualRelease_OnComplete", (int64)ENCPoolMethod::ManualRelease_OnComplete },
				{ "ENCPoolMethod::FreeInPool", (int64)ENCPoolMethod::FreeInPool },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoRelease.Comment", "/**\n\x09* The component is allocated from the pool and will be automatically released back to it.\n\x09* User need not handle this any more that other NCs but interaction with the NC after the tick it's spawned in are unsafe.\n\x09* This method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget.\n\x09*/" },
				{ "AutoRelease.Name", "ENCPoolMethod::AutoRelease" },
				{ "AutoRelease.ToolTip", "The component is allocated from the pool and will be automatically released back to it.\nUser need not handle this any more that other NCs but interaction with the NC after the tick it's spawned in are unsafe.\nThis method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget." },
				{ "FreeInPool.Comment", "/**\n\x09Special entry that marks a NC as having been returned to the pool. All NCs currently in the pool are marked this way.\n\x09*/" },
				{ "FreeInPool.Hidden", "" },
				{ "FreeInPool.Name", "ENCPoolMethod::FreeInPool" },
				{ "FreeInPool.ToolTip", "Special entry that marks a NC as having been returned to the pool. All NCs currently in the pool are marked this way." },
				{ "ManualRelease.Comment", "/**\n\x09* NC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the NC and must call ReleaseToPool when finished with it otherwise the NC will leak.\n\x09* Interaction with the NC after it has been released are unsafe.\n\x09* This method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime.\n\x09*/" },
				{ "ManualRelease.Name", "ENCPoolMethod::ManualRelease" },
				{ "ManualRelease.ToolTip", "NC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the NC and must call ReleaseToPool when finished with it otherwise the NC will leak.\nInteraction with the NC after it has been released are unsafe.\nThis method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime." },
				{ "ManualRelease_OnComplete.Comment", "/** \n\x09Special entry allowing manual release NCs to be manually released but wait until completion to be returned to the pool.\n\x09*/" },
				{ "ManualRelease_OnComplete.Hidden", "" },
				{ "ManualRelease_OnComplete.Name", "ENCPoolMethod::ManualRelease_OnComplete" },
				{ "ManualRelease_OnComplete.ToolTip", "Special entry allowing manual release NCs to be manually released but wait until completion to be returned to the pool." },
				{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
				{ "None.Comment", "/**\n\x09* The component will be created fresh and not allocated from the pool.\n\x09*/" },
				{ "None.Name", "ENCPoolMethod::None" },
				{ "None.ToolTip", "The component will be created fresh and not allocated from the pool." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENCPoolMethod",
				"ENCPoolMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNCPool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNCPool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCPool, Z_Construct_UPackage__Script_Niagara(), TEXT("NCPool"), sizeof(FNCPool), Get_Z_Construct_UScriptStruct_FNCPool_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNCPool>()
{
	return FNCPool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNCPool(FNCPool::StaticStruct, TEXT("/Script/Niagara"), TEXT("NCPool"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNCPool
{
	FScriptStruct_Niagara_StaticRegisterNativesFNCPool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NCPool")),new UScriptStruct::TCppStructOps<FNCPool>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNCPool;
	struct Z_Construct_UScriptStruct_FNCPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUseComponents_Manual_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InUseComponents_Manual;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUseComponents_Manual_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUseComponents_Auto_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InUseComponents_Auto;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUseComponents_Auto_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FreeElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeElements_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNCPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCPool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual_MetaData[] = {
		{ "Comment", "//Array of currently in flight components that need manual release.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
		{ "ToolTip", "Array of currently in flight components that need manual release." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual = { "InUseComponents_Manual", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNCPool, InUseComponents_Manual), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual_Inner = { "InUseComponents_Manual", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto_MetaData[] = {
		{ "Comment", "//Array of currently in flight components that will auto release.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
		{ "ToolTip", "Array of currently in flight components that will auto release." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto = { "InUseComponents_Auto", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNCPool, InUseComponents_Auto), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto_Inner = { "InUseComponents_Auto", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_MetaData[] = {
		{ "Comment", "//Collection of all currently allocated, free items ready to be grabbed for use.\n//TODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue.\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
		{ "ToolTip", "Collection of all currently allocated, free items ready to be grabbed for use.\nTODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements = { "FreeElements", nullptr, (EPropertyFlags)0x0010008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNCPool, FreeElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_Inner = { "FreeElements", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNCPoolElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Manual_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_InUseComponents_Auto_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NCPool",
		sizeof(FNCPool),
		alignof(FNCPool),
		Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNCPool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNCPool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NCPool"), sizeof(FNCPool), Get_Z_Construct_UScriptStruct_FNCPool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNCPool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNCPool_Hash() { return 2303589306U; }
class UScriptStruct* FNCPoolElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNCPoolElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCPoolElement, Z_Construct_UPackage__Script_Niagara(), TEXT("NCPoolElement"), sizeof(FNCPoolElement), Get_Z_Construct_UScriptStruct_FNCPoolElement_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNCPoolElement>()
{
	return FNCPoolElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNCPoolElement(FNCPoolElement::StaticStruct, TEXT("/Script/Niagara"), TEXT("NCPoolElement"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNCPoolElement
{
	FScriptStruct_Niagara_StaticRegisterNativesFNCPoolElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NCPoolElement")),new UScriptStruct::TCppStructOps<FNCPoolElement>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNCPoolElement;
	struct Z_Construct_UScriptStruct_FNCPoolElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCPoolElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNCPoolElement, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCPoolElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NCPoolElement",
		sizeof(FNCPoolElement),
		alignof(FNCPoolElement),
		Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNCPoolElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNCPoolElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NCPoolElement"), sizeof(FNCPoolElement), Get_Z_Construct_UScriptStruct_FNCPoolElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNCPoolElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNCPoolElement_Hash() { return 267906397U; }
	void UNiagaraComponentPool::StaticRegisterNativesUNiagaraComponentPool()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraComponentPool_NoRegister()
	{
		return UNiagaraComponentPool::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponentPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldParticleSystemPools_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WorldParticleSystemPools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldParticleSystemPools_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldParticleSystemPools_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponentPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraComponentPool.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentPool, WorldParticleSystemPools), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp = { "WorldParticleSystemPools_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_ValueProp = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNCPool, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponentPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentPool_Statics::ClassParams = {
		&UNiagaraComponentPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponentPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraComponentPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraComponentPool, 3032279435);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentPool>()
	{
		return UNiagaraComponentPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraComponentPool(Z_Construct_UClass_UNiagaraComponentPool, &UNiagaraComponentPool::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraComponentPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
