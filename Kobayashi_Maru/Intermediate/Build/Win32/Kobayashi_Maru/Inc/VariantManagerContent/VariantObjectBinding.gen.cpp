// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/VariantObjectBinding.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantObjectBinding() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionCaller();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UVariantObjectBinding::StaticRegisterNativesUVariantObjectBinding()
	{
	}
	UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister()
	{
		return UVariantObjectBinding::StaticClass();
	}
	struct Z_Construct_UClass_UVariantObjectBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionCallers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionCallers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionCallers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapturedProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapturedProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazyObjectPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LazyObjectPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedActorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedActorLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariantObjectBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VariantObjectBinding.h" },
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
		{ "ScriptName", "UVariantActorBinding" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers = { "FunctionCallers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantObjectBinding, FunctionCallers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_Inner = { "FunctionCallers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFunctionCaller, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties = { "CapturedProperties", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantObjectBinding, CapturedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_Inner = { "CapturedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr = { "LazyObjectPtr", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantObjectBinding, LazyObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr = { "ObjectPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantObjectBinding, ObjectPtr), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whenever we resolve, we cache the actor label here so that if we can't\n\x09 * resolve anymore we can better indicate which actor is missing, instead of just\n\x09 * saying 'Unloaded binding'\n\x09 */" },
		{ "ModuleRelativePath", "Public/VariantObjectBinding.h" },
		{ "ToolTip", "Whenever we resolve, we cache the actor label here so that if we can't\nresolve anymore we can better indicate which actor is missing, instead of just\nsaying 'Unloaded binding'" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel = { "CachedActorLabel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariantObjectBinding, CachedActorLabel), METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariantObjectBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_FunctionCallers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CapturedProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_LazyObjectPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_ObjectPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantObjectBinding_Statics::NewProp_CachedActorLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariantObjectBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariantObjectBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariantObjectBinding_Statics::ClassParams = {
		&UVariantObjectBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVariantObjectBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariantObjectBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantObjectBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariantObjectBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariantObjectBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariantObjectBinding, 3624597741);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariantObjectBinding>()
	{
		return UVariantObjectBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariantObjectBinding(Z_Construct_UClass_UVariantObjectBinding, &UVariantObjectBinding::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UVariantObjectBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariantObjectBinding);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantObjectBinding)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
