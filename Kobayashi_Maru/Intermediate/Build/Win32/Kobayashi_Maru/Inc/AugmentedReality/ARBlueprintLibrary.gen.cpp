// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARBlueprintLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPose2D();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldMappingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultLibrary();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
// End Cross Module References
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetPersonSegmentationDepthImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTextureCameraImage**)Z_Param__Result=UARBlueprintLibrary::GetPersonSegmentationDepthImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetPersonSegmentationImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTextureCameraImage**)Z_Param__Result=UARBlueprintLibrary::GetPersonSegmentationImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedPoses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedPose*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPoses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTracked2DPoses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARPose2D>*)Z_Param__Result=UARBlueprintLibrary::GetAllTracked2DPoses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsSessionTrackingFeatureSupported)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_GET_ENUM(EARSessionTrackingFeature,Z_Param_SessionTrackingFeature);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType(Z_Param_SessionType),EARSessionTrackingFeature(Z_Param_SessionTrackingFeature));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execAddRuntimeCandidateImage)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param_FriendlyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicalWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateImage**)Z_Param__Result=UARBlueprintLibrary::AddRuntimeCandidateImage(Z_Param_SessionConfig,Z_Param_CandidateTexture,Z_Param_FriendlyName,Z_Param_PhysicalWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetSupportedVideoFormats)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARVideoFormat>*)Z_Param__Result=UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType(Z_Param_SessionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UARBlueprintLibrary::GetPointCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetWorldMappingStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARWorldMappingState*)Z_Param__Result=UARBlueprintLibrary::GetWorldMappingStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execAddManualEnvironmentCaptureProbe)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(Z_Param_Location,Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedEnvironmentCaptureProbes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAREnvironmentCaptureProbe*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedImages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedImage*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedImages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedPoint*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedPlanes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARPlaneGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPlanes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARPin*>*)Z_Param__Result=UARBlueprintLibrary::GetAllPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execRemovePin)
	{
		P_GET_OBJECT(UARPin,Z_Param_PinToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::RemovePin(Z_Param_PinToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execUnpinComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToUnpin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::UnpinComponent(Z_Param_ComponentToUnpin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPinComponentToTraceResult)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponentToTraceResult(Z_Param_ComponentToPin,Z_Param_Out_TraceResult,Z_Param_DebugName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPinComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PinToWorldTransform);
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry);
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponent(Z_Param_ComponentToPin,Z_Param_Out_PinToWorldTransform,Z_Param_TrackedGeometry,Z_Param_DebugName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCurrentLightEstimate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARLightEstimate**)Z_Param__Result=UARBlueprintLibrary::GetCurrentLightEstimate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execDebugDrawPin)
	{
		P_GET_OBJECT(UARPin,Z_Param_ARPin);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PersistForSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::DebugDrawPin(Z_Param_ARPin,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_Scale,Z_Param_PersistForSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execDebugDrawTrackedGeometry)
	{
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutlineThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PersistForSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::DebugDrawTrackedGeometry(Z_Param_TrackedGeometry,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_OutlineThickness,Z_Param_PersistForSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsSessionTypeSupported)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType(Z_Param_SessionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCameraDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTextureCameraDepth**)Z_Param__Result=UARBlueprintLibrary::GetCameraDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCameraImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTextureCameraImage**)Z_Param__Result=UARBlueprintLibrary::GetCameraImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllGeometries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllGeometries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetTrackingQualityReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingQualityReason*)Z_Param__Result=UARBlueprintLibrary::GetTrackingQualityReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetTrackingQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingQuality*)Z_Param__Result=UARBlueprintLibrary::GetTrackingQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execLineTraceTrackedObjects3D)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_UBOOL(Z_Param_bTestFeaturePoints);
		P_GET_UBOOL(Z_Param_bTestGroundPlane);
		P_GET_UBOOL(Z_Param_bTestPlaneExtents);
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects3D(Z_Param_Start,Z_Param_End,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execLineTraceTrackedObjects)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ScreenCoord);
		P_GET_UBOOL(Z_Param_bTestFeaturePoints);
		P_GET_UBOOL(Z_Param_bTestGroundPlane);
		P_GET_UBOOL(Z_Param_bTestPlaneExtents);
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects(Z_Param_ScreenCoord,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execSetAlignmentTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InAlignmentTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::SetAlignmentTransform(Z_Param_Out_InAlignmentTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetSessionConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSessionConfig**)Z_Param__Result=UARBlueprintLibrary::GetSessionConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetARSessionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARSessionStatus*)Z_Param__Result=UARBlueprintLibrary::GetARSessionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execStopARSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::StopARSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPauseARSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::PauseARSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execStartARSession)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::StartARSession(Z_Param_SessionConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsARSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsARSupported();
		P_NATIVE_END;
	}
	void UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary()
	{
		UClass* Class = UARBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddManualEnvironmentCaptureProbe", &UARBlueprintLibrary::execAddManualEnvironmentCaptureProbe },
			{ "AddRuntimeCandidateImage", &UARBlueprintLibrary::execAddRuntimeCandidateImage },
			{ "DebugDrawPin", &UARBlueprintLibrary::execDebugDrawPin },
			{ "DebugDrawTrackedGeometry", &UARBlueprintLibrary::execDebugDrawTrackedGeometry },
			{ "GetAllGeometries", &UARBlueprintLibrary::execGetAllGeometries },
			{ "GetAllPins", &UARBlueprintLibrary::execGetAllPins },
			{ "GetAllTracked2DPoses", &UARBlueprintLibrary::execGetAllTracked2DPoses },
			{ "GetAllTrackedEnvironmentCaptureProbes", &UARBlueprintLibrary::execGetAllTrackedEnvironmentCaptureProbes },
			{ "GetAllTrackedImages", &UARBlueprintLibrary::execGetAllTrackedImages },
			{ "GetAllTrackedPlanes", &UARBlueprintLibrary::execGetAllTrackedPlanes },
			{ "GetAllTrackedPoints", &UARBlueprintLibrary::execGetAllTrackedPoints },
			{ "GetAllTrackedPoses", &UARBlueprintLibrary::execGetAllTrackedPoses },
			{ "GetARSessionStatus", &UARBlueprintLibrary::execGetARSessionStatus },
			{ "GetCameraDepth", &UARBlueprintLibrary::execGetCameraDepth },
			{ "GetCameraImage", &UARBlueprintLibrary::execGetCameraImage },
			{ "GetCurrentLightEstimate", &UARBlueprintLibrary::execGetCurrentLightEstimate },
			{ "GetPersonSegmentationDepthImage", &UARBlueprintLibrary::execGetPersonSegmentationDepthImage },
			{ "GetPersonSegmentationImage", &UARBlueprintLibrary::execGetPersonSegmentationImage },
			{ "GetPointCloud", &UARBlueprintLibrary::execGetPointCloud },
			{ "GetSessionConfig", &UARBlueprintLibrary::execGetSessionConfig },
			{ "GetSupportedVideoFormats", &UARBlueprintLibrary::execGetSupportedVideoFormats },
			{ "GetTrackingQuality", &UARBlueprintLibrary::execGetTrackingQuality },
			{ "GetTrackingQualityReason", &UARBlueprintLibrary::execGetTrackingQualityReason },
			{ "GetWorldMappingStatus", &UARBlueprintLibrary::execGetWorldMappingStatus },
			{ "IsARSupported", &UARBlueprintLibrary::execIsARSupported },
			{ "IsSessionTrackingFeatureSupported", &UARBlueprintLibrary::execIsSessionTrackingFeatureSupported },
			{ "IsSessionTypeSupported", &UARBlueprintLibrary::execIsSessionTypeSupported },
			{ "LineTraceTrackedObjects", &UARBlueprintLibrary::execLineTraceTrackedObjects },
			{ "LineTraceTrackedObjects3D", &UARBlueprintLibrary::execLineTraceTrackedObjects3D },
			{ "PauseARSession", &UARBlueprintLibrary::execPauseARSession },
			{ "PinComponent", &UARBlueprintLibrary::execPinComponent },
			{ "PinComponentToTraceResult", &UARBlueprintLibrary::execPinComponentToTraceResult },
			{ "RemovePin", &UARBlueprintLibrary::execRemovePin },
			{ "SetAlignmentTransform", &UARBlueprintLibrary::execSetAlignmentTransform },
			{ "StartARSession", &UARBlueprintLibrary::execStartARSession },
			{ "StopARSession", &UARBlueprintLibrary::execStopARSession },
			{ "UnpinComponent", &UARBlueprintLibrary::execUnpinComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics
	{
		struct ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms
		{
			FVector Location;
			FVector Extent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** Adds an environment capture probe to the ar world */" },
		{ "DisplayName", "Add AR Environment Probe" },
		{ "Keywords", "ar augmentedreality augmented reality tracking anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Adds an environment capture probe to the ar world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "AddManualEnvironmentCaptureProbe", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms), Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics
	{
		struct ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms
		{
			UARSessionConfig* SessionConfig;
			UTexture2D* CandidateTexture;
			FString FriendlyName;
			float PhysicalWidth;
			UARCandidateImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicalWidth;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, ReturnValue), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_PhysicalWidth = { "PhysicalWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, PhysicalWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_PhysicalWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_CandidateTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_SessionConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Create an ARCandidateImage object and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\x09 *\n\x09 * Note that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\x09 *\n\x09 * On ARCore platform, you can leave the PhysicalWidth to 0 if you don't know the physical size of the image or\n\x09 * the physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\n\x09 * and should be run on a background thread.\n\x09 *\n\x09 * @return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n\x09 *\x09\x09  Return nullptr otherwise.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality candidate image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Create an ARCandidateImage object and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\nNote that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\nOn ARCore platform, you can leave the PhysicalWidth to 0 if you don't know the physical size of the image or\nthe physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\nand should be run on a background thread.\n\n@return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n               Return nullptr otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "AddRuntimeCandidateImage", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics
	{
		struct ARBlueprintLibrary_eventDebugDrawPin_Parms
		{
			UARPin* ARPin;
			UObject* WorldContextObject;
			FLinearColor Color;
			float Scale;
			float PersistForSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_PersistForSeconds = { "PersistForSeconds", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_PersistForSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_ARPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Debug" },
		{ "Comment", "/** Given a \\c UARPin, draw it for debugging purposes. */" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=0.750000)" },
		{ "CPP_Default_PersistForSeconds", "0.000000" },
		{ "CPP_Default_Scale", "5.000000" },
		{ "Keywords", "ar augmentedreality augmented reality pin debug draw" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Given a \\c UARPin, draw it for debugging purposes." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "DebugDrawPin", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventDebugDrawPin_Parms), Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics
	{
		struct ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms
		{
			UARTrackedGeometry* TrackedGeometry;
			UObject* WorldContextObject;
			FLinearColor Color;
			float OutlineThickness;
			float PersistForSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_PersistForSeconds = { "PersistForSeconds", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, OutlineThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_PersistForSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_OutlineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_TrackedGeometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Debug" },
		{ "Comment", "/** Given some real-world geometry being tracked by the Augmented Reality system, draw it on the screen for debugging purposes (rudimentary)*/" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=0.750000)" },
		{ "CPP_Default_OutlineThickness", "5.000000" },
		{ "CPP_Default_PersistForSeconds", "0.000000" },
		{ "Keywords", "ar augmentedreality augmented reality tracked geometry debug draw" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Given some real-world geometry being tracked by the Augmented Reality system, draw it on the screen for debugging purposes (rudimentary)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "DebugDrawTrackedGeometry", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms), Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics
	{
		struct ARBlueprintLibrary_eventGetAllGeometries_Parms
		{
			TArray<UARTrackedGeometry*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllGeometries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the real-world geometry as currently seen by the Augmented Reality system */" },
		{ "DisplayName", "Get All AR Geometries" },
		{ "Keywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the real-world geometry as currently seen by the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllGeometries", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllGeometries_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics
	{
		struct ARBlueprintLibrary_eventGetAllPins_Parms
		{
			TArray<UARPin*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/** Get a list of all the \\c UARPin objects that the Augmented Reality session is currently using to connect virtual objects to real-world, tracked locations. */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking pin anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Get a list of all the \\c UARPin objects that the Augmented Reality session is currently using to connect virtual objects to real-world, tracked locations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllPins", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllPins_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTracked2DPoses_Parms
		{
			TArray<FARPose2D> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTracked2DPoses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARPose2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** @return all the 2D poses tracked by the AR system */" },
		{ "DisplayName", "Get All AR Tracked 2D Poses" },
		{ "Keywords", "ar augmentedreality augmented reality pose tracking" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return all the 2D poses tracked by the AR system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTracked2DPoses", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllTracked2DPoses_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedEnvironmentCaptureProbes_Parms
		{
			TArray<UAREnvironmentCaptureProbe*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedEnvironmentCaptureProbes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the tracked environment capture probes as currently seen by the Augmented Reality system */" },
		{ "DisplayName", "Get All AR Tracked Environment Probes" },
		{ "Keywords", "ar augmentedreality augmented reality tracking anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the tracked environment capture probes as currently seen by the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedEnvironmentCaptureProbes", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllTrackedEnvironmentCaptureProbes_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedImages_Parms
		{
			TArray<UARTrackedImage*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedImages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARTrackedImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the tracked images as currently seen by the Augmented Reality system */" },
		{ "DisplayName", "Get All AR Tracked Images" },
		{ "Keywords", "ar augmentedreality augmented reality tracking images anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the tracked images as currently seen by the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedImages", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllTrackedImages_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedPlanes_Parms
		{
			TArray<UARPlaneGeometry*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedPlanes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the tracked planes as currently seen by the Augmented Reality system */" },
		{ "DisplayName", "Get All AR Tracked Planes" },
		{ "Keywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the tracked planes as currently seen by the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedPlanes", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllTrackedPlanes_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedPoints_Parms
		{
			TArray<UARTrackedPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARTrackedPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the tracked points as currently seen by the Augmented Reality system */" },
		{ "eywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "KDisplayName", "Get All AR Tracked Points" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the tracked points as currently seen by the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedPoints", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllTrackedPoints_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedPoses_Parms
		{
			TArray<UARTrackedPose*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedPoses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARTrackedPose_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** @return all the 3D poses tracked by the AR system */" },
		{ "DisplayName", "Get All AR Tracked 3D Poses" },
		{ "Keywords", "ar augmentedreality augmented reality pose tracking" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return all the 3D poses tracked by the AR system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedPoses", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetAllTrackedPoses_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics
	{
		struct ARBlueprintLibrary_eventGetARSessionStatus_Parms
		{
			FARSessionStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetARSessionStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FARSessionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * It is intended that you check the status of the Augmented Reality session on every frame and take action accordingly.\n\x09 * e.g. if the session stopped for an unexpected reason, you might give the user a prompt to re-start the session\n\x09 *\n\x09 * @return The status of a current Augmented Reality session: e.g. Running or Not running for a specific reason.\n\x09 */" },
		{ "DisplayName", "Get AR Session Status" },
		{ "Keywords", "ar augmentedreality augmented reality session start stop run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "It is intended that you check the status of the Augmented Reality session on every frame and take action accordingly.\ne.g. if the session stopped for an unexpected reason, you might give the user a prompt to re-start the session\n\n@return The status of a current Augmented Reality session: e.g. Running or Not running for a specific reason." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetARSessionStatus", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetARSessionStatus_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics
	{
		struct ARBlueprintLibrary_eventGetCameraDepth_Parms
		{
			UARTextureCameraDepth* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCameraDepth_Parms, ReturnValue), Z_Construct_UClass_UARTextureCameraDepth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "Comment", "/** @return the current camera depth data from the Augmented Reality system */" },
		{ "DisplayName", "Get AR Camera Depth" },
		{ "Keywords", "ar augmentedreality augmented reality camera image depth" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the current camera depth data from the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCameraDepth", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetCameraDepth_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics
	{
		struct ARBlueprintLibrary_eventGetCameraImage_Parms
		{
			UARTextureCameraImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCameraImage_Parms, ReturnValue), Z_Construct_UClass_UARTextureCameraImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "Comment", "/** @return the current camera image from the Augmented Reality system */" },
		{ "DisplayName", "Get AR Camera Image" },
		{ "Keywords", "ar augmentedreality augmented reality camera image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the current camera image from the Augmented Reality system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCameraImage", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetCameraImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics
	{
		struct ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms
		{
			UARLightEstimate* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms, ReturnValue), Z_Construct_UClass_UARLightEstimate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimate" },
		{ "Comment", "/**\n\x09 * An AugmentedReality session can be configured to provide light estimates.\n\x09 * The specific approach to light estimation can be configured by the \\c UARSessionConfig\n\x09 * specified during \\c StartARSession(). This function assumes that you will cast\n\x09 * the returned \\c UARLightEstimate to a derived type corresponding to your\n\x09 * session config.\n\x09 *\n\x09 * @return a \\c UARLighEstimate that can be cast to a derived class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "An AugmentedReality session can be configured to provide light estimates.\nThe specific approach to light estimation can be configured by the \\c UARSessionConfig\nspecified during \\c StartARSession(). This function assumes that you will cast\nthe returned \\c UARLightEstimate to a derived type corresponding to your\nsession config.\n\n@return a \\c UARLighEstimate that can be cast to a derived class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCurrentLightEstimate", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics
	{
		struct ARBlueprintLibrary_eventGetPersonSegmentationDepthImage_Parms
		{
			UARTextureCameraImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetPersonSegmentationDepthImage_Parms, ReturnValue), Z_Construct_UClass_UARTextureCameraImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Person Segmentation" },
		{ "Comment", "/** @return the segmentation depth image if the person segmentation with depth session feature is used */" },
		{ "DisplayName", "Get AR Person Segmentation Depth Image" },
		{ "Keywords", "ar augmentedreality augmented reality person segmentation depth image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the segmentation depth image if the person segmentation with depth session feature is used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetPersonSegmentationDepthImage", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetPersonSegmentationDepthImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics
	{
		struct ARBlueprintLibrary_eventGetPersonSegmentationImage_Parms
		{
			UARTextureCameraImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetPersonSegmentationImage_Parms, ReturnValue), Z_Construct_UClass_UARTextureCameraImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Person Segmentation" },
		{ "Comment", "/** @return the segmentation image if the person segmentation session feature is used */" },
		{ "DisplayName", "Get AR Person Segmentation Image" },
		{ "Keywords", "ar augmentedreality augmented reality person segmentation image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the segmentation image if the person segmentation session feature is used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetPersonSegmentationImage", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetPersonSegmentationImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics
	{
		struct ARBlueprintLibrary_eventGetPointCloud_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetPointCloud_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return the raw point cloud view of the AR scene */" },
		{ "DisplayName", "Get AR Point Cloud" },
		{ "Keywords", "ar augmentedreality augmented reality tracking point cloud" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the raw point cloud view of the AR scene" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetPointCloud", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetPointCloud_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics
	{
		struct ARBlueprintLibrary_eventGetSessionConfig_Parms
		{
			UARSessionConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSessionConfig_Parms, ReturnValue), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** @return the configuration that the current session was started with. */" },
		{ "DisplayName", "Get AR Session Config" },
		{ "Keywords", "ar augmentedreality augmented reality session" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the configuration that the current session was started with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetSessionConfig", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetSessionConfig_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics
	{
		struct ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms
		{
			EARSessionType SessionType;
			TArray<FARVideoFormat> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Capabilities" },
		{ "Comment", "/** @return The list of supported video formats for this device */" },
		{ "DisplayName", "Get Supported AR Video Formats" },
		{ "Keywords", "ar augmentedreality augmented reality config video formats" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return The list of supported video formats for this device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetSupportedVideoFormats", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics
	{
		struct ARBlueprintLibrary_eventGetTrackingQuality_Parms
		{
			EARTrackingQuality ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetTrackingQuality_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return how well the tracking system is performing at the moment */" },
		{ "DisplayName", "Get AR Tracking Quality" },
		{ "Keywords", "ar augmentedreality augmented reality tracking quality" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return how well the tracking system is performing at the moment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetTrackingQuality", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetTrackingQuality_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics
	{
		struct ARBlueprintLibrary_eventGetTrackingQualityReason_Parms
		{
			EARTrackingQualityReason ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetTrackingQualityReason_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return The reason for the current limited tracking state */" },
		{ "DisplayName", "Get AR Tracking Quality Reason" },
		{ "Keywords", "ar augmentedreality augmented reality tracking quality reason" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return The reason for the current limited tracking state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetTrackingQualityReason", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetTrackingQualityReason_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics
	{
		struct ARBlueprintLibrary_eventGetWorldMappingStatus_Parms
		{
			EARWorldMappingState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventGetWorldMappingStatus_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARWorldMappingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return the current world mapping status for the AR world */" },
		{ "DisplayName", "Get AR World Mapping Status" },
		{ "Keywords", "ar augmentedreality augmented reality tracking anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the current world mapping status for the AR world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetWorldMappingStatus", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventGetWorldMappingStatus_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsARSupported_Parms
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
	void Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsARSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsARSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Checks if the current device can support AR\n\x09 *\n\x09 */" },
		{ "DisplayName", "Is AR Supported" },
		{ "Keywords", "ar augmentedreality augmented reality session start run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Checks if the current device can support AR" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsARSupported", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventIsARSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms
		{
			EARSessionType SessionType;
			EARSessionTrackingFeature SessionTrackingFeature;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionTrackingFeature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionTrackingFeature_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature = { "SessionTrackingFeature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms, SessionTrackingFeature), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** @return if a particular session feature is supported with the specified session type on the current platform */" },
		{ "DisplayName", "Is AR Session Tracking Feature Supported" },
		{ "Keywords", "ar augmentedreality augmented reality session tracking feature" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return if a particular session feature is supported with the specified session type on the current platform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsSessionTrackingFeatureSupported", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsSessionTypeSupported_Parms
		{
			EARSessionType SessionType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsSessionTypeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/**\n\x09 * Test whether this type of session is supported by the current Augmented Reality platform.\n\x09 * e.g. is your device capable of doing positional tracking or orientation only?\n\x09 */" },
		{ "DisplayName", "Is AR Session Type Supported" },
		{ "Keywords", "ar augmentedreality augmented reality tracking" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Test whether this type of session is supported by the current Augmented Reality platform.\ne.g. is your device capable of doing positional tracking or orientation only?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsSessionTypeSupported", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics
	{
		struct ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms
		{
			FVector2D ScreenCoord;
			bool bTestFeaturePoints;
			bool bTestGroundPlane;
			bool bTestPlaneExtents;
			bool bTestPlaneBoundaryPolygon;
			TArray<FARTraceResult> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneBoundaryPolygon;
		static void NewProp_bTestPlaneExtents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneExtents;
		static void NewProp_bTestGroundPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestGroundPlane;
		static void NewProp_bTestFeaturePoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestFeaturePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenCoord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenCoord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestPlaneBoundaryPolygon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon = { "bTestPlaneBoundaryPolygon", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestPlaneExtents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents = { "bTestPlaneExtents", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestGroundPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane = { "bTestGroundPlane", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestFeaturePoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints = { "bTestFeaturePoints", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord = { "ScreenCoord", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms, ScreenCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n\x09 * Perform a line trace against any real-world geometry as tracked by the AR system.\n\x09 *\n\x09 * @param ScreenCoord\x09         Coordinate of the point on the screen from which to cast a ray into the tracking space.\n\x09 *\n\x09 * @return a list of \\c FARTraceResult sorted by distance from camera.\n\x09 */" },
		{ "CPP_Default_bTestFeaturePoints", "true" },
		{ "CPP_Default_bTestGroundPlane", "true" },
		{ "CPP_Default_bTestPlaneBoundaryPolygon", "true" },
		{ "CPP_Default_bTestPlaneExtents", "true" },
		{ "Keywords", "ar augmentedreality augmented reality tracking tracing linetrace" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Perform a line trace against any real-world geometry as tracked by the AR system.\n\n@param ScreenCoord            Coordinate of the point on the screen from which to cast a ray into the tracking space.\n\n@return a list of \\c FARTraceResult sorted by distance from camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "LineTraceTrackedObjects", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics
	{
		struct ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms
		{
			FVector Start;
			FVector End;
			bool bTestFeaturePoints;
			bool bTestGroundPlane;
			bool bTestPlaneExtents;
			bool bTestPlaneBoundaryPolygon;
			TArray<FARTraceResult> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneBoundaryPolygon;
		static void NewProp_bTestPlaneExtents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneExtents;
		static void NewProp_bTestGroundPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestGroundPlane;
		static void NewProp_bTestFeaturePoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestFeaturePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestPlaneBoundaryPolygon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon = { "bTestPlaneBoundaryPolygon", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestPlaneExtents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents = { "bTestPlaneExtents", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestGroundPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane = { "bTestGroundPlane", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestFeaturePoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints = { "bTestFeaturePoints", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n\x09 * Perform a line trace against any real-world geometry as tracked by the AR system.\n\x09 *\n\x09 * @param Start\x09\x09\x09\x09\x09Start point of the trace, in world space.\n\x09 * @param End\x09\x09\x09\x09\x09""End point of the trace, in world space.\n\x09 *\n\x09 * @return a list of \\c FARTraceResult sorted by distance from camera.\n\x09 */" },
		{ "CPP_Default_bTestFeaturePoints", "true" },
		{ "CPP_Default_bTestGroundPlane", "true" },
		{ "CPP_Default_bTestPlaneBoundaryPolygon", "true" },
		{ "CPP_Default_bTestPlaneExtents", "true" },
		{ "Keywords", "ar augmentedreality augmented reality tracking tracing linetrace" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Perform a line trace against any real-world geometry as tracked by the AR system.\n\n@param Start                                 Start point of the trace, in world space.\n@param End                                   End point of the trace, in world space.\n\n@return a list of \\c FARTraceResult sorted by distance from camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "LineTraceTrackedObjects3D", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** Pause a running Augmented Reality session without clearing existing state. */" },
		{ "DisplayName", "Pause AR Session" },
		{ "Keywords", "ar augmentedreality augmented reality session stop run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Pause a running Augmented Reality session without clearing existing state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PauseARSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics
	{
		struct ARBlueprintLibrary_eventPinComponent_Parms
		{
			USceneComponent* ComponentToPin;
			FTransform PinToWorldTransform;
			UARTrackedGeometry* TrackedGeometry;
			FName DebugName;
			UARPin* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinToWorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinToWorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, ReturnValue), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, DebugName), METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform = { "PinToWorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, PinToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_TrackedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/**\n\x09 * Pin an Unreal Component to a location in tracking spce (i.e. the real world).\n\x09 *\n\x09 * @param ComponentToPin         The component that should be pinned.\n\x09 * @param PinToWorldTransform    A transform (in Unreal World Space) that corresponds to\n\x09 *                               a physical location where the component should be pinned.\n\x09 * @param TrackedGeometry        An optional, real-world geometry that is recognized by the\n\x09 *                               AR system; any correction to the position of this geometry\n\x09 *                               will be applied to the pinned component.\n\x09 * @param DebugName              An optional name that will be displayed when this\n\x09 *                               pin is being drawn for debugging purposes.\n\x09 *\n\x09 * @return an object representing the pin that connects \\c ComponentToPin component to a real-world\n\x09 *         location and optionally to the \\c TrackedGeometry.\n\x09 */" },
		{ "CPP_Default_DebugName", "None" },
		{ "CPP_Default_TrackedGeometry", "None" },
		{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Pin an Unreal Component to a location in tracking spce (i.e. the real world).\n\n@param ComponentToPin         The component that should be pinned.\n@param PinToWorldTransform    A transform (in Unreal World Space) that corresponds to\n                              a physical location where the component should be pinned.\n@param TrackedGeometry        An optional, real-world geometry that is recognized by the\n                              AR system; any correction to the position of this geometry\n                              will be applied to the pinned component.\n@param DebugName              An optional name that will be displayed when this\n                              pin is being drawn for debugging purposes.\n\n@return an object representing the pin that connects \\c ComponentToPin component to a real-world\n        location and optionally to the \\c TrackedGeometry." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PinComponent", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventPinComponent_Parms), Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics
	{
		struct ARBlueprintLibrary_eventPinComponentToTraceResult_Parms
		{
			USceneComponent* ComponentToPin;
			FARTraceResult TraceResult;
			FName DebugName;
			UARPin* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, ReturnValue), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, DebugName), METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/**\n\x09 * A convenient version of \\c PinComponent() that can be used in conjunction\n\x09 * with a result of a \\c LineTraceTrackedObjects call.\n\x09 */" },
		{ "CPP_Default_DebugName", "None" },
		{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "A convenient version of \\c PinComponent() that can be used in conjunction\nwith a result of a \\c LineTraceTrackedObjects call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PinComponentToTraceResult", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms), Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics
	{
		struct ARBlueprintLibrary_eventRemovePin_Parms
		{
			UARPin* PinToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::NewProp_PinToRemove = { "PinToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventRemovePin_Parms, PinToRemove), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::NewProp_PinToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/** Remove a pin such that it no longer updates the associated component. */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Remove a pin such that it no longer updates the associated component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "RemovePin", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventRemovePin_Parms), Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_RemovePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics
	{
		struct ARBlueprintLibrary_eventSetAlignmentTransform_Parms
		{
			FTransform InAlignmentTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAlignmentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAlignmentTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform = { "InAlignmentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventSetAlignmentTransform_Parms, InAlignmentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Alignment" },
		{ "Comment", "/**\n\x09 * Set a transform that will be applied to the tracking space. This effectively moves any camera\n\x09 * possessed by the Augmented Reality system such that it is pointing at a different spot\n\x09 * in Unreal's World Space. This is often done to support AR scenarios that rely on static\n\x09 * geometry and/or lighting.\n\x09 *\n\x09 * Note: any movable components that are pinned will appear to stay in place, while anything\n\x09 * not pinned or is not movable (static or stationary) will appear to move.\n\x09 *\n\x09 * \\see PinComponent\n\x09 * \\see PinComponentToTraceResult\n\x09 */" },
		{ "DisplayName", "Set AR Alignment Transform" },
		{ "Keywords", "ar augmentedreality augmented reality tracking alignment" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Set a transform that will be applied to the tracking space. This effectively moves any camera\npossessed by the Augmented Reality system such that it is pointing at a different spot\nin Unreal's World Space. This is often done to support AR scenarios that rely on static\ngeometry and/or lighting.\n\nNote: any movable components that are pinned will appear to stay in place, while anything\nnot pinned or is not movable (static or stationary) will appear to move.\n\n\\see PinComponent\n\\see PinComponentToTraceResult" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "SetAlignmentTransform", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventSetAlignmentTransform_Parms), Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics
	{
		struct ARBlueprintLibrary_eventStartARSession_Parms
		{
			UARSessionConfig* SessionConfig;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventStartARSession_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::NewProp_SessionConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Begin a new Augmented Reality session. Subsequently, use the \\c GetARSessionStatus() function to figure out the status of the session.\n\x09 *\n\x09 * @param SessionConfig    Describes the tracking method to use, what kind of geometry to detect in the world, etc.\n\x09 */" },
		{ "DisplayName", "Start AR Session" },
		{ "Keywords", "ar augmentedreality augmented reality session start run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Begin a new Augmented Reality session. Subsequently, use the \\c GetARSessionStatus() function to figure out the status of the session.\n\n@param SessionConfig    Describes the tracking method to use, what kind of geometry to detect in the world, etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "StartARSession", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventStartARSession_Parms), Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StartARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** Stop a running Augmented Reality session and clear any state. */" },
		{ "DisplayName", "Stop AR Session" },
		{ "Keywords", "ar augmentedreality augmented reality session stop run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Stop a running Augmented Reality session and clear any state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "StopARSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StopARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics
	{
		struct ARBlueprintLibrary_eventUnpinComponent_Parms
		{
			USceneComponent* ComponentToUnpin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToUnpin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToUnpin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin = { "ComponentToUnpin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBlueprintLibrary_eventUnpinComponent_Parms, ComponentToUnpin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/** Given a pinned \\c ComponentToUnpin, remove its attachment to the real world. */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Given a pinned \\c ComponentToUnpin, remove its attachment to the real world." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "UnpinComponent", nullptr, nullptr, sizeof(ARBlueprintLibrary_eventUnpinComponent_Parms), Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARBlueprintLibrary_NoRegister()
	{
		return UARBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UARBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe, "AddManualEnvironmentCaptureProbe" }, // 1092929042
		{ &Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage, "AddRuntimeCandidateImage" }, // 1691735282
		{ &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin, "DebugDrawPin" }, // 3604367210
		{ &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry, "DebugDrawTrackedGeometry" }, // 3260369131
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries, "GetAllGeometries" }, // 3052566304
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins, "GetAllPins" }, // 2215443559
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses, "GetAllTracked2DPoses" }, // 3003287105
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes, "GetAllTrackedEnvironmentCaptureProbes" }, // 3869283948
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages, "GetAllTrackedImages" }, // 4122574404
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes, "GetAllTrackedPlanes" }, // 2573106887
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints, "GetAllTrackedPoints" }, // 2366051487
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses, "GetAllTrackedPoses" }, // 3141106123
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus, "GetARSessionStatus" }, // 2232383640
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth, "GetCameraDepth" }, // 2883968362
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage, "GetCameraImage" }, // 4211934952
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate, "GetCurrentLightEstimate" }, // 2967102878
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage, "GetPersonSegmentationDepthImage" }, // 311034744
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage, "GetPersonSegmentationImage" }, // 2025171712
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud, "GetPointCloud" }, // 100857926
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig, "GetSessionConfig" }, // 1512887027
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats, "GetSupportedVideoFormats" }, // 950200678
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality, "GetTrackingQuality" }, // 1074928382
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason, "GetTrackingQualityReason" }, // 1818466179
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus, "GetWorldMappingStatus" }, // 3585716438
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported, "IsARSupported" }, // 2599764964
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported, "IsSessionTrackingFeatureSupported" }, // 1263474266
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported, "IsSessionTypeSupported" }, // 2266904995
		{ &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects, "LineTraceTrackedObjects" }, // 4051391415
		{ &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D, "LineTraceTrackedObjects3D" }, // 639408769
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession, "PauseARSession" }, // 1290624242
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponent, "PinComponent" }, // 2681485110
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult, "PinComponentToTraceResult" }, // 2931540742
		{ &Z_Construct_UFunction_UARBlueprintLibrary_RemovePin, "RemovePin" }, // 665582033
		{ &Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform, "SetAlignmentTransform" }, // 3147154823
		{ &Z_Construct_UFunction_UARBlueprintLibrary_StartARSession, "StartARSession" }, // 1409663824
		{ &Z_Construct_UFunction_UARBlueprintLibrary_StopARSession, "StopARSession" }, // 1225341075
		{ &Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent, "UnpinComponent" }, // 1844741024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ScriptName", "ARLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARBlueprintLibrary_Statics::ClassParams = {
		&UARBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARBlueprintLibrary, 2815546457);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARBlueprintLibrary>()
	{
		return UARBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARBlueprintLibrary(Z_Construct_UClass_UARBlueprintLibrary, &UARBlueprintLibrary::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBlueprintLibrary);
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetTraceChannel)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARLineTraceChannels*)Z_Param__Result=UARTraceResultLibrary::GetTraceChannel(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetTrackedGeometry)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTrackedGeometry**)Z_Param__Result=UARTraceResultLibrary::GetTrackedGeometry(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetLocalToWorldTransform)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToWorldTransform(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetLocalToTrackingTransform)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToTrackingTransform(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetDistanceFromCamera)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UARTraceResultLibrary::GetDistanceFromCamera(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	void UARTraceResultLibrary::StaticRegisterNativesUARTraceResultLibrary()
	{
		UClass* Class = UARTraceResultLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistanceFromCamera", &UARTraceResultLibrary::execGetDistanceFromCamera },
			{ "GetLocalToTrackingTransform", &UARTraceResultLibrary::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARTraceResultLibrary::execGetLocalToWorldTransform },
			{ "GetTraceChannel", &UARTraceResultLibrary::execGetTraceChannel },
			{ "GetTrackedGeometry", &UARTraceResultLibrary::execGetTrackedGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics
	{
		struct ARTraceResultLibrary_eventGetDistanceFromCamera_Parms
		{
			FARTraceResult TraceResult;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return  the distance from the camera to the traced location in Unreal Units. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return  the distance from the camera to the traced location in Unreal Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetDistanceFromCamera", nullptr, nullptr, sizeof(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics
	{
		struct ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n\x09 * @return The transform of the trace result in tracking space (after it is modified by the \\c AlignmentTransform).\n\x09 *\n\x09 * \\see SetAlignmentTransform()\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return The transform of the trace result in tracking space (after it is modified by the \\c AlignmentTransform).\n\n\\see SetAlignmentTransform()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetLocalToTrackingTransform", nullptr, nullptr, sizeof(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics
	{
		struct ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return Get the transform of the trace result in Unreal World Space. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return Get the transform of the trace result in Unreal World Space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetLocalToWorldTransform", nullptr, nullptr, sizeof(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics
	{
		struct ARTraceResultLibrary_eventGetTraceChannel_Parms
		{
			FARTraceResult TraceResult;
			EARLineTraceChannels ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTraceChannel_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTraceChannel_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return  Get the type of the tracked object (if any) that effected this trace result. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return  Get the type of the tracked object (if any) that effected this trace result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetTraceChannel", nullptr, nullptr, sizeof(ARTraceResultLibrary_eventGetTraceChannel_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics
	{
		struct ARTraceResultLibrary_eventGetTrackedGeometry_Parms
		{
			FARTraceResult TraceResult;
			UARTrackedGeometry* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTrackedGeometry_Parms, ReturnValue), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTrackedGeometry_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return Get the real-world object (as observed by the Augmented Reality system) that was intersected by the line trace. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return Get the real-world object (as observed by the Augmented Reality system) that was intersected by the line trace." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetTrackedGeometry", nullptr, nullptr, sizeof(ARTraceResultLibrary_eventGetTrackedGeometry_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTraceResultLibrary_NoRegister()
	{
		return UARTraceResultLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UARTraceResultLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTraceResultLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTraceResultLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera, "GetDistanceFromCamera" }, // 3250421738
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 1040926897
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 2515340003
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel, "GetTraceChannel" }, // 531535674
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry, "GetTrackedGeometry" }, // 2419749997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTraceResultLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ScriptName", "ARTraceResultLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTraceResultLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTraceResultLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTraceResultLibrary_Statics::ClassParams = {
		&UARTraceResultLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARTraceResultLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTraceResultLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTraceResultLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTraceResultLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTraceResultLibrary, 1387406090);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTraceResultLibrary>()
	{
		return UARTraceResultLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTraceResultLibrary(Z_Construct_UClass_UARTraceResultLibrary, &UARTraceResultLibrary::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTraceResultLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTraceResultLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
