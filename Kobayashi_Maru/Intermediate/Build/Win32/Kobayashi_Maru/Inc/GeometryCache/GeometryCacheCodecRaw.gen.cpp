// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheCodecRaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecRaw() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecRaw();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	void UGeometryCacheCodecRaw::StaticRegisterNativesUGeometryCacheCodecRaw()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister()
	{
		return UGeometryCacheCodecRaw::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheCodecRaw_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DummyProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheCodecBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheCodecRaw.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecRaw.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty = { "DummyProperty", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheCodecRaw, DummyProperty), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheCodecRaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::ClassParams = {
		&UGeometryCacheCodecRaw::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheCodecRaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheCodecRaw, 3890843135);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheCodecRaw>()
	{
		return UGeometryCacheCodecRaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheCodecRaw(Z_Construct_UClass_UGeometryCacheCodecRaw, &UGeometryCacheCodecRaw::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheCodecRaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheCodecRaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
