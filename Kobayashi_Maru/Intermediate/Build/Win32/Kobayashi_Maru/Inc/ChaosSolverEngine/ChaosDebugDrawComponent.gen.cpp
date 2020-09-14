// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosDebugDrawComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDebugDrawComponent() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	void UChaosDebugDrawComponent::StaticRegisterNativesUChaosDebugDrawComponent()
	{
	}
	UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister()
	{
		return UChaosDebugDrawComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosDebugDrawComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosDebugDrawComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Chaos" },
		{ "IncludePath", "Chaos/ChaosDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosDebugDrawComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosDebugDrawComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDebugDrawComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosDebugDrawComponent_Statics::ClassParams = {
		&UChaosDebugDrawComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosDebugDrawComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosDebugDrawComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosDebugDrawComponent, 445581890);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosDebugDrawComponent>()
	{
		return UChaosDebugDrawComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosDebugDrawComponent(Z_Construct_UClass_UChaosDebugDrawComponent, &UChaosDebugDrawComponent::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosDebugDrawComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDebugDrawComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
