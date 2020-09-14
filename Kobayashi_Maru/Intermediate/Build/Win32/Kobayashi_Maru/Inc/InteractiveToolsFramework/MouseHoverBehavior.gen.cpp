// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseBehaviors/MouseHoverBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseHoverBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMouseHoverBehavior::StaticRegisterNativesUMouseHoverBehavior()
	{
	}
	UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister()
	{
		return UMouseHoverBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UMouseHoverBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseHoverBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trivial InputBehavior that forwards InputBehavior hover events to a Target object via\n * the IHoverBehaviorTarget interface.\n */" },
		{ "IncludePath", "BaseBehaviors/MouseHoverBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MouseHoverBehavior.h" },
		{ "ToolTip", "Trivial InputBehavior that forwards InputBehavior hover events to a Target object via\nthe IHoverBehaviorTarget interface." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseHoverBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseHoverBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMouseHoverBehavior_Statics::ClassParams = {
		&UMouseHoverBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMouseHoverBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMouseHoverBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMouseHoverBehavior, 2025352902);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMouseHoverBehavior>()
	{
		return UMouseHoverBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMouseHoverBehavior(Z_Construct_UClass_UMouseHoverBehavior, &UMouseHoverBehavior::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UMouseHoverBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseHoverBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
