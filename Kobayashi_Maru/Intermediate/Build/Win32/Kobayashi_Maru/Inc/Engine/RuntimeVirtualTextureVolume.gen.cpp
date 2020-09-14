// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/RuntimeVirtualTextureVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
// End Cross Module References
	void ARuntimeVirtualTextureVolume::StaticRegisterNativesARuntimeVirtualTextureVolume()
	{
	}
	UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister()
	{
		return ARuntimeVirtualTextureVolume::StaticClass();
	}
	struct Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualTextureComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Actor Collision Cooking Input LOD Replication" },
		{ "IncludePath", "VT/RuntimeVirtualTextureVolume.h" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Actor used to place a URuntimeVirtualTexture in the world." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box_MetaData[] = {
		{ "Comment", "/** Box for visualizing virtual texture extents. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Box for visualizing virtual texture extents." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARuntimeVirtualTextureVolume, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Component that owns the runtime virtual texture. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Component that owns the runtime virtual texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent = { "VirtualTextureComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARuntimeVirtualTextureVolume, VirtualTextureComponent), Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARuntimeVirtualTextureVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::ClassParams = {
		&ARuntimeVirtualTextureVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARuntimeVirtualTextureVolume, 2214898703);
	template<> ENGINE_API UClass* StaticClass<ARuntimeVirtualTextureVolume>()
	{
		return ARuntimeVirtualTextureVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARuntimeVirtualTextureVolume(Z_Construct_UClass_ARuntimeVirtualTextureVolume, &ARuntimeVirtualTextureVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ARuntimeVirtualTextureVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARuntimeVirtualTextureVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
