// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/AudioEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioEffect() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioReverbEffect();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEffectParameters();
// End Cross Module References
class UScriptStruct* FAudioReverbEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioReverbEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioReverbEffect, Z_Construct_UPackage__Script_Engine(), TEXT("AudioReverbEffect"), sizeof(FAudioReverbEffect), Get_Z_Construct_UScriptStruct_FAudioReverbEffect_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioReverbEffect>()
{
	return FAudioReverbEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioReverbEffect(FAudioReverbEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioReverbEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioReverbEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioReverbEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioReverbEffect")),new UScriptStruct::TCppStructOps<FAudioReverbEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioReverbEffect;
	struct Z_Construct_UScriptStruct_FAudioReverbEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioReverbEffect>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAudioEffectParameters,
		&NewStructOps,
		"AudioReverbEffect",
		sizeof(FAudioReverbEffect),
		alignof(FAudioReverbEffect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioReverbEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioReverbEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioReverbEffect"), sizeof(FAudioReverbEffect), Get_Z_Construct_UScriptStruct_FAudioReverbEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioReverbEffect_Hash() { return 965790278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
