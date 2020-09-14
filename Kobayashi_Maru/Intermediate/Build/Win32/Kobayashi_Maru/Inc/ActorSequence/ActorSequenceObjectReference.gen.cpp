// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence/Public/ActorSequenceObjectReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequenceObjectReference() {}
// Cross Module References
	ACTORSEQUENCE_API UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference();
// End Cross Module References
	static UEnum* EActorSequenceObjectReferenceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType, Z_Construct_UPackage__Script_ActorSequence(), TEXT("EActorSequenceObjectReferenceType"));
		}
		return Singleton;
	}
	template<> ACTORSEQUENCE_API UEnum* StaticEnum<EActorSequenceObjectReferenceType>()
	{
		return EActorSequenceObjectReferenceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorSequenceObjectReferenceType(EActorSequenceObjectReferenceType_StaticEnum, TEXT("/Script/ActorSequence"), TEXT("EActorSequenceObjectReferenceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Hash() { return 736169874U; }
	UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorSequenceObjectReferenceType"), 0, Get_Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActorSequenceObjectReferenceType::ContextActor", (int64)EActorSequenceObjectReferenceType::ContextActor },
				{ "EActorSequenceObjectReferenceType::ExternalActor", (int64)EActorSequenceObjectReferenceType::ExternalActor },
				{ "EActorSequenceObjectReferenceType::Component", (int64)EActorSequenceObjectReferenceType::Component },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Component.Comment", "/** The reference relates to a component */" },
				{ "Component.Name", "EActorSequenceObjectReferenceType::Component" },
				{ "Component.ToolTip", "The reference relates to a component" },
				{ "ContextActor.Comment", "/** The reference relates to the context actor */" },
				{ "ContextActor.Name", "EActorSequenceObjectReferenceType::ContextActor" },
				{ "ContextActor.ToolTip", "The reference relates to the context actor" },
				{ "ExternalActor.Comment", "/** The reference relates to an actor outside of the context actor actor */" },
				{ "ExternalActor.Name", "EActorSequenceObjectReferenceType::ExternalActor" },
				{ "ExternalActor.ToolTip", "The reference relates to an actor outside of the context actor actor" },
				{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActorSequence,
				nullptr,
				"EActorSequenceObjectReferenceType",
				"EActorSequenceObjectReferenceType",
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
class UScriptStruct* FActorSequenceObjectReferenceMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap, Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReferenceMap"), sizeof(FActorSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Hash());
	}
	return Singleton;
}
template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<FActorSequenceObjectReferenceMap>()
{
	return FActorSequenceObjectReferenceMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSequenceObjectReferenceMap(FActorSequenceObjectReferenceMap::StaticStruct, TEXT("/Script/ActorSequence"), TEXT("ActorSequenceObjectReferenceMap"), false, nullptr, nullptr);
static struct FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap
{
	FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSequenceObjectReferenceMap")),new UScriptStruct::TCppStructOps<FActorSequenceObjectReferenceMap>);
	}
} ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap;
	struct Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_References;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_References_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BindingIds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSequenceObjectReferenceMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSequenceObjectReferenceMap, References), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_Inner = { "References", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorSequenceObjectReferences, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds = { "BindingIds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSequenceObjectReferenceMap, BindingIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_Inner = { "BindingIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		&NewStructOps,
		"ActorSequenceObjectReferenceMap",
		sizeof(FActorSequenceObjectReferenceMap),
		alignof(FActorSequenceObjectReferenceMap),
		Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSequenceObjectReferenceMap"), sizeof(FActorSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Hash() { return 3117901073U; }
class UScriptStruct* FActorSequenceObjectReferences::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferences, Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReferences"), sizeof(FActorSequenceObjectReferences), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Hash());
	}
	return Singleton;
}
template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<FActorSequenceObjectReferences>()
{
	return FActorSequenceObjectReferences::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSequenceObjectReferences(FActorSequenceObjectReferences::StaticStruct, TEXT("/Script/ActorSequence"), TEXT("ActorSequenceObjectReferences"), false, nullptr, nullptr);
static struct FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences
{
	FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSequenceObjectReferences")),new UScriptStruct::TCppStructOps<FActorSequenceObjectReferences>);
	}
} ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences;
	struct Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSequenceObjectReferences>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSequenceObjectReferences, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorSequenceObjectReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		&NewStructOps,
		"ActorSequenceObjectReferences",
		sizeof(FActorSequenceObjectReferences),
		alignof(FActorSequenceObjectReferences),
		Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSequenceObjectReferences"), sizeof(FActorSequenceObjectReferences), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Hash() { return 2958042362U; }
class UScriptStruct* FActorSequenceObjectReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReference, Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReference"), sizeof(FActorSequenceObjectReference), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_Hash());
	}
	return Singleton;
}
template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<FActorSequenceObjectReference>()
{
	return FActorSequenceObjectReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSequenceObjectReference(FActorSequenceObjectReference::StaticStruct, TEXT("/Script/ActorSequence"), TEXT("ActorSequenceObjectReference"), false, nullptr, nullptr);
static struct FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference
{
	FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSequenceObjectReference")),new UScriptStruct::TCppStructOps<FActorSequenceObjectReference>);
	}
} ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference;
	struct Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An external reference to an level sequence object, resolvable through an arbitrary context.\n */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSequenceObjectReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent_MetaData[] = {
		{ "Comment", "/** Path to the component from its owner actor */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "Path to the component from its owner actor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent = { "PathToComponent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSequenceObjectReference, PathToComponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId_MetaData[] = {
		{ "Comment", "/** The ID of the actor - if this is set, we're either the owner actor, or an object outside of the context */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "The ID of the actor - if this is set, we're either the owner actor, or an object outside of the context" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId = { "ActorId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSequenceObjectReference, ActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** The type of the binding */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "The type of the binding" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSequenceObjectReference, Type), Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		&NewStructOps,
		"ActorSequenceObjectReference",
		sizeof(FActorSequenceObjectReference),
		alignof(FActorSequenceObjectReference),
		Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSequenceObjectReference"), sizeof(FActorSequenceObjectReference), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_Hash() { return 927889007U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
