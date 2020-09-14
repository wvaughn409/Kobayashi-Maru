// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraMergeable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMergeable() {}
// Cross Module References
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable_NoRegister();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NiagaraCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UNiagaraMergeable::StaticRegisterNativesUNiagaraMergeable()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraMergeable_NoRegister()
	{
		return UNiagaraMergeable::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMergeable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MergeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMergeable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMergeable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraMergeable.h" },
		{ "ModuleRelativePath", "Public/NiagaraMergeable.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMergeable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId = { "MergeId", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMergeable, MergeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMergeable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMergeable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMergeable_Statics::ClassParams = {
		&UNiagaraMergeable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMergeable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMergeable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraMergeable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraMergeable, 743147192);
	template<> NIAGARACORE_API UClass* StaticClass<UNiagaraMergeable>()
	{
		return UNiagaraMergeable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraMergeable(Z_Construct_UClass_UNiagaraMergeable, &UNiagaraMergeable::StaticClass, TEXT("/Script/NiagaraCore"), TEXT("UNiagaraMergeable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMergeable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
