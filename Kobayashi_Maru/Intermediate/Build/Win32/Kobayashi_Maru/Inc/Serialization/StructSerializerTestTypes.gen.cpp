// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/Private/Tests/StructSerializerTestTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructSerializerTestTypes() {}
// Cross Module References
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
	UPackage* Z_Construct_UPackage__Script_Serialization();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerSetTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerByteArray();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerTestStruct>()
{
	return FStructSerializerTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerTestStruct(FStructSerializerTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrays_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arrays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Builtins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Builtins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Booleans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Booleans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Numerics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Numerics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for all supported types.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for all supported types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets = { "Sets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Sets), Z_Construct_UScriptStruct_FStructSerializerSetTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Maps), Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays = { "Arrays", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Arrays), Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins = { "Builtins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Builtins), Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Objects), Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans = { "Booleans", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Booleans), Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics = { "Numerics", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Numerics), Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerTestStruct",
		sizeof(FStructSerializerTestStruct),
		alignof(FStructSerializerTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash() { return 2669537730U; }
class UScriptStruct* FStructSerializerSetTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerSetTestStruct"), sizeof(FStructSerializerSetTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerSetTestStruct>()
{
	return FStructSerializerSetTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerSetTestStruct(FStructSerializerSetTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerSetTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerSetTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerSetTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerSetTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerSetTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerSetTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_StructSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_NameSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IntSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_StrSet;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrSet_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for set properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for set properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerSetTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet = { "StructSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerSetTestStruct, StructSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_ElementProp = { "StructSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet = { "NameSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerSetTestStruct, NameSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_ElementProp = { "NameSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet = { "IntSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerSetTestStruct, IntSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_ElementProp = { "IntSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet = { "StrSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerSetTestStruct, StrSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_ElementProp = { "StrSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_ElementProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerSetTestStruct",
		sizeof(FStructSerializerSetTestStruct),
		alignof(FStructSerializerSetTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerSetTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerSetTestStruct"), sizeof(FStructSerializerSetTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Hash() { return 420567630U; }
class UScriptStruct* FStructSerializerMapTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerMapTestStruct>()
{
	return FStructSerializerMapTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerMapTestStruct(FStructSerializerMapTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerMapTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerMapTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToStruct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStruct_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrToStruct_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToVec;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToVec_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrToVec_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStr_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStr_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntToStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IntToStr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntToStr_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IntToStr_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for map properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for map properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct = { "StrToStruct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToStruct), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_Key_KeyProp = { "StrToStruct_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_ValueProp = { "StrToStruct", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec = { "StrToVec", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToVec), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp = { "StrToVec_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp = { "StrToVec", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr = { "StrToStr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToStr), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp = { "StrToStr_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp = { "StrToStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr = { "IntToStr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, IntToStr), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp = { "IntToStr_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp = { "IntToStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerMapTestStruct",
		sizeof(FStructSerializerMapTestStruct),
		alignof(FStructSerializerMapTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash() { return 2550212001U; }
class UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerArrayTestStruct>()
{
	return FStructSerializerArrayTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerArrayTestStruct(FStructSerializerArrayTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerArrayTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerArrayTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StructArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticFloatArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticFloatArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticInt32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticInt32Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSingleElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticSingleElement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for array properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for array properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray = { "StructArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StructArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_Inner = { "StructArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerArrayTestStruct, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray = { "StaticFloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticFloatArray, FStructSerializerArrayTestStruct), STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticFloatArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array = { "StaticInt32Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticInt32Array, FStructSerializerArrayTestStruct), STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticInt32Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement = { "StaticSingleElement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticSingleElement, FStructSerializerArrayTestStruct), STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticSingleElement), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerArrayTestStruct, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerArrayTestStruct, Int32Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerArrayTestStruct",
		sizeof(FStructSerializerArrayTestStruct),
		alignof(FStructSerializerArrayTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash() { return 2543135629U; }
class UScriptStruct* FStructSerializerByteArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerByteArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerByteArray"), sizeof(FStructSerializerByteArray), Get_Z_Construct_UScriptStruct_FStructSerializerByteArray_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerByteArray>()
{
	return FStructSerializerByteArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerByteArray(FStructSerializerByteArray::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerByteArray"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerByteArray
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerByteArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerByteArray")),new UScriptStruct::TCppStructOps<FStructSerializerByteArray>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerByteArray;
	struct Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dummy3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dummy3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int8Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int8Array;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Int8Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dummy2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dummy2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dummy1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dummy1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for byte array properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for byte array properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerByteArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3 = { "Dummy3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerByteArray, Dummy3), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_MetaData[] = {
		{ "Comment", "// To test 'skip array'.\n" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "To test 'skip array'." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array = { "Int8Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerByteArray, Int8Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_Inner = { "Int8Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2 = { "Dummy2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerByteArray, Dummy2), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_MetaData[] = {
		{ "Comment", "// To test 'skip array'.\n" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "To test 'skip array'." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerByteArray, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1 = { "Dummy1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerByteArray, Dummy1), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerByteArray",
		sizeof(FStructSerializerByteArray),
		alignof(FStructSerializerByteArray),
		Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerByteArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerByteArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerByteArray"), sizeof(FStructSerializerByteArray), Get_Z_Construct_UScriptStruct_FStructSerializerByteArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerByteArray_Hash() { return 3115159578U; }
class UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerBuiltinTestStruct>()
{
	return FStructSerializerBuiltinTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBuiltinTestStruct(FStructSerializerBuiltinTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBuiltinTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBuiltinTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for properties of various built-in types.\n * @see NoExportTypes.h\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for properties of various built-in types.\n@see NoExportTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Vector4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//FTimespan Timespan;\n" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "UPROPERTY()\nFTimespan Timespan;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBuiltinTestStruct",
		sizeof(FStructSerializerBuiltinTestStruct),
		alignof(FStructSerializerBuiltinTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash() { return 1675439909U; }
class UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerObjectTestStruct>()
{
	return FStructSerializerObjectTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerObjectTestStruct(FStructSerializerObjectTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerObjectTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerObjectTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SoftClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for UObject properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for UObject properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, ClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject = { "SoftObject", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, SoftObject), Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject = { "WeakObject", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, WeakObject), Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass = { "SoftClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, SoftClass), Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass = { "SubClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, SubClass), Z_Construct_UClass_UMetaData, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerObjectTestStruct",
		sizeof(FStructSerializerObjectTestStruct),
		alignof(FStructSerializerObjectTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash() { return 140180141U; }
class UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerBooleanTestStruct>()
{
	return FStructSerializerBooleanTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBooleanTestStruct(FStructSerializerBooleanTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBooleanTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBooleanTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield7Set_MetaData[];
#endif
		static void NewProp_Bitfield7Set_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield7Set;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield6_MetaData[];
#endif
		static void NewProp_Bitfield6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield5Set_MetaData[];
#endif
		static void NewProp_Bitfield5Set_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield5Set;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield4Set_MetaData[];
#endif
		static void NewProp_Bitfield4Set_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield4Set;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield3_MetaData[];
#endif
		static void NewProp_Bitfield3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield2Set_MetaData[];
#endif
		static void NewProp_Bitfield2Set_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield2Set;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield1_MetaData[];
#endif
		static void NewProp_Bitfield1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield0_MetaData[];
#endif
		static void NewProp_Bitfield0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bitfield0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolTrue_MetaData[];
#endif
		static void NewProp_BoolTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolTrue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolFalse_MetaData[];
#endif
		static void NewProp_BoolFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolFalse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for boolean properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for boolean properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield7Set = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set = { "Bitfield7Set", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6 = { "Bitfield6", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield5Set = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set = { "Bitfield5Set", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield4Set = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set = { "Bitfield4Set", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3 = { "Bitfield3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield2Set = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set = { "Bitfield2Set", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1 = { "Bitfield1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0 = { "Bitfield0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue = { "BoolTrue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse = { "BoolFalse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBooleanTestStruct",
		sizeof(FStructSerializerBooleanTestStruct),
		alignof(FStructSerializerBooleanTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash() { return 2607184190U; }
class UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerNumericTestStruct>()
{
	return FStructSerializerNumericTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerNumericTestStruct(FStructSerializerNumericTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerNumericTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerNumericTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Double;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt64_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_UInt64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt32_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UInt32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt16_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UInt16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt8_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UInt8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int16_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Int16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int8_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Int8;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for numeric properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for numeric properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Double), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64 = { "UInt64", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32 = { "UInt32", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16 = { "UInt16", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8 = { "UInt8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt8), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16 = { "Int16", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8 = { "Int8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int8), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerNumericTestStruct",
		sizeof(FStructSerializerNumericTestStruct),
		alignof(FStructSerializerNumericTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash() { return 1502368702U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
