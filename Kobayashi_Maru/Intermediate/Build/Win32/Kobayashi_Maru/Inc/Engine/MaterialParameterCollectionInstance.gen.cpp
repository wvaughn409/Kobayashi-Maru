// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UMaterialParameterCollectionInstance::StaticRegisterNativesUMaterialParameterCollectionInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister()
	{
		return UMaterialParameterCollectionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class that stores per-world instance parameter data for a given UMaterialParameterCollection resource. \n * Instances of this class are always transient.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialParameterCollectionInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
		{ "ToolTip", "Class that stores per-world instance parameter data for a given UMaterialParameterCollection resource.\nInstances of this class are always transient." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection resource this instance is based off of. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
		{ "ToolTip", "Collection resource this instance is based off of." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialParameterCollectionInstance, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollectionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::ClassParams = {
		&UMaterialParameterCollectionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialParameterCollectionInstance, 1254173798);
	template<> ENGINE_API UClass* StaticClass<UMaterialParameterCollectionInstance>()
	{
		return UMaterialParameterCollectionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialParameterCollectionInstance(Z_Construct_UClass_UMaterialParameterCollectionInstance, &UMaterialParameterCollectionInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialParameterCollectionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollectionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
