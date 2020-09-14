// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceCurveBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCurveBase() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceCurveBase::StaticRegisterNativesUNiagaraDataInterfaceCurveBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_NoRegister()
	{
		return UNiagaraDataInterfaceCurveBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowInCurveEditor_MetaData[];
#endif
		static void NewProp_ShowInCurveEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowInCurveEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OptimizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideOptimizeThreshold_MetaData[];
#endif
		static void NewProp_bOverrideOptimizeThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideOptimizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeLUT_MetaData[];
#endif
		static void NewProp_bOptimizeLUT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeLUT;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLUT_MetaData[];
#endif
		static void NewProp_bUseLUT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTNumSamplesMinusOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LUTNumSamplesMinusOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTInvTimeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LUTInvTimeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTMaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LUTMaxTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTMinTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LUTMinTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShaderLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShaderLUT;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShaderLUT_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Base class for curve data interfaces which facilitates handling the curve data in a standardized way. */" },
		{ "DisplayName", "Float Curve" },
		{ "IncludePath", "NiagaraDataInterfaceCurveBase.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for curve data interfaces which facilitates handling the curve data in a standardized way." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceCurveBase*)Obj)->ShowInCurveEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor = { "ShowInCurveEditor", nullptr, (EPropertyFlags)0x0010000800002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Threshold used to optimize the LUT. */" },
		{ "EditCondition", "bOverrideOptimizeThreshold" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "Threshold used to optimize the LUT." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold = { "OptimizeThreshold", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, OptimizeThreshold), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceCurveBase*)Obj)->bOverrideOptimizeThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold = { "bOverrideOptimizeThreshold", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Do we optimize the LUT, this saves memory but may introduce errors.  Errors can be reduced modifying the threshold. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "Do we optimize the LUT, this saves memory but may introduce errors.  Errors can be reduced modifying the threshold." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceCurveBase*)Obj)->bOptimizeLUT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT = { "bOptimizeLUT", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceCurveBase*)Obj)->bUseLUT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT = { "bUseLUT", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne = { "LUTNumSamplesMinusOne", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTNumSamplesMinusOne), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange = { "LUTInvTimeRange", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTInvTimeRange), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime = { "LUTMaxTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTMaxTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime = { "LUTMinTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTMinTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT = { "ShaderLUT", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, ShaderLUT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_Inner = { "ShaderLUT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShowInCurveEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCurveBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::ClassParams = {
		&UNiagaraDataInterfaceCurveBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceCurveBase, 3363105862);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCurveBase>()
	{
		return UNiagaraDataInterfaceCurveBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceCurveBase(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase, &UNiagaraDataInterfaceCurveBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceCurveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCurveBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceCurveBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
