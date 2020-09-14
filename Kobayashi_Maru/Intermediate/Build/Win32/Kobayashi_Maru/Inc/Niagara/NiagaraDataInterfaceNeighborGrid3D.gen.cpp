// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceNeighborGrid3D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceNeighborGrid3D() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceNeighborGrid3D::StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister()
	{
		return UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNeighborsPerVoxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxNeighborsPerVoxel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "DisplayName", "Neighbor Grid3D" },
		{ "IncludePath", "NiagaraDataInterfaceNeighborGrid3D.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceNeighborGrid3D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerVoxel_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceNeighborGrid3D.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerVoxel = { "MaxNeighborsPerVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceNeighborGrid3D, MaxNeighborsPerVoxel), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerVoxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerVoxel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerVoxel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceNeighborGrid3D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams = {
		&UNiagaraDataInterfaceNeighborGrid3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceNeighborGrid3D, 2378972668);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceNeighborGrid3D>()
	{
		return UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceNeighborGrid3D(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D, &UNiagaraDataInterfaceNeighborGrid3D::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceNeighborGrid3D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceNeighborGrid3D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
