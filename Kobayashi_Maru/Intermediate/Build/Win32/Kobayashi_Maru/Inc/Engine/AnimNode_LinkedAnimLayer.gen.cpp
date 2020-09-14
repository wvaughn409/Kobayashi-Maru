// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_LinkedAnimLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimLayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_LinkedAnimLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedAnimLayer"), sizeof(FAnimNode_LinkedAnimLayer), Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedAnimLayer>()
{
	return FAnimNode_LinkedAnimLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LinkedAnimLayer(FAnimNode_LinkedAnimLayer::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_LinkedAnimLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedAnimLayer
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedAnimLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LinkedAnimLayer")),new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimLayer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_LinkedAnimLayer;
	struct Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Interface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The layer in the interface to use */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
		{ "ToolTip", "The layer in the interface to use" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimLayer, Layer), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface_MetaData[] = {
		{ "Comment", "/** \n\x09 * Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface.\n\x09 * If not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
		{ "ToolTip", "Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface.\nIf not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimLayer, Interface), Z_Construct_UClass_UAnimLayerInterface_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,
		&NewStructOps,
		"AnimNode_LinkedAnimLayer",
		sizeof(FAnimNode_LinkedAnimLayer),
		alignof(FAnimNode_LinkedAnimLayer),
		Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LinkedAnimLayer"), sizeof(FAnimNode_LinkedAnimLayer), Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Hash() { return 2604640439U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
