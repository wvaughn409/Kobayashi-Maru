// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/AROriginActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAROriginActor() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AAROriginActor_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AAROriginActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	void AAROriginActor::StaticRegisterNativesAAROriginActor()
	{
	}
	UClass* Z_Construct_UClass_AAROriginActor_NoRegister()
	{
		return AAROriginActor::StaticClass();
	}
	struct Z_Construct_UClass_AAROriginActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAROriginActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAROriginActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Simple actor that is spawned at the origin for AR systems that want to hang components on an actor\n * Spawned as a custom class for easier TObjectIterator use\n */" },
		{ "IncludePath", "AROriginActor.h" },
		{ "ModuleRelativePath", "Public/AROriginActor.h" },
		{ "ToolTip", "Simple actor that is spawned at the origin for AR systems that want to hang components on an actor\nSpawned as a custom class for easier TObjectIterator use" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAROriginActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAROriginActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAROriginActor_Statics::ClassParams = {
		&AAROriginActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAROriginActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAROriginActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAROriginActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAROriginActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAROriginActor, 1585345819);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AAROriginActor>()
	{
		return AAROriginActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAROriginActor(Z_Construct_UClass_AAROriginActor, &AAROriginActor::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("AAROriginActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAROriginActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
