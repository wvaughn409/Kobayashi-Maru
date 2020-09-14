// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEvents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEvents() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles();
// End Cross Module References
class UScriptStruct* FNiagaraCollisionEventPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCollisionEventPayload"), sizeof(FNiagaraCollisionEventPayload), Get_Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCollisionEventPayload>()
{
	return FNiagaraCollisionEventPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraCollisionEventPayload(FNiagaraCollisionEventPayload::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraCollisionEventPayload"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCollisionEventPayload
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCollisionEventPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraCollisionEventPayload")),new UScriptStruct::TCppStructOps<FNiagaraCollisionEventPayload>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraCollisionEventPayload;
	struct Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PhysicalMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Type struct for collision event payloads; collision event data set is based on this\n *  TODO: figure out how we can pipe attributes from the colliding particle in here\n */" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
		{ "ToolTip", "Type struct for collision event payloads; collision event data set is based on this\nTODO: figure out how we can pipe attributes from the colliding particle in here" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCollisionEventPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex = { "PhysicalMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCollisionEventPayload, PhysicalMaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCollisionEventPayload, ParticleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity = { "CollisionVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCollisionEventPayload, CollisionVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal = { "CollisionNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCollisionEventPayload, CollisionNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos = { "CollisionPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCollisionEventPayload, CollisionPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCollisionEventPayload",
		sizeof(FNiagaraCollisionEventPayload),
		alignof(FNiagaraCollisionEventPayload),
		Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraCollisionEventPayload"), sizeof(FNiagaraCollisionEventPayload), Get_Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Hash() { return 1829856545U; }
	void UNiagaraEventReceiverEmitterAction::StaticRegisterNativesUNiagaraEventReceiverEmitterAction()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister()
	{
		return UNiagaraEventReceiverEmitterAction::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nBase class for actions that an event receiver will perform at the emitter level.\n*/" },
		{ "IncludePath", "NiagaraEvents.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
		{ "ToolTip", "Base class for actions that an event receiver will perform at the emitter level." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEventReceiverEmitterAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::ClassParams = {
		&UNiagaraEventReceiverEmitterAction::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraEventReceiverEmitterAction, 1872695100);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEventReceiverEmitterAction>()
	{
		return UNiagaraEventReceiverEmitterAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraEventReceiverEmitterAction(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction, &UNiagaraEventReceiverEmitterAction::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraEventReceiverEmitterAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEventReceiverEmitterAction);
	void UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister()
	{
		return UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumParticles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEventReceiverEmitterAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraEvents.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Number of particles to spawn per event received. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
		{ "ToolTip", "Number of particles to spawn per event received." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles = { "NumParticles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEventReceiverEmitterAction_SpawnParticles, NumParticles), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEventReceiverEmitterAction_SpawnParticles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::ClassParams = {
		&UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraEventReceiverEmitterAction_SpawnParticles, 2837879718);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEventReceiverEmitterAction_SpawnParticles>()
	{
		return UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles, &UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraEventReceiverEmitterAction_SpawnParticles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEventReceiverEmitterAction_SpawnParticles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
