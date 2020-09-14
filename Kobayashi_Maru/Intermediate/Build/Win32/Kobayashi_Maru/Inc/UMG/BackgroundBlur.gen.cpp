// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/BackgroundBlur.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlur() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UBackgroundBlur::execSetLowQualityFallbackBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowQualityFallbackBrush(Z_Param_Out_InBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlur::execSetBlurStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlurStrength(Z_Param_InStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlur::execSetBlurRadius)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InBlurRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlurRadius(Z_Param_InBlurRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlur::execSetApplyAlphaToBlur)
	{
		P_GET_UBOOL(Z_Param_bInApplyAlphaToBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetApplyAlphaToBlur(Z_Param_bInApplyAlphaToBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlur::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlur::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlur::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UBackgroundBlur::StaticRegisterNativesUBackgroundBlur()
	{
		UClass* Class = UBackgroundBlur::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetApplyAlphaToBlur", &UBackgroundBlur::execSetApplyAlphaToBlur },
			{ "SetBlurRadius", &UBackgroundBlur::execSetBlurRadius },
			{ "SetBlurStrength", &UBackgroundBlur::execSetBlurStrength },
			{ "SetHorizontalAlignment", &UBackgroundBlur::execSetHorizontalAlignment },
			{ "SetLowQualityFallbackBrush", &UBackgroundBlur::execSetLowQualityFallbackBrush },
			{ "SetPadding", &UBackgroundBlur::execSetPadding },
			{ "SetVerticalAlignment", &UBackgroundBlur::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics
	{
		struct BackgroundBlur_eventSetApplyAlphaToBlur_Parms
		{
			bool bInApplyAlphaToBlur;
		};
		static void NewProp_bInApplyAlphaToBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInApplyAlphaToBlur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit(void* Obj)
	{
		((BackgroundBlur_eventSetApplyAlphaToBlur_Parms*)Obj)->bInApplyAlphaToBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur = { "bInApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BackgroundBlur_eventSetApplyAlphaToBlur_Parms), &Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetApplyAlphaToBlur", nullptr, nullptr, sizeof(BackgroundBlur_eventSetApplyAlphaToBlur_Parms), Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics
	{
		struct BackgroundBlur_eventSetBlurRadius_Parms
		{
			int32 InBlurRadius;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InBlurRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::NewProp_InBlurRadius = { "InBlurRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackgroundBlur_eventSetBlurRadius_Parms, InBlurRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::NewProp_InBlurRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetBlurRadius", nullptr, nullptr, sizeof(BackgroundBlur_eventSetBlurRadius_Parms), Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics
	{
		struct BackgroundBlur_eventSetBlurStrength_Parms
		{
			float InStrength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::NewProp_InStrength = { "InStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackgroundBlur_eventSetBlurStrength_Parms, InStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::NewProp_InStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetBlurStrength", nullptr, nullptr, sizeof(BackgroundBlur_eventSetBlurStrength_Parms), Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics
	{
		struct BackgroundBlur_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackgroundBlur_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(BackgroundBlur_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics
	{
		struct BackgroundBlur_eventSetLowQualityFallbackBrush_Parms
		{
			FSlateBrush InBrush;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackgroundBlur_eventSetLowQualityFallbackBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetLowQualityFallbackBrush", nullptr, nullptr, sizeof(BackgroundBlur_eventSetLowQualityFallbackBrush_Parms), Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics
	{
		struct BackgroundBlur_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackgroundBlur_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetPadding", nullptr, nullptr, sizeof(BackgroundBlur_eventSetPadding_Parms), Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics
	{
		struct BackgroundBlur_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackgroundBlur_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(BackgroundBlur_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister()
	{
		return UBackgroundBlur::StaticClass();
	}
	struct Z_Construct_UClass_UBackgroundBlur_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowQualityFallbackBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowQualityFallbackBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutoRadiusCalculation_MetaData[];
#endif
		static void NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutoRadiusCalculation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlurStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAlphaToBlur_MetaData[];
#endif
		static void NewProp_bApplyAlphaToBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAlphaToBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackgroundBlur_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackgroundBlur_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur, "SetApplyAlphaToBlur" }, // 4017494126
		{ &Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius, "SetBlurRadius" }, // 3991642890
		{ &Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength, "SetBlurStrength" }, // 3532608
		{ &Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 120169086
		{ &Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush, "SetLowQualityFallbackBrush" }, // 4157312269
		{ &Z_Construct_UFunction_UBackgroundBlur_SetPadding, "SetPadding" }, // 2685161216
		{ &Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment, "SetVerticalAlignment" }, // 177738256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A background blur is a container widget that can contain one child widget, providing an opportunity \n * to surround it with adjustable padding and apply a post-process Gaussian blur to all content beneath the widget.\n *\n * * Single Child\n * * Blur Effect\n */" },
		{ "IncludePath", "Components/BackgroundBlur.h" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "A background blur is a container widget that can contain one child widget, providing an opportunity\nto surround it with adjustable padding and apply a post-process Gaussian blur to all content beneath the widget.\n\n* Single Child\n* Blur Effect" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * An image to draw instead of applying a blur when low quality override mode is enabled. \n\x09 * You can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1. \n\x09 * This is usually done in the project's scalability settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "An image to draw instead of applying a blur when low quality override mode is enabled.\nYou can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\nThis is usually done in the project's scalability settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush = { "LowQualityFallbackBrush", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackgroundBlur, LowQualityFallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\n\x09 * A larger value is more costly but allows for stronger blurs.  \n\x09 */" },
		{ "EditCondition", "bOverrideAutoRadiusCalculation" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\nA larger value is more costly but allows for stronger blurs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackgroundBlur, BlurRadius), METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_MetaData[] = {
		{ "Comment", "/** Whether or not the radius should be computed automatically or if it should use the radius */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "Whether or not the radius should be computed automatically or if it should use the radius" },
	};
#endif
	void Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj)
	{
		((UBackgroundBlur*)Obj)->bOverrideAutoRadiusCalculation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation = { "bOverrideAutoRadiusCalculation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBackgroundBlur), &Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength = { "BlurStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackgroundBlur, BlurStrength), METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to modulate the strength of the blur based on the widget alpha. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "True to modulate the strength of the blur based on the widget alpha." },
	};
#endif
	void Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_SetBit(void* Obj)
	{
		((UBackgroundBlur*)Obj)->bApplyAlphaToBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur = { "bApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBackgroundBlur), &Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackgroundBlur, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackgroundBlur, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackgroundBlur, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackgroundBlur_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlur>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBackgroundBlur_Statics::ClassParams = {
		&UBackgroundBlur::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlur_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackgroundBlur()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBackgroundBlur_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBackgroundBlur, 4226632335);
	template<> UMG_API UClass* StaticClass<UBackgroundBlur>()
	{
		return UBackgroundBlur::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBackgroundBlur(Z_Construct_UClass_UBackgroundBlur, &UBackgroundBlur::StaticClass, TEXT("/Script/UMG"), TEXT("UBackgroundBlur"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlur);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlur)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
