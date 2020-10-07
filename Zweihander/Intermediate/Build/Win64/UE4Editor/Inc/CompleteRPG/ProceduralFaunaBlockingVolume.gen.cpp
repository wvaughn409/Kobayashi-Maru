// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Private/ProceduralFaunaBlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFaunaBlockingVolume() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_AProceduralFaunaBlockingVolume_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AProceduralFaunaBlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
// End Cross Module References
	void AProceduralFaunaBlockingVolume::StaticRegisterNativesAProceduralFaunaBlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_AProceduralFaunaBlockingVolume_NoRegister()
	{
		return AProceduralFaunaBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An invisible volume used to block Fauna spawners from being spawned. */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "ProceduralFaunaBlockingVolume.h" },
		{ "ModuleRelativePath", "Private/ProceduralFaunaBlockingVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to block Fauna spawners from being spawned." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFaunaBlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::ClassParams = {
		&AProceduralFaunaBlockingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralFaunaBlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralFaunaBlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralFaunaBlockingVolume, 458242884);
	template<> COMPLETERPG_API UClass* StaticClass<AProceduralFaunaBlockingVolume>()
	{
		return AProceduralFaunaBlockingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralFaunaBlockingVolume(Z_Construct_UClass_AProceduralFaunaBlockingVolume, &AProceduralFaunaBlockingVolume::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AProceduralFaunaBlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFaunaBlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
