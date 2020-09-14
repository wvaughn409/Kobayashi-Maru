// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureMipDataProviderFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureMipDataProviderFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureMipDataProviderFactory::StaticRegisterNativesUTextureMipDataProviderFactory()
	{
	}
	UClass* Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister()
	{
		return UTextureMipDataProviderFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTextureMipDataProviderFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UTextureMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.\n* Derived classes from UTextureMipDataProviderFactory can be attached to UTexture::MipDataProviderFactory\n* to define a new source for mip content (instead of the default disk file or ddc mips). \n* Usecases include dynamic textures that need to be driven by the texture streaming or textures that \n* get they data over the network.\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureMipDataProviderFactory.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureMipDataProviderFactory.h" },
		{ "ToolTip", "UTextureMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.\nDerived classes from UTextureMipDataProviderFactory can be attached to UTexture::MipDataProviderFactory\nto define a new source for mip content (instead of the default disk file or ddc mips).\nUsecases include dynamic textures that need to be driven by the texture streaming or textures that\nget they data over the network." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureMipDataProviderFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::ClassParams = {
		&UTextureMipDataProviderFactory::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureMipDataProviderFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureMipDataProviderFactory, 3186504929);
	template<> ENGINE_API UClass* StaticClass<UTextureMipDataProviderFactory>()
	{
		return UTextureMipDataProviderFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureMipDataProviderFactory(Z_Construct_UClass_UTextureMipDataProviderFactory, &UTextureMipDataProviderFactory::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureMipDataProviderFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureMipDataProviderFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
