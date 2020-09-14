// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstanceDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execCopyParameterOverrides)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_MaterialInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyParameterOverrides(Z_Param_MaterialInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execCopyInterpParameters)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyInterpParameters(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Source);
		P_GET_UBOOL(Z_Param_bQuickParametersOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_CopyMaterialInstanceParameters(Z_Param_Source,Z_Param_bQuickParametersOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceA);
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_InterpolateMaterialInstanceParams(Z_Param_SourceA,Z_Param_SourceB,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValueByInfo(Z_Param_Out_ParameterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetVectorParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValueByInfo(Z_Param_Out_ParameterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetTextureParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_OBJECT(UTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValueByInfo(Z_Param_Out_ParameterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetScalarParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	void UMaterialInstanceDynamic::StaticRegisterNativesUMaterialInstanceDynamic()
	{
		UClass* Class = UMaterialInstanceDynamic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyInterpParameters", &UMaterialInstanceDynamic::execCopyInterpParameters },
			{ "CopyParameterOverrides", &UMaterialInstanceDynamic::execCopyParameterOverrides },
			{ "K2_CopyMaterialInstanceParameters", &UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters },
			{ "K2_GetScalarParameterValue", &UMaterialInstanceDynamic::execK2_GetScalarParameterValue },
			{ "K2_GetScalarParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo },
			{ "K2_GetTextureParameterValue", &UMaterialInstanceDynamic::execK2_GetTextureParameterValue },
			{ "K2_GetTextureParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo },
			{ "K2_GetVectorParameterValue", &UMaterialInstanceDynamic::execK2_GetVectorParameterValue },
			{ "K2_GetVectorParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo },
			{ "K2_InterpolateMaterialInstanceParams", &UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams },
			{ "SetScalarParameterValue", &UMaterialInstanceDynamic::execSetScalarParameterValue },
			{ "SetScalarParameterValueByInfo", &UMaterialInstanceDynamic::execSetScalarParameterValueByInfo },
			{ "SetTextureParameterValue", &UMaterialInstanceDynamic::execSetTextureParameterValue },
			{ "SetTextureParameterValueByInfo", &UMaterialInstanceDynamic::execSetTextureParameterValueByInfo },
			{ "SetVectorParameterValue", &UMaterialInstanceDynamic::execSetVectorParameterValue },
			{ "SetVectorParameterValueByInfo", &UMaterialInstanceDynamic::execSetVectorParameterValueByInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics
	{
		struct MaterialInstanceDynamic_eventCopyInterpParameters_Parms
		{
			UMaterialInstance* Source;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyInterpParameters_Parms, Source), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\n\x09 * much faster than K2_CopyMaterialInstanceParameters(), \n\x09 * The output is the object itself (this).\n\x09 * @param Source ignores the call if 0\n\x09 */" },
		{ "DisplayName", "CopyInterpParameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\nmuch faster than K2_CopyMaterialInstanceParameters(),\nThe output is the object itself (this).\n@param Source ignores the call if 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyInterpParameters", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventCopyInterpParameters_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics
	{
		struct MaterialInstanceDynamic_eventCopyParameterOverrides_Parms
		{
			UMaterialInstance* MaterialInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copy parameter values from another material instance. This will copy only\n\x09 * parameters explicitly overridden in that material instance!!\n\x09 */" },
		{ "DisplayName", "CopyParameterOverrides" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copy parameter values from another material instance. This will copy only\nparameters explicitly overridden in that material instance!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyParameterOverrides", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics
	{
		struct MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms
		{
			UMaterialInterface* Source;
			bool bQuickParametersOnly;
		};
		static void NewProp_bQuickParametersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuickParametersOnly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit(void* Obj)
	{
		((MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms*)Obj)->bQuickParametersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly = { "bQuickParametersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms, Source), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copies over parameters given a material interface (copy each instance following the hierarchy)\n\x09 * Very slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\n\x09 * The output is the object itself (this). Copying 'quick parameters only' will result in a much\n\x09 * faster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n\x09 * @param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data\n\x09 */" },
		{ "CPP_Default_bQuickParametersOnly", "false" },
		{ "DisplayName", "CopyMaterialInstanceParameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "CopyMaterialInstanceParameters" },
		{ "ToolTip", "Copies over parameters given a material interface (copy each instance following the hierarchy)\nVery slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\nThe output is the object itself (this). Copying 'quick parameters only' will result in a much\nfaster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n@param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_CopyMaterialInstanceParameters", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current scalar (float) parameter value from an MID */" },
		{ "DisplayName", "GetScalarParameterValue" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValue" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValue", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "GetScalarParameterValueByInfo" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValueByInfo" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValueByInfo", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID texture parameter value */" },
		{ "DisplayName", "GetTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValue" },
		{ "ToolTip", "Get the current MID texture parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValue", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID texture parameter value, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "GetTextureParameterValueByInfo" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValueByInfo" },
		{ "ToolTip", "Get the current MID texture parameter value, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValueByInfo", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID vector parameter value */" },
		{ "DisplayName", "GetVectorParameterValue" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValue" },
		{ "ToolTip", "Get the current MID vector parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValue", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID vector parameter value, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "GetVectorParameterValueByInfo" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValueByInfo" },
		{ "ToolTip", "Get the current MID vector parameter value, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValueByInfo", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics
	{
		struct MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms
		{
			UMaterialInstance* SourceA;
			UMaterialInstance* SourceB;
			float Alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceB;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB = { "SourceB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceB), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA = { "SourceA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceA), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\n\x09 * The output is the object itself (this).\n\x09 * Supports the case SourceA==this || SourceB==this\n\x09 * Both material have to be from the same base material\n\x09 * @param SourceA value that is used for Alpha=0, silently ignores the case if 0\n\x09 * @param SourceB value that is used for Alpha=1, silently ignores the case if 0\n\x09 * @param Alpha usually in the range 0..1, values outside the range extrapolate\n\x09 */" },
		{ "DisplayName", "InterpolateMaterialInstanceParameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "InterpolateMaterialInstanceParameters" },
		{ "ToolTip", "Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\nThe output is the object itself (this).\nSupports the case SourceA==this || SourceB==this\nBoth material have to be from the same base material\n@param SourceA value that is used for Alpha=0, silently ignores the case if 0\n@param SourceB value that is used for Alpha=1, silently ignores the case if 0\n@param Alpha usually in the range 0..1, values outside the range extrapolate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_InterpolateMaterialInstanceParams", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterValue_Parms
		{
			FName ParameterName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValue", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters) */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValueByInfo", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValue", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			UTexture* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value using MPI (to allow access to layer parameters) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value using MPI (to allow access to layer parameters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValueByInfo", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValue", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value, using MPI (to allow access to layer parameters) */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValueByInfo", nullptr, nullptr, sizeof(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialInstanceDynamic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters, "CopyInterpParameters" }, // 2853640004
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides, "CopyParameterOverrides" }, // 3832348007
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters, "K2_CopyMaterialInstanceParameters" }, // 1320405310
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 1429871430
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo, "K2_GetScalarParameterValueByInfo" }, // 1430038440
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 1943917794
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo, "K2_GetTextureParameterValueByInfo" }, // 3466025837
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 1595218313
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo, "K2_GetVectorParameterValueByInfo" }, // 567473632
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams, "K2_InterpolateMaterialInstanceParams" }, // 2883107133
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue, "SetScalarParameterValue" }, // 2317457494
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo, "SetScalarParameterValueByInfo" }, // 93447431
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue, "SetTextureParameterValue" }, // 650607566
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo, "SetTextureParameterValueByInfo" }, // 3345536083
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue, "SetVectorParameterValue" }, // 1009283344
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo, "SetVectorParameterValueByInfo" }, // 1760279222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstanceDynamic.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceDynamic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams = {
		&UMaterialInstanceDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceDynamic, 583913290);
	template<> ENGINE_API UClass* StaticClass<UMaterialInstanceDynamic>()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceDynamic(Z_Construct_UClass_UMaterialInstanceDynamic, &UMaterialInstanceDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstanceDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
