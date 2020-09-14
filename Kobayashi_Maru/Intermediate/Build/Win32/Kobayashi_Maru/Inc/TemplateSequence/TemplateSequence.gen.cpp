// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/TemplateSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequence() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void UTemplateSequence::StaticRegisterNativesUTemplateSequence()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequence_NoRegister()
	{
		return UTemplateSequence::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundActorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoundActorComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundActorComponents_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoundActorComponents_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundPreviewActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BoundPreviewActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_BoundActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Movie scene animation that can be instanced multiple times inside a level sequence.\n */" },
		{ "IncludePath", "TemplateSequence.h" },
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Movie scene animation that can be instanced multiple times inside a level sequence." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents = { "BoundActorComponents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateSequence, BoundActorComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_Key_KeyProp = { "BoundActorComponents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_ValueProp = { "BoundActorComponents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundPreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundPreviewActor = { "BoundPreviewActor", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateSequence, BoundPreviewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundPreviewActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundPreviewActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass = { "BoundActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateSequence, BoundActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundPreviewActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequence_Statics::ClassParams = {
		&UTemplateSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequence, 2178412663);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequence>()
	{
		return UTemplateSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequence(Z_Construct_UClass_UTemplateSequence, &UTemplateSequence::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
