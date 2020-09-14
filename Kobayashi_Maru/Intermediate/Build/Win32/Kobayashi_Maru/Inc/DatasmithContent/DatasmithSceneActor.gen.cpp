// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithSceneActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSceneActor() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithSceneActor_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithSceneActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
// End Cross Module References
	void ADatasmithSceneActor::StaticRegisterNativesADatasmithSceneActor()
	{
	}
	UClass* Z_Construct_UClass_ADatasmithSceneActor_NoRegister()
	{
		return ADatasmithSceneActor::StaticClass();
	}
	struct Z_Construct_UClass_ADatasmithSceneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RelatedActors;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RelatedActors_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RelatedActors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADatasmithSceneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithSceneActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithSceneActor.h" },
		{ "ModuleRelativePath", "Public/DatasmithSceneActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the actors related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithSceneActor.h" },
		{ "ToolTip", "Map of all the actors related to this Datasmith Scene" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors = { "RelatedActors", nullptr, (EPropertyFlags)0x0014040000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithSceneActor, RelatedActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_Key_KeyProp = { "RelatedActors_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_ValueProp = { "RelatedActors", nullptr, (EPropertyFlags)0x0004000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "ModuleRelativePath", "Public/DatasmithSceneActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithSceneActor, Scene), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADatasmithSceneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithSceneActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithSceneActor_Statics::ClassParams = {
		&ADatasmithSceneActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADatasmithSceneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADatasmithSceneActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADatasmithSceneActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADatasmithSceneActor, 1993084782);
	template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithSceneActor>()
	{
		return ADatasmithSceneActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADatasmithSceneActor(Z_Construct_UClass_ADatasmithSceneActor, &ADatasmithSceneActor::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("ADatasmithSceneActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithSceneActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
