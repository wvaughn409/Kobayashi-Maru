// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/BaseTools/MeshSurfacePointTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSurfacePointTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
// End Cross Module References
	void UMeshSurfacePointToolBuilder::StaticRegisterNativesUMeshSurfacePointToolBuilder()
	{
	}
	UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister()
	{
		return UMeshSurfacePointToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointToolBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams = {
		&UMeshSurfacePointToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshSurfacePointToolBuilder, 3839791170);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSurfacePointToolBuilder>()
	{
		return UMeshSurfacePointToolBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshSurfacePointToolBuilder(Z_Construct_UClass_UMeshSurfacePointToolBuilder, &UMeshSurfacePointToolBuilder::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UMeshSurfacePointToolBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointToolBuilder);
	void UMeshSurfacePointTool::StaticRegisterNativesUMeshSurfacePointTool()
	{
	}
	UClass* Z_Construct_UClass_UMeshSurfacePointTool_NoRegister()
	{
		return UMeshSurfacePointTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSurfacePointTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSurfacePointTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSurfacePointTool is a base Tool implementation that can be used to implement various\n * \"point on surface\" interactions. The tool acts on an input IMeshDescriptionSource object,\n * which the standard Builder can extract from the current selection (eg Editor selection).\n * \n * Subclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions\n * to implement custom behavior.\n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
		{ "ToolTip", "UMeshSurfacePointTool is a base Tool implementation that can be used to implement various\n\"point on surface\" interactions. The tool acts on an input IMeshDescriptionSource object,\nwhich the standard Builder can extract from the current selection (eg Editor selection).\n\nSubclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions\nto implement custom behavior." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSurfacePointTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams = {
		&UMeshSurfacePointTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSurfacePointTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshSurfacePointTool, 3294592585);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSurfacePointTool>()
	{
		return UMeshSurfacePointTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshSurfacePointTool(Z_Construct_UClass_UMeshSurfacePointTool, &UMeshSurfacePointTool::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UMeshSurfacePointTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
