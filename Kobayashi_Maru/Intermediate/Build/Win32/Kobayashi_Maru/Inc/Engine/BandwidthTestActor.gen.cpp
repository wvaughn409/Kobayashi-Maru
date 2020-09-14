// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Net/BandwidthTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBandwidthTestActor() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestGenerator();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestItem();
	ENGINE_API UClass* Z_Construct_UClass_ABandwidthTestActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABandwidthTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FBandwidthTestGenerator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBandwidthTestGenerator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBandwidthTestGenerator, Z_Construct_UPackage__Script_Engine(), TEXT("BandwidthTestGenerator"), sizeof(FBandwidthTestGenerator), Get_Z_Construct_UScriptStruct_FBandwidthTestGenerator_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBandwidthTestGenerator>()
{
	return FBandwidthTestGenerator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBandwidthTestGenerator(FBandwidthTestGenerator::StaticStruct, TEXT("/Script/Engine"), TEXT("BandwidthTestGenerator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBandwidthTestGenerator
{
	FScriptStruct_Engine_StaticRegisterNativesFBandwidthTestGenerator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BandwidthTestGenerator")),new UScriptStruct::TCppStructOps<FBandwidthTestGenerator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBandwidthTestGenerator;
	struct Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedBuffers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedBuffers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedBuffers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n//\n" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBandwidthTestGenerator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers = { "ReplicatedBuffers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBandwidthTestGenerator, ReplicatedBuffers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_Inner = { "ReplicatedBuffers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBandwidthTestItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BandwidthTestGenerator",
		sizeof(FBandwidthTestGenerator),
		alignof(FBandwidthTestGenerator),
		Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestGenerator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBandwidthTestGenerator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BandwidthTestGenerator"), sizeof(FBandwidthTestGenerator), Get_Z_Construct_UScriptStruct_FBandwidthTestGenerator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBandwidthTestGenerator_Hash() { return 892485904U; }
class UScriptStruct* FBandwidthTestItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBandwidthTestItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBandwidthTestItem, Z_Construct_UPackage__Script_Engine(), TEXT("BandwidthTestItem"), sizeof(FBandwidthTestItem), Get_Z_Construct_UScriptStruct_FBandwidthTestItem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBandwidthTestItem>()
{
	return FBandwidthTestItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBandwidthTestItem(FBandwidthTestItem::StaticStruct, TEXT("/Script/Engine"), TEXT("BandwidthTestItem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBandwidthTestItem
{
	FScriptStruct_Engine_StaticRegisterNativesFBandwidthTestItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BandwidthTestItem")),new UScriptStruct::TCppStructOps<FBandwidthTestItem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBandwidthTestItem;
	struct Z_Construct_UScriptStruct_FBandwidthTestItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kilobyte_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Kilobyte;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kilobyte_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n//\n" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBandwidthTestItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_MetaData[] = {
		{ "Comment", "// Contains up to 1000 bytes\n" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
		{ "ToolTip", "Contains up to 1000 bytes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte = { "Kilobyte", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBandwidthTestItem, Kilobyte), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_Inner = { "Kilobyte", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BandwidthTestItem",
		sizeof(FBandwidthTestItem),
		alignof(FBandwidthTestItem),
		Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBandwidthTestItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BandwidthTestItem"), sizeof(FBandwidthTestItem), Get_Z_Construct_UScriptStruct_FBandwidthTestItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBandwidthTestItem_Hash() { return 2550614310U; }
	void ABandwidthTestActor::StaticRegisterNativesABandwidthTestActor()
	{
	}
	UClass* Z_Construct_UClass_ABandwidthTestActor_NoRegister()
	{
		return ABandwidthTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ABandwidthTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BandwidthGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BandwidthGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABandwidthTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABandwidthTestActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This ABandwidthTestActor class is used to generate an easily controllable amount of bandwidth.\n * It uses property replication to generate it's traffic via a NetDeltaSerializer struct\n * Note that the property data is never stored in memory on the simulated clients \n */" },
		{ "IncludePath", "Net/BandwidthTestActor.h" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
		{ "ToolTip", "This ABandwidthTestActor class is used to generate an easily controllable amount of bandwidth.\nIt uses property replication to generate it's traffic via a NetDeltaSerializer struct\nNote that the property data is never stored in memory on the simulated clients" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator = { "BandwidthGenerator", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABandwidthTestActor, BandwidthGenerator), Z_Construct_UScriptStruct_FBandwidthTestGenerator, METADATA_PARAMS(Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABandwidthTestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABandwidthTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABandwidthTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABandwidthTestActor_Statics::ClassParams = {
		&ABandwidthTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABandwidthTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABandwidthTestActor_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABandwidthTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABandwidthTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABandwidthTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABandwidthTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABandwidthTestActor, 273865056);
	template<> ENGINE_API UClass* StaticClass<ABandwidthTestActor>()
	{
		return ABandwidthTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABandwidthTestActor(Z_Construct_UClass_ABandwidthTestActor, &ABandwidthTestActor::StaticClass, TEXT("/Script/Engine"), TEXT("ABandwidthTestActor"), false, nullptr, nullptr, nullptr);

	void ABandwidthTestActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BandwidthGenerator(TEXT("BandwidthGenerator"));

		const bool bIsValid = true
			&& Name_BandwidthGenerator == ClassReps[(int32)ENetFields_Private::BandwidthGenerator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABandwidthTestActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABandwidthTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
