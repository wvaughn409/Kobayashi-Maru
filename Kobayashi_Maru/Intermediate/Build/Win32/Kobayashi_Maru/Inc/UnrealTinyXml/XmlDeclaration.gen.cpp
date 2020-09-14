// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/XmlDeclaration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlDeclaration() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlDeclaration_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlDeclaration();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlNode();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
// End Cross Module References
	void UXmlDeclaration::StaticRegisterNativesUXmlDeclaration()
	{
	}
	UClass* Z_Construct_UClass_UXmlDeclaration_NoRegister()
	{
		return UXmlDeclaration::StaticClass();
	}
	struct Z_Construct_UClass_UXmlDeclaration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlDeclaration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXmlNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlDeclaration_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XmlDeclaration.h" },
		{ "ModuleRelativePath", "Public/XmlDeclaration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlDeclaration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlDeclaration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlDeclaration_Statics::ClassParams = {
		&UXmlDeclaration::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXmlDeclaration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlDeclaration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlDeclaration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlDeclaration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlDeclaration, 2506037155);
	template<> UNREALTINYXML_API UClass* StaticClass<UXmlDeclaration>()
	{
		return UXmlDeclaration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlDeclaration(Z_Construct_UClass_UXmlDeclaration, &UXmlDeclaration::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UXmlDeclaration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlDeclaration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
