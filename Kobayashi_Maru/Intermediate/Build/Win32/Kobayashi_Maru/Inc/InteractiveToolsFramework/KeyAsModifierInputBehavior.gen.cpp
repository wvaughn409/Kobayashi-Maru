// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseBehaviors/KeyAsModifierInputBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyAsModifierInputBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UKeyAsModifierInputBehavior::StaticRegisterNativesUKeyAsModifierInputBehavior()
	{
	}
	UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister()
	{
		return UKeyAsModifierInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UKeyAsModifierInputBehavior converts a specific key press/release into\n * a \"Modifier\" toggle via the IModifierToggleBehaviorTarget interface\n */" },
		{ "IncludePath", "BaseBehaviors/KeyAsModifierInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/KeyAsModifierInputBehavior.h" },
		{ "ToolTip", "UKeyAsModifierInputBehavior converts a specific key press/release into\na \"Modifier\" toggle via the IModifierToggleBehaviorTarget interface" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyAsModifierInputBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::ClassParams = {
		&UKeyAsModifierInputBehavior::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKeyAsModifierInputBehavior, 817746604);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UKeyAsModifierInputBehavior>()
	{
		return UKeyAsModifierInputBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKeyAsModifierInputBehavior(Z_Construct_UClass_UKeyAsModifierInputBehavior, &UKeyAsModifierInputBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UKeyAsModifierInputBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyAsModifierInputBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
