// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTextureBuildSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuildSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FVirtualTextureBuildSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings, Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureBuildSettings"), sizeof(FVirtualTextureBuildSettings), Get_Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureBuildSettings>()
{
	return FVirtualTextureBuildSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualTextureBuildSettings(FVirtualTextureBuildSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("VirtualTextureBuildSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVirtualTextureBuildSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFVirtualTextureBuildSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualTextureBuildSettings")),new UScriptStruct::TCppStructOps<FVirtualTextureBuildSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVirtualTextureBuildSettings;
	struct Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCompressZlib_MetaData[];
#endif
		static void NewProp_bEnableCompressZlib_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCompressZlib;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCompressCrunch_MetaData[];
#endif
		static void NewProp_bEnableCompressCrunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCompressCrunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileBorderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileBorderSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Build settings used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
		{ "ToolTip", "Build settings used for virtual textures." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureBuildSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib_SetBit(void* Obj)
	{
		((FVirtualTextureBuildSettings*)Obj)->bEnableCompressZlib = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib = { "bEnableCompressZlib", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVirtualTextureBuildSettings), &Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch_SetBit(void* Obj)
	{
		((FVirtualTextureBuildSettings*)Obj)->bEnableCompressCrunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch = { "bEnableCompressCrunch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVirtualTextureBuildSettings), &Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize = { "TileBorderSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureBuildSettings, TileBorderSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureBuildSettings, TileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressZlib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_bEnableCompressCrunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VirtualTextureBuildSettings",
		sizeof(FVirtualTextureBuildSettings),
		alignof(FVirtualTextureBuildSettings),
		Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualTextureBuildSettings"), sizeof(FVirtualTextureBuildSettings), Get_Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Hash() { return 4093534889U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
