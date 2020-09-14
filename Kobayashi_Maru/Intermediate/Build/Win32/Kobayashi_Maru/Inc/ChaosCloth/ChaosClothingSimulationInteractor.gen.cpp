// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/ChaosCloth/ChaosClothingSimulationInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothingSimulationInteractor() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References
	void UChaosClothingSimulationInteractor::StaticRegisterNativesUChaosClothingSimulationInteractor()
	{
	}
	UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister()
	{
		return UChaosClothingSimulationInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingSimulationInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::ClassParams = {
		&UChaosClothingSimulationInteractor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosClothingSimulationInteractor, 1837402639);
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingSimulationInteractor>()
	{
		return UChaosClothingSimulationInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosClothingSimulationInteractor(Z_Construct_UClass_UChaosClothingSimulationInteractor, &UChaosClothingSimulationInteractor::StaticClass, TEXT("/Script/ChaosCloth"), TEXT("UChaosClothingSimulationInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingSimulationInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
