// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseGizmos/GizmoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoActor() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void AGizmoActor::StaticRegisterNativesAGizmoActor()
	{
	}
	UClass* Z_Construct_UClass_AGizmoActor_NoRegister()
	{
		return AGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInternalToolFrameworkActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AGizmoActor is a base class for Actors that would be created to represent Gizmos in the scene.\n * Currently this does not involve any special functionality, but a set of static functions\n * are provided to create default Components commonly used in Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoActor.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoActor.h" },
		{ "ToolTip", "AGizmoActor is a base class for Actors that would be created to represent Gizmos in the scene.\nCurrently this does not involve any special functionality, but a set of static functions\nare provided to create default Components commonly used in Gizmos." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGizmoActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGizmoActor_Statics::ClassParams = {
		&AGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGizmoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGizmoActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGizmoActor, 1783551881);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<AGizmoActor>()
	{
		return AGizmoActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGizmoActor(Z_Construct_UClass_AGizmoActor, &AGizmoActor::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("AGizmoActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGizmoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
