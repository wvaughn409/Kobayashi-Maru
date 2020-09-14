// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimBoneCompressionCodec::StaticRegisterNativesUAnimBoneCompressionCodec()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister()
	{
		return UAnimBoneCompressionCodec::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Base class for all bone compression codecs.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimBoneCompressionCodec.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionCodec.h" },
		{ "ToolTip", "* Base class for all bone compression codecs." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Description for this codec. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionCodec.h" },
		{ "ToolTip", "Description for this codec." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec, Description), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::ClassParams = {
		&UAnimBoneCompressionCodec::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec, 309048107);
	template<> ENGINE_API UClass* StaticClass<UAnimBoneCompressionCodec>()
	{
		return UAnimBoneCompressionCodec::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec(Z_Construct_UClass_UAnimBoneCompressionCodec, &UAnimBoneCompressionCodec::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBoneCompressionCodec"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
