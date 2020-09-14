// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/NetSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSerialization() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFastArraySerializerDeltaFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
// End Cross Module References
	static UEnum* EFastArraySerializerDeltaFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFastArraySerializerDeltaFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EFastArraySerializerDeltaFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFastArraySerializerDeltaFlags>()
	{
		return EFastArraySerializerDeltaFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFastArraySerializerDeltaFlags(EFastArraySerializerDeltaFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EFastArraySerializerDeltaFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFastArraySerializerDeltaFlags_Hash() { return 4100166706U; }
	UEnum* Z_Construct_UEnum_Engine_EFastArraySerializerDeltaFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFastArraySerializerDeltaFlags"), 0, Get_Z_Construct_UEnum_Engine_EFastArraySerializerDeltaFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFastArraySerializerDeltaFlags::None", (int64)EFastArraySerializerDeltaFlags::None },
				{ "EFastArraySerializerDeltaFlags::HasBeenSerialized", (int64)EFastArraySerializerDeltaFlags::HasBeenSerialized },
				{ "EFastArraySerializerDeltaFlags::HasDeltaBeenRequested", (int64)EFastArraySerializerDeltaFlags::HasDeltaBeenRequested },
				{ "EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization", (int64)EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HasBeenSerialized.Comment", "//! No flags.\n" },
				{ "HasBeenSerialized.Name", "EFastArraySerializerDeltaFlags::HasBeenSerialized" },
				{ "HasBeenSerialized.ToolTip", "! No flags." },
				{ "HasDeltaBeenRequested.Comment", "//! Set when serialization at least once (i.e., this struct has been written or read).\n" },
				{ "HasDeltaBeenRequested.Name", "EFastArraySerializerDeltaFlags::HasDeltaBeenRequested" },
				{ "HasDeltaBeenRequested.ToolTip", "! Set when serialization at least once (i.e., this struct has been written or read)." },
				{ "IsUsingDeltaSerialization.Comment", "//! Set if users requested Delta Serialization for this struct.\n" },
				{ "IsUsingDeltaSerialization.Name", "EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization" },
				{ "IsUsingDeltaSerialization.ToolTip", "! Set if users requested Delta Serialization for this struct." },
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "None.Name", "EFastArraySerializerDeltaFlags::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EFastArraySerializerDeltaFlags",
				"EFastArraySerializerDeltaFlags",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVector_NetQuantizeNormal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantizeNormal"), sizeof(FVector_NetQuantizeNormal), Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantizeNormal>()
{
	return FVector_NetQuantizeNormal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantizeNormal(FVector_NetQuantizeNormal::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantizeNormal"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantizeNormal
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantizeNormal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantizeNormal")),new UScriptStruct::TCppStructOps<FVector_NetQuantizeNormal>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantizeNormal;
	struct Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantizeNormal\n *\n *\x09""16 bits per component\n *\x09Valid range: -1..+1 inclusive\n */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantizeNormal\n\n16 bits per component\nValid range: -1..+1 inclusive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantizeNormal>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantizeNormal",
		sizeof(FVector_NetQuantizeNormal),
		alignof(FVector_NetQuantizeNormal),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantizeNormal"), sizeof(FVector_NetQuantizeNormal), Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Hash() { return 2787788514U; }
class UScriptStruct* FVector_NetQuantize100::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize100, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize100"), sizeof(FVector_NetQuantize100), Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantize100>()
{
	return FVector_NetQuantize100::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantize100(FVector_NetQuantize100::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantize100"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize100
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize100()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantize100")),new UScriptStruct::TCppStructOps<FVector_NetQuantize100>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize100;
	struct Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantize100\n *\n *\x09""2 decimal place of precision.\n *\x09Up to 30 bits per component.\n *\x09Valid range: 2^30 / 100 = +/- 10,737,418.24\n *\n */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantize100\n\n2 decimal place of precision.\nUp to 30 bits per component.\nValid range: 2^30 / 100 = +/- 10,737,418.24" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize100>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantize100",
		sizeof(FVector_NetQuantize100),
		alignof(FVector_NetQuantize100),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantize100"), sizeof(FVector_NetQuantize100), Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_Hash() { return 1911150944U; }
class UScriptStruct* FVector_NetQuantize10::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize10, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize10"), sizeof(FVector_NetQuantize10), Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantize10>()
{
	return FVector_NetQuantize10::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantize10(FVector_NetQuantize10::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantize10"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize10
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize10()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantize10")),new UScriptStruct::TCppStructOps<FVector_NetQuantize10>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize10;
	struct Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantize10\n *\n *\x09""1 decimal place of precision.\n *\x09Up to 24 bits per component.\n *\x09Valid range: 2^24 / 10 = +/- 1,677,721.6\n *\n */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantize10\n\n1 decimal place of precision.\nUp to 24 bits per component.\nValid range: 2^24 / 10 = +/- 1,677,721.6" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize10>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantize10",
		sizeof(FVector_NetQuantize10),
		alignof(FVector_NetQuantize10),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantize10"), sizeof(FVector_NetQuantize10), Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_Hash() { return 1392849847U; }
class UScriptStruct* FVector_NetQuantize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize"), sizeof(FVector_NetQuantize), Get_Z_Construct_UScriptStruct_FVector_NetQuantize_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantize>()
{
	return FVector_NetQuantize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantize(FVector_NetQuantize::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantize"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantize")),new UScriptStruct::TCppStructOps<FVector_NetQuantize>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize;
	struct Z_Construct_UScriptStruct_FVector_NetQuantize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantize\n *\n *\x09""0 decimal place of precision.\n *\x09Up to 20 bits per component.\n *\x09Valid range: 2^20 = +/- 1,048,576\n *\n *\x09Note: this is the historical UE format for vector net serialization\n *\n */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantize\n\n0 decimal place of precision.\nUp to 20 bits per component.\nValid range: 2^20 = +/- 1,048,576\n\nNote: this is the historical UE format for vector net serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantize",
		sizeof(FVector_NetQuantize),
		alignof(FVector_NetQuantize),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantize"), sizeof(FVector_NetQuantize), Get_Z_Construct_UScriptStruct_FVector_NetQuantize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize_Hash() { return 3603629143U; }
class UScriptStruct* FFastArraySerializer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializer, Z_Construct_UPackage__Script_Engine(), TEXT("FastArraySerializer"), sizeof(FFastArraySerializer), Get_Z_Construct_UScriptStruct_FFastArraySerializer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFastArraySerializer>()
{
	return FFastArraySerializer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFastArraySerializer(FFastArraySerializer::StaticStruct, TEXT("/Script/Engine"), TEXT("FastArraySerializer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializer
{
	FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FastArraySerializer")),new UScriptStruct::TCppStructOps<FFastArraySerializer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFastArraySerializer;
	struct Z_Construct_UScriptStruct_FFastArraySerializer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeltaFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeltaFlags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayReplicationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for wrapping the array used in Fast TArray Replication */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "Base struct for wrapping the array used in Fast TArray Replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastArraySerializer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags = { "DeltaFlags", nullptr, (EPropertyFlags)0x0040000080002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFastArraySerializer, DeltaFlags), Z_Construct_UEnum_Engine_EFastArraySerializerDeltaFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey_MetaData[] = {
		{ "Comment", "/** Counter used to track array replication. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "Counter used to track array replication." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey = { "ArrayReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFastArraySerializer, ArrayReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFastArraySerializer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FastArraySerializer",
		sizeof(FFastArraySerializer),
		alignof(FFastArraySerializer),
		Z_Construct_UScriptStruct_FFastArraySerializer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FastArraySerializer"), sizeof(FFastArraySerializer), Get_Z_Construct_UScriptStruct_FFastArraySerializer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFastArraySerializer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializer_Hash() { return 875646125U; }
class UScriptStruct* FFastArraySerializerItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializerItem, Z_Construct_UPackage__Script_Engine(), TEXT("FastArraySerializerItem"), sizeof(FFastArraySerializerItem), Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFastArraySerializerItem>()
{
	return FFastArraySerializerItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFastArraySerializerItem(FFastArraySerializerItem::StaticStruct, TEXT("/Script/Engine"), TEXT("FastArraySerializerItem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializerItem
{
	FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializerItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FastArraySerializerItem")),new UScriptStruct::TCppStructOps<FFastArraySerializerItem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFastArraySerializerItem;
	struct Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MostRecentArrayReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MostRecentArrayReplicationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for items using Fast TArray Replication */" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "Base struct for items using Fast TArray Replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastArraySerializerItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey = { "MostRecentArrayReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFastArraySerializerItem, MostRecentArrayReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey = { "ReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFastArraySerializerItem, ReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID = { "ReplicationID", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFastArraySerializerItem, ReplicationID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FastArraySerializerItem",
		sizeof(FFastArraySerializerItem),
		alignof(FFastArraySerializerItem),
		Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FastArraySerializerItem"), sizeof(FFastArraySerializerItem), Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_Hash() { return 3877398904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
