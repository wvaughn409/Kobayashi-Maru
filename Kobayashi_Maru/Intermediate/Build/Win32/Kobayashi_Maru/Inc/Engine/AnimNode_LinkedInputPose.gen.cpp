// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_LinkedInputPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedInputPose() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LinkedInputPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedInputPose"), sizeof(FAnimNode_LinkedInputPose), Get_Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedInputPose>()
{
	return FAnimNode_LinkedInputPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LinkedInputPose(FAnimNode_LinkedInputPose::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_LinkedInputPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedInputPose
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedInputPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LinkedInputPose")),new UScriptStruct::TCppStructOps<FAnimNode_LinkedInputPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedInputPose;
	struct Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedInputPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Comment", "/** Input pose, optionally linked dynamically to another graph */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "ToolTip", "Input pose, optionally linked dynamically to another graph" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedInputPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph_MetaData[] = {
		{ "Comment", "/** The graph that this linked input pose node is in, filled in by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "ToolTip", "The graph that this linked input pose node is in, filled in by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedInputPose, Graph), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** The name of this linked input pose node's pose, used to identify the input of this graph. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The name of this linked input pose node's pose, used to identify the input of this graph." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedInputPose, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LinkedInputPose",
		sizeof(FAnimNode_LinkedInputPose),
		alignof(FAnimNode_LinkedInputPose),
		Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LinkedInputPose"), sizeof(FAnimNode_LinkedInputPose), Get_Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Hash() { return 543468687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
