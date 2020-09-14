// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kobayashi_Maru/Public/XmlCppExample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlCppExample() {}
// Cross Module References
	KOBAYASHI_MARU_API UClass* Z_Construct_UClass_UXmlCppExample_NoRegister();
	KOBAYASHI_MARU_API UClass* Z_Construct_UClass_UXmlCppExample();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Kobayashi_Maru();
// End Cross Module References
	void UXmlCppExample::StaticRegisterNativesUXmlCppExample()
	{
	}
	UClass* Z_Construct_UClass_UXmlCppExample_NoRegister()
	{
		return UXmlCppExample::StaticClass();
	}
	struct Z_Construct_UClass_UXmlCppExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlCppExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kobayashi_Maru,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlCppExample_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "XmlCppExample.h" },
		{ "ModuleRelativePath", "Public/XmlCppExample.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlCppExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlCppExample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlCppExample_Statics::ClassParams = {
		&UXmlCppExample::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXmlCppExample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlCppExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlCppExample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlCppExample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlCppExample, 2759479629);
	template<> KOBAYASHI_MARU_API UClass* StaticClass<UXmlCppExample>()
	{
		return UXmlCppExample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlCppExample(Z_Construct_UClass_UXmlCppExample, &UXmlCppExample::StaticClass, TEXT("/Script/Kobayashi_Maru"), TEXT("UXmlCppExample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlCppExample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
