// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Private/OculusMR_BoundaryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_BoundaryActor() {}
// Cross Module References
	OCULUSMR_API UClass* Z_Construct_UClass_AOculusMR_BoundaryActor_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_AOculusMR_BoundaryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_NoRegister();
// End Cross Module References
	void AOculusMR_BoundaryActor::StaticRegisterNativesAOculusMR_BoundaryActor()
	{
	}
	UClass* Z_Construct_UClass_AOculusMR_BoundaryActor_NoRegister()
	{
		return AOculusMR_BoundaryActor::StaticClass();
	}
	struct Z_Construct_UClass_AOculusMR_BoundaryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundaryMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OculusMR" },
		{ "IncludePath", "OculusMR_BoundaryActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::NewProp_BoundaryMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_BoundaryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::NewProp_BoundaryMeshComponent = { "BoundaryMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_BoundaryActor, BoundaryMeshComponent), Z_Construct_UClass_UOculusMR_BoundaryMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::NewProp_BoundaryMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::NewProp_BoundaryMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::NewProp_BoundaryMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOculusMR_BoundaryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::ClassParams = {
		&AOculusMR_BoundaryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOculusMR_BoundaryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOculusMR_BoundaryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOculusMR_BoundaryActor, 3145725195);
	template<> OCULUSMR_API UClass* StaticClass<AOculusMR_BoundaryActor>()
	{
		return AOculusMR_BoundaryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOculusMR_BoundaryActor(Z_Construct_UClass_AOculusMR_BoundaryActor, &AOculusMR_BoundaryActor::StaticClass, TEXT("/Script/OculusMR"), TEXT("AOculusMR_BoundaryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOculusMR_BoundaryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
