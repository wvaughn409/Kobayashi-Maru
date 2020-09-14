// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/AnimNode_WheelHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_WheelHandler() {}
// Cross Module References
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelHandler();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
// End Cross Module References
class UScriptStruct* FAnimNode_WheelHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_WheelHandler, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("AnimNode_WheelHandler"), sizeof(FAnimNode_WheelHandler), Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FAnimNode_WheelHandler>()
{
	return FAnimNode_WheelHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_WheelHandler(FAnimNode_WheelHandler::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("AnimNode_WheelHandler"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFAnimNode_WheelHandler
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFAnimNode_WheelHandler()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_WheelHandler")),new UScriptStruct::TCppStructOps<FAnimNode_WheelHandler>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFAnimNode_WheelHandler;
	struct Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_WheelHandler.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_WheelHandler>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_WheelHandler",
		sizeof(FAnimNode_WheelHandler),
		alignof(FAnimNode_WheelHandler),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_WheelHandler"), sizeof(FAnimNode_WheelHandler), Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_Hash() { return 1012414052U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
