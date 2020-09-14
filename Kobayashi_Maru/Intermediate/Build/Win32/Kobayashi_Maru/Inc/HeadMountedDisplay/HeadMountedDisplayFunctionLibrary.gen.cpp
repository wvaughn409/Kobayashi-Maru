// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayFunctionLibrary() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsDeviceTracking)
	{
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(Z_Param_Out_XRDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetDeviceWorldPose)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(Z_Param_WorldContext,Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetDevicePose)
	{
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetDevicePose(Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execEnumerateTrackedDevices)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SystemId);
		P_GET_ENUM(EXRTrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FXRDeviceId>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(Z_Param_SystemId,EXRTrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenModeTexturePlusEyeLayout)
	{
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMin);
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMax);
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMin);
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMax);
		P_GET_UBOOL(Z_Param_bDrawEyeFirst);
		P_GET_UBOOL(Z_Param_bClearBlack);
		P_GET_UBOOL(Z_Param_bUseAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(Z_Param_EyeRectMin,Z_Param_EyeRectMax,Z_Param_TextureRectMin,Z_Param_TextureRectMax,Z_Param_bDrawEyeFirst,Z_Param_bClearBlack,Z_Param_bUseAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenMode)
	{
		P_GET_ENUM(ESpectatorScreenMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsSpectatorScreenModeControllable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetVRFocusState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bUseFocus);
		P_GET_UBOOL_REF(Z_Param_Out_bHasFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetVRFocusState(Z_Param_Out_bUseFocus,Z_Param_Out_bHasFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execUpdateExternalTrackingHMDPosition)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(Z_Param_Out_ExternalTrackingTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execCalibrateExternalTrackingToHMD)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(Z_Param_Out_ExternalTrackingTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingToWorldTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EHMDTrackingOrigin::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetTrackingOrigin)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Type(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetWorldToMetersScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetWorldToMetersScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(Z_Param_WorldContext,Z_Param_NewScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetPixelDensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetPixelDensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetScreenPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetScreenPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetClippingPlanes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Near);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Far);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(Z_Param_Near,Z_Param_Far);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execResetOrientationAndPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(Z_Param_Yaw,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execEnableLowPersistenceMode)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsInLowPersistenceMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetPositionalTrackingCameraParameters)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraOrigin);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_VFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CameraDistance);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NearPlane);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FarPlane);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(Z_Param_Out_CameraOrigin,Z_Param_Out_CameraRotation,Z_Param_Out_HFOV,Z_Param_Out_VFOV,Z_Param_Out_CameraDistance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingSensorParameters)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LeftFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RightFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TopFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BottomFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NearPlane);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FarPlane);
		P_GET_UBOOL_REF(Z_Param_Out_IsActive);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(Z_Param_Out_Origin,Z_Param_Out_Rotation,Z_Param_Out_LeftFOV,Z_Param_Out_RightFOV,Z_Param_Out_TopFOV,Z_Param_Out_BottomFOV,Z_Param_Out_Distance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane,Z_Param_Out_IsActive,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetNumOfTrackingSensors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execHasValidTrackingPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetOrientationAndPosition)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetHMDWornState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EHMDWornState::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDWornState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetHMDDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execEnableHMD)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnableHMD(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
		P_NATIVE_END;
	}
	void UHeadMountedDisplayFunctionLibrary::StaticRegisterNativesUHeadMountedDisplayFunctionLibrary()
	{
		UClass* Class = UHeadMountedDisplayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalibrateExternalTrackingToHMD", &UHeadMountedDisplayFunctionLibrary::execCalibrateExternalTrackingToHMD },
			{ "EnableHMD", &UHeadMountedDisplayFunctionLibrary::execEnableHMD },
			{ "EnableLowPersistenceMode", &UHeadMountedDisplayFunctionLibrary::execEnableLowPersistenceMode },
			{ "EnumerateTrackedDevices", &UHeadMountedDisplayFunctionLibrary::execEnumerateTrackedDevices },
			{ "GetDevicePose", &UHeadMountedDisplayFunctionLibrary::execGetDevicePose },
			{ "GetDeviceWorldPose", &UHeadMountedDisplayFunctionLibrary::execGetDeviceWorldPose },
			{ "GetHMDDeviceName", &UHeadMountedDisplayFunctionLibrary::execGetHMDDeviceName },
			{ "GetHMDWornState", &UHeadMountedDisplayFunctionLibrary::execGetHMDWornState },
			{ "GetNumOfTrackingSensors", &UHeadMountedDisplayFunctionLibrary::execGetNumOfTrackingSensors },
			{ "GetOrientationAndPosition", &UHeadMountedDisplayFunctionLibrary::execGetOrientationAndPosition },
			{ "GetPixelDensity", &UHeadMountedDisplayFunctionLibrary::execGetPixelDensity },
			{ "GetPositionalTrackingCameraParameters", &UHeadMountedDisplayFunctionLibrary::execGetPositionalTrackingCameraParameters },
			{ "GetScreenPercentage", &UHeadMountedDisplayFunctionLibrary::execGetScreenPercentage },
			{ "GetTrackingOrigin", &UHeadMountedDisplayFunctionLibrary::execGetTrackingOrigin },
			{ "GetTrackingSensorParameters", &UHeadMountedDisplayFunctionLibrary::execGetTrackingSensorParameters },
			{ "GetTrackingToWorldTransform", &UHeadMountedDisplayFunctionLibrary::execGetTrackingToWorldTransform },
			{ "GetVRFocusState", &UHeadMountedDisplayFunctionLibrary::execGetVRFocusState },
			{ "GetWorldToMetersScale", &UHeadMountedDisplayFunctionLibrary::execGetWorldToMetersScale },
			{ "HasValidTrackingPosition", &UHeadMountedDisplayFunctionLibrary::execHasValidTrackingPosition },
			{ "IsDeviceTracking", &UHeadMountedDisplayFunctionLibrary::execIsDeviceTracking },
			{ "IsHeadMountedDisplayConnected", &UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayConnected },
			{ "IsHeadMountedDisplayEnabled", &UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayEnabled },
			{ "IsInLowPersistenceMode", &UHeadMountedDisplayFunctionLibrary::execIsInLowPersistenceMode },
			{ "IsSpectatorScreenModeControllable", &UHeadMountedDisplayFunctionLibrary::execIsSpectatorScreenModeControllable },
			{ "ResetOrientationAndPosition", &UHeadMountedDisplayFunctionLibrary::execResetOrientationAndPosition },
			{ "SetClippingPlanes", &UHeadMountedDisplayFunctionLibrary::execSetClippingPlanes },
			{ "SetSpectatorScreenMode", &UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenMode },
			{ "SetSpectatorScreenModeTexturePlusEyeLayout", &UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenModeTexturePlusEyeLayout },
			{ "SetSpectatorScreenTexture", &UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenTexture },
			{ "SetTrackingOrigin", &UHeadMountedDisplayFunctionLibrary::execSetTrackingOrigin },
			{ "SetWorldToMetersScale", &UHeadMountedDisplayFunctionLibrary::execSetWorldToMetersScale },
			{ "UpdateExternalTrackingHMDPosition", &UHeadMountedDisplayFunctionLibrary::execUpdateExternalTrackingHMDPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventCalibrateExternalTrackingToHMD_Parms
		{
			FTransform ExternalTrackingTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTrackingTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalTrackingTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform = { "ExternalTrackingTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventCalibrateExternalTrackingToHMD_Parms, ExternalTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|ExternalTracking" },
		{ "Comment", "/**\n\x09* Called to calibrate the offset transform between an external tracking source and the internal tracking source\n\x09* (e.g. mocap tracker to and HMD tracker).  This should be called once per session, or when the physical relationship\n\x09* between the external tracker and internal tracker changes (e.g. it was bumped or reattached).  After calibration,\n\x09* calling UpdateExternalTrackingPosition will try to correct the internal tracker to the calibrated offset to prevent\n\x09* drift between the two systems\n\x09*\n\x09* @param ExternalTrackingTransform\x09\x09The transform in world-coordinates, of the reference marker of the external tracking system\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Called to calibrate the offset transform between an external tracking source and the internal tracking source\n(e.g. mocap tracker to and HMD tracker).  This should be called once per session, or when the physical relationship\nbetween the external tracker and internal tracker changes (e.g. it was bumped or reattached).  After calibration,\ncalling UpdateExternalTrackingPosition will try to correct the internal tracker to the calibrated offset to prevent\ndrift between the two systems\n\n@param ExternalTrackingTransform              The transform in world-coordinates, of the reference marker of the external tracking system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "CalibrateExternalTrackingToHMD", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventCalibrateExternalTrackingToHMD_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms
		{
			bool bEnable;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Switches to/from using HMD and stereo rendering.\n\x09 *\n\x09 * @param bEnable\x09\x09\x09(in) 'true' to enable HMD / stereo; 'false' otherwise\n\x09 * @return (Boolean)\x09\x09True, if the request was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Switches to/from using HMD and stereo rendering.\n\n@param bEnable                       (in) 'true' to enable HMD / stereo; 'false' otherwise\n@return (Boolean)            True, if the request was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "EnableHMD", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Switches between low and full persistence modes.\n\x09 *\n\x09 * @param bEnable\x09\x09\x09(in) 'true' to enable low persistence mode; 'false' otherwise\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This functionality is no longer available. HMD platforms that support low persistence will always enable it." },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Switches between low and full persistence modes.\n\n@param bEnable                       (in) 'true' to enable low persistence mode; 'false' otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "EnableLowPersistenceMode", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms
		{
			FName SystemId;
			EXRTrackedDeviceType DeviceType;
			TArray<FXRDeviceId> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SystemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms, DeviceType), Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId = { "SystemId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms, SystemId), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that will list all XR devices currently being tracked.\n\x09 *\n\x09 * @param  SystemId\x09\x09(Optional) Specifies an explicit system to poll devices from (use if you want only devices belonging to one explicit XR ecosystem, e.g. 'OculusHMD', or 'SteamVR')\n\x09 * @param  DeviceType\x09Specifies the type of device to query for - defaults to 'Any' (meaning 'All').\n\x09 *\n\x09 * @return A list of device identifiers matching the query. Use these to query and operate on the device (e.g. through GetDevicePose, AddDeviceVisualizationComponent, etc.)\n\x09 */" },
		{ "CPP_Default_DeviceType", "Any" },
		{ "CPP_Default_SystemId", "None" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that will list all XR devices currently being tracked.\n\n@param  SystemId             (Optional) Specifies an explicit system to poll devices from (use if you want only devices belonging to one explicit XR ecosystem, e.g. 'OculusHMD', or 'SteamVR')\n@param  DeviceType   Specifies the type of device to query for - defaults to 'Any' (meaning 'All').\n\n@return A list of device identifiers matching the query. Use these to query and operate on the device (e.g. through GetDevicePose, AddDeviceVisualizationComponent, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "EnumerateTrackedDevices", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms
		{
			FXRDeviceId XRDeviceId;
			bool bIsTracked;
			FRotator Orientation;
			bool bHasPositionalTracking;
			FVector Position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_bHasPositionalTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPositionalTracking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms*)Obj)->bHasPositionalTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking = { "bHasPositionalTracking", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms*)Obj)->bIsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns a specific device's tracked position and orientation (in tracking space).\n\x09 *\n\x09 * @param  XRDeviceId\x09\x09\x09\x09Specifies the device you're querying for.\n\x09 * @param  bIsTracked\x09\x09\x09\x09[out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n\x09 * @param  Orientation\x09\x09\x09\x09[out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n\x09 * @param  bHasPositionalTracking\x09[out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n\x09 * @param  Position\x09\x09\x09\x09\x09[out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns a specific device's tracked position and orientation (in tracking space).\n\n@param  XRDeviceId                           Specifies the device you're querying for.\n@param  bIsTracked                           [out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n@param  Orientation                          [out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n@param  bHasPositionalTracking       [out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n@param  Position                                     [out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetDevicePose", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms
		{
			UObject* WorldContext;
			FXRDeviceId XRDeviceId;
			bool bIsTracked;
			FRotator Orientation;
			bool bHasPositionalTracking;
			FVector Position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_bHasPositionalTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPositionalTracking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms*)Obj)->bHasPositionalTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking = { "bHasPositionalTracking", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms*)Obj)->bIsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_WorldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns a specific device's position and orientation in world space.\n\x09 *\n\x09 * @param  XRDeviceId\x09\x09\x09\x09Specifies the device you're querying for.\n\x09 * @param  bIsTracked\x09\x09\x09\x09[out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n\x09 * @param  Orientation\x09\x09\x09\x09[out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n\x09 * @param  bHasPositionalTracking\x09[out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n\x09 * @param  Position\x09\x09\x09\x09\x09[out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns a specific device's position and orientation in world space.\n\n@param  XRDeviceId                           Specifies the device you're querying for.\n@param  bIsTracked                           [out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n@param  Orientation                          [out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n@param  bHasPositionalTracking       [out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n@param  Position                                     [out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetDeviceWorldPose", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns the name of the device, so scripts can modify their behaviour appropriately\n\x09 *\n\x09 * @return\x09""FName specific to the currently active HMD device type.  \"None\" implies no device, \"Unknown\" implies a device with no description.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the name of the device, so scripts can modify their behaviour appropriately\n\n@return      FName specific to the currently active HMD device type.  \"None\" implies no device, \"Unknown\" implies a device with no description." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetHMDDeviceName", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms
		{
			TEnumAsByte<EHMDWornState::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Returns the worn state of the device.\n\x09*\n\x09* @return\x09Unknown, Worn, NotWorn.  If the platform does not detect this it will always return Unknown.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the worn state of the device.\n\n@return       Unknown, Worn, NotWorn.  If the platform does not detect this it will always return Unknown." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetHMDWornState", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* If the HMD has multiple positional tracking sensors, return a total number of them currently connected.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD has multiple positional tracking sensors, return a total number of them currently connected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetNumOfTrackingSensors", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DevicePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DeviceRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\x09 *\n\x09 * @param DeviceRotation\x09(out) The device's current rotation\n\x09 * @param DevicePosition\x09(out) The device's current position, in its own tracking space\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetOrientationAndPosition", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPixelDensity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPixelDensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** \n\x09 * Returns the current VR pixel density. Pixel density sets the VR render \n\x09 * target texture size as a factor of recommended texture size. The recommended \n\x09 * texture size is the size that will result in no under sampling in most \n\x09 * distorted area of the view when computing the final image to be displayed \n\x09 * on the device by the runtime compositor.\n\x09 *\n\x09 * @return (float)\x09The pixel density to be used in VR mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the current VR pixel density. Pixel density sets the VR render\ntarget texture size as a factor of recommended texture size. The recommended\ntexture size is the size that will result in no under sampling in most\ndistorted area of the view when computing the final image to be displayed\non the device by the runtime compositor.\n\n@return (float)      The pixel density to be used in VR mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetPixelDensity", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetPixelDensity_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms
		{
			FVector CameraOrigin;
			FRotator CameraRotation;
			float HFOV;
			float VFOV;
			float CameraDistance;
			float NearPlane;
			float FarPlane;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarPlane;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearPlane;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VFOV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HFOV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_FarPlane = { "FarPlane", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, FarPlane), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_NearPlane = { "NearPlane", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, NearPlane), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraDistance = { "CameraDistance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_VFOV = { "VFOV", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, VFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_HFOV = { "HFOV", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, HFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraOrigin = { "CameraOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_FarPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_NearPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_VFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_HFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\n\x09 * This allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\x09 *\n\x09 * @param Origin\x09\x09\x09(out) Origin, in world-space, of the sensor\n\x09 * @param Rotation\x09\x09\x09(out) Rotation, in world-space, of the sensor\n\x09 * @param HFOV\x09\x09\x09\x09(out) Field-of-view, horizontal, in degrees, of the valid tracking zone of the sensor\n\x09 * @param VFOV\x09\x09\x09\x09(out) Field-of-view, vertical, in degrees, of the valid tracking zone of the sensor\n\x09 * @param CameraDistance\x09(out) Nominal distance to sensor, in world-space\n\x09 * @param NearPlane\x09\x09\x09(out) Near plane distance of the tracking volume, in world-space\n\x09 * @param FarPlane\x09\x09\x09(out) Far plane distance of the tracking volume, in world-space\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use new GetTrackingSensorParameters / GetNumOfTrackingSensors" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\nThis allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\n@param Origin                        (out) Origin, in world-space, of the sensor\n@param Rotation                      (out) Rotation, in world-space, of the sensor\n@param HFOV                          (out) Field-of-view, horizontal, in degrees, of the valid tracking zone of the sensor\n@param VFOV                          (out) Field-of-view, vertical, in degrees, of the valid tracking zone of the sensor\n@param CameraDistance        (out) Nominal distance to sensor, in world-space\n@param NearPlane                     (out) Near plane distance of the tracking volume, in world-space\n@param FarPlane                      (out) Far plane distance of the tracking volume, in world-space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetPositionalTrackingCameraParameters", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetScreenPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetScreenPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetPixelDensity instead" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetScreenPercentage", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetScreenPercentage_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns current tracking origin type (eye level or floor level).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns current tracking origin type (eye level or floor level)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingOrigin", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms
		{
			FVector Origin;
			FRotator Rotation;
			float LeftFOV;
			float RightFOV;
			float TopFOV;
			float BottomFOV;
			float Distance;
			float NearPlane;
			float FarPlane;
			bool IsActive;
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarPlane;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearPlane;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottomFOV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopFOV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightFOV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftFOV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_FarPlane = { "FarPlane", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, FarPlane), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_NearPlane = { "NearPlane", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, NearPlane), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_BottomFOV = { "BottomFOV", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, BottomFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_TopFOV = { "TopFOV", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, TopFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_RightFOV = { "RightFOV", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, RightFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_LeftFOV = { "LeftFOV", nullptr, (EPropertyFlags)0x0010040000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, LeftFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_FarPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_NearPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_BottomFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_TopFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_RightFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_LeftFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "LeftFOV,RightFOV,TopFOV,BottomFOV,Distance,NearPlane,FarPlane" },
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\n\x09 * This allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\x09 *\n\x09 * @param Index\x09\x09\x09\x09(in) Index of the tracking sensor to query\n\x09 * @param Origin\x09\x09\x09(out) Origin, in world-space, of the sensor\n\x09 * @param Rotation\x09\x09\x09(out) Rotation, in world-space, of the sensor\n\x09 * @param LeftFOV\x09\x09\x09(out) Field-of-view, left from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param RightFOV\x09\x09\x09(out) Field-of-view, right from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param TopFOV\x09\x09\x09(out) Field-of-view, top from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param BottomFOV\x09\x09\x09(out) Field-of-view, bottom from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param Distance\x09\x09\x09(out) Nominal distance to sensor, in world-space\n\x09 * @param NearPlane\x09\x09\x09(out) Near plane distance of the tracking volume, in world-space\n\x09 * @param FarPlane\x09\x09\x09(out) Far plane distance of the tracking volume, in world-space\n\x09 * @param IsActive\x09\x09\x09(out) True, if the query for the specified sensor succeeded.\n\x09 */" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\nThis allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\n@param Index                         (in) Index of the tracking sensor to query\n@param Origin                        (out) Origin, in world-space, of the sensor\n@param Rotation                      (out) Rotation, in world-space, of the sensor\n@param LeftFOV                       (out) Field-of-view, left from center, in degrees, of the valid tracking zone of the sensor\n@param RightFOV                      (out) Field-of-view, right from center, in degrees, of the valid tracking zone of the sensor\n@param TopFOV                        (out) Field-of-view, top from center, in degrees, of the valid tracking zone of the sensor\n@param BottomFOV                     (out) Field-of-view, bottom from center, in degrees, of the valid tracking zone of the sensor\n@param Distance                      (out) Nominal distance to sensor, in world-space\n@param NearPlane                     (out) Near plane distance of the tracking volume, in world-space\n@param FarPlane                      (out) Far plane distance of the tracking volume, in world-space\n@param IsActive                      (out) True, if the query for the specified sensor succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingSensorParameters", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms
		{
			UObject* WorldContext;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_WorldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns a transform that can be used to convert points from tracking space to world space.\n\x09 * Does NOT include the set WorldToMeters scale, as that is added in by the backing XR system to their tracking space poses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns a transform that can be used to convert points from tracking space to world space.\nDoes NOT include the set WorldToMeters scale, as that is added in by the backing XR system to their tracking space poses." },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingToWorldTransform", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms
		{
			bool bUseFocus;
			bool bHasFocus;
		};
		static void NewProp_bHasFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFocus;
		static void NewProp_bUseFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms*)Obj)->bHasFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus = { "bHasFocus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms*)Obj)->bUseFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus = { "bUseFocus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns current state of VR focus.\n\x09 *\n\x09 * @param bUseFocus\x09\x09(out) if set to true, then this App does use VR focus.\n\x09 * @param bHasFocus\x09\x09(out) if set to true, then this App currently has VR focus.\n\x09 */" },
		{ "DisplayName", "Get VR Focus State" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns current state of VR focus.\n\n@param bUseFocus             (out) if set to true, then this App does use VR focus.\n@param bHasFocus             (out) if set to true, then this App currently has VR focus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetVRFocusState", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms
		{
			UObject* WorldContext;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_WorldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Returns the World to Meters scale, which corresponds to the scale of the world as perceived by the player\n\x09*\n\x09* @return\x09How many Unreal units correspond to one meter in the real world\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the World to Meters scale, which corresponds to the scale of the world as perceived by the player\n\n@return       How many Unreal units correspond to one meter in the real world" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetWorldToMetersScale", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms
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
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* If the HMD supports positional tracking, whether or not we are currently being tracked\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD supports positional tracking, whether or not we are currently being tracked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "HasValidTrackingPosition", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms
		{
			FXRDeviceId XRDeviceId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns whether the specified device is tracked or not.\n\x09 *\n\x09 * @param  XRDeviceId\x09Specifies the device you're querying for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns whether the specified device is tracked or not.\n\n@param  XRDeviceId   Specifies the device you're querying for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsDeviceTracking", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms
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
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Returns whether or not the HMD hardware is connected and ready to use.  It may or may not actually be in use.\n\x09*\n\x09* @return (Boolean)  status whether the HMD hardware is connected and ready to use.  It may or may not actually be in use. \n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the HMD hardware is connected and ready to use.  It may or may not actually be in use.\n\n@return (Boolean)  status whether the HMD hardware is connected and ready to use.  It may or may not actually be in use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsHeadMountedDisplayConnected", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms
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
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns whether or not we are currently using the head mounted display.\n\x09 *\n\x09 * @return (Boolean)  status of HMD\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not we are currently using the head mounted display.\n\n@return (Boolean)  status of HMD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsHeadMountedDisplayEnabled", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms
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
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns true, if HMD is in low persistence mode. 'false' otherwise.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This functionality is no longer available. HMD platforms that support low persistence will always enable it." },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if HMD is in low persistence mode. 'false' otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsInLowPersistenceMode", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms
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
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Return true if spectator screen mode control is available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Return true if spectator screen mode control is available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsSpectatorScreenModeControllable", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms
		{
			float Yaw;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** \n\x09 * Resets orientation by setting roll and pitch to 0, assuming that current yaw is forward direction and assuming\n\x09 * current position as a 'zero-point' (for positional tracking). \n\x09 *\n\x09 * @param Yaw\x09\x09\x09\x09(in) the desired yaw to be set after orientation reset.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be reset.\n\x09 */" },
		{ "CPP_Default_Options", "OrientationAndPosition" },
		{ "CPP_Default_Yaw", "0.000000" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Resets orientation by setting roll and pitch to 0, assuming that current yaw is forward direction and assuming\ncurrent position as a 'zero-point' (for positional tracking).\n\n@param Yaw                           (in) the desired yaw to be set after orientation reset.\n@param Options                       (in) specifies either position, orientation or both should be reset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "ResetOrientationAndPosition", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms
		{
			float Near;
			float Far;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Far;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Near;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Far = { "Far", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms, Far), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Near = { "Near", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms, Near), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Far,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Near,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** \n\x09 * Sets near and far clipping planes (NCP and FCP) for stereo rendering. Similar to 'stereo ncp= fcp' console command, but NCP and FCP set by this\n\x09 * call won't be saved in .ini file.\n\x09 *\n\x09 * @param Near\x09\x09\x09\x09(in) Near clipping plane, in centimeters\n\x09 * @param Far\x09\x09\x09\x09(in) Far clipping plane, in centimeters\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets near and far clipping planes (NCP and FCP) for stereo rendering. Similar to 'stereo ncp= fcp' console command, but NCP and FCP set by this\ncall won't be saved in .ini file.\n\n@param Near                          (in) Near clipping plane, in centimeters\n@param Far                           (in) Far clipping plane, in centimeters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetClippingPlanes", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms
		{
			ESpectatorScreenMode Mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms, Mode), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Sets the social screen mode.\n\x09* @param Mode\x09\x09\x09\x09(in) The social screen Mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets the social screen mode.\n@param Mode                           (in) The social screen Mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetSpectatorScreenMode", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms
		{
			FVector2D EyeRectMin;
			FVector2D EyeRectMax;
			FVector2D TextureRectMin;
			FVector2D TextureRectMax;
			bool bDrawEyeFirst;
			bool bClearBlack;
			bool bUseAlpha;
		};
		static void NewProp_bUseAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAlpha;
		static void NewProp_bClearBlack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearBlack;
		static void NewProp_bDrawEyeFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawEyeFirst;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureRectMax;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureRectMin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyeRectMax;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyeRectMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bUseAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha = { "bUseAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bClearBlack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack = { "bClearBlack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bDrawEyeFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst = { "bDrawEyeFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMax = { "TextureRectMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, TextureRectMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMin = { "TextureRectMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, TextureRectMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMax = { "EyeRectMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, EyeRectMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMin = { "EyeRectMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, EyeRectMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Setup the layout for ESpectatorScreenMode::TexturePlusEye.\n\x09* @param\x09""EyeRectMin: min of screen rectangle the eye will be drawn in.  0-1 normalized.\n\x09* @param\x09""EyeRectMax: max of screen rectangle the eye will be drawn in.  0-1 normalized.\n\x09* @param\x09TextureRectMin: min of screen rectangle the texture will be drawn in.  0-1 normalized.\n\x09* @param\x09TextureRectMax: max of screen rectangle the texture will be drawn in.  0-1 normalized.\n\x09* @param\x09""bDrawEyeFirst: if true the eye is drawn before the texture, if false the reverse.\n\x09* @param\x09""bClearBlack: if true the render target will be drawn black before either rect is drawn.\n\x09*/" },
		{ "CPP_Default_bClearBlack", "false" },
		{ "CPP_Default_bDrawEyeFirst", "true" },
		{ "CPP_Default_bUseAlpha", "false" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Setup the layout for ESpectatorScreenMode::TexturePlusEye.\n@param        EyeRectMin: min of screen rectangle the eye will be drawn in.  0-1 normalized.\n@param        EyeRectMax: max of screen rectangle the eye will be drawn in.  0-1 normalized.\n@param        TextureRectMin: min of screen rectangle the texture will be drawn in.  0-1 normalized.\n@param        TextureRectMax: max of screen rectangle the texture will be drawn in.  0-1 normalized.\n@param        bDrawEyeFirst: if true the eye is drawn before the texture, if false the reverse.\n@param        bClearBlack: if true the render target will be drawn black before either rect is drawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetSpectatorScreenModeTexturePlusEyeLayout", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms
		{
			UTexture* InTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Change the texture displayed on the social screen\n\x09* @param\x09InTexture: new Texture2D\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Change the texture displayed on the social screen\n@param        InTexture: new Texture2D" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetSpectatorScreenTexture", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> Origin;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms, Origin), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Sets current tracking origin type (eye level or floor level).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets current tracking origin type (eye level or floor level)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetTrackingOrigin", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms
		{
			UObject* WorldContext;
			float NewScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms, NewScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_NewScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_WorldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Sets the World to Meters scale, which changes the scale of the world as perceived by the player\n\x09*\n\x09* @param NewScale\x09Specifies how many Unreal units correspond to one meter in the real world\n\x09*/" },
		{ "CPP_Default_NewScale", "100.000000" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets the World to Meters scale, which changes the scale of the world as perceived by the player\n\n@param NewScale       Specifies how many Unreal units correspond to one meter in the real world" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetWorldToMetersScale", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventUpdateExternalTrackingHMDPosition_Parms
		{
			FTransform ExternalTrackingTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTrackingTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalTrackingTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform = { "ExternalTrackingTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventUpdateExternalTrackingHMDPosition_Parms, ExternalTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|ExternalTracking" },
		{ "Comment", "/**\n\x09* Called after calibration to attempt to pull the internal tracker (e.g. HMD tracking) in line with the external tracker\n\x09* (e.g. mocap tracker).  This will set the internal tracker's base offset and rotation to match and realign the two systems.\n\x09* This can be called every tick, or whenever realignment is desired.  Note that this may cause choppy movement if the two\n\x09* systems diverge relative to each other, or a big jump if called infrequently when there has been significant drift\n\x09*\n\x09* @param ExternalTrackingTransform\x09\x09The transform in world-coordinates, of the reference marker of the external tracking system\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Called after calibration to attempt to pull the internal tracker (e.g. HMD tracking) in line with the external tracker\n(e.g. mocap tracker).  This will set the internal tracker's base offset and rotation to match and realign the two systems.\nThis can be called every tick, or whenever realignment is desired.  Note that this may cause choppy movement if the two\nsystems diverge relative to each other, or a big jump if called infrequently when there has been significant drift\n\n@param ExternalTrackingTransform              The transform in world-coordinates, of the reference marker of the external tracking system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "UpdateExternalTrackingHMDPosition", nullptr, nullptr, sizeof(HeadMountedDisplayFunctionLibrary_eventUpdateExternalTrackingHMDPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister()
	{
		return UHeadMountedDisplayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD, "CalibrateExternalTrackingToHMD" }, // 534456768
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD, "EnableHMD" }, // 2504365550
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode, "EnableLowPersistenceMode" }, // 3184515363
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices, "EnumerateTrackedDevices" }, // 505136628
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose, "GetDevicePose" }, // 168615096
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose, "GetDeviceWorldPose" }, // 2968919937
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName, "GetHMDDeviceName" }, // 3863584416
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState, "GetHMDWornState" }, // 1079584431
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors, "GetNumOfTrackingSensors" }, // 108537707
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition, "GetOrientationAndPosition" }, // 2205092329
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity, "GetPixelDensity" }, // 1652758903
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters, "GetPositionalTrackingCameraParameters" }, // 1601792002
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage, "GetScreenPercentage" }, // 2658671502
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin, "GetTrackingOrigin" }, // 3532310195
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters, "GetTrackingSensorParameters" }, // 1189814360
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform, "GetTrackingToWorldTransform" }, // 416504967
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState, "GetVRFocusState" }, // 3947531455
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale, "GetWorldToMetersScale" }, // 1579006900
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition, "HasValidTrackingPosition" }, // 2107871631
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking, "IsDeviceTracking" }, // 3749895451
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected, "IsHeadMountedDisplayConnected" }, // 1937722963
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled, "IsHeadMountedDisplayEnabled" }, // 4096454791
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode, "IsInLowPersistenceMode" }, // 3178732936
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable, "IsSpectatorScreenModeControllable" }, // 2603408832
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition, "ResetOrientationAndPosition" }, // 2721657539
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes, "SetClippingPlanes" }, // 3034516613
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode, "SetSpectatorScreenMode" }, // 224957562
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout, "SetSpectatorScreenModeTexturePlusEyeLayout" }, // 618812322
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture, "SetSpectatorScreenTexture" }, // 3106952275
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin, "SetTrackingOrigin" }, // 527666495
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale, "SetWorldToMetersScale" }, // 4190080462
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition, "UpdateExternalTrackingHMDPosition" }, // 3822312079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HeadMountedDisplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadMountedDisplayFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::ClassParams = {
		&UHeadMountedDisplayFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeadMountedDisplayFunctionLibrary, 502320296);
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UHeadMountedDisplayFunctionLibrary>()
	{
		return UHeadMountedDisplayFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadMountedDisplayFunctionLibrary(Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, &UHeadMountedDisplayFunctionLibrary::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UHeadMountedDisplayFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadMountedDisplayFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
