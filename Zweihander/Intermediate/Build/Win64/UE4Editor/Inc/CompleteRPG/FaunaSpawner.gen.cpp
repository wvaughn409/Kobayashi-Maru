// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FaunaSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaunaSpawner() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_AFaunaSpawner_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AFaunaSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaSpawnerComponent_NoRegister();
// End Cross Module References
	void AFaunaSpawner::StaticRegisterNativesAFaunaSpawner()
	{
	}
	UClass* Z_Construct_UClass_AFaunaSpawner_NoRegister()
	{
		return AFaunaSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AFaunaSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFaunaSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFaunaSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FaunaSpawner.h" },
		{ "ModuleRelativePath", "Public/FaunaSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFaunaSpawner_Statics::NewProp_SpawnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FaunaSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFaunaSpawner_Statics::NewProp_SpawnerComponent = { "SpawnerComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFaunaSpawner, SpawnerComponent), Z_Construct_UClass_UFaunaSpawnerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFaunaSpawner_Statics::NewProp_SpawnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFaunaSpawner_Statics::NewProp_SpawnerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFaunaSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFaunaSpawner_Statics::NewProp_SpawnerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFaunaSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFaunaSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFaunaSpawner_Statics::ClassParams = {
		&AFaunaSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFaunaSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFaunaSpawner_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFaunaSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFaunaSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFaunaSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFaunaSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFaunaSpawner, 1345720761);
	template<> COMPLETERPG_API UClass* StaticClass<AFaunaSpawner>()
	{
		return AFaunaSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFaunaSpawner(Z_Construct_UClass_AFaunaSpawner, &AFaunaSpawner::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AFaunaSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFaunaSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
