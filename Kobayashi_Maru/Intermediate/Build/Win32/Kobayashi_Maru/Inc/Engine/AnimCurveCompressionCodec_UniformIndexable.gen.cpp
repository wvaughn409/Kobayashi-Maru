// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCurveCompressionCodec_UniformIndexable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformIndexable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCurveCompressionCodec_UniformIndexable::StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_NoRegister()
	{
		return UAnimCurveCompressionCodec_UniformIndexable::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Uniform Indexable" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec_UniformIndexable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformIndexable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_UniformIndexable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::ClassParams = {
		&UAnimCurveCompressionCodec_UniformIndexable::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionCodec_UniformIndexable, 798873144);
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec_UniformIndexable>()
	{
		return UAnimCurveCompressionCodec_UniformIndexable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionCodec_UniformIndexable(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable, &UAnimCurveCompressionCodec_UniformIndexable::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCurveCompressionCodec_UniformIndexable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_UniformIndexable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
