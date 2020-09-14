// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerComponent() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
// End Cross Module References
	DEFINE_FUNCTION(UMotionControllerComponent::execGetHandJointPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_jointIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bValueFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHandJointPosition(Z_Param_jointIndex,Z_Param_Out_bValueFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execGetParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL_REF(Z_Param_Out_bValueFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParameterValue(Z_Param_InName,Z_Param_Out_bValueFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetAssociatedPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssociatedPlayerIndex(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetTrackingMotionSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingMotionSource(Z_Param_NewSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execGetTrackingSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=P_THIS->GetTrackingSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetTrackingSource)
	{
		P_GET_ENUM(EControllerHand,Z_Param_NewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingSource(EControllerHand(Z_Param_NewSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetCustomDisplayMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewDisplayMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomDisplayMesh(Z_Param_NewDisplayMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetDisplayModelSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewDisplayModelSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayModelSource(Z_Param_NewDisplayModelSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetShowDeviceModel)
	{
		P_GET_UBOOL(Z_Param_bShowControllerModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowDeviceModel(Z_Param_bShowControllerModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTracked();
		P_NATIVE_END;
	}
	static FName NAME_UMotionControllerComponent_OnMotionControllerUpdated = FName(TEXT("OnMotionControllerUpdated"));
	void UMotionControllerComponent::OnMotionControllerUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMotionControllerComponent_OnMotionControllerUpdated),NULL);
	}
	void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
	{
		UClass* Class = UMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandJointPosition", &UMotionControllerComponent::execGetHandJointPosition },
			{ "GetParameterValue", &UMotionControllerComponent::execGetParameterValue },
			{ "GetTrackingSource", &UMotionControllerComponent::execGetTrackingSource },
			{ "IsTracked", &UMotionControllerComponent::execIsTracked },
			{ "SetAssociatedPlayerIndex", &UMotionControllerComponent::execSetAssociatedPlayerIndex },
			{ "SetCustomDisplayMesh", &UMotionControllerComponent::execSetCustomDisplayMesh },
			{ "SetDisplayModelSource", &UMotionControllerComponent::execSetDisplayModelSource },
			{ "SetShowDeviceModel", &UMotionControllerComponent::execSetShowDeviceModel },
			{ "SetTrackingMotionSource", &UMotionControllerComponent::execSetTrackingMotionSource },
			{ "SetTrackingSource", &UMotionControllerComponent::execSetTrackingSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics
	{
		struct MotionControllerComponent_eventGetHandJointPosition_Parms
		{
			int32 jointIndex;
			bool bValueFound;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bValueFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_jointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetHandJointPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventGetHandJointPosition_Parms*)Obj)->bValueFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound = { "bValueFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetHandJointPosition_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_jointIndex = { "jointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetHandJointPosition_Parms, jointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_jointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetHandJointPosition", nullptr, nullptr, sizeof(MotionControllerComponent_eventGetHandJointPosition_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics
	{
		struct MotionControllerComponent_eventGetParameterValue_Parms
		{
			FName InName;
			bool bValueFound;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bValueFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventGetParameterValue_Parms*)Obj)->bValueFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound = { "bValueFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetParameterValue_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "// Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated \n" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetParameterValue", nullptr, nullptr, sizeof(MotionControllerComponent_eventGetParameterValue_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics
	{
		struct MotionControllerComponent_eventGetTrackingSource_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetTrackingSource_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetTrackingSource", nullptr, nullptr, sizeof(MotionControllerComponent_eventGetTrackingSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics
	{
		struct MotionControllerComponent_eventIsTracked_Parms
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
	void Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionControllerComponent_eventIsTracked_Parms), &Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** Whether or not this component had a valid tracked device this frame */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Whether or not this component had a valid tracked device this frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "IsTracked", nullptr, nullptr, sizeof(MotionControllerComponent_eventIsTracked_Parms), Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "/** Blueprint Implementable function for reponding to updated data from a motion controller (so we can use custom paramater values from it) */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Blueprint Implementable function for reponding to updated data from a motion controller (so we can use custom paramater values from it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "OnMotionControllerUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics
	{
		struct MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms
		{
			int32 NewPlayer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms, NewPlayer), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetAssociatedPlayerIndex", nullptr, nullptr, sizeof(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics
	{
		struct MotionControllerComponent_eventSetCustomDisplayMesh_Parms
		{
			UStaticMesh* NewDisplayMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDisplayMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh = { "NewDisplayMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetCustomDisplayMesh_Parms, NewDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetCustomDisplayMesh", nullptr, nullptr, sizeof(MotionControllerComponent_eventSetCustomDisplayMesh_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics
	{
		struct MotionControllerComponent_eventSetDisplayModelSource_Parms
		{
			FName NewDisplayModelSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayModelSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewDisplayModelSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource = { "NewDisplayModelSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetDisplayModelSource_Parms, NewDisplayModelSource), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetDisplayModelSource", nullptr, nullptr, sizeof(MotionControllerComponent_eventSetDisplayModelSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics
	{
		struct MotionControllerComponent_eventSetShowDeviceModel_Parms
		{
			bool bShowControllerModel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowControllerModel_MetaData[];
#endif
		static void NewProp_bShowControllerModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowControllerModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventSetShowDeviceModel_Parms*)Obj)->bShowControllerModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel = { "bShowControllerModel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetShowDeviceModel", nullptr, nullptr, sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics
	{
		struct MotionControllerComponent_eventSetTrackingMotionSource_Parms
		{
			FName NewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingMotionSource_Parms, NewSource), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetTrackingMotionSource", nullptr, nullptr, sizeof(MotionControllerComponent_eventSetTrackingMotionSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics
	{
		struct MotionControllerComponent_eventSetTrackingSource_Parms
		{
			EControllerHand NewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSource_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingSource_Parms, NewSource), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetTrackingSource", nullptr, nullptr, sizeof(MotionControllerComponent_eventSetTrackingSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
	{
		return UMotionControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMeshMaterialOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayMeshMaterialOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMeshMaterialOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomDisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayModelSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayModelSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayDeviceModel_MetaData[];
#endif
		static void NewProp_bDisplayDeviceModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayDeviceModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLowLatencyUpdate_MetaData[];
#endif
		static void NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLowLatencyUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition, "GetHandJointPosition" }, // 82083916
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue, "GetParameterValue" }, // 2906978301
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource, "GetTrackingSource" }, // 1645159628
		{ &Z_Construct_UFunction_UMotionControllerComponent_IsTracked, "IsTracked" }, // 3230117820
		{ &Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated, "OnMotionControllerUpdated" }, // 1497406047
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex, "SetAssociatedPlayerIndex" }, // 1570652209
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh, "SetCustomDisplayMesh" }, // 1233010185
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource, "SetDisplayModelSource" }, // 3488016142
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel, "SetShowDeviceModel" }, // 1167323580
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource, "SetTrackingMotionSource" }, // 816136718
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource, "SetTrackingSource" }, // 1830173250
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionController" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MotionControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visualization" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent = { "DisplayComponent", nullptr, (EPropertyFlags)0x004000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, DisplayComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Material overrides for the specified display mesh. */" },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Material overrides for the specified display mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides = { "DisplayMeshMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, DisplayMeshMaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner = { "DisplayMeshMaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData[] = {
		{ "BlueprintSetter", "SetCustomDisplayMesh" },
		{ "Category", "Visualization" },
		{ "Comment", "/** A mesh override that'll be displayed attached to this MotionController. */" },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "A mesh override that'll be displayed attached to this MotionController." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh = { "CustomDisplayMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, CustomDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData[] = {
		{ "BlueprintSetter", "SetDisplayModelSource" },
		{ "Category", "Visualization" },
		{ "Comment", "/** Determines the source of the desired model. By default, the active XR system(s) will be queried and (if available) will provide a model for the associated device. NOTE: this may fail if there's no default model; use 'Custom' to specify your own. */" },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Determines the source of the desired model. By default, the active XR system(s) will be queried and (if available) will provide a model for the associated device. NOTE: this may fail if there's no default model; use 'Custom' to specify your own." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource = { "DisplayModelSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, DisplayModelSource), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData[] = {
		{ "BlueprintSetter", "SetShowDeviceModel" },
		{ "Category", "Visualization" },
		{ "Comment", "/** Used to automatically render a model associated with the set hand. */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Used to automatically render a model associated with the set hand." },
	};
#endif
	void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_SetBit(void* Obj)
	{
		((UMotionControllerComponent*)Obj)->bDisplayDeviceModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel = { "bDisplayDeviceModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking) */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus = { "CurrentTrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, CurrentTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering. */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering." },
	};
#endif
	void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj)
	{
		((UMotionControllerComponent*)Obj)->bDisableLowLatencyUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate = { "bDisableLowLatencyUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData[] = {
		{ "BlueprintSetter", "SetTrackingMotionSource" },
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, MotionSource), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData[] = {
		{ "BlueprintGetter", "GetTrackingSource" },
		{ "BlueprintSetter", "SetTrackingSource" },
		{ "Category", "MotionController" },
		{ "Comment", "/** DEPRECATED (use MotionSource instead) Which hand this component should automatically follow */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "DEPRECATED (use MotionSource instead) Which hand this component should automatically follow" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000020000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, Hand_DEPRECATED), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "BlueprintSetter", "SetAssociatedPlayerIndex" },
		{ "Category", "MotionController" },
		{ "Comment", "/** Which player index this motion controller should automatically follow */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Which player index this motion controller should automatically follow" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionControllerComponent, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionControllerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams = {
		&UMotionControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionControllerComponent, 2108746479);
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UMotionControllerComponent>()
	{
		return UMotionControllerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionControllerComponent(Z_Construct_UClass_UMotionControllerComponent, &UMotionControllerComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
