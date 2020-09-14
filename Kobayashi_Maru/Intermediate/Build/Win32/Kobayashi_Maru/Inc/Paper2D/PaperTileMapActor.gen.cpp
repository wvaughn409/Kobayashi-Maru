// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTileMapActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileMapActor() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_APaperTileMapActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperTileMapActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
// End Cross Module References
	void APaperTileMapActor::StaticRegisterNativesAPaperTileMapActor()
	{
	}
	UClass* Z_Construct_UClass_APaperTileMapActor_NoRegister()
	{
		return APaperTileMapActor::StaticClass();
	}
	struct Z_Construct_UClass_APaperTileMapActor_Statics
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
	UObject* (*const Z_Construct_UClass_APaperTileMapActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperTileMapActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An instance of a UPaperTileMap in a level.\n *\n * This actor is created when you drag a tile map asset from the content browser into the level, and\n * it is just a thin wrapper around a UPaperTileMapComponent that actually references the asset.\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PaperTileMapActor.h" },
		{ "ModuleRelativePath", "Classes/PaperTileMapActor.h" },
		{ "ToolTip", "An instance of a UPaperTileMap in a level.\n\nThis actor is created when you drag a tile map asset from the content browser into the level, and\nit is just a thin wrapper around a UPaperTileMapComponent that actually references the asset." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperTileMapActor_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMapActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTileMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperTileMapActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperTileMapActor, RenderComponent), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperTileMapActor_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperTileMapActor_Statics::NewProp_RenderComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperTileMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTileMapActor_Statics::NewProp_RenderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperTileMapActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperTileMapActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaperTileMapActor_Statics::ClassParams = {
		&APaperTileMapActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperTileMapActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperTileMapActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperTileMapActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperTileMapActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperTileMapActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaperTileMapActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperTileMapActor, 738059712);
	template<> PAPER2D_API UClass* StaticClass<APaperTileMapActor>()
	{
		return APaperTileMapActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperTileMapActor(Z_Construct_UClass_APaperTileMapActor, &APaperTileMapActor::StaticClass, TEXT("/Script/Paper2D"), TEXT("APaperTileMapActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperTileMapActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
