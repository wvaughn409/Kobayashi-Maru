// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/Border.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorder() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UBorder::execSetDesiredSizeScale)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSizeScale(Z_Param_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execGetDynamicMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushFromMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromTexture(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushFromAsset)
	{
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrush(Z_Param_Out_InBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InBrushColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushColor(Z_Param_InBrushColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetContentColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InContentColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentColorAndOpacity(Z_Param_InContentColorAndOpacity);
		P_NATIVE_END;
	}
	void UBorder::StaticRegisterNativesUBorder()
	{
		UClass* Class = UBorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicMaterial", &UBorder::execGetDynamicMaterial },
			{ "SetBrush", &UBorder::execSetBrush },
			{ "SetBrushColor", &UBorder::execSetBrushColor },
			{ "SetBrushFromAsset", &UBorder::execSetBrushFromAsset },
			{ "SetBrushFromMaterial", &UBorder::execSetBrushFromMaterial },
			{ "SetBrushFromTexture", &UBorder::execSetBrushFromTexture },
			{ "SetContentColorAndOpacity", &UBorder::execSetContentColorAndOpacity },
			{ "SetDesiredSizeScale", &UBorder::execSetDesiredSizeScale },
			{ "SetHorizontalAlignment", &UBorder::execSetHorizontalAlignment },
			{ "SetPadding", &UBorder::execSetPadding },
			{ "SetVerticalAlignment", &UBorder::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics
	{
		struct Border_eventGetDynamicMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "GetDynamicMaterial", nullptr, nullptr, sizeof(Border_eventGetDynamicMaterial_Parms), Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_GetDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrush_Statics
	{
		struct Border_eventSetBrush_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrush", nullptr, nullptr, sizeof(Border_eventSetBrush_Parms), Z_Construct_UFunction_UBorder_SetBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushColor_Statics
	{
		struct Border_eventSetBrushColor_Parms
		{
			FLinearColor InBrushColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrushColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetBrushColor_Statics::NewProp_InBrushColor = { "InBrushColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetBrushColor_Parms, InBrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushColor_Statics::NewProp_InBrushColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushColor", nullptr, nullptr, sizeof(Border_eventSetBrushColor_Parms), Z_Construct_UFunction_UBorder_SetBrushColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics
	{
		struct Border_eventSetBrushFromAsset_Parms
		{
			USlateBrushAsset* Asset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetBrushFromAsset_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushFromAsset", nullptr, nullptr, sizeof(Border_eventSetBrushFromAsset_Parms), Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics
	{
		struct Border_eventSetBrushFromMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushFromMaterial", nullptr, nullptr, sizeof(Border_eventSetBrushFromMaterial_Parms), Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics
	{
		struct Border_eventSetBrushFromTexture_Parms
		{
			UTexture2D* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushFromTexture", nullptr, nullptr, sizeof(Border_eventSetBrushFromTexture_Parms), Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics
	{
		struct Border_eventSetContentColorAndOpacity_Parms
		{
			FLinearColor InContentColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InContentColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::NewProp_InContentColorAndOpacity = { "InContentColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetContentColorAndOpacity_Parms, InContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::NewProp_InContentColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetContentColorAndOpacity", nullptr, nullptr, sizeof(Border_eventSetContentColorAndOpacity_Parms), Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetContentColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics
	{
		struct Border_eventSetDesiredSizeScale_Parms
		{
			FVector2D InScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetDesiredSizeScale_Parms, InScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the DesireSizeScale of this border.\n\x09*\n\x09* @param InScale    The X and Y multipliers for the desired size\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Sets the DesireSizeScale of this border.\n\n@param InScale    The X and Y multipliers for the desired size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetDesiredSizeScale", nullptr, nullptr, sizeof(Border_eventSetDesiredSizeScale_Parms), Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetDesiredSizeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics
	{
		struct Border_eventSetHorizontalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Border_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetPadding_Statics
	{
		struct Border_eventSetPadding_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetPadding", nullptr, nullptr, sizeof(Border_eventSetPadding_Parms), Z_Construct_UFunction_UBorder_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics
	{
		struct Border_eventSetVerticalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Border_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Border_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBorder_NoRegister()
	{
		return UBorder::StaticClass();
	}
	struct Z_Construct_UClass_UBorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseDoubleClickEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseDoubleClickEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseMoveEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseMoveEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonUpEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonUpEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipForRightToLeftFlowDirection_MetaData[];
#endif
		static void NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipForRightToLeftFlowDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushColorDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BrushColorDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BackgroundDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ContentColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEffectWhenDisabled_MetaData[];
#endif
		static void NewProp_bShowEffectWhenDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEffectWhenDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBorder_GetDynamicMaterial, "GetDynamicMaterial" }, // 2341535280
		{ &Z_Construct_UFunction_UBorder_SetBrush, "SetBrush" }, // 906621679
		{ &Z_Construct_UFunction_UBorder_SetBrushColor, "SetBrushColor" }, // 1396276144
		{ &Z_Construct_UFunction_UBorder_SetBrushFromAsset, "SetBrushFromAsset" }, // 1871974107
		{ &Z_Construct_UFunction_UBorder_SetBrushFromMaterial, "SetBrushFromMaterial" }, // 72679244
		{ &Z_Construct_UFunction_UBorder_SetBrushFromTexture, "SetBrushFromTexture" }, // 240394666
		{ &Z_Construct_UFunction_UBorder_SetContentColorAndOpacity, "SetContentColorAndOpacity" }, // 3700974673
		{ &Z_Construct_UFunction_UBorder_SetDesiredSizeScale, "SetDesiredSizeScale" }, // 2446697259
		{ &Z_Construct_UFunction_UBorder_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 4273304429
		{ &Z_Construct_UFunction_UBorder_SetPadding, "SetPadding" }, // 3339037798
		{ &Z_Construct_UFunction_UBorder_SetVerticalAlignment, "SetVerticalAlignment" }, // 963022101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A border is a container widget that can contain one child widget, providing an opportunity \n * to surround it with a background image and adjustable padding.\n *\n * * Single Child\n * * Image\n */" },
		{ "IncludePath", "Components/Border.h" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A border is a container widget that can contain one child widget, providing an opportunity\nto surround it with a background image and adjustable padding.\n\n* Single Child\n* Image" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_Brush_MetaData[] = {
		{ "Comment", "/** Image to use for the border */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Image to use for the border" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, Brush_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_Brush_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent = { "OnMouseDoubleClickEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, OnMouseDoubleClickEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent = { "OnMouseMoveEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, OnMouseMoveEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent = { "OnMouseButtonUpEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, OnMouseButtonUpEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent = { "OnMouseButtonDownEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Flips the background image if the localization's flow direction is RightToLeft */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Flips the background image if the localization's flow direction is RightToLeft" },
	};
#endif
	void Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj)
	{
		((UBorder*)Obj)->bFlipForRightToLeftFlowDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection = { "bFlipForRightToLeftFlowDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBorder), &Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Scales the computed desired size of this border and its contents. Useful\n\x09 * for making things that slide open without having to hard-code their size.\n\x09 * Note: if the parent widget is set up to ignore this widget's desired size,\n\x09 * then changing this value will have no effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Scales the computed desired size of this border and its contents. Useful\nfor making things that slide open without having to hard-code their size.\nNote: if the parent widget is set up to ignore this widget's desired size,\nthen changing this value will have no effect." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale = { "DesiredSizeScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, DesiredSizeScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the BrushColor. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A bindable delegate for the BrushColor." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate = { "BrushColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, BrushColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color and opacity of the actual border image */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity of the actual border image" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor = { "BrushColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, BrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the Brush. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A bindable delegate for the Brush." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate = { "BackgroundDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, BackgroundDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush to drag as the background */" },
		{ "DisplayName", "Brush" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Brush to drag as the background" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ContentColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A bindable delegate for the ContentColorAndOpacity." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate = { "ContentColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, ContentColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Color and opacity multiplier of content in the border */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity multiplier of content in the border" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity = { "ContentColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, ContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether or not to show the disabled effect when this border is disabled */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Whether or not to show the disabled effect when this border is disabled" },
	};
#endif
	void Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit(void* Obj)
	{
		((UBorder*)Obj)->bShowEffectWhenDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled = { "bShowEffectWhenDisabled", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBorder), &Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBorder, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBorder_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_Brush,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBorder_Statics::ClassParams = {
		&UBorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBorder, 1572168150);
	template<> UMG_API UClass* StaticClass<UBorder>()
	{
		return UBorder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBorder(Z_Construct_UClass_UBorder, &UBorder::StaticClass, TEXT("/Script/UMG"), TEXT("UBorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
