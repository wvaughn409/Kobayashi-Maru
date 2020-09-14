// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseTools/ClickDragTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickDragTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
// End Cross Module References
	void UClickDragToolBuilder::StaticRegisterNativesUClickDragToolBuilder()
	{
	}
	UClass* Z_Construct_UClass_UClickDragToolBuilder_NoRegister()
	{
		return UClickDragToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClickDragToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClickDragToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UClickDragTool\n */" },
		{ "IncludePath", "BaseTools/ClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ClickDragTool.h" },
		{ "ToolTip", "Builder for UClickDragTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClickDragToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragToolBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams = {
		&UClickDragToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClickDragToolBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClickDragToolBuilder, 893179225);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragToolBuilder>()
	{
		return UClickDragToolBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClickDragToolBuilder(Z_Construct_UClass_UClickDragToolBuilder, &UClickDragToolBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UClickDragToolBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragToolBuilder);
	void UClickDragTool::StaticRegisterNativesUClickDragTool()
	{
	}
	UClass* Z_Construct_UClass_UClickDragTool_NoRegister()
	{
		return UClickDragTool::StaticClass();
	}
	struct Z_Construct_UClass_UClickDragTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClickDragTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,\n * and on setup registers a UClickDragInputBehavior. You can subclass this Tool to\n * implement basic click-drag type Tools. If you want to do more advanced things, \n * like handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself\n */" },
		{ "IncludePath", "BaseTools/ClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ClickDragTool.h" },
		{ "ToolTip", "UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,\nand on setup registers a UClickDragInputBehavior. You can subclass this Tool to\nimplement basic click-drag type Tools. If you want to do more advanced things,\nlike handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClickDragTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClickDragTool_Statics::ClassParams = {
		&UClickDragTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClickDragTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClickDragTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClickDragTool, 1894915866);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragTool>()
	{
		return UClickDragTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClickDragTool(Z_Construct_UClass_UClickDragTool, &UClickDragTool::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UClickDragTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
