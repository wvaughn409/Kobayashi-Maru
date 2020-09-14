// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseTools/SingleClickTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleClickTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
// End Cross Module References
	void USingleClickToolBuilder::StaticRegisterNativesUSingleClickToolBuilder()
	{
	}
	UClass* Z_Construct_UClass_USingleClickToolBuilder_NoRegister()
	{
		return USingleClickToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USingleClickToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleClickToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleClickToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for USingleClickTool\n */" },
		{ "IncludePath", "BaseTools/SingleClickTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleClickTool.h" },
		{ "ToolTip", "Builder for USingleClickTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleClickToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickToolBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleClickToolBuilder_Statics::ClassParams = {
		&USingleClickToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USingleClickToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleClickToolBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleClickToolBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleClickToolBuilder, 2165314680);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickToolBuilder>()
	{
		return USingleClickToolBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleClickToolBuilder(Z_Construct_UClass_USingleClickToolBuilder, &USingleClickToolBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("USingleClickToolBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickToolBuilder);
	void USingleClickTool::StaticRegisterNativesUSingleClickTool()
	{
	}
	UClass* Z_Construct_UClass_USingleClickTool_NoRegister()
	{
		return USingleClickTool::StaticClass();
	}
	struct Z_Construct_UClass_USingleClickTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleClickTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleClickTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleClickTool is perhaps the simplest possible interactive tool. It simply\n * reacts to default primary button clicks for the active device (eg left-mouse clicks).\n * \n * The function ::IsHitByClick() determines what is clickable by this Tool. The default is\n * to return true, which means the click will activate anywhere (the Tool itself has no\n * notion of Actors, Components, etc). You can override this function to, for example,\n * filter out clicks that don't hit a target object, etc.\n * \n * The function ::OnClicked() implements the action that will occur when a click happens.\n * You must override this to implement any kind of useful behavior.\n */" },
		{ "IncludePath", "BaseTools/SingleClickTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleClickTool.h" },
		{ "ToolTip", "USingleClickTool is perhaps the simplest possible interactive tool. It simply\nreacts to default primary button clicks for the active device (eg left-mouse clicks).\n\nThe function ::IsHitByClick() determines what is clickable by this Tool. The default is\nto return true, which means the click will activate anywhere (the Tool itself has no\nnotion of Actors, Components, etc). You can override this function to, for example,\nfilter out clicks that don't hit a target object, etc.\n\nThe function ::OnClicked() implements the action that will occur when a click happens.\nYou must override this to implement any kind of useful behavior." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleClickTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleClickTool_Statics::ClassParams = {
		&USingleClickTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USingleClickTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleClickTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleClickTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleClickTool, 3725045843);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickTool>()
	{
		return USingleClickTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleClickTool(Z_Construct_UClass_USingleClickTool, &USingleClickTool::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("USingleClickTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
