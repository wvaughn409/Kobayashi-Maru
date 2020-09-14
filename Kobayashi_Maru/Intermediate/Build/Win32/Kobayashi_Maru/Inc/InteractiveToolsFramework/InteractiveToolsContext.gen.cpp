// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/InteractiveToolsContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolsContext() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();
// End Cross Module References
	void UInteractiveToolsContext::StaticRegisterNativesUInteractiveToolsContext()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister()
	{
		return UInteractiveToolsContext::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ToolManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputRouter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputRouter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * InteractiveToolsContext owns a ToolManager and an InputRouter. This is just a top-level \n * UObject container, however implementations like UEdModeInteractiveToolsContext extend\n * this class to make it easier to connect external systems (like an FEdMode) to the ToolsFramework.\n */" },
		{ "IncludePath", "InteractiveToolsContext.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "InteractiveToolsContext owns a ToolManager and an InputRouter. This is just a top-level\nUObject container, however implementations like UEdModeInteractiveToolsContext extend\nthis class to make it easier to connect external systems (like an FEdMode) to the ToolsFramework." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass = { "ToolManagerClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolsContext, ToolManagerClass), Z_Construct_UClass_UInteractiveToolManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager_MetaData[] = {
		{ "Comment", "/** current UInteractiveGizmoManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInteractiveGizmoManager for this Context" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager = { "GizmoManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolsContext, GizmoManager), Z_Construct_UClass_UInteractiveGizmoManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager_MetaData[] = {
		{ "Comment", "/** current UInteractiveToolManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInteractiveToolManager for this Context" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager = { "ToolManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolsContext, ToolManager), Z_Construct_UClass_UInteractiveToolManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter_MetaData[] = {
		{ "Comment", "/** current UInputRouter for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInputRouter for this Context" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter = { "InputRouter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractiveToolsContext, InputRouter), Z_Construct_UClass_UInputRouter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsContext_Statics::ClassParams = {
		&UInteractiveToolsContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolsContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveToolsContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveToolsContext, 3255523600);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolsContext>()
	{
		return UInteractiveToolsContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveToolsContext(Z_Construct_UClass_UInteractiveToolsContext, &UInteractiveToolsContext::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UInteractiveToolsContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
