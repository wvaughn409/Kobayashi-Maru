// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FaunaQueryActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaunaQueryActor() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_AFaunaQueryActor_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AFaunaQueryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
// End Cross Module References
	void AFaunaQueryActor::StaticRegisterNativesAFaunaQueryActor()
	{
	}
	UClass* Z_Construct_UClass_AFaunaQueryActor_NoRegister()
	{
		return AFaunaQueryActor::StaticClass();
	}
	struct Z_Construct_UClass_AFaunaQueryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFaunaQueryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFaunaQueryActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FaunaQueryActor.h" },
		{ "ModuleRelativePath", "Public/FaunaQueryActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFaunaQueryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFaunaQueryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFaunaQueryActor_Statics::ClassParams = {
		&AFaunaQueryActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFaunaQueryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFaunaQueryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFaunaQueryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFaunaQueryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFaunaQueryActor, 1700938883);
	template<> COMPLETERPG_API UClass* StaticClass<AFaunaQueryActor>()
	{
		return AFaunaQueryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFaunaQueryActor(Z_Construct_UClass_AFaunaQueryActor, &AFaunaQueryActor::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AFaunaQueryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFaunaQueryActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFaunaQueryActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
