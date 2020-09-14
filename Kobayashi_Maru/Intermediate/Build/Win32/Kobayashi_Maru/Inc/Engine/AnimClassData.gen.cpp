// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimClassData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimClassData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunctionData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimBlueprintFunctionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData, Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintFunctionData"), sizeof(FAnimBlueprintFunctionData), Get_Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintFunctionData>()
{
	return FAnimBlueprintFunctionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimBlueprintFunctionData(FAnimBlueprintFunctionData::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimBlueprintFunctionData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunctionData
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunctionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimBlueprintFunctionData")),new UScriptStruct::TCppStructOps<FAnimBlueprintFunctionData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunctionData;
	struct Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_InputProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_InputPoseNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPoseNodeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_OutputPoseNodeProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Serialized anim BP function data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Serialized anim BP function data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintFunctionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties_MetaData[] = {
		{ "Comment", "/** The input properties themselves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The input properties themselves" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties = { "InputProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunctionData, InputProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties_Inner = { "InputProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties_MetaData[] = {
		{ "Comment", "/** The properties of the input nodes, patched up during link */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The properties of the input nodes, patched up during link" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties = { "InputPoseNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunctionData, InputPoseNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties_Inner = { "InputPoseNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_OutputPoseNodeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_OutputPoseNodeProperty = { "OutputPoseNodeProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunctionData, OutputPoseNodeProperty), &FStructProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_OutputPoseNodeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_OutputPoseNodeProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_InputPoseNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::NewProp_OutputPoseNodeProperty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimBlueprintFunctionData",
		sizeof(FAnimBlueprintFunctionData),
		alignof(FAnimBlueprintFunctionData),
		Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunctionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimBlueprintFunctionData"), sizeof(FAnimBlueprintFunctionData), Get_Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunctionData_Hash() { return 2371456660U; }
	void UAnimClassData::StaticRegisterNativesUAnimClassData()
	{
	}
	UClass* Z_Construct_UClass_UAnimClassData_NoRegister()
	{
		return UAnimClassData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimClassData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphBlendOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GraphBlendOptions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GraphBlendOptions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphBlendOptions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluateGraphExposedInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EvaluateGraphExposedInputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluateGraphExposedInputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncGroupNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroupNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNameAssetPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GraphNameAssetPlayers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GraphNameAssetPlayers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphNameAssetPlayers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializationNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InitializationNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_InitializationNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateMachineNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_StateMachineNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicResetNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicResetNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_DynamicResetNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreUpdateNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreUpdateNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_PreUpdateNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedAnimLayerNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedAnimLayerNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_LinkedAnimLayerNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedAnimGraphNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedAnimGraphNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_LinkedAnimGraphNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNodeProperties;
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_AnimNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintFunctionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimBlueprintFunctionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimBlueprintFunctionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimBlueprintFunctions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimBlueprintFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseIndicesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OrderedSavedPoseIndicesMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderedSavedPoseIndicesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedStateMachines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedStateMachines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedStateMachines_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimClassData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimClassData.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_MetaData[] = {
		{ "Comment", "// Per layer graph blending options\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Per layer graph blending options" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions = { "GraphBlendOptions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, GraphBlendOptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_Key_KeyProp = { "GraphBlendOptions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_ValueProp = { "GraphBlendOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAnimGraphBlendOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs_MetaData[] = {
		{ "Comment", "// The default handler for graph-exposed inputs\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The default handler for graph-exposed inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, EvaluateGraphExposedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs_Inner = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExposedValueHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_MetaData[] = {
		{ "Comment", "// Array of sync group names in the order that they are requested during compile\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Array of sync group names in the order that they are requested during compile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames = { "SyncGroupNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, SyncGroupNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_Inner = { "SyncGroupNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_MetaData[] = {
		{ "Comment", "// Indices for any Asset Player found within a specific (named) Anim Layer Graph, or implemented Anim Interface Graph\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Indices for any Asset Player found within a specific (named) Anim Layer Graph, or implemented Anim Interface Graph" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers = { "GraphNameAssetPlayers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, GraphNameAssetPlayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_Key_KeyProp = { "GraphNameAssetPlayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_ValueProp = { "GraphNameAssetPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties_MetaData[] = {
		{ "Comment", "// Array of nodes that need an OnInitializeAnimInstance call\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Array of nodes that need an OnInitializeAnimInstance call" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties = { "InitializationNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, InitializationNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties_Inner = { "InitializationNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties_MetaData[] = {
		{ "Comment", "// Array of state machine nodes\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Array of state machine nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties = { "StateMachineNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, StateMachineNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties_Inner = { "StateMachineNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties_MetaData[] = {
		{ "Comment", "// Array of nodes that need a DynamicReset() call\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Array of nodes that need a DynamicReset() call" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties = { "DynamicResetNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, DynamicResetNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties_Inner = { "DynamicResetNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties_MetaData[] = {
		{ "Comment", "// Array of nodes that need a PreUpdate() call\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Array of nodes that need a PreUpdate() call" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties = { "PreUpdateNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, PreUpdateNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties_Inner = { "PreUpdateNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties_MetaData[] = {
		{ "Comment", "// The array of linked anim layer nodes\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The array of linked anim layer nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties = { "LinkedAnimLayerNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, LinkedAnimLayerNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties_Inner = { "LinkedAnimLayerNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties_MetaData[] = {
		{ "Comment", "// The array of linked anim graph nodes\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The array of linked anim graph nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties = { "LinkedAnimGraphNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, LinkedAnimGraphNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties_Inner = { "LinkedAnimGraphNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_MetaData[] = {
		{ "Comment", "// The array of anim nodes\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The array of anim nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties = { "AnimNodeProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, AnimNodeProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_Inner = { "AnimNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, &FStructProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData_MetaData[] = {
		{ "Comment", "// Serialized function data, used to patch up transient data in AnimBlueprintFunctions\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Serialized function data, used to patch up transient data in AnimBlueprintFunctions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData = { "AnimBlueprintFunctionData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, AnimBlueprintFunctionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData_Inner = { "AnimBlueprintFunctionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimBlueprintFunctionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions_MetaData[] = {
		{ "Comment", "// All of the functions that this anim class provides\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "All of the functions that this anim class provides" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions = { "AnimBlueprintFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, AnimBlueprintFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions_Inner = { "AnimBlueprintFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimBlueprintFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_MetaData[] = {
		{ "Comment", "// Indices for each of the saved pose nodes that require updating, in the order they need to get updates.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Indices for each of the saved pose nodes that require updating, in the order they need to get updates." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap = { "OrderedSavedPoseIndicesMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, OrderedSavedPoseIndicesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp = { "OrderedSavedPoseIndicesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_ValueProp = { "OrderedSavedPoseIndicesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCachedPoseIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "Comment", "/** A list of anim notifies that state machines (or anything else) may reference */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "A list of anim notifies that state machines (or anything else) may reference" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies = { "AnimNotifies", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, AnimNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_Inner = { "AnimNotifies", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Comment", "/** Target skeleton for this blueprint class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Target skeleton for this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_MetaData[] = {
		{ "Comment", "// List of state machines present in this blueprint class\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "List of state machines present in this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines = { "BakedStateMachines", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimClassData, BakedStateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_Inner = { "BakedStateMachines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBakedAnimationStateMachine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimClassData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphBlendOptions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_EvaluateGraphExposedInputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_GraphNameAssetPlayers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_InitializationNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_StateMachineNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_DynamicResetNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_PreUpdateNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimLayerNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_LinkedAnimGraphNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimBlueprintFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndicesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimClassData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimClassInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimClassData, IAnimClassInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimClassData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimClassData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimClassData_Statics::ClassParams = {
		&UAnimClassData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimClassData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimClassData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimClassData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimClassData, 1420973327);
	template<> ENGINE_API UClass* StaticClass<UAnimClassData>()
	{
		return UAnimClassData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimClassData(Z_Construct_UClass_UAnimClassData, &UAnimClassData::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimClassData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimClassData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
