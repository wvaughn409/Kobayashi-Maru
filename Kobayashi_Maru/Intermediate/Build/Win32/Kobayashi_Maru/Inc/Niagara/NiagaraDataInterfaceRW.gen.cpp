// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceRW.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRW() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UNiagaraDataInterfaceRWBase::StaticRegisterNativesUNiagaraDataInterfaceRWBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister()
	{
		return UNiagaraDataInterfaceRWBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IterationShaderStages_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IterationShaderStages;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IterationShaderStages_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputShaderStages_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutputShaderStages;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OutputShaderStages_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages_MetaData[] = {
		{ "Category", "RW" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages = { "IterationShaderStages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRWBase, IterationShaderStages), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages_ElementProp = { "IterationShaderStages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages_MetaData[] = {
		{ "Category", "RW" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages = { "OutputShaderStages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRWBase, OutputShaderStages), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages_ElementProp = { "OutputShaderStages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_IterationShaderStages_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::NewProp_OutputShaderStages_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRWBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams = {
		&UNiagaraDataInterfaceRWBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceRWBase, 1117906492);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRWBase>()
	{
		return UNiagaraDataInterfaceRWBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceRWBase(Z_Construct_UClass_UNiagaraDataInterfaceRWBase, &UNiagaraDataInterfaceRWBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceRWBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRWBase);
	void UNiagaraDataInterfaceGrid3D::StaticRegisterNativesUNiagaraDataInterfaceGrid3D()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister()
	{
		return UNiagaraDataInterfaceGrid3D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldBBoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldBBoxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetGridFromVoxelSize_MetaData[];
#endif
		static void NewProp_SetGridFromVoxelSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetGridFromVoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumVoxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize = { "WorldBBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, WorldBBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid3D*)Obj)->SetGridFromVoxelSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize = { "SetGridFromVoxelSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid3D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "SetGridFromVoxelSize" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumVoxels_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "!SetGridFromVoxelSize" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumVoxels = { "NumVoxels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, NumVoxels), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumVoxels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetGridFromVoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumVoxels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid3D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceGrid3D, 3726944711);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid3D>()
	{
		return UNiagaraDataInterfaceGrid3D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceGrid3D(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D, &UNiagaraDataInterfaceGrid3D::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceGrid3D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid3D);
	void UNiagaraDataInterfaceGrid2D::StaticRegisterNativesUNiagaraDataInterfaceGrid2D()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister()
	{
		return UNiagaraDataInterfaceGrid2D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldBBoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldBBoxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetGridFromMaxAxis_MetaData[];
#endif
		static void NewProp_SetGridFromMaxAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetGridFromMaxAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCellsMaxAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCellsMaxAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCellsY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCellsY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCellsX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCellsX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize = { "WorldBBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, WorldBBoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid2D*)Obj)->SetGridFromMaxAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis = { "SetGridFromMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid2D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumAttributes), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "SetGridFromMaxAxis" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis = { "NumCellsMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsMaxAxis), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "!SetGridFromMaxAxis" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY = { "NumCellsY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsY), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "!SetGridFromMaxAxis" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX = { "NumCellsX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsX), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceGrid2D, 745154978);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid2D>()
	{
		return UNiagaraDataInterfaceGrid2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceGrid2D(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D, &UNiagaraDataInterfaceGrid2D::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceGrid2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
