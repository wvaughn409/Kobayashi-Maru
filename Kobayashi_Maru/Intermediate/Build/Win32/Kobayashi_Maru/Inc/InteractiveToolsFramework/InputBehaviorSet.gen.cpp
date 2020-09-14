// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InputBehaviorSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBehaviorSet() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorInfo();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FBehaviorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTERACTIVETOOLSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FBehaviorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorInfo, Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("BehaviorInfo"), sizeof(FBehaviorInfo), Get_Z_Construct_UScriptStruct_FBehaviorInfo_Hash());
	}
	return Singleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FBehaviorInfo>()
{
	return FBehaviorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBehaviorInfo(FBehaviorInfo::StaticStruct, TEXT("/Script/InteractiveToolsFramework"), TEXT("BehaviorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFBehaviorInfo
{
	FScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFBehaviorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BehaviorInfo")),new UScriptStruct::TCppStructOps<FBehaviorInfo>);
	}
} ScriptStruct_InteractiveToolsFramework_StaticRegisterNativesFBehaviorInfo;
	struct Z_Construct_UScriptStruct_FBehaviorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is an internal structure used by UInputBehaviorSet. \n */" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "This is an internal structure used by UInputBehaviorSet." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior_MetaData[] = {
		{ "Comment", "/** Reference to a Behavior */" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "Reference to a Behavior" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBehaviorInfo, Behavior), Z_Construct_UClass_UInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"BehaviorInfo",
		sizeof(FBehaviorInfo),
		alignof(FBehaviorInfo),
		Z_Construct_UScriptStruct_FBehaviorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBehaviorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InteractiveToolsFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BehaviorInfo"), sizeof(FBehaviorInfo), Get_Z_Construct_UScriptStruct_FBehaviorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBehaviorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBehaviorInfo_Hash() { return 249412443U; }
	void UInputBehaviorSet::StaticRegisterNativesUInputBehaviorSet()
	{
	}
	UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister()
	{
		return UInputBehaviorSet::StaticClass();
	}
	struct Z_Construct_UClass_UInputBehaviorSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Behaviors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Behaviors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBehaviorSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehaviorSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputBehaviorSet manages a set of UInputBehaviors, and provides various functions\n * to query and forward events to the set. Tools and Widgets provide instances of this via\n * IInputBehaviorSource, and UInputRouter collects and manages them (see comments there)\n *\n * Behaviors in the set each have a source pointer and group tag, which allows sets of\n * behaviors to be managed together. For example one UInputBehaviorSet can be merged into \n * another and removed later.\n */" },
		{ "IncludePath", "InputBehaviorSet.h" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "UInputBehaviorSet manages a set of UInputBehaviors, and provides various functions\nto query and forward events to the set. Tools and Widgets provide instances of this via\nIInputBehaviorSource, and UInputRouter collects and manages them (see comments there)\n\nBehaviors in the set each have a source pointer and group tag, which allows sets of\nbehaviors to be managed together. For example one UInputBehaviorSet can be merged into\nanother and removed later." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_MetaData[] = {
		{ "Comment", "/** Current set of known Behaviors */" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "Current set of known Behaviors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors = { "Behaviors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBehaviorSet, Behaviors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_Inner = { "Behaviors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBehaviorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputBehaviorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBehaviorSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBehaviorSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBehaviorSet_Statics::ClassParams = {
		&UInputBehaviorSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputBehaviorSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBehaviorSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBehaviorSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBehaviorSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBehaviorSet, 2066091020);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputBehaviorSet>()
	{
		return UInputBehaviorSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBehaviorSet(Z_Construct_UClass_UInputBehaviorSet, &UInputBehaviorSet::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInputBehaviorSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBehaviorSet);
	void UInputBehaviorSource::StaticRegisterNativesUInputBehaviorSource()
	{
	}
	UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister()
	{
		return UInputBehaviorSource::StaticClass();
	}
	struct Z_Construct_UClass_UInputBehaviorSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBehaviorSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehaviorSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBehaviorSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputBehaviorSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBehaviorSource_Statics::ClassParams = {
		&UInputBehaviorSource::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBehaviorSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBehaviorSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBehaviorSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBehaviorSource, 689733138);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputBehaviorSource>()
	{
		return UInputBehaviorSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBehaviorSource(Z_Construct_UClass_UInputBehaviorSource, &UInputBehaviorSource::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInputBehaviorSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBehaviorSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
