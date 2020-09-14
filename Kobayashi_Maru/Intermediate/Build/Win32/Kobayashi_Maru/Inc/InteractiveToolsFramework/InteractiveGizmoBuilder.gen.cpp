// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveGizmoBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmoBuilder() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveGizmoBuilder::StaticRegisterNativesUInteractiveGizmoBuilder()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister()
	{
		return UInteractiveGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).\n * These are registered with the InteractiveGizmoManager, which calls BuildGizmo().\n * This is an abstract base class, you must subclass it in order to create your particular Gizmo instance\n */" },
		{ "IncludePath", "InteractiveGizmoBuilder.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoBuilder.h" },
		{ "ToolTip", "A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).\nThese are registered with the InteractiveGizmoManager, which calls BuildGizmo().\nThis is an abstract base class, you must subclass it in order to create your particular Gizmo instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::ClassParams = {
		&UInteractiveGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveGizmoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveGizmoBuilder, 2907329266);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmoBuilder>()
	{
		return UInteractiveGizmoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveGizmoBuilder(Z_Construct_UClass_UInteractiveGizmoBuilder, &UInteractiveGizmoBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveGizmoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmoBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
