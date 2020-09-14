// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimClassInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimClassInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FAnimGraphBlendOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphBlendOptions, Z_Construct_UPackage__Script_Engine(), TEXT("AnimGraphBlendOptions"), sizeof(FAnimGraphBlendOptions), Get_Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGraphBlendOptions>()
{
	return FAnimGraphBlendOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGraphBlendOptions(FAnimGraphBlendOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimGraphBlendOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimGraphBlendOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimGraphBlendOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimGraphBlendOptions")),new UScriptStruct::TCppStructOps<FAnimGraphBlendOptions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimGraphBlendOptions;
	struct Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Blending options for animation graphs in Linked Animation Blueprints. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Blending options for animation graphs in Linked Animation Blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphBlendOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Time to blend this graph out using Inertialization. Specify -1.0 to defer to the BlendInTime of the next graph.\n\x09* To blend this graph out you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Time to blend this graph out using Inertialization. Specify -1.0 to defer to the BlendInTime of the next graph.\nTo blend this graph out you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Time to blend this graph in using Inertialization. Specify -1.0 to defer to the BlendOutTime of the previous graph.\n\x09* To blend this graph in you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Time to blend this graph in using Inertialization. Specify -1.0 to defer to the BlendOutTime of the previous graph.\nTo blend this graph in you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimGraphBlendOptions",
		sizeof(FAnimGraphBlendOptions),
		alignof(FAnimGraphBlendOptions),
		Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGraphBlendOptions"), sizeof(FAnimGraphBlendOptions), Get_Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Hash() { return 51037858U; }
class UScriptStruct* FGraphAssetPlayerInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation, Z_Construct_UPackage__Script_Engine(), TEXT("GraphAssetPlayerInformation"), sizeof(FGraphAssetPlayerInformation), Get_Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGraphAssetPlayerInformation>()
{
	return FGraphAssetPlayerInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGraphAssetPlayerInformation(FGraphAssetPlayerInformation::StaticStruct, TEXT("/Script/Engine"), TEXT("GraphAssetPlayerInformation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGraphAssetPlayerInformation
{
	FScriptStruct_Engine_StaticRegisterNativesFGraphAssetPlayerInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GraphAssetPlayerInformation")),new UScriptStruct::TCppStructOps<FGraphAssetPlayerInformation>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGraphAssetPlayerInformation;
	struct Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNodeIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains indices for any Asset Player nodes found for a specific Name Anim Graph (only and specifically harvested for Anim Graph Layers and Implemented Anim Layer Graphs) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Contains indices for any Asset Player nodes found for a specific Name Anim Graph (only and specifically harvested for Anim Graph Layers and Implemented Anim Layer Graphs)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphAssetPlayerInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGraphAssetPlayerInformation, PlayerNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_Inner = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GraphAssetPlayerInformation",
		sizeof(FGraphAssetPlayerInformation),
		alignof(FGraphAssetPlayerInformation),
		Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GraphAssetPlayerInformation"), sizeof(FGraphAssetPlayerInformation), Get_Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Hash() { return 1468412517U; }
class UScriptStruct* FCachedPoseIndices::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedPoseIndices, Z_Construct_UPackage__Script_Engine(), TEXT("CachedPoseIndices"), sizeof(FCachedPoseIndices), Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedPoseIndices>()
{
	return FCachedPoseIndices::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedPoseIndices(FCachedPoseIndices::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedPoseIndices"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedPoseIndices
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedPoseIndices()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedPoseIndices")),new UScriptStruct::TCppStructOps<FCachedPoseIndices>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedPoseIndices;
	struct Z_Construct_UScriptStruct_FCachedPoseIndices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseNodeIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper struct as we dont support nested containers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Wrapper struct as we dont support nested containers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedPoseIndices>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedPoseIndices, OrderedSavedPoseNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedPoseIndices",
		sizeof(FCachedPoseIndices),
		alignof(FCachedPoseIndices),
		Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedPoseIndices"), sizeof(FCachedPoseIndices), Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash() { return 2790784268U; }
class UScriptStruct* FAnimBlueprintFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunction, Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintFunction"), sizeof(FAnimBlueprintFunction), Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintFunction>()
{
	return FAnimBlueprintFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimBlueprintFunction(FAnimBlueprintFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimBlueprintFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimBlueprintFunction")),new UScriptStruct::TCppStructOps<FAnimBlueprintFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunction;
	struct Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImplemented_MetaData[];
#endif
		static void NewProp_bImplemented_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImplemented;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPoseNodeIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPoseNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputPoseNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the input and output of an anim blueprint 'function' */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Describes the input and output of an anim blueprint 'function'" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintFunction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData[] = {
		{ "Comment", "/** Whether this function is actually implemented by this class - it could just be a stub */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Whether this function is actually implemented by this class - it could just be a stub" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit(void* Obj)
	{
		((FAnimBlueprintFunction*)Obj)->bImplemented = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented = { "bImplemented", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimBlueprintFunction), &Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData[] = {
		{ "Comment", "/** Indices of the input nodes */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Indices of the input nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** The names of the input poses */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The names of the input poses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData[] = {
		{ "Comment", "/** Index of the output node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Index of the output node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex = { "OutputPoseNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, OutputPoseNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData[] = {
		{ "Comment", "/** The group of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The group of the function" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The name of the function" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimBlueprintFunction",
		sizeof(FAnimBlueprintFunction),
		alignof(FAnimBlueprintFunction),
		Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimBlueprintFunction"), sizeof(FAnimBlueprintFunction), Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash() { return 3578463658U; }
	void UAnimClassInterface::StaticRegisterNativesUAnimClassInterface()
	{
	}
	UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister()
	{
		return UAnimClassInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimClassInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimClassInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimClassInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimClassInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams = {
		&UAnimClassInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimClassInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimClassInterface, 461128641);
	template<> ENGINE_API UClass* StaticClass<UAnimClassInterface>()
	{
		return UAnimClassInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimClassInterface(Z_Construct_UClass_UAnimClassInterface, &UAnimClassInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimClassInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimClassInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
