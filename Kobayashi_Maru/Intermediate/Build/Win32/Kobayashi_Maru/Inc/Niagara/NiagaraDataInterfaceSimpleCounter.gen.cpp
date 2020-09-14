// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceSimpleCounter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSimpleCounter() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceSimpleCounter::StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_NoRegister()
	{
		return UNiagaraDataInterfaceSimpleCounter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams[] = {
		{ "Category", "Counting" },
		{ "Comment", "/** Data Interface allowing a counter that starts at zero when created and increases every time it is sampled. Note that for now this is a signed integer, meaning that it can go negative when it loops past INT_MAX. */" },
		{ "DisplayName", "Simple Counter" },
		{ "IncludePath", "NiagaraDataInterfaceSimpleCounter.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "Data Interface allowing a counter that starts at zero when created and increases every time it is sampled. Note that for now this is a signed integer, meaning that it can go negative when it loops past INT_MAX." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSimpleCounter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::ClassParams = {
		&UNiagaraDataInterfaceSimpleCounter::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceSimpleCounter, 1438927003);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSimpleCounter>()
	{
		return UNiagaraDataInterfaceSimpleCounter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceSimpleCounter(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter, &UNiagaraDataInterfaceSimpleCounter::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceSimpleCounter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSimpleCounter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
