// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Public/OculusMRFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMRFunctionLibrary() {}
// Cross Module References
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMRFunctionLibrary_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_Settings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execIsMrcActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::IsMrcActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execIsMrcEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::IsMrcEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execSetMrcScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScalingFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::SetMrcScalingFactor(Z_Param_ScalingFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execGetMrcScalingFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusMRFunctionLibrary::GetMrcScalingFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execSetTrackingReferenceComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::SetTrackingReferenceComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execGetTrackingReferenceComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=UOculusMRFunctionLibrary::GetTrackingReferenceComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execGetOculusMRSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusMR_Settings**)Z_Param__Result=UOculusMRFunctionLibrary::GetOculusMRSettings();
		P_NATIVE_END;
	}
	void UOculusMRFunctionLibrary::StaticRegisterNativesUOculusMRFunctionLibrary()
	{
		UClass* Class = UOculusMRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMrcScalingFactor", &UOculusMRFunctionLibrary::execGetMrcScalingFactor },
			{ "GetOculusMRSettings", &UOculusMRFunctionLibrary::execGetOculusMRSettings },
			{ "GetTrackingReferenceComponent", &UOculusMRFunctionLibrary::execGetTrackingReferenceComponent },
			{ "IsMrcActive", &UOculusMRFunctionLibrary::execIsMrcActive },
			{ "IsMrcEnabled", &UOculusMRFunctionLibrary::execIsMrcEnabled },
			{ "SetMrcScalingFactor", &UOculusMRFunctionLibrary::execSetMrcScalingFactor },
			{ "SetTrackingReferenceComponent", &UOculusMRFunctionLibrary::execSetTrackingReferenceComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics
	{
		struct OculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the scaling factor for the MRC configuration. Returns 0 if not available.\n" },
		{ "DisplayName", "Get MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the scaling factor for the MRC configuration. Returns 0 if not available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetMrcScalingFactor", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics
	{
		struct OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms
		{
			UOculusMR_Settings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms, ReturnValue), Z_Construct_UClass_UOculusMR_Settings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the OculusMR settings object\n" },
		{ "DisplayName", "Get Oculus MR Settings" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the OculusMR settings object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetOculusMRSettings", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics
	{
		struct OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the component that the OculusMR camera is tracking. When this is null, the camera will track the player pawn.\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the component that the OculusMR camera is tracking. When this is null, the camera will track the player pawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetTrackingReferenceComponent", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics
	{
		struct OculusMRFunctionLibrary_eventIsMrcActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventIsMrcActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventIsMrcActive_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Check if MRC is enabled and actively capturing\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Check if MRC is enabled and actively capturing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "IsMrcActive", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventIsMrcActive_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics
	{
		struct OculusMRFunctionLibrary_eventIsMrcEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventIsMrcEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventIsMrcEnabled_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Check if MRC is enabled\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Check if MRC is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "IsMrcEnabled", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventIsMrcEnabled_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics
	{
		struct OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms
		{
			float ScalingFactor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned.\n" },
		{ "CPP_Default_ScalingFactor", "1.000000" },
		{ "DisplayName", "Set MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "SetMrcScalingFactor", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics
	{
		struct OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms
		{
			USceneComponent* Component;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the component for the OculusMR camera to track. If this is set to null, the camera will track the player pawn.\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Set the component for the OculusMR camera to track. If this is set to null, the camera will track the player pawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "SetTrackingReferenceComponent", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOculusMRFunctionLibrary_NoRegister()
	{
		return UOculusMRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor, "GetMrcScalingFactor" }, // 2681287422
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings, "GetOculusMRSettings" }, // 2570332862
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent, "GetTrackingReferenceComponent" }, // 3484731585
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive, "IsMrcActive" }, // 2156435775
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled, "IsMrcEnabled" }, // 3238238100
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor, "SetMrcScalingFactor" }, // 327774023
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent, "SetTrackingReferenceComponent" }, // 617315593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMRFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::ClassParams = {
		&UOculusMRFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMRFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusMRFunctionLibrary, 1095202541);
	template<> OCULUSMR_API UClass* StaticClass<UOculusMRFunctionLibrary>()
	{
		return UOculusMRFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusMRFunctionLibrary(Z_Construct_UClass_UOculusMRFunctionLibrary, &UOculusMRFunctionLibrary::StaticClass, TEXT("/Script/OculusMR"), TEXT("UOculusMRFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMRFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
