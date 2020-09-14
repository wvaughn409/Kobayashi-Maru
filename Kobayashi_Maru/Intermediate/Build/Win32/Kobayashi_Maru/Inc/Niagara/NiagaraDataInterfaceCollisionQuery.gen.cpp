// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceCollisionQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCollisionQuery() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceCollisionQuery::StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_NoRegister()
	{
		return UNiagaraDataInterfaceCollisionQuery::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface allowing sampling of color curves. */" },
		{ "DisplayName", "Collision Query" },
		{ "IncludePath", "NiagaraDataInterfaceCollisionQuery.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCollisionQuery.h" },
		{ "ToolTip", "Data Interface allowing sampling of color curves." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCollisionQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::ClassParams = {
		&UNiagaraDataInterfaceCollisionQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceCollisionQuery, 4063629208);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCollisionQuery>()
	{
		return UNiagaraDataInterfaceCollisionQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceCollisionQuery(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery, &UNiagaraDataInterfaceCollisionQuery::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceCollisionQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCollisionQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
