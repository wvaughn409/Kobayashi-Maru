// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
// End Cross Module References
	void UVirtualTexture::StaticRegisterNativesUVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTexture_NoRegister()
	{
		return UVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexture_Statics::ClassParams = {
		&UVirtualTexture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTexture, 1893697504);
	template<> ENGINE_API UClass* StaticClass<UVirtualTexture>()
	{
		return UVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTexture(Z_Construct_UClass_UVirtualTexture, &UVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTexture)
	void ULightMapVirtualTexture::StaticRegisterNativesULightMapVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister()
	{
		return ULightMapVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVirtualTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams = {
		&ULightMapVirtualTexture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightMapVirtualTexture, 611150416);
	template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture>()
	{
		return ULightMapVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapVirtualTexture(Z_Construct_UClass_ULightMapVirtualTexture, &ULightMapVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture);
	void ULightMapVirtualTexture2D::StaticRegisterNativesULightMapVirtualTexture2D()
	{
	}
	UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister()
	{
		return ULightMapVirtualTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapVirtualTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeToLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TypeToLayer;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_TypeToLayer_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer = { "TypeToLayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightMapVirtualTexture2D, TypeToLayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_Inner = { "TypeToLayer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::ClassParams = {
		&ULightMapVirtualTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapVirtualTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightMapVirtualTexture2D, 91170501);
	template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture2D>()
	{
		return ULightMapVirtualTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapVirtualTexture2D(Z_Construct_UClass_ULightMapVirtualTexture2D, &ULightMapVirtualTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapVirtualTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
