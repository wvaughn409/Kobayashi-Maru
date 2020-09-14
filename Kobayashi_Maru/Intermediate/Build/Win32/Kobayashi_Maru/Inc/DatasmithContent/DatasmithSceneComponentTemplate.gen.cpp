// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithSceneComponentTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSceneComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UDatasmithSceneComponentTemplate::StaticRegisterNativesUDatasmithSceneComponentTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate_NoRegister()
	{
		return UDatasmithSceneComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AttachParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mobility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSceneComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, Tags), METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, AttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneComponentTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::ClassParams = {
		&UDatasmithSceneComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithSceneComponentTemplate, 3128844438);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSceneComponentTemplate>()
	{
		return UDatasmithSceneComponentTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithSceneComponentTemplate(Z_Construct_UClass_UDatasmithSceneComponentTemplate, &UDatasmithSceneComponentTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithSceneComponentTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneComponentTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
