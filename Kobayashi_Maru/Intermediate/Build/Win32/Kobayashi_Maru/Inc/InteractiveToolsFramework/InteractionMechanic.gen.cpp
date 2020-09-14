// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractionMechanic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractionMechanic::StaticRegisterNativesUInteractionMechanic()
	{
	}
	UClass* Z_Construct_UClass_UInteractionMechanic_NoRegister()
	{
		return UInteractionMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractionMechanic implements a \"user interaction\". This is generally a subset of an InteractiveTool,\n * for example an interaction to draw a polygon could be used in many tools, but requires handling input events\n * and converting them to click points on a plane, handling various cases like closing a loop, undo/redo of points, etc.\n * Ideally all these aspects should be able to be wrapped up in an UInteractionMechanic that multiple Tools can use.\n * \n * (This class is still a work in progress)\n */" },
		{ "IncludePath", "InteractionMechanic.h" },
		{ "ModuleRelativePath", "Public/InteractionMechanic.h" },
		{ "ToolTip", "A UInteractionMechanic implements a \"user interaction\". This is generally a subset of an InteractiveTool,\nfor example an interaction to draw a polygon could be used in many tools, but requires handling input events\nand converting them to click points on a plane, handling various cases like closing a loop, undo/redo of points, etc.\nIdeally all these aspects should be able to be wrapped up in an UInteractionMechanic that multiple Tools can use.\n\n(This class is still a work in progress)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionMechanic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionMechanic_Statics::ClassParams = {
		&UInteractionMechanic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractionMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionMechanic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionMechanic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionMechanic, 102414515);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractionMechanic>()
	{
		return UInteractionMechanic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionMechanic(Z_Construct_UClass_UInteractionMechanic, &UInteractionMechanic::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractionMechanic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionMechanic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
