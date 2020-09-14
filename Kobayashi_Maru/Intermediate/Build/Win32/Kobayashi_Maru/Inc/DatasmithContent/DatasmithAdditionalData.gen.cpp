// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithAdditionalData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAdditionalData() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithAdditionalData::StaticRegisterNativesUDatasmithAdditionalData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister()
	{
		return UDatasmithAdditionalData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithAdditionalData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithAdditionalData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAdditionalData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all additional data storable on datasmith assets.\n *\n * @usage:\n * Translator can push custom data on assets in order to exploit that data latter (@see UDatasmithCustomActionBase)\n */" },
		{ "IncludePath", "DatasmithAdditionalData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAdditionalData.h" },
		{ "ToolTip", "Base class for all additional data storable on datasmith assets.\n\n@usage:\nTranslator can push custom data on assets in order to exploit that data latter (@see UDatasmithCustomActionBase)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithAdditionalData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAdditionalData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAdditionalData_Statics::ClassParams = {
		&UDatasmithAdditionalData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithAdditionalData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAdditionalData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithAdditionalData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithAdditionalData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithAdditionalData, 2648015967);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAdditionalData>()
	{
		return UDatasmithAdditionalData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithAdditionalData(Z_Construct_UClass_UDatasmithAdditionalData, &UDatasmithAdditionalData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithAdditionalData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAdditionalData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
