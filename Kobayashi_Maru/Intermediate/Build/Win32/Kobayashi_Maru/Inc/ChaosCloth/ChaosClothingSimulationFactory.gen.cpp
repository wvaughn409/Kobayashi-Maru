// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/ChaosCloth/ChaosClothingSimulationFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothingSimulationFactory() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References
	void UChaosClothingSimulationFactory::StaticRegisterNativesUChaosClothingSimulationFactory()
	{
	}
	UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister()
	{
		return UChaosClothingSimulationFactory::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingSimulationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationFactory.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingSimulationFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::ClassParams = {
		&UChaosClothingSimulationFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingSimulationFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosClothingSimulationFactory, 748212748);
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingSimulationFactory>()
	{
		return UChaosClothingSimulationFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosClothingSimulationFactory(Z_Construct_UClass_UChaosClothingSimulationFactory, &UChaosClothingSimulationFactory::StaticClass, TEXT("/Script/ChaosCloth"), TEXT("UChaosClothingSimulationFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingSimulationFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
