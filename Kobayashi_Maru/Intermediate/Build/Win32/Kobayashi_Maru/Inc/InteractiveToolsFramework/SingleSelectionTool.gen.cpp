// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/SingleSelectionTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleSelectionTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USingleSelectionTool::StaticRegisterNativesUSingleSelectionTool()
	{
	}
	UClass* Z_Construct_UClass_USingleSelectionTool_NoRegister()
	{
		return USingleSelectionTool::StaticClass();
	}
	struct Z_Construct_UClass_USingleSelectionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleSelectionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingleSelectionTool.h" },
		{ "ModuleRelativePath", "Public/SingleSelectionTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleSelectionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleSelectionTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleSelectionTool_Statics::ClassParams = {
		&USingleSelectionTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USingleSelectionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleSelectionTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleSelectionTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleSelectionTool, 1128374575);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleSelectionTool>()
	{
		return USingleSelectionTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleSelectionTool(Z_Construct_UClass_USingleSelectionTool, &USingleSelectionTool::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("USingleSelectionTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleSelectionTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
