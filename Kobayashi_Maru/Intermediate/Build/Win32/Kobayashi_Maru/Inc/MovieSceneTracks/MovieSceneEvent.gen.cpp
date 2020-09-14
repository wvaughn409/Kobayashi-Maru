// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Channels/MovieSceneEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvent() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
// End Cross Module References
class UScriptStruct* FMovieSceneEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvent, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEvent"), sizeof(FMovieSceneEvent), Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEvent>()
{
	return FMovieSceneEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvent(FMovieSceneEvent::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEvent"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEvent
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvent")),new UScriptStruct::TCppStructOps<FMovieSceneEvent>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEvent;
	struct Z_Construct_UScriptStruct_FMovieSceneEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FunctionEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakCachedEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeakCachedEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundObjectPinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoundObjectPinName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompiledFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CompiledFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayloadVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PayloadVariables;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PayloadVariables_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PayloadVariables_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ptrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ptrs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvent>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData[] = {
		{ "Comment", "/** Deprecated weak pointer to the function entry to call - no longer serialized but cached on load. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Deprecated weak pointer to the function entry to call - no longer serialized but cached on load." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry = { "FunctionEntry", nullptr, (EPropertyFlags)0x0014000820000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, FunctionEntry_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakCachedEndpoint_MetaData[] = {
		{ "Comment", "/** Non-serialized weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Non-serialized weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakCachedEndpoint = { "WeakCachedEndpoint", nullptr, (EPropertyFlags)0x0014000800002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, WeakCachedEndpoint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakCachedEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakCachedEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** When valid, relates to the The UEdGraphNode::NodeGuid for a custom event node that defines our event endpoint. When invalid, we must be bound to a UBlueprint::FunctionGraphs graph. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "When valid, relates to the The UEdGraphNode::NodeGuid for a custom event node that defines our event endpoint. When invalid, we must be bound to a UBlueprint::FunctionGraphs graph." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "Comment", "/** The UEdGraph::GraphGuid property that relates the graph within which our endpoint lives. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "The UEdGraph::GraphGuid property that relates the graph within which our endpoint lives." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName = { "BoundObjectPinName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, BoundObjectPinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName = { "CompiledFunctionName", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, CompiledFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_MetaData[] = {
		{ "Comment", "/** Array of payload variables to be added to the generated function */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Array of payload variables to be added to the generated function" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables = { "PayloadVariables", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, PayloadVariables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_Key_KeyProp = { "PayloadVariables_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_ValueProp = { "PayloadVariables", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs_MetaData[] = {
		{ "Comment", "/**\n\x09 * The function that should be called to invoke this event.\n\x09 * Functions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "The function that should be called to invoke this event.\nFunctions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs = { "Ptrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, Ptrs), Z_Construct_UScriptStruct_FMovieSceneEventPtrs, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakCachedEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEvent",
		sizeof(FMovieSceneEvent),
		alignof(FMovieSceneEvent),
		Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvent"), sizeof(FMovieSceneEvent), Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash() { return 1188711855U; }
class UScriptStruct* FMovieSceneEventPtrs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventPtrs, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventPtrs"), sizeof(FMovieSceneEventPtrs), Get_Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventPtrs>()
{
	return FMovieSceneEventPtrs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventPtrs(FMovieSceneEventPtrs::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventPtrs"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventPtrs
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventPtrs()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventPtrs")),new UScriptStruct::TCppStructOps<FMovieSceneEventPtrs>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventPtrs;
	struct Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundObjectProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_BoundObjectProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Compiled reflection pointers for the event function and parameters */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Compiled reflection pointers for the event function and parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventPtrs>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty = { "BoundObjectProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventPtrs, BoundObjectProperty), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventPtrs, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventPtrs",
		sizeof(FMovieSceneEventPtrs),
		alignof(FMovieSceneEventPtrs),
		Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventPtrs"), sizeof(FMovieSceneEventPtrs), Get_Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Hash() { return 103277322U; }
class UScriptStruct* FMovieSceneEventPayloadVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventPayloadVariable"), sizeof(FMovieSceneEventPayloadVariable), Get_Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventPayloadVariable>()
{
	return FMovieSceneEventPayloadVariable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventPayloadVariable(FMovieSceneEventPayloadVariable::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventPayloadVariable"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventPayloadVariable
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventPayloadVariable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventPayloadVariable")),new UScriptStruct::TCppStructOps<FMovieSceneEventPayloadVariable>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventPayloadVariable;
	struct Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Value definition for any type-agnostic variable (exported as text) */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Value definition for any type-agnostic variable (exported as text)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventPayloadVariable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventPayloadVariable, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventPayloadVariable",
		sizeof(FMovieSceneEventPayloadVariable),
		alignof(FMovieSceneEventPayloadVariable),
		Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventPayloadVariable"), sizeof(FMovieSceneEventPayloadVariable), Get_Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Hash() { return 2455506461U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
