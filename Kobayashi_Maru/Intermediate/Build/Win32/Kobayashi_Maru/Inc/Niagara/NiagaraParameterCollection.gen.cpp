// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraParameterCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterCollection() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetQuatParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuatParameter(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetColorParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorParameter(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetVector4Parameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVector4Parameter(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetVectorParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameter(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetVector2DParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVector2DParameter(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetIntParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameter(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetFloatParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetBoolParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameter(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetColorParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetQuatParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetQuatParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetVector4Parameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=P_THIS->GetVector4Parameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetVectorParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetVector2DParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVector2DParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetIntParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetFloatParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetBoolParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolParameter(Z_Param_InVariableName);
		P_NATIVE_END;
	}
	void UNiagaraParameterCollectionInstance::StaticRegisterNativesUNiagaraParameterCollectionInstance()
	{
		UClass* Class = UNiagaraParameterCollectionInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolParameter", &UNiagaraParameterCollectionInstance::execGetBoolParameter },
			{ "GetColorParameter", &UNiagaraParameterCollectionInstance::execGetColorParameter },
			{ "GetFloatParameter", &UNiagaraParameterCollectionInstance::execGetFloatParameter },
			{ "GetIntParameter", &UNiagaraParameterCollectionInstance::execGetIntParameter },
			{ "GetQuatParameter", &UNiagaraParameterCollectionInstance::execGetQuatParameter },
			{ "GetVector2DParameter", &UNiagaraParameterCollectionInstance::execGetVector2DParameter },
			{ "GetVector4Parameter", &UNiagaraParameterCollectionInstance::execGetVector4Parameter },
			{ "GetVectorParameter", &UNiagaraParameterCollectionInstance::execGetVectorParameter },
			{ "SetBoolParameter", &UNiagaraParameterCollectionInstance::execSetBoolParameter },
			{ "SetColorParameter", &UNiagaraParameterCollectionInstance::execSetColorParameter },
			{ "SetFloatParameter", &UNiagaraParameterCollectionInstance::execSetFloatParameter },
			{ "SetIntParameter", &UNiagaraParameterCollectionInstance::execSetIntParameter },
			{ "SetQuatParameter", &UNiagaraParameterCollectionInstance::execSetQuatParameter },
			{ "SetVector2DParameter", &UNiagaraParameterCollectionInstance::execSetVector2DParameter },
			{ "SetVector4Parameter", &UNiagaraParameterCollectionInstance::execSetVector4Parameter },
			{ "SetVectorParameter", &UNiagaraParameterCollectionInstance::execSetVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms
		{
			FString InVariableName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms), &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "//Accessors from Blueprint. For now just exposing common types but ideally we can expose any somehow in future.\n" },
		{ "DisplayName", "Get Bool Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Accessors from Blueprint. For now just exposing common types but ideally we can expose any somehow in future." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetBoolParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetColorParameter_Parms
		{
			FString InVariableName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetColorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetColorParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Color Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetColorParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetColorParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms
		{
			FString InVariableName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Float Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetFloatParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetIntParameter_Parms
		{
			FString InVariableName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetIntParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetIntParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Int Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetIntParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetIntParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms
		{
			FString InVariableName;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Quaternion Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetQuatParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms
		{
			FString InVariableName;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Vector2D Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetVector2DParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms
		{
			FString InVariableName;
			FVector4 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Vector4 Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetVector4Parameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms
		{
			FString InVariableName;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Vector Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetVectorParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms
		{
			FString InVariableName;
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Bool Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetBoolParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetColorParameter_Parms
		{
			FString InVariableName;
			FLinearColor InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetColorParameter_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetColorParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Color Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetColorParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetColorParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms
		{
			FString InVariableName;
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Float Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetIntParameter_Parms
		{
			FString InVariableName;
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetIntParameter_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetIntParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Int Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetIntParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetIntParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms
		{
			FString InVariableName;
			FQuat InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Quaternion Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetQuatParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms
		{
			FString InVariableName;
			FVector2D InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Vector2D Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetVector2DParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms
		{
			FString InVariableName;
			FVector4 InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Vector4 Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetVector4Parameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics
	{
		struct NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms
		{
			FString InVariableName;
			FVector InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Vector Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetVectorParameter", nullptr, nullptr, sizeof(NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister()
	{
		return UNiagaraParameterCollectionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverridenParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter, "GetBoolParameter" }, // 3957960417
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter, "GetColorParameter" }, // 3020559757
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter, "GetFloatParameter" }, // 714107730
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter, "GetIntParameter" }, // 3005238125
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter, "GetQuatParameter" }, // 2658557815
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter, "GetVector2DParameter" }, // 448011073
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter, "GetVector4Parameter" }, // 3540245185
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter, "GetVectorParameter" }, // 2054785227
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter, "SetBoolParameter" }, // 3775912359
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter, "SetColorParameter" }, // 3112136149
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter, "SetFloatParameter" }, // 3874121502
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter, "SetIntParameter" }, // 1779937404
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter, "SetQuatParameter" }, // 1249245749
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter, "SetVector2DParameter" }, // 2271026361
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter, "SetVector4Parameter" }, // 1883345071
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter, "SetVectorParameter" }, // 2721366941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage = { "ParameterStorage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, ParameterStorage), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_MetaData[] = {
		{ "Comment", "/**\n\x09When editing instances, we must track which parameters are overridden so we can pull in any changes to the default.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "When editing instances, we must track which parameters are overridden so we can pull in any changes to the default." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters = { "OverridenParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, OverridenParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_Inner = { "OverridenParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection_MetaData[] = {
		{ "Category", "Instance" },
		{ "Comment", "//TODO: Abstract to some interface to allow a hierarchy like UMaterialInstance?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "TODO: Abstract to some interface to allow a hierarchy like UMaterialInstance?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, Collection), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterCollectionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::ClassParams = {
		&UNiagaraParameterCollectionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraParameterCollectionInstance, 3075732973);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterCollectionInstance>()
	{
		return UNiagaraParameterCollectionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraParameterCollectionInstance(Z_Construct_UClass_UNiagaraParameterCollectionInstance, &UNiagaraParameterCollectionInstance::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraParameterCollectionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterCollectionInstance);
	void UNiagaraParameterCollection::StaticRegisterNativesUNiagaraParameterCollection()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister()
	{
		return UNiagaraParameterCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParameterCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParameterCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Asset containing a collection of global parameters usable by Niagara. */" },
		{ "IncludePath", "NiagaraParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Asset containing a collection of global parameters usable by Niagara." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId_MetaData[] = {
		{ "Comment", "/** Used to track whenever something of note changes in this parameter collection that might invalidate a compilation downstream of a script/emitter/system.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Used to track whenever something of note changes in this parameter collection that might invalidate a compilation downstream of a script/emitter/system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId = { "CompileId", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollection, CompileId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollection, DefaultInstance), Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollection, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace_MetaData[] = {
		{ "Category", "Parameter Collection" },
		{ "Comment", "/** Namespace for this parameter collection. Is enforced to be unique across all parameter collections. */" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Namespace for this parameter collection. Is enforced to be unique across all parameter collections." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0020090000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterCollection, Namespace), METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParameterCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::ClassParams = {
		&UNiagaraParameterCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParameterCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraParameterCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraParameterCollection, 2641939958);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterCollection>()
	{
		return UNiagaraParameterCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraParameterCollection(Z_Construct_UClass_UNiagaraParameterCollection, &UNiagaraParameterCollection::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraParameterCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
