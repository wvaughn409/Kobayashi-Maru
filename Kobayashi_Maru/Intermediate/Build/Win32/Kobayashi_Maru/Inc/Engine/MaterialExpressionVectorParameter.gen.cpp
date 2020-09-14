// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionVectorParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVectorParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionVectorParameter::StaticRegisterNativesUMaterialExpressionVectorParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister()
	{
		return UMaterialExpressionVectorParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelNames;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveDataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimitiveDataIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPrimitiveData_MetaData[];
#endif
		static void NewProp_bUseCustomPrimitiveData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPrimitiveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVectorParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames_MetaData[] = {
		{ "Category", "ParameterCustomization" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionVectorParameter, ChannelNames), Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex = { "PrimitiveDataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionVectorParameter, PrimitiveDataIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit(void* Obj)
	{
		((UMaterialExpressionVectorParameter*)Obj)->bUseCustomPrimitiveData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData = { "bUseCustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionVectorParameter), &Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
		{ "OnlyUpdateOnInteractionEnd", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVectorParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::ClassParams = {
		&UMaterialExpressionVectorParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionVectorParameter, 2462787125);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVectorParameter>()
	{
		return UMaterialExpressionVectorParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionVectorParameter(Z_Construct_UClass_UMaterialExpressionVectorParameter, &UMaterialExpressionVectorParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionVectorParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVectorParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
