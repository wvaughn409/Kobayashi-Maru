// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/IntMargin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntMargin() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FIntMargin();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
class UScriptStruct* FIntMargin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FIntMargin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntMargin, Z_Construct_UPackage__Script_Paper2D(), TEXT("IntMargin"), sizeof(FIntMargin), Get_Z_Construct_UScriptStruct_FIntMargin_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FIntMargin>()
{
	return FIntMargin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntMargin(FIntMargin::StaticStruct, TEXT("/Script/Paper2D"), TEXT("IntMargin"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFIntMargin
{
	FScriptStruct_Paper2D_StaticRegisterNativesFIntMargin()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IntMargin")),new UScriptStruct::TCppStructOps<FIntMargin>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFIntMargin;
	struct Z_Construct_UScriptStruct_FIntMargin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the space around a 2D area on an integer grid.\n */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Describes the space around a 2D area on an integer grid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntMargin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntMargin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the bottom. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the bottom." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntMargin, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the right. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the right." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntMargin, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the top. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the top." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntMargin, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the left. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the left." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntMargin, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntMargin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"IntMargin",
		sizeof(FIntMargin),
		alignof(FIntMargin),
		Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntMargin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntMargin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntMargin"), sizeof(FIntMargin), Get_Z_Construct_UScriptStruct_FIntMargin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIntMargin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntMargin_Hash() { return 3209253287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
