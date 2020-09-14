// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCore/Public/FABRIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFABRIK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFABRIKChainLink();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
class UScriptStruct* FFABRIKChainLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FFABRIKChainLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFABRIKChainLink, Z_Construct_UPackage__Script_AnimationCore(), TEXT("FABRIKChainLink"), sizeof(FFABRIKChainLink), Get_Z_Construct_UScriptStruct_FFABRIKChainLink_Hash());
	}
	return Singleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FFABRIKChainLink>()
{
	return FFABRIKChainLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFABRIKChainLink(FFABRIKChainLink::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("FABRIKChainLink"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFFABRIKChainLink
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFFABRIKChainLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FABRIKChainLink")),new UScriptStruct::TCppStructOps<FFABRIKChainLink>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFFABRIKChainLink;
	struct Z_Construct_UScriptStruct_FFABRIKChainLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transient structure for FABRIK node evaluation */" },
		{ "ModuleRelativePath", "Public/FABRIK.h" },
		{ "ToolTip", "Transient structure for FABRIK node evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFABRIKChainLink>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"FABRIKChainLink",
		sizeof(FFABRIKChainLink),
		alignof(FFABRIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFABRIKChainLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFABRIKChainLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FABRIKChainLink"), sizeof(FFABRIKChainLink), Get_Z_Construct_UScriptStruct_FFABRIKChainLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFABRIKChainLink_Hash() { return 555107587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
