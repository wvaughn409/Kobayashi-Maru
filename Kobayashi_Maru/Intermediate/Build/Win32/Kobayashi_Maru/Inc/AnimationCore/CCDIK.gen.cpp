// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCore/Public/CCDIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCDIK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCCDIKChainLink();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
class UScriptStruct* FCCDIKChainLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FCCDIKChainLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCCDIKChainLink, Z_Construct_UPackage__Script_AnimationCore(), TEXT("CCDIKChainLink"), sizeof(FCCDIKChainLink), Get_Z_Construct_UScriptStruct_FCCDIKChainLink_Hash());
	}
	return Singleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FCCDIKChainLink>()
{
	return FCCDIKChainLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCCDIKChainLink(FCCDIKChainLink::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("CCDIKChainLink"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFCCDIKChainLink
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFCCDIKChainLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CCDIKChainLink")),new UScriptStruct::TCppStructOps<FCCDIKChainLink>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFCCDIKChainLink;
	struct Z_Construct_UScriptStruct_FCCDIKChainLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transient structure for CCDIK node evaluation */" },
		{ "ModuleRelativePath", "Public/CCDIK.h" },
		{ "ToolTip", "Transient structure for CCDIK node evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCCDIKChainLink>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"CCDIKChainLink",
		sizeof(FCCDIKChainLink),
		alignof(FCCDIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCCDIKChainLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCCDIKChainLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CCDIKChainLink"), sizeof(FCCDIKChainLink), Get_Z_Construct_UScriptStruct_FCCDIKChainLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCCDIKChainLink_Hash() { return 3520426697U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
