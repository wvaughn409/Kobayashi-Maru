// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosGameplayEventDispatcher() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosHandlerSet();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent();
// End Cross Module References
class UScriptStruct* FChaosHandlerSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosHandlerSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosHandlerSet, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosHandlerSet"), sizeof(FChaosHandlerSet), Get_Z_Construct_UScriptStruct_FChaosHandlerSet_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosHandlerSet>()
{
	return FChaosHandlerSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosHandlerSet(FChaosHandlerSet::StaticStruct, TEXT("/Script/ChaosSolverEngine"), TEXT("ChaosHandlerSet"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosHandlerSet
{
	FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosHandlerSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosHandlerSet")),new UScriptStruct::TCppStructOps<FChaosHandlerSet>);
	}
} ScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosHandlerSet;
	struct Z_Construct_UScriptStruct_FChaosHandlerSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosHandlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ChaosHandlers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosHandlers_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TSet in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TSet in a TMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosHandlerSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_MetaData[] = {
		{ "Comment", "/** These should be IChaosNotifyHandlerInterface refs, but we can't store those here */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "These should be IChaosNotifyHandlerInterface refs, but we can't store those here" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers = { "ChaosHandlers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosHandlerSet, ChaosHandlers), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_ElementProp = { "ChaosHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_ElementProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosHandlerSet",
		sizeof(FChaosHandlerSet),
		alignof(FChaosHandlerSet),
		Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosHandlerSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosHandlerSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolverEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosHandlerSet"), sizeof(FChaosHandlerSet), Get_Z_Construct_UScriptStruct_FChaosHandlerSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosHandlerSet_Hash() { return 2865573947U; }
class UScriptStruct* FBreakEventCallbackWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("BreakEventCallbackWrapper"), sizeof(FBreakEventCallbackWrapper), Get_Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FBreakEventCallbackWrapper>()
{
	return FBreakEventCallbackWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBreakEventCallbackWrapper(FBreakEventCallbackWrapper::StaticStruct, TEXT("/Script/ChaosSolverEngine"), TEXT("BreakEventCallbackWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFBreakEventCallbackWrapper
{
	FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFBreakEventCallbackWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BreakEventCallbackWrapper")),new UScriptStruct::TCppStructOps<FBreakEventCallbackWrapper>);
	}
} ScriptStruct_ChaosSolverEngine_StaticRegisterNativesFBreakEventCallbackWrapper;
	struct Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TFunction in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TFunction in a TMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBreakEventCallbackWrapper>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"BreakEventCallbackWrapper",
		sizeof(FBreakEventCallbackWrapper),
		alignof(FBreakEventCallbackWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolverEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BreakEventCallbackWrapper"), sizeof(FBreakEventCallbackWrapper), Get_Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Hash() { return 2902467619U; }
class UScriptStruct* FChaosBreakEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSSOLVERENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosBreakEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakEvent, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosBreakEvent"), sizeof(FChaosBreakEvent), Get_Z_Construct_UScriptStruct_FChaosBreakEvent_Hash());
	}
	return Singleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosBreakEvent>()
{
	return FChaosBreakEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosBreakEvent(FChaosBreakEvent::StaticStruct, TEXT("/Script/ChaosSolverEngine"), TEXT("ChaosBreakEvent"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosBreakEvent
{
	FScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosBreakEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosBreakEvent")),new UScriptStruct::TCppStructOps<FChaosBreakEvent>);
	}
} ScriptStruct_ChaosSolverEngine_StaticRegisterNativesFChaosBreakEvent;
	struct Z_Construct_UScriptStruct_FChaosBreakEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Break Event" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosBreakEvent",
		sizeof(FChaosBreakEvent),
		alignof(FChaosBreakEvent),
		Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosBreakEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosSolverEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosBreakEvent"), sizeof(FChaosBreakEvent), Get_Z_Construct_UScriptStruct_FChaosBreakEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosBreakEvent_Hash() { return 4277944416U; }
	void UChaosGameplayEventDispatcher::StaticRegisterNativesUChaosGameplayEventDispatcher()
	{
	}
	UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister()
	{
		return UChaosGameplayEventDispatcher::StaticClass();
	}
	struct Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakEventRegistrations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BreakEventRegistrations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakEventRegistrations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreakEventRegistrations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEventRegistrations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CollisionEventRegistrations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionEventRegistrations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionEventRegistrations_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosEventListenerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations = { "BreakEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, BreakEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_Key_KeyProp = { "BreakEventRegistrations_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_ValueProp = { "BreakEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations = { "CollisionEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, CollisionEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_Key_KeyProp = { "CollisionEventRegistrations_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_ValueProp = { "CollisionEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChaosHandlerSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosGameplayEventDispatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::ClassParams = {
		&UChaosGameplayEventDispatcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosGameplayEventDispatcher, 983150460);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosGameplayEventDispatcher>()
	{
		return UChaosGameplayEventDispatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosGameplayEventDispatcher(Z_Construct_UClass_UChaosGameplayEventDispatcher, &UChaosGameplayEventDispatcher::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosGameplayEventDispatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosGameplayEventDispatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
