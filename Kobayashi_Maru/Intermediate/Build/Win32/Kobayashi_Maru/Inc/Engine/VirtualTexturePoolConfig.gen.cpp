// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTexturePoolConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexturePoolConfig() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FVirtualTextureSpacePoolConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureSpacePoolConfig"), sizeof(FVirtualTextureSpacePoolConfig), Get_Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureSpacePoolConfig>()
{
	return FVirtualTextureSpacePoolConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualTextureSpacePoolConfig(FVirtualTextureSpacePoolConfig::StaticStruct, TEXT("/Script/Engine"), TEXT("VirtualTextureSpacePoolConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVirtualTextureSpacePoolConfig
{
	FScriptStruct_Engine_StaticRegisterNativesFVirtualTextureSpacePoolConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualTextureSpacePoolConfig")),new UScriptStruct::TCppStructOps<FVirtualTextureSpacePoolConfig>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVirtualTextureSpacePoolConfig;
	struct Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSizeScale_MetaData[];
#endif
		static void NewProp_bAllowSizeScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeInMegabyte_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeInMegabyte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Formats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Formats;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Formats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinTileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Settings of a single pool\n*/" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Settings of a single pool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureSpacePoolConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_MetaData[] = {
		{ "Comment", "/** Allow the size to allocate for the pool to be scaled by some factor. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Allow the size to allocate for the pool to be scaled by some factor." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_SetBit(void* Obj)
	{
		((FVirtualTextureSpacePoolConfig*)Obj)->bAllowSizeScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale = { "bAllowSizeScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVirtualTextureSpacePoolConfig), &Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte_MetaData[] = {
		{ "Comment", "/** Upper limit of size in megabytes to allocate for the pool. The allocator will allocate as close as possible to this limit. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Upper limit of size in megabytes to allocate for the pool. The allocator will allocate as close as possible to this limit." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte = { "SizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, SizeInMegabyte), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_MetaData[] = {
		{ "Comment", "/** Format set to match. One pool can contain multiple layers with synchronized page table mappings. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Format set to match. One pool can contain multiple layers with synchronized page table mappings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats = { "Formats", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, Formats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_Inner = { "Formats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize_MetaData[] = {
		{ "Comment", "/** Maximum tile size to match (including tile border). */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Maximum tile size to match (including tile border)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize = { "MaxTileSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MaxTileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize_MetaData[] = {
		{ "Comment", "/** Minimum tile size to match (including tile border). */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Minimum tile size to match (including tile border)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize = { "MinTileSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MinTileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VirtualTextureSpacePoolConfig",
		sizeof(FVirtualTextureSpacePoolConfig),
		alignof(FVirtualTextureSpacePoolConfig),
		Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualTextureSpacePoolConfig"), sizeof(FVirtualTextureSpacePoolConfig), Get_Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Hash() { return 996939102U; }
	void UVirtualTexturePoolConfig::StaticRegisterNativesUVirtualTexturePoolConfig()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister()
	{
		return UVirtualTexturePoolConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTexturePoolConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pools;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeInMegabyte_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultSizeInMegabyte;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VT/VirtualTexturePoolConfig.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_MetaData[] = {
		{ "Comment", "// Size in tiles of any pools not explicitly specified in the config\n" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Size in tiles of any pools not explicitly specified in the config" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools = { "Pools", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTexturePoolConfig, Pools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_Inner = { "Pools", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte = { "DefaultSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTexturePoolConfig, DefaultSizeInMegabyte), METADATA_PARAMS(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexturePoolConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::ClassParams = {
		&UVirtualTexturePoolConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTexturePoolConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTexturePoolConfig, 3018391483);
	template<> ENGINE_API UClass* StaticClass<UVirtualTexturePoolConfig>()
	{
		return UVirtualTexturePoolConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTexturePoolConfig(Z_Construct_UClass_UVirtualTexturePoolConfig, &UVirtualTexturePoolConfig::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTexturePoolConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexturePoolConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
