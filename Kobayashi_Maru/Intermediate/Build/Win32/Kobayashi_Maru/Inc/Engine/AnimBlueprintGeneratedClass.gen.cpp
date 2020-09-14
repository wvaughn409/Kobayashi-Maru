// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineStateDebugData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimBlueprintDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintDebugData"), sizeof(FAnimBlueprintDebugData), Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintDebugData>()
{
	return FAnimBlueprintDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimBlueprintDebugData(FAnimBlueprintDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimBlueprintDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimBlueprintDebugData")),new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData;
	struct Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents animation-related debugging information for an entire AnimBlueprint\n// (general debug information for the event graph, etc... is still contained in a FBlueprintDebugData structure)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents animation-related debugging information for an entire AnimBlueprint\n(general debug information for the event graph, etc... is still contained in a FBlueprintDebugData structure)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimBlueprintDebugData",
		sizeof(FAnimBlueprintDebugData),
		alignof(FAnimBlueprintDebugData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimBlueprintDebugData"), sizeof(FAnimBlueprintDebugData), Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Hash() { return 2371254621U; }
class UScriptStruct* FAnimationFrameSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationFrameSnapshot, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationFrameSnapshot"), sizeof(FAnimationFrameSnapshot), Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationFrameSnapshot>()
{
	return FAnimationFrameSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationFrameSnapshot(FAnimationFrameSnapshot::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationFrameSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationFrameSnapshot")),new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot;
	struct Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents debugging information for a frame snapshot\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents debugging information for a frame snapshot" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationFrameSnapshot",
		sizeof(FAnimationFrameSnapshot),
		alignof(FAnimationFrameSnapshot),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationFrameSnapshot"), sizeof(FAnimationFrameSnapshot), Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Hash() { return 3762235180U; }
class UScriptStruct* FStateMachineDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("StateMachineDebugData"), sizeof(FStateMachineDebugData), Get_Z_Construct_UScriptStruct_FStateMachineDebugData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStateMachineDebugData>()
{
	return FStateMachineDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateMachineDebugData(FStateMachineDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("StateMachineDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateMachineDebugData")),new UScriptStruct::TCppStructOps<FStateMachineDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData;
	struct Z_Construct_UScriptStruct_FStateMachineDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents debugging information for a single state machine\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents debugging information for a single state machine" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StateMachineDebugData",
		sizeof(FStateMachineDebugData),
		alignof(FStateMachineDebugData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineDebugData"), sizeof(FStateMachineDebugData), Get_Z_Construct_UScriptStruct_FStateMachineDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_Hash() { return 3196488283U; }
class UScriptStruct* FStateMachineStateDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStateMachineStateDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineStateDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("StateMachineStateDebugData"), sizeof(FStateMachineStateDebugData), Get_Z_Construct_UScriptStruct_FStateMachineStateDebugData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStateMachineStateDebugData>()
{
	return FStateMachineStateDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateMachineStateDebugData(FStateMachineStateDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("StateMachineStateDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStateMachineStateDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFStateMachineStateDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateMachineStateDebugData")),new UScriptStruct::TCppStructOps<FStateMachineStateDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStateMachineStateDebugData;
	struct Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Represents the debugging information for a single state within a state machine\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Represents the debugging information for a single state within a state machine" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineStateDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StateMachineStateDebugData",
		sizeof(FStateMachineStateDebugData),
		alignof(FStateMachineStateDebugData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineStateDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineStateDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineStateDebugData"), sizeof(FStateMachineStateDebugData), Get_Z_Construct_UScriptStruct_FStateMachineStateDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineStateDebugData_Hash() { return 3898249667U; }
	void UAnimBlueprintGeneratedClass::StaticRegisterNativesUAnimBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister()
	{
		return UAnimBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphAssetPlayerInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GraphAssetPlayerInformation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GraphAssetPlayerInformation_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphAssetPlayerInformation_ValueProp;
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
	UObject* (*const Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_MetaData[] = {
		{ "Comment", "// Per layer graph blending options\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Per layer graph blending options" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions = { "GraphBlendOptions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, GraphBlendOptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_Key_KeyProp = { "GraphBlendOptions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_ValueProp = { "GraphBlendOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAnimGraphBlendOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_MetaData[] = {
		{ "Comment", "// Indices for any Asset Player found within a specific (named) Anim Layer Graph, or implemented Anim Interface Graph\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Indices for any Asset Player found within a specific (named) Anim Layer Graph, or implemented Anim Interface Graph" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation = { "GraphAssetPlayerInformation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, GraphAssetPlayerInformation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_Key_KeyProp = { "GraphAssetPlayerInformation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_ValueProp = { "GraphAssetPlayerInformation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_MetaData[] = {
		{ "Comment", "// The default handler for graph-exposed inputs\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "The default handler for graph-exposed inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, EvaluateGraphExposedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_Inner = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExposedValueHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_MetaData[] = {
		{ "Comment", "// Array of sync group names in the order that they are requested during compile\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of sync group names in the order that they are requested during compile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames = { "SyncGroupNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, SyncGroupNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_Inner = { "SyncGroupNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_MetaData[] = {
		{ "Comment", "// Indices for each of the saved pose nodes that require updating, in the order they need to get updates, per layer\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Indices for each of the saved pose nodes that require updating, in the order they need to get updates, per layer" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap = { "OrderedSavedPoseIndicesMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, OrderedSavedPoseIndicesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp = { "OrderedSavedPoseIndicesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_ValueProp = { "OrderedSavedPoseIndicesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCachedPoseIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "Comment", "/** A list of anim notifies that state machines (or anything else) may reference */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "A list of anim notifies that state machines (or anything else) may reference" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies = { "AnimNotifies", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, AnimNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_Inner = { "AnimNotifies", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Comment", "/** Target skeleton for this blueprint class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Target skeleton for this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_MetaData[] = {
		{ "Comment", "// List of state machines present in this blueprint class\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "List of state machines present in this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines = { "BakedStateMachines", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, BakedStateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_Inner = { "BakedStateMachines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBakedAnimationStateMachine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimClassInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprintGeneratedClass, IAnimClassInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintGeneratedClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams = {
		&UAnimBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBlueprintGeneratedClass, 2150268391);
	template<> ENGINE_API UClass* StaticClass<UAnimBlueprintGeneratedClass>()
	{
		return UAnimBlueprintGeneratedClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBlueprintGeneratedClass(Z_Construct_UClass_UAnimBlueprintGeneratedClass, &UAnimBlueprintGeneratedClass::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintGeneratedClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprintGeneratedClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
