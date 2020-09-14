// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/KismetAnimationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationTypes() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FPositionHistory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPositionHistory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPositionHistory, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PositionHistory"), sizeof(FPositionHistory), Get_Z_Construct_UScriptStruct_FPositionHistory_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPositionHistory>()
{
	return FPositionHistory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPositionHistory(FPositionHistory::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("PositionHistory"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPositionHistory
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPositionHistory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PositionHistory")),new UScriptStruct::TCppStructOps<FPositionHistory>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPositionHistory;
	struct Z_Construct_UScriptStruct_FPositionHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""An easing type defining how to ease float values.\n *\x09The FPositionHistory is a container to record position changes\n *\x09over time. This is used to calculate velocity of a bone, for example.\n *\x09The FPositionArray also tracks the last index used to allow for \n *\x09reuse of entries (instead of appending to the array all the time).\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "An easing type defining how to ease float values.\nThe FPositionHistory is a container to record position changes\nover time. This is used to calculate velocity of a bone, for example.\nThe FPositionArray also tracks the last index used to allow for\nreuse of entries (instead of appending to the array all the time)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPositionHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPositionHistory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "FPositionHistory" },
		{ "Comment", "/** The range for this particular history */" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "The range for this particular history" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPositionHistory, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "FPositionHistory" },
		{ "Comment", "/** The recorded positions */" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "The recorded positions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPositionHistory, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPositionHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"PositionHistory",
		sizeof(FPositionHistory),
		alignof(FPositionHistory),
		Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPositionHistory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PositionHistory"), sizeof(FPositionHistory), Get_Z_Construct_UScriptStruct_FPositionHistory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPositionHistory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPositionHistory_Hash() { return 3419130180U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
