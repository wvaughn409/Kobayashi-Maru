// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/CompleteRPGHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompleteRPGHUD() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_ACompleteRPGHUD_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ACompleteRPGHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
// End Cross Module References
	void ACompleteRPGHUD::StaticRegisterNativesACompleteRPGHUD()
	{
	}
	UClass* Z_Construct_UClass_ACompleteRPGHUD_NoRegister()
	{
		return ACompleteRPGHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACompleteRPGHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompleteRPGHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompleteRPGHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CompleteRPGHUD.h" },
		{ "ModuleRelativePath", "Public/CompleteRPGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompleteRPGHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompleteRPGHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACompleteRPGHUD_Statics::ClassParams = {
		&ACompleteRPGHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACompleteRPGHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompleteRPGHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompleteRPGHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACompleteRPGHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACompleteRPGHUD, 732156470);
	template<> COMPLETERPG_API UClass* StaticClass<ACompleteRPGHUD>()
	{
		return ACompleteRPGHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACompleteRPGHUD(Z_Construct_UClass_ACompleteRPGHUD, &ACompleteRPGHUD::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("ACompleteRPGHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompleteRPGHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
