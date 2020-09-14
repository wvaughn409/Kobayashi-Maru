// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/SpriteDrawCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteDrawCall() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteDrawCallRecord();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSpriteDrawCallRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteDrawCallRecord, Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteDrawCallRecord"), sizeof(FSpriteDrawCallRecord), Get_Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteDrawCallRecord>()
{
	return FSpriteDrawCallRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpriteDrawCallRecord(FSpriteDrawCallRecord::StaticStruct, TEXT("/Script/Paper2D"), TEXT("SpriteDrawCallRecord"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFSpriteDrawCallRecord
{
	FScriptStruct_Paper2D_StaticRegisterNativesFSpriteDrawCallRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpriteDrawCallRecord")),new UScriptStruct::TCppStructOps<FSpriteDrawCallRecord>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFSpriteDrawCallRecord;
	struct Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteDrawCallRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteDrawCallRecord, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture = { "BaseTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteDrawCallRecord, BaseTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SpriteDrawCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpriteDrawCallRecord, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_BaseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewProp_Destination,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteDrawCallRecord",
		sizeof(FSpriteDrawCallRecord),
		alignof(FSpriteDrawCallRecord),
		Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteDrawCallRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpriteDrawCallRecord"), sizeof(FSpriteDrawCallRecord), Get_Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Hash() { return 413442123U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
