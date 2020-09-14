// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimCompressionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompressionTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationErrorStats();
// End Cross Module References
	static UEnum* AnimationKeyFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationKeyFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimationKeyFormat>()
	{
		return AnimationKeyFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimationKeyFormat(AnimationKeyFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("AnimationKeyFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_AnimationKeyFormat_Hash() { return 2113987326U; }
	UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimationKeyFormat"), 0, Get_Z_Construct_UEnum_Engine_AnimationKeyFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AKF_ConstantKeyLerp", (int64)AKF_ConstantKeyLerp },
				{ "AKF_VariableKeyLerp", (int64)AKF_VariableKeyLerp },
				{ "AKF_PerTrackCompression", (int64)AKF_PerTrackCompression },
				{ "AKF_MAX", (int64)AKF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AKF_ConstantKeyLerp.Name", "AKF_ConstantKeyLerp" },
				{ "AKF_MAX.Name", "AKF_MAX" },
				{ "AKF_PerTrackCompression.Name", "AKF_PerTrackCompression" },
				{ "AKF_VariableKeyLerp.Name", "AKF_VariableKeyLerp" },
				{ "Comment", "/**\n * Indicates animation data key format.\n */" },
				{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
				{ "ToolTip", "Indicates animation data key format." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"AnimationKeyFormat",
				"AnimationKeyFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimationErrorStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationErrorStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationErrorStats, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationErrorStats"), sizeof(FAnimationErrorStats), Get_Z_Construct_UScriptStruct_FAnimationErrorStats_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationErrorStats>()
{
	return FAnimationErrorStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationErrorStats(FAnimationErrorStats::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationErrorStats"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationErrorStats
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationErrorStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationErrorStats")),new UScriptStruct::TCppStructOps<FAnimationErrorStats>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationErrorStats;
	struct Z_Construct_UScriptStruct_FAnimationErrorStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A set of error statistics for an animation, gathered by FAnimationUtils::ComputeCompressionError\n*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "A set of error statistics for an animation, gathered by FAnimationUtils::ComputeCompressionError" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationErrorStats>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationErrorStats",
		sizeof(FAnimationErrorStats),
		alignof(FAnimationErrorStats),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationErrorStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationErrorStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationErrorStats"), sizeof(FAnimationErrorStats), Get_Z_Construct_UScriptStruct_FAnimationErrorStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationErrorStats_Hash() { return 1817099813U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
