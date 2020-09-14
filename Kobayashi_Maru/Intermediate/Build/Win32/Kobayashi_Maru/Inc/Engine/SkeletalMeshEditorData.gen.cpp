// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USkeletalMeshEditorData::StaticRegisterNativesUSkeletalMeshEditorData()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister()
	{
		return USkeletalMeshEditorData::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SkeletalMeshEditorData is a container for non editable editor data.\n * An example of data is the source import data that get updated only when we reimport an asset, but is needed if the asset need to be build. If the ddc key is uptodate the data do not have to be loaded\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/SkeletalMeshEditorData.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshEditorData.h" },
		{ "ToolTip", "SkeletalMeshEditorData is a container for non editable editor data.\nAn example of data is the source import data that get updated only when we reimport an asset, but is needed if the asset need to be build. If the ddc key is uptodate the data do not have to be loaded" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorData_Statics::ClassParams = {
		&USkeletalMeshEditorData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshEditorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshEditorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshEditorData, 1602364850);
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshEditorData>()
	{
		return USkeletalMeshEditorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshEditorData(Z_Construct_UClass_USkeletalMeshEditorData, &USkeletalMeshEditorData::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMeshEditorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorData);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshEditorData)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
