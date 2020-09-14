// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraDataInterfaceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceBase() {}
// Cross Module References
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References
	void UNiagaraDataInterfaceBase::StaticRegisterNativesUNiagaraDataInterfaceBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister()
	{
		return UNiagaraDataInterfaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for all Niagara data interfaces. */" },
		{ "IncludePath", "NiagaraDataInterfaceBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceBase.h" },
		{ "ToolTip", "Base class for all Niagara data interfaces." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams = {
		&UNiagaraDataInterfaceBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceBase, 142786485);
	template<> NIAGARACORE_API UClass* StaticClass<UNiagaraDataInterfaceBase>()
	{
		return UNiagaraDataInterfaceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceBase(Z_Construct_UClass_UNiagaraDataInterfaceBase, &UNiagaraDataInterfaceBase::StaticClass, TEXT("/Script/NiagaraCore"), TEXT("UNiagaraDataInterfaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
