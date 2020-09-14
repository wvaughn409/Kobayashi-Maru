// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/UserWidgetPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetPool() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FUserWidgetPool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FUserWidgetPool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserWidgetPool, Z_Construct_UPackage__Script_UMG(), TEXT("UserWidgetPool"), sizeof(FUserWidgetPool), Get_Z_Construct_UScriptStruct_FUserWidgetPool_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FUserWidgetPool>()
{
	return FUserWidgetPool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserWidgetPool(FUserWidgetPool::StaticStruct, TEXT("/Script/UMG"), TEXT("UserWidgetPool"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFUserWidgetPool
{
	FScriptStruct_UMG_StaticRegisterNativesFUserWidgetPool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserWidgetPool")),new UScriptStruct::TCppStructOps<FUserWidgetPool>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFUserWidgetPool;
	struct Z_Construct_UScriptStruct_FUserWidgetPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InactiveWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveWidgets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.\n *\n * Note that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget\n * instances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).\n *\n * WARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references\n *\x09\x09Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive\n *\n * @see UListView\n * @see UDynamicEntryBox\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
		{ "ToolTip", "Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.\n\nNote that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget\ninstances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).\n\nWARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references\n            Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive\n\n@see UListView\n@see UDynamicEntryBox" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserWidgetPool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets = { "InactiveWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserWidgetPool, InactiveWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_Inner = { "InactiveWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets = { "ActiveWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserWidgetPool, ActiveWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_Inner = { "ActiveWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"UserWidgetPool",
		sizeof(FUserWidgetPool),
		alignof(FUserWidgetPool),
		Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserWidgetPool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserWidgetPool"), sizeof(FUserWidgetPool), Get_Z_Construct_UScriptStruct_FUserWidgetPool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserWidgetPool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserWidgetPool_Hash() { return 108717705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
