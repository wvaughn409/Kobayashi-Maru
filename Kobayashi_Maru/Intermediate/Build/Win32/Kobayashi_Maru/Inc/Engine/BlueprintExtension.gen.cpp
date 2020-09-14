// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Blueprint/BlueprintExtension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintExtension() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlueprintExtension::StaticRegisterNativesUBlueprintExtension()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister()
	{
		return UBlueprintExtension::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Per-instance extension object that can be added to UBlueprint::Extensions in order to augment built-in blueprint functionality\n * Ideally this would be an editor-only class, but such classes are not permitted within Engine modules (even inside WITH_EDITORONLY_DATA blocks)\n */" },
		{ "IncludePath", "Blueprint/BlueprintExtension.h" },
		{ "ModuleRelativePath", "Public/Blueprint/BlueprintExtension.h" },
		{ "ToolTip", "Per-instance extension object that can be added to UBlueprint::Extensions in order to augment built-in blueprint functionality\nIdeally this would be an editor-only class, but such classes are not permitted within Engine modules (even inside WITH_EDITORONLY_DATA blocks)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintExtension>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintExtension_Statics::ClassParams = {
		&UBlueprintExtension::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintExtension()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintExtension_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintExtension, 1463431764);
	template<> ENGINE_API UClass* StaticClass<UBlueprintExtension>()
	{
		return UBlueprintExtension::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintExtension(Z_Construct_UClass_UBlueprintExtension, &UBlueprintExtension::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintExtension);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
