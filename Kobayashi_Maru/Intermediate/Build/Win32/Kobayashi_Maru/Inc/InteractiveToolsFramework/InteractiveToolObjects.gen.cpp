// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveToolObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolObjects() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void AInternalToolFrameworkActor::StaticRegisterNativesAInternalToolFrameworkActor()
	{
	}
	UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister()
	{
		return AInternalToolFrameworkActor::StaticClass();
	}
	struct Z_Construct_UClass_AInternalToolFrameworkActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInternalToolFrameworkActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AInternalToolFrameworkActor is a base class for internal Actors that the\n * ToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors\n * may need special-case handling, for example to prevent the user from\n * selecting and deleting them. \n */" },
		{ "IncludePath", "InteractiveToolObjects.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
		{ "ToolTip", "AInternalToolFrameworkActor is a base class for internal Actors that the\nToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors\nmay need special-case handling, for example to prevent the user from\nselecting and deleting them." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInternalToolFrameworkActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInternalToolFrameworkActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInternalToolFrameworkActor_Statics::ClassParams = {
		&AInternalToolFrameworkActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInternalToolFrameworkActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInternalToolFrameworkActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInternalToolFrameworkActor, 2090442664);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<AInternalToolFrameworkActor>()
	{
		return AInternalToolFrameworkActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInternalToolFrameworkActor(Z_Construct_UClass_AInternalToolFrameworkActor, &AInternalToolFrameworkActor::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("AInternalToolFrameworkActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInternalToolFrameworkActor);
	void UToolFrameworkComponent::StaticRegisterNativesUToolFrameworkComponent()
	{
	}
	UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister()
	{
		return UToolFrameworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UToolFrameworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolFrameworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolFrameworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolFrameworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolFrameworkComponent_Statics::ClassParams = {
		&UToolFrameworkComponent::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolFrameworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolFrameworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolFrameworkComponent, 3467600314);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolFrameworkComponent>()
	{
		return UToolFrameworkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolFrameworkComponent(Z_Construct_UClass_UToolFrameworkComponent, &UToolFrameworkComponent::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UToolFrameworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolFrameworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
