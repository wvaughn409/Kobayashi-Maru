// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithCustomAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCustomAction() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithCustomActionBase::StaticRegisterNativesUDatasmithCustomActionBase()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister()
	{
		return UDatasmithCustomActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCustomActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCustomActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for actions available to the end-user through the Content browser contextual menu.\n * By extending this class, the custom action is automatically registered to be available for the end user\n */" },
		{ "IncludePath", "DatasmithCustomAction.h" },
		{ "ModuleRelativePath", "Public/DatasmithCustomAction.h" },
		{ "ToolTip", "Base class for actions available to the end-user through the Content browser contextual menu.\nBy extending this class, the custom action is automatically registered to be available for the end user" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCustomActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCustomActionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams = {
		&UDatasmithCustomActionBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCustomActionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithCustomActionBase, 417872858);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCustomActionBase>()
	{
		return UDatasmithCustomActionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithCustomActionBase(Z_Construct_UClass_UDatasmithCustomActionBase, &UDatasmithCustomActionBase::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithCustomActionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCustomActionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
