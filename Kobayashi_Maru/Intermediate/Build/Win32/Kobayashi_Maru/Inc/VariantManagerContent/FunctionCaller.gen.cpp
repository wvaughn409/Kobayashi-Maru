// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/FunctionCaller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionCaller() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionCaller();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FFunctionCaller::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VARIANTMANAGERCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FFunctionCaller_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionCaller, Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("FunctionCaller"), sizeof(FFunctionCaller), Get_Z_Construct_UScriptStruct_FFunctionCaller_Hash());
	}
	return Singleton;
}
template<> VARIANTMANAGERCONTENT_API UScriptStruct* StaticStruct<FFunctionCaller>()
{
	return FFunctionCaller::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionCaller(FFunctionCaller::StaticStruct, TEXT("/Script/VariantManagerContent"), TEXT("FunctionCaller"), false, nullptr, nullptr);
static struct FScriptStruct_VariantManagerContent_StaticRegisterNativesFFunctionCaller
{
	FScriptStruct_VariantManagerContent_StaticRegisterNativesFFunctionCaller()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionCaller")),new UScriptStruct::TCppStructOps<FFunctionCaller>);
	}
} ScriptStruct_VariantManagerContent_StaticRegisterNativesFFunctionCaller;
	struct Z_Construct_UScriptStruct_FFunctionCaller_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DisplayOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FunctionEntry;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionCaller>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionCaller, DisplayOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry_MetaData[] = {
		{ "Comment", "/** Weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor. */" },
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
		{ "ToolTip", "Weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry = { "FunctionEntry", nullptr, (EPropertyFlags)0x0044000800000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionCaller, FunctionEntry), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The function that should be called to invoke this event.\n\x09 * Functions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
		{ "ToolTip", "The function that should be called to invoke this event.\nFunctions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionCaller, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionCaller_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
		nullptr,
		&NewStructOps,
		"FunctionCaller",
		sizeof(FFunctionCaller),
		alignof(FFunctionCaller),
		Z_Construct_UScriptStruct_FFunctionCaller_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionCaller()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionCaller_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VariantManagerContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionCaller"), sizeof(FFunctionCaller), Get_Z_Construct_UScriptStruct_FFunctionCaller_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFunctionCaller_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionCaller_Hash() { return 1265134731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
