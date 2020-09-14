// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothConfigBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfigBase() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase();
// End Cross Module References
	void UClothConfigBase::StaticRegisterNativesUClothConfigBase()
	{
	}
	UClass* Z_Construct_UClass_UClothConfigBase_NoRegister()
	{
		return UClothConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UClothConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for simulator specific simulation controls.\n * Each cloth instance on a skeletal mesh can have a unique cloth config\n */" },
		{ "IncludePath", "ClothConfigBase.h" },
		{ "ModuleRelativePath", "Public/ClothConfigBase.h" },
		{ "ToolTip", "Base class for simulator specific simulation controls.\nEach cloth instance on a skeletal mesh can have a unique cloth config" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigBase_Statics::ClassParams = {
		&UClothConfigBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothConfigBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothConfigBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothConfigBase, 936695108);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothConfigBase>()
	{
		return UClothConfigBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothConfigBase(Z_Construct_UClass_UClothConfigBase, &UClothConfigBase::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothConfigBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigBase);
	void UDEPRECATED_ClothSharedSimConfigBase::StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister()
	{
		return UDEPRECATED_ClothSharedSimConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * These settings are shared between all instances on a skeletal mesh\n * Deprecated, use UClothConfigBase instead.\n */" },
		{ "IncludePath", "ClothConfigBase.h" },
		{ "ModuleRelativePath", "Public/ClothConfigBase.h" },
		{ "ToolTip", "These settings are shared between all instances on a skeletal mesh\nDeprecated, use UClothConfigBase instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ClothSharedSimConfigBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams = {
		&UDEPRECATED_ClothSharedSimConfigBase::StaticClass,
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
		0x021002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_ClothSharedSimConfigBase, 3424528507);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UDEPRECATED_ClothSharedSimConfigBase>()
	{
		return UDEPRECATED_ClothSharedSimConfigBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_ClothSharedSimConfigBase(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase, &UDEPRECATED_ClothSharedSimConfigBase::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UDEPRECATED_ClothSharedSimConfigBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ClothSharedSimConfigBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
