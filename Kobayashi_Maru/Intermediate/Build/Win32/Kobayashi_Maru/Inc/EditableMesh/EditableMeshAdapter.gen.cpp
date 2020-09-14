// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditableMesh/Public/EditableMeshAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableMeshAdapter() {}
// Cross Module References
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshAdapter_NoRegister();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditableMesh();
// End Cross Module References
	void UEditableMeshAdapter::StaticRegisterNativesUEditableMeshAdapter()
	{
	}
	UClass* Z_Construct_UClass_UEditableMeshAdapter_NoRegister()
	{
		return UEditableMeshAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UEditableMeshAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableMeshAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMeshAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditableMeshAdapter.h" },
		{ "ModuleRelativePath", "Public/EditableMeshAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableMeshAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableMeshAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableMeshAdapter_Statics::ClassParams = {
		&UEditableMeshAdapter::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableMeshAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableMeshAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableMeshAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableMeshAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableMeshAdapter, 309997756);
	template<> EDITABLEMESH_API UClass* StaticClass<UEditableMeshAdapter>()
	{
		return UEditableMeshAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableMeshAdapter(Z_Construct_UClass_UEditableMeshAdapter, &UEditableMeshAdapter::StaticClass, TEXT("/Script/EditableMesh"), TEXT("UEditableMeshAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableMeshAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
