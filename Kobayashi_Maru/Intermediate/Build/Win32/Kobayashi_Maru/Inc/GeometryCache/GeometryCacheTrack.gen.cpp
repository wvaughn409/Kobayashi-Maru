// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrack.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrack() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	void UGeometryCacheTrack::StaticRegisterNativesUGeometryCacheTrack()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister()
	{
		return UGeometryCacheTrack::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for GeometryCache tracks, stores matrix animation data and implements functionality for it */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GeometryCacheTrack.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrack.h" },
		{ "ToolTip", "Base class for GeometryCache tracks, stores matrix animation data and implements functionality for it" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The duration of this track's animation. This is an open ended interval [0..Duration[.\n\x09* If the animation is looping this is also the length of the loop.\n\x09*\n\x09* Note: This is set by the importer possibly based on user preferences. There may be less actual frames available.\n\x09* E.g. the animation has data for the first 2 seconds, but duration is set to 5, so it will loop every 5 seconds\n\x09* with the last three seconds showing a static scene.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrack.h" },
		{ "ToolTip", "The duration of this track's animation. This is an open ended interval [0..Duration[.\nIf the animation is looping this is also the length of the loop.\n\nNote: This is set by the importer possibly based on user preferences. There may be less actual frames available.\nE.g. the animation has data for the first 2 seconds, but duration is set to 5, so it will loop every 5 seconds\nwith the last three seconds showing a static scene." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCacheTrack, Duration), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrack_Statics::ClassParams = {
		&UGeometryCacheTrack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrack_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCacheTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrack, 2540952096);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheTrack>()
	{
		return UGeometryCacheTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack(Z_Construct_UClass_UGeometryCacheTrack, &UGeometryCacheTrack::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrack)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
