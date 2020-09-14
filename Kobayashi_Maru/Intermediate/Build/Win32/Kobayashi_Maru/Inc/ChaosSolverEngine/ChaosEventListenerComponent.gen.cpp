// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosEventListenerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosEventListenerComponent() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	void UChaosEventListenerComponent::StaticRegisterNativesUChaosEventListenerComponent()
	{
	}
	UClass* Z_Construct_UClass_UChaosEventListenerComponent_NoRegister()
	{
		return UChaosEventListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosEventListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosEventListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Chaos" },
		{ "Comment", "/** \n * Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc).\n */" },
		{ "IncludePath", "Chaos/ChaosEventListenerComponent.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosEventListenerComponent.h" },
		{ "ToolTip", "Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosEventListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosEventListenerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosEventListenerComponent_Statics::ClassParams = {
		&UChaosEventListenerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosEventListenerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosEventListenerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosEventListenerComponent, 2324556444);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosEventListenerComponent>()
	{
		return UChaosEventListenerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosEventListenerComponent(Z_Construct_UClass_UChaosEventListenerComponent, &UChaosEventListenerComponent::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosEventListenerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosEventListenerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
