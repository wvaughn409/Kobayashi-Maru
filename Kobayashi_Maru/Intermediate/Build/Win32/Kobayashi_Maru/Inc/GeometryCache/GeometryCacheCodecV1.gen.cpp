// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheCodecV1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecV1() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecV1();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	void UGeometryCacheCodecV1::StaticRegisterNativesUGeometryCacheCodecV1()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister()
	{
		return UGeometryCacheCodecV1::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheCodecV1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheCodecV1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheCodecBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheCodecV1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheCodecV1.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecV1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheCodecV1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheCodecV1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheCodecV1_Statics::ClassParams = {
		&UGeometryCacheCodecV1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheCodecV1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecV1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheCodecV1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCacheCodecV1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheCodecV1, 2411074010);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheCodecV1>()
	{
		return UGeometryCacheCodecV1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheCodecV1(Z_Construct_UClass_UGeometryCacheCodecV1, &UGeometryCacheCodecV1::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheCodecV1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheCodecV1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
