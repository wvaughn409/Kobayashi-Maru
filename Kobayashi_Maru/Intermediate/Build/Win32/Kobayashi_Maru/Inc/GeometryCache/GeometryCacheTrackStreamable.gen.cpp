// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrackStreamable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackStreamable() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister();
// End Cross Module References
	void UGeometryCacheTrackStreamable::StaticRegisterNativesUGeometryCacheTrackStreamable()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister()
	{
		return UGeometryCacheTrackStreamable::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSampleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSampleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Codec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n\x09""Derived GeometryCacheTrack class, used for Transform animation.\n\n\x09\\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.\n\x09""Be sure to keep the implementation of this class valid so it properly releases\n\x09the render resoruce before making any changes to this object that may affect the render thread.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackStreamable.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation.\n\n\\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.\nBe sure to keep the implementation of this class valid so it properly releases\nthe render resoruce before making any changes to this object that may affect the render thread." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime = { "StartSampleTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheTrackStreamable, StartSampleTime), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Codec for this track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
		{ "ToolTip", "Codec for this track" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheTrackStreamable, Codec), Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrackStreamable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams = {
		&UGeometryCacheTrackStreamable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrackStreamable, 946422999);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheTrackStreamable>()
	{
		return UGeometryCacheTrackStreamable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrackStreamable(Z_Construct_UClass_UGeometryCacheTrackStreamable, &UGeometryCacheTrackStreamable::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrackStreamable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrackStreamable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrackStreamable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
