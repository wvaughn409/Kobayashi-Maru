// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraRendererProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraRendererProperties() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraRendererProperties::StaticRegisterNativesUNiagaraRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister()
	{
		return UNiagaraRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMotionBlurEnabled_MetaData[];
#endif
		static void NewProp_bMotionBlurEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMotionBlurEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrderHint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrderHint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Is motion blur enabled on this renderer or not, the material must also have motion blur enabled. */" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "Is motion blur enabled on this renderer or not, the material must also have motion blur enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_SetBit(void* Obj)
	{
		((UNiagaraRendererProperties*)Obj)->bMotionBlurEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled = { "bMotionBlurEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraRendererProperties), &Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UNiagaraRendererProperties*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraRendererProperties), &Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint_MetaData[] = {
		{ "Category", "Sort Order" },
		{ "Comment", "/** By default, emitters are drawn in the order that they are added to the system. This value will allow you to control the order in a more fine-grained manner. \n\x09Materials of the same type (i.e. Transparent) will draw in order from lowest to highest within the system. The default value is 0.*/" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "By default, emitters are drawn in the order that they are added to the system. This value will allow you to control the order in a more fine-grained manner.\n      Materials of the same type (i.e. Transparent) will draw in order from lowest to highest within the system. The default value is 0." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint = { "SortOrderHint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRendererProperties, SortOrderHint), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraRendererProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::ClassParams = {
		&UNiagaraRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraRendererProperties, 2320917229);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraRendererProperties>()
	{
		return UNiagaraRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraRendererProperties(Z_Construct_UClass_UNiagaraRendererProperties, &UNiagaraRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraRendererProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
