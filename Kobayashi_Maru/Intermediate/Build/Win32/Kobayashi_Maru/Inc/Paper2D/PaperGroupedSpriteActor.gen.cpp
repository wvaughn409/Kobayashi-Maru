// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperGroupedSpriteActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteActor() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_APaperGroupedSpriteActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperGroupedSpriteActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister();
// End Cross Module References
	void APaperGroupedSpriteActor::StaticRegisterNativesAPaperGroupedSpriteActor()
	{
	}
	UClass* Z_Construct_UClass_APaperGroupedSpriteActor_NoRegister()
	{
		return APaperGroupedSpriteActor::StaticClass();
	}
	struct Z_Construct_UClass_APaperGroupedSpriteActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperGroupedSpriteActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperGroupedSpriteActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A group of sprites that will be rendered and culled as a single unit\n *\n * This actor is created when you Merge several sprite components together.\n * it is just a thin wrapper around a UPaperGroupedSpriteComponent.\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PaperGroupedSpriteActor.h" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteActor.h" },
		{ "ToolTip", "A group of sprites that will be rendered and culled as a single unit\n\nThis actor is created when you Merge several sprite components together.\nit is just a thin wrapper around a UPaperGroupedSpriteComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperGroupedSpriteActor, RenderComponent), Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperGroupedSpriteActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperGroupedSpriteActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperGroupedSpriteActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaperGroupedSpriteActor_Statics::ClassParams = {
		&APaperGroupedSpriteActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperGroupedSpriteActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperGroupedSpriteActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaperGroupedSpriteActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperGroupedSpriteActor, 988041325);
	template<> PAPER2D_API UClass* StaticClass<APaperGroupedSpriteActor>()
	{
		return APaperGroupedSpriteActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperGroupedSpriteActor(Z_Construct_UClass_APaperGroupedSpriteActor, &APaperGroupedSpriteActor::StaticClass, TEXT("/Script/Paper2D"), TEXT("APaperGroupedSpriteActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperGroupedSpriteActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
