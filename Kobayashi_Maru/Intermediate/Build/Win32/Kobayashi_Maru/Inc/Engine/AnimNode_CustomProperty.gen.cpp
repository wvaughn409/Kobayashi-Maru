// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_CustomProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CustomProperty() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_CustomProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CustomProperty, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_CustomProperty"), sizeof(FAnimNode_CustomProperty), Get_Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_CustomProperty>()
{
	return FAnimNode_CustomProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CustomProperty(FAnimNode_CustomProperty::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_CustomProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_CustomProperty
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_CustomProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CustomProperty")),new UScriptStruct::TCppStructOps<FAnimNode_CustomProperty>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_CustomProperty;
	struct Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPropertyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestPropertyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DestPropertyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourcePropertyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourcePropertyNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Custom property node that you'd like to expand pin by reflecting internal instance (we call TargetInstance here)\n * \n *  Used by sub anim instance or control rig node \n *\x09where you have internal instance and would like to reflect to AnimNode as a pin\n * \n *  To make pin working, you need storage inside of AnimInstance (SourceProperties/SourcePropertyNames)\n *  So this creates storage inside of AnimInstance with the unique custom property name\n *\x09""and it copies to the actually TargetInstance here to allow the information be transferred in runtime (DestProperties/DestPropertyNames)\n * \n *  TargetInstance - UObject derived instance that has certain dest properties\n *  Source - AnimInstance's copy properties that is used to store the data \n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "Custom property node that you'd like to expand pin by reflecting internal instance (we call TargetInstance here)\n\n Used by sub anim instance or control rig node\n    where you have internal instance and would like to reflect to AnimNode as a pin\n\n To make pin working, you need storage inside of AnimInstance (SourceProperties/SourcePropertyNames)\n So this creates storage inside of AnimInstance with the unique custom property name\n    and it copies to the actually TargetInstance here to allow the information be transferred in runtime (DestProperties/DestPropertyNames)\n\n TargetInstance - UObject derived instance that has certain dest properties\n Source - AnimInstance's copy properties that is used to store the data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CustomProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance_MetaData[] = {
		{ "Comment", "/** This is the actual instance allocated at runtime that will run. Set by child class. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "This is the actual instance allocated at runtime that will run. Set by child class." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance = { "TargetInstance", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, TargetInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_MetaData[] = {
		{ "Comment", "/** List of destination properties to use, 1-1 with Source names above, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "List of destination properties to use, 1-1 with Source names above, built by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames = { "DestPropertyNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, DestPropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_Inner = { "DestPropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_MetaData[] = {
		{ "Comment", "/** List of source properties to use, 1-1 with Dest names below, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "List of source properties to use, 1-1 with Dest names below, built by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames = { "SourcePropertyNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, SourcePropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_Inner = { "SourcePropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_CustomProperty",
		sizeof(FAnimNode_CustomProperty),
		alignof(FAnimNode_CustomProperty),
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CustomProperty"), sizeof(FAnimNode_CustomProperty), Get_Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Hash() { return 2579073552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
