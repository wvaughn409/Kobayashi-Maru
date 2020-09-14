// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Private/OculusMR_State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_State() {}
// Cross Module References
	OCULUSMR_API UScriptStruct* Z_Construct_UScriptStruct_FTrackedCamera();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_State_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_State();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackedCamera::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSMR_API uint32 Get_Z_Construct_UScriptStruct_FTrackedCamera_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackedCamera, Z_Construct_UPackage__Script_OculusMR(), TEXT("TrackedCamera"), sizeof(FTrackedCamera), Get_Z_Construct_UScriptStruct_FTrackedCamera_Hash());
	}
	return Singleton;
}
template<> OCULUSMR_API UScriptStruct* StaticStruct<FTrackedCamera>()
{
	return FTrackedCamera::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackedCamera(FTrackedCamera::StaticStruct, TEXT("/Script/OculusMR"), TEXT("TrackedCamera"), false, nullptr, nullptr);
static struct FScriptStruct_OculusMR_StaticRegisterNativesFTrackedCamera
{
	FScriptStruct_OculusMR_StaticRegisterNativesFTrackedCamera()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackedCamera")),new UScriptStruct::TCppStructOps<FTrackedCamera>);
	}
} ScriptStruct_OculusMR_StaticRegisterNativesFTrackedCamera;
	struct Z_Construct_UScriptStruct_FTrackedCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibratedOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalibratedOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibratedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalibratedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedTrackedDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachedTrackedDevice;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachedTrackedDevice_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackedCamera>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset_MetaData[] = {
		{ "Comment", "/** The raw pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The raw pose of the camera to the attached tracking device" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset = { "RawOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, RawOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation_MetaData[] = {
		{ "Comment", "/** The raw pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The raw pose of the camera to the attached tracking device" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation = { "RawRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, RawRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset_MetaData[] = {
		{ "Comment", "/** (optional) The user pose is provided to fine tuning the relative camera pose at the run-time */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "(optional) The user pose is provided to fine tuning the relative camera pose at the run-time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset = { "UserOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, UserOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation_MetaData[] = {
		{ "Comment", "/** (optional) The user pose is provided to fine tuning the relative camera pose at the run-time */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "(optional) The user pose is provided to fine tuning the relative camera pose at the run-time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation = { "UserRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, UserRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData[] = {
		{ "Comment", "/** The relative pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The relative pose of the camera to the attached tracking device" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset = { "CalibratedOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, CalibratedOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData[] = {
		{ "Comment", "/** The relative pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The relative pose of the camera to the attached tracking device" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation = { "CalibratedRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, CalibratedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData[] = {
		{ "Comment", "/** The tracking node the external camera is bound to */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The tracking node the external camera is bound to" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice = { "AttachedTrackedDevice", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, AttachedTrackedDevice), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY_MetaData[] = {
		{ "Comment", "/** The resolution of the camera frame */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The resolution of the camera frame" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX_MetaData[] = {
		{ "Comment", "/** The resolution of the camera frame */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The resolution of the camera frame" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The horizontal FOV, in degrees */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The horizontal FOV, in degrees" },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The external camera name set through the CameraTool */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The external camera name set through the CameraTool" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "/** >=0: the index of the external camera\n\x09\x09* -1: not bind to any external camera (and would be setup to match the manual CastingCameraActor placement)\n\x09\x09*/" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", ">=0: the index of the external camera\n-1: not bind to any external camera (and would be setup to match the manual CastingCameraActor placement)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedCamera, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackedCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		&NewStructOps,
		"TrackedCamera",
		sizeof(FTrackedCamera),
		alignof(FTrackedCamera),
		Z_Construct_UScriptStruct_FTrackedCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackedCamera()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackedCamera_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackedCamera"), sizeof(FTrackedCamera), Get_Z_Construct_UScriptStruct_FTrackedCamera_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackedCamera_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackedCamera_Hash() { return 3228143433U; }
	void UOculusMR_State::StaticRegisterNativesUOculusMR_State()
	{
	}
	UClass* Z_Construct_UClass_UOculusMR_State_NoRegister()
	{
		return UOculusMR_State::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMR_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindToTrackedCameraIndexRequested_MetaData[];
#endif
		static void NewProp_BindToTrackedCameraIndexRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BindToTrackedCameraIndexRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeCameraStateRequested_MetaData[];
#endif
		static void NewProp_ChangeCameraStateRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChangeCameraStateRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingReferenceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackingReferenceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMR_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OculusMR" },
		{ "Comment", "/**\n* Object to hold the state of MR capture and capturing camera\n*/" },
		{ "IncludePath", "OculusMR_State.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Object to hold the state of MR capture and capturing camera" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData[] = {
		{ "Comment", "/** Flag indicating a change in the tracked camera index for the camera actor to consume */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "Flag indicating a change in the tracked camera index for the camera actor to consume" },
	};
#endif
	void Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_SetBit(void* Obj)
	{
		((UOculusMR_State*)Obj)->BindToTrackedCameraIndexRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested = { "BindToTrackedCameraIndexRequested", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusMR_State), &Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData[] = {
		{ "Comment", "/** Flag indicating a change in the tracked camera state for the camera actor to consume */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "Flag indicating a change in the tracked camera state for the camera actor to consume" },
	};
#endif
	void Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_SetBit(void* Obj)
	{
		((UOculusMR_State*)Obj)->ChangeCameraStateRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested = { "ChangeCameraStateRequested", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusMR_State), &Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Comment", "// A multiplier on the camera distance, should be based on the scaling of the player component\n" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "A multiplier on the camera distance, should be based on the scaling of the player component" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_State, ScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData[] = {
		{ "Comment", "// Component at the tracking origin that the camera calibration is applied to\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "Component at the tracking origin that the camera calibration is applied to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent = { "TrackingReferenceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_State, TrackingReferenceComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera = { "TrackedCamera", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_State, TrackedCamera), Z_Construct_UScriptStruct_FTrackedCamera, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusMR_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMR_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMR_State>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusMR_State_Statics::ClassParams = {
		&UOculusMR_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusMR_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::PropPointers),
		0,
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMR_State()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusMR_State_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusMR_State, 3339078706);
	template<> OCULUSMR_API UClass* StaticClass<UOculusMR_State>()
	{
		return UOculusMR_State::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusMR_State(Z_Construct_UClass_UOculusMR_State, &UOculusMR_State::StaticClass, TEXT("/Script/OculusMR"), TEXT("UOculusMR_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMR_State);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
