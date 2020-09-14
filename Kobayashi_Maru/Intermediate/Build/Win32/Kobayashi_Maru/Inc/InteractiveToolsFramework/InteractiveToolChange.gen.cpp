// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveToolChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolChange() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UToolContextTransactionProvider::StaticRegisterNativesUToolContextTransactionProvider()
	{
	}
	UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister()
	{
		return UToolContextTransactionProvider::StaticClass();
	}
	struct Z_Construct_UClass_UToolContextTransactionProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolContextTransactionProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolChange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolContextTransactionProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolContextTransactionProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolContextTransactionProvider_Statics::ClassParams = {
		&UToolContextTransactionProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolContextTransactionProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolContextTransactionProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolContextTransactionProvider, 1829103257);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolContextTransactionProvider>()
	{
		return UToolContextTransactionProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolContextTransactionProvider(Z_Construct_UClass_UToolContextTransactionProvider, &UToolContextTransactionProvider::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UToolContextTransactionProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolContextTransactionProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
