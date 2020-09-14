// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveToolBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolBuilder() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveToolBuilder::StaticRegisterNativesUInteractiveToolBuilder()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister()
	{
		return UInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveToolBuilder creates a new instance of an InteractiveTool (basically this is a Factory).\n * These are registered with the InteractiveToolManager, which calls BuildTool() if CanBuildTool() returns true.\n * In addition CanBuildTool() will be queried to (for example) enable/disable UI buttons, etc.\n * This is an abstract base class, you must subclass it in order to create your particular Tool instance\n */" },
		{ "IncludePath", "InteractiveToolBuilder.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolBuilder.h" },
		{ "ToolTip", "A UInteractiveToolBuilder creates a new instance of an InteractiveTool (basically this is a Factory).\nThese are registered with the InteractiveToolManager, which calls BuildTool() if CanBuildTool() returns true.\nIn addition CanBuildTool() will be queried to (for example) enable/disable UI buttons, etc.\nThis is an abstract base class, you must subclass it in order to create your particular Tool instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolBuilder_Statics::ClassParams = {
		&UInteractiveToolBuilder::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveToolBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveToolBuilder, 4275579785);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolBuilder>()
	{
		return UInteractiveToolBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveToolBuilder(Z_Construct_UClass_UInteractiveToolBuilder, &UInteractiveToolBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveToolBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
