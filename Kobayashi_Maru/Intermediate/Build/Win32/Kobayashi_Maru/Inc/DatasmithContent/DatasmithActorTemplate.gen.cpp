// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithActorTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithActorTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithActorTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithActorTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithActorTemplate::StaticRegisterNativesUDatasmithActorTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithActorTemplate_NoRegister()
	{
		return UDatasmithActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithActorTemplate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Layers_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// hold template informations common to all AActors.\n" },
		{ "IncludePath", "ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ToolTip", "hold template informations common to all AActors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "/** Tags on this actor. (see AActor::Tags) */" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ToolTip", "Tags on this actor. (see AActor::Tags)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithActorTemplate, Tags), METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_MetaData[] = {
		{ "Comment", "/** Layers this actor belongs to. (see AActor::Layers) */" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ToolTip", "Layers this actor belongs to. (see AActor::Layers)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithActorTemplate, Layers), METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_ElementProp = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithActorTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithActorTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::ClassParams = {
		&UDatasmithActorTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithActorTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithActorTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithActorTemplate, 1394288546);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithActorTemplate>()
	{
		return UDatasmithActorTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithActorTemplate(Z_Construct_UClass_UDatasmithActorTemplate, &UDatasmithActorTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithActorTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithActorTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
