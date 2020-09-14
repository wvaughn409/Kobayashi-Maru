// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsFramework/Public/SelectionSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionSet() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USelectionSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USelectionSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSelectionSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSelectionSet();
// End Cross Module References
	void USelectionSet::StaticRegisterNativesUSelectionSet()
	{
	}
	UClass* Z_Construct_UClass_USelectionSet_NoRegister()
	{
		return USelectionSet::StaticClass();
	}
	struct Z_Construct_UClass_USelectionSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectionSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectionSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USelectionSet is a base class for Selection objects. \n * For example the UMeshSelectionSet implementation stores information on selected\n * triangles, vertices, etc. \n */" },
		{ "IncludePath", "SelectionSet.h" },
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
		{ "ToolTip", "USelectionSet is a base class for Selection objects.\nFor example the UMeshSelectionSet implementation stores information on selected\ntriangles, vertices, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectionSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectionSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectionSet_Statics::ClassParams = {
		&USelectionSet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USelectionSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectionSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectionSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectionSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectionSet, 930644634);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USelectionSet>()
	{
		return USelectionSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectionSet(Z_Construct_UClass_USelectionSet, &USelectionSet::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("USelectionSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectionSet);
	void UMeshSelectionSet::StaticRegisterNativesUMeshSelectionSet()
	{
	}
	UClass* Z_Construct_UClass_UMeshSelectionSet_NoRegister()
	{
		return UMeshSelectionSet::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSelectionSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Faces;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Faces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSelectionSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USelectionSet,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSelectionSet is an implementation of USelectionSet that represents selections on indexed meshes.\n * Vertices, Edges, Faces, and Groups can be selected.\n */" },
		{ "IncludePath", "SelectionSet.h" },
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
		{ "ToolTip", "UMeshSelectionSet is an implementation of USelectionSet that represents selections on indexed meshes.\nVertices, Edges, Faces, and Groups can be selected." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSelectionSet, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces = { "Faces", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSelectionSet, Faces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_Inner = { "Faces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSelectionSet, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSelectionSet, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSelectionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSelectionSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionSet_Statics::ClassParams = {
		&UMeshSelectionSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSelectionSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSelectionSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshSelectionSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshSelectionSet, 1578145132);
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSelectionSet>()
	{
		return UMeshSelectionSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshSelectionSet(Z_Construct_UClass_UMeshSelectionSet, &UMeshSelectionSet::StaticClass, TEXT("/Script/InteractiveToolsFramework"), TEXT("UMeshSelectionSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
