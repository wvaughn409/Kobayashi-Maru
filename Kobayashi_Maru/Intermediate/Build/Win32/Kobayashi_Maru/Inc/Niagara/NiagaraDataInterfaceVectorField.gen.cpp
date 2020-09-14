// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceVectorField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorField() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceVectorField::StaticRegisterNativesUNiagaraDataInterfaceVectorField()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister()
	{
		return UNiagaraDataInterfaceVectorField::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[];
#endif
		static void NewProp_bTileZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[];
#endif
		static void NewProp_bTileY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[];
#endif
		static void NewProp_bTileX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams[] = {
		{ "Category", "Vector Field" },
		{ "DisplayName", "Vector Field" },
		{ "IncludePath", "NiagaraDataInterfaceVectorField.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceVectorField*)Obj)->bTileZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceVectorField*)Obj)->bTileY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceVectorField*)Obj)->bTileX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Vector field to sample from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
		{ "ToolTip", "Vector field to sample from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceVectorField, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVectorField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams = {
		&UNiagaraDataInterfaceVectorField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceVectorField, 3367158982);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVectorField>()
	{
		return UNiagaraDataInterfaceVectorField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceVectorField(Z_Construct_UClass_UNiagaraDataInterfaceVectorField, &UNiagaraDataInterfaceVectorField::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceVectorField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVectorField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
