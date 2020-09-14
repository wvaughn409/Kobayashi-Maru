// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Public/LandscapeSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSubsystem() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeSubsystem::StaticRegisterNativesULandscapeSubsystem()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister()
	{
		return ULandscapeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/LandscapeSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams = {
		&ULandscapeSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeSubsystem, 2224646312);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSubsystem>()
	{
		return ULandscapeSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSubsystem(Z_Construct_UClass_ULandscapeSubsystem, &ULandscapeSubsystem::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
