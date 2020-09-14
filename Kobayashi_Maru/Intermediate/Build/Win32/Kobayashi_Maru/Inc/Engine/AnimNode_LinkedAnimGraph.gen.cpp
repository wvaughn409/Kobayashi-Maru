// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_LinkedAnimGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimGraph() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LinkedAnimGraph::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedAnimGraph"), sizeof(FAnimNode_LinkedAnimGraph), Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedAnimGraph>()
{
	return FAnimNode_LinkedAnimGraph::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LinkedAnimGraph(FAnimNode_LinkedAnimGraph::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_LinkedAnimGraph"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedAnimGraph
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedAnimGraph()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LinkedAnimGraph")),new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimGraph>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedAnimGraph;
	struct Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPropagateNotifiesToLinkedInstances_MetaData[];
#endif
		static void NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropagateNotifiesToLinkedInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[];
#endif
		static void NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveNotifiesFromLinkedInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InstanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPoses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimGraph>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether named notifies will be propagated from this linked instance to other instances (outer or other linked instances) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Whether named notifies will be propagated from this linked instance to other instances (outer or other linked instances)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj)
	{
		((FAnimNode_LinkedAnimGraph*)Obj)->bPropagateNotifiesToLinkedInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances = { "bPropagateNotifiesToLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_LinkedAnimGraph), &Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether named notifies will be received by this linked instance from other instances (outer or other linked instances) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Whether named notifies will be received by this linked instance from other instances (outer or other linked instances)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj)
	{
		((FAnimNode_LinkedAnimGraph*)Obj)->bReceiveNotifiesFromLinkedInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances = { "bReceiveNotifiesFromLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_LinkedAnimGraph), &Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional tag used to identify this linked instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Optional tag used to identify this linked instance" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The class spawned for this linked instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "The class spawned for this linked instance" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass = { "InstanceClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, InstanceClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** List of input pose names, 1-1 with pose links about, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "List of input pose names, 1-1 with pose links about, built by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, InputPoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Input poses for the node, intentionally not accessible because if there's no input\n\x09 *  nodes in the target class we don't want to show these as pins\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Input poses for the node, intentionally not accessible because if there's no input\nnodes in the target class we don't want to show these as pins" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses = { "InputPoses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, InputPoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_Inner = { "InputPoses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
		&NewStructOps,
		"AnimNode_LinkedAnimGraph",
		sizeof(FAnimNode_LinkedAnimGraph),
		alignof(FAnimNode_LinkedAnimGraph),
		Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LinkedAnimGraph"), sizeof(FAnimNode_LinkedAnimGraph), Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Hash() { return 3101099317U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
