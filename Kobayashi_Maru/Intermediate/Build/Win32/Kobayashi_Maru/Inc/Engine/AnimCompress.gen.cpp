// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
// End Cross Module References
	void UAnimCompress::StaticRegisterNativesUAnimCompress()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_NoRegister()
	{
		return UAnimCompress::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsSkeleton_MetaData[];
#endif
		static void NewProp_bNeedsSkeleton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of scale data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of scale data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat = { "ScaleCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, ScaleCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of rotation data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of rotation data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat = { "RotationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of translation data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of translation data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat = { "TranslationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData[] = {
		{ "Comment", "/** Compression algorithms requiring a skeleton should set this value to true. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Compression algorithms requiring a skeleton should set this value to true." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit(void* Obj)
	{
		((UAnimCompress*)Obj)->bNeedsSkeleton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton = { "bNeedsSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress), &Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_Statics::ClassParams = {
		&UAnimCompress::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::PropPointers),
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress, 617859294);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress>()
	{
		return UAnimCompress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress(Z_Construct_UClass_UAnimCompress, &UAnimCompress::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
