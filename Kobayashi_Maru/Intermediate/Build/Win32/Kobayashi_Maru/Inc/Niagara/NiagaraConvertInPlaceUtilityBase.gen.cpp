// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraConvertInPlaceUtilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraConvertInPlaceUtilityBase() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraConvertInPlaceUtilityBase::StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister()
	{
		return UNiagaraConvertInPlaceUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraConvertInPlaceUtilityBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraConvertInPlaceUtilityBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraConvertInPlaceUtilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams = {
		&UNiagaraConvertInPlaceUtilityBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraConvertInPlaceUtilityBase, 1899629053);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraConvertInPlaceUtilityBase>()
	{
		return UNiagaraConvertInPlaceUtilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraConvertInPlaceUtilityBase(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase, &UNiagaraConvertInPlaceUtilityBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraConvertInPlaceUtilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraConvertInPlaceUtilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
