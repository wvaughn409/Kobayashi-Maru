// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCache.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCache() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	void UGeometryCache::StaticRegisterNativesUGeometryCache()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCache_NoRegister()
	{
		return UGeometryCache::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A Geometry Cache is a piece/set of geometry that consists of individual Mesh/Transformation samples.\n* In contrast with Static Meshes they can have their vertices animated in certain ways. * \n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GeometryCache.h" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "A Geometry Cache is a piece/set of geometry that consists of individual Mesh/Transformation samples.\nIn contrast with Static Meshes they can have their vertices animated in certain ways. *" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCache, EndFrame), METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCache, StartFrame), METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** GeometryCache track defining the samples/geometry data for this GeomCache instance */" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "GeometryCache track defining the samples/geometry data for this GeomCache instance" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCache, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGeometryCacheTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCache, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCache, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this Geometry cache object*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "Importing data and options used for this Geometry cache object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCache_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGeometryCache, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCache_Statics::ClassParams = {
		&UGeometryCache::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCache_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCache, 809492055);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCache>()
	{
		return UGeometryCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCache(Z_Construct_UClass_UGeometryCache, &UGeometryCache::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCache);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCache)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
