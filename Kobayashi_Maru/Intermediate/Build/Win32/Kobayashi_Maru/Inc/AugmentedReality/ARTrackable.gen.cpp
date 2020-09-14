// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARTrackable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTrackable() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EAREye();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedQRCode_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedQRCode();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedObject();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPose3D();
// End Cross Module References
	static UEnum* EAREye_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREye, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EAREye"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREye>()
	{
		return EAREye_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAREye(EAREye_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EAREye"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EAREye_Hash() { return 3408057559U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EAREye()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAREye"), 0, Get_Z_Construct_UEnum_AugmentedReality_EAREye_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAREye::LeftEye", (int64)EAREye::LeftEye },
				{ "EAREye::RightEye", (int64)EAREye::RightEye },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "LeftEye.Name", "EAREye::LeftEye" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
				{ "RightEye.Name", "EAREye::RightEye" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EAREye",
				"EAREye",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARFaceBlendShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceBlendShape"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceBlendShape>()
	{
		return EARFaceBlendShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceBlendShape(EARFaceBlendShape_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceBlendShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Hash() { return 903512983U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceBlendShape"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceBlendShape::EyeBlinkLeft", (int64)EARFaceBlendShape::EyeBlinkLeft },
				{ "EARFaceBlendShape::EyeLookDownLeft", (int64)EARFaceBlendShape::EyeLookDownLeft },
				{ "EARFaceBlendShape::EyeLookInLeft", (int64)EARFaceBlendShape::EyeLookInLeft },
				{ "EARFaceBlendShape::EyeLookOutLeft", (int64)EARFaceBlendShape::EyeLookOutLeft },
				{ "EARFaceBlendShape::EyeLookUpLeft", (int64)EARFaceBlendShape::EyeLookUpLeft },
				{ "EARFaceBlendShape::EyeSquintLeft", (int64)EARFaceBlendShape::EyeSquintLeft },
				{ "EARFaceBlendShape::EyeWideLeft", (int64)EARFaceBlendShape::EyeWideLeft },
				{ "EARFaceBlendShape::EyeBlinkRight", (int64)EARFaceBlendShape::EyeBlinkRight },
				{ "EARFaceBlendShape::EyeLookDownRight", (int64)EARFaceBlendShape::EyeLookDownRight },
				{ "EARFaceBlendShape::EyeLookInRight", (int64)EARFaceBlendShape::EyeLookInRight },
				{ "EARFaceBlendShape::EyeLookOutRight", (int64)EARFaceBlendShape::EyeLookOutRight },
				{ "EARFaceBlendShape::EyeLookUpRight", (int64)EARFaceBlendShape::EyeLookUpRight },
				{ "EARFaceBlendShape::EyeSquintRight", (int64)EARFaceBlendShape::EyeSquintRight },
				{ "EARFaceBlendShape::EyeWideRight", (int64)EARFaceBlendShape::EyeWideRight },
				{ "EARFaceBlendShape::JawForward", (int64)EARFaceBlendShape::JawForward },
				{ "EARFaceBlendShape::JawLeft", (int64)EARFaceBlendShape::JawLeft },
				{ "EARFaceBlendShape::JawRight", (int64)EARFaceBlendShape::JawRight },
				{ "EARFaceBlendShape::JawOpen", (int64)EARFaceBlendShape::JawOpen },
				{ "EARFaceBlendShape::MouthClose", (int64)EARFaceBlendShape::MouthClose },
				{ "EARFaceBlendShape::MouthFunnel", (int64)EARFaceBlendShape::MouthFunnel },
				{ "EARFaceBlendShape::MouthPucker", (int64)EARFaceBlendShape::MouthPucker },
				{ "EARFaceBlendShape::MouthLeft", (int64)EARFaceBlendShape::MouthLeft },
				{ "EARFaceBlendShape::MouthRight", (int64)EARFaceBlendShape::MouthRight },
				{ "EARFaceBlendShape::MouthSmileLeft", (int64)EARFaceBlendShape::MouthSmileLeft },
				{ "EARFaceBlendShape::MouthSmileRight", (int64)EARFaceBlendShape::MouthSmileRight },
				{ "EARFaceBlendShape::MouthFrownLeft", (int64)EARFaceBlendShape::MouthFrownLeft },
				{ "EARFaceBlendShape::MouthFrownRight", (int64)EARFaceBlendShape::MouthFrownRight },
				{ "EARFaceBlendShape::MouthDimpleLeft", (int64)EARFaceBlendShape::MouthDimpleLeft },
				{ "EARFaceBlendShape::MouthDimpleRight", (int64)EARFaceBlendShape::MouthDimpleRight },
				{ "EARFaceBlendShape::MouthStretchLeft", (int64)EARFaceBlendShape::MouthStretchLeft },
				{ "EARFaceBlendShape::MouthStretchRight", (int64)EARFaceBlendShape::MouthStretchRight },
				{ "EARFaceBlendShape::MouthRollLower", (int64)EARFaceBlendShape::MouthRollLower },
				{ "EARFaceBlendShape::MouthRollUpper", (int64)EARFaceBlendShape::MouthRollUpper },
				{ "EARFaceBlendShape::MouthShrugLower", (int64)EARFaceBlendShape::MouthShrugLower },
				{ "EARFaceBlendShape::MouthShrugUpper", (int64)EARFaceBlendShape::MouthShrugUpper },
				{ "EARFaceBlendShape::MouthPressLeft", (int64)EARFaceBlendShape::MouthPressLeft },
				{ "EARFaceBlendShape::MouthPressRight", (int64)EARFaceBlendShape::MouthPressRight },
				{ "EARFaceBlendShape::MouthLowerDownLeft", (int64)EARFaceBlendShape::MouthLowerDownLeft },
				{ "EARFaceBlendShape::MouthLowerDownRight", (int64)EARFaceBlendShape::MouthLowerDownRight },
				{ "EARFaceBlendShape::MouthUpperUpLeft", (int64)EARFaceBlendShape::MouthUpperUpLeft },
				{ "EARFaceBlendShape::MouthUpperUpRight", (int64)EARFaceBlendShape::MouthUpperUpRight },
				{ "EARFaceBlendShape::BrowDownLeft", (int64)EARFaceBlendShape::BrowDownLeft },
				{ "EARFaceBlendShape::BrowDownRight", (int64)EARFaceBlendShape::BrowDownRight },
				{ "EARFaceBlendShape::BrowInnerUp", (int64)EARFaceBlendShape::BrowInnerUp },
				{ "EARFaceBlendShape::BrowOuterUpLeft", (int64)EARFaceBlendShape::BrowOuterUpLeft },
				{ "EARFaceBlendShape::BrowOuterUpRight", (int64)EARFaceBlendShape::BrowOuterUpRight },
				{ "EARFaceBlendShape::CheekPuff", (int64)EARFaceBlendShape::CheekPuff },
				{ "EARFaceBlendShape::CheekSquintLeft", (int64)EARFaceBlendShape::CheekSquintLeft },
				{ "EARFaceBlendShape::CheekSquintRight", (int64)EARFaceBlendShape::CheekSquintRight },
				{ "EARFaceBlendShape::NoseSneerLeft", (int64)EARFaceBlendShape::NoseSneerLeft },
				{ "EARFaceBlendShape::NoseSneerRight", (int64)EARFaceBlendShape::NoseSneerRight },
				{ "EARFaceBlendShape::TongueOut", (int64)EARFaceBlendShape::TongueOut },
				{ "EARFaceBlendShape::HeadYaw", (int64)EARFaceBlendShape::HeadYaw },
				{ "EARFaceBlendShape::HeadPitch", (int64)EARFaceBlendShape::HeadPitch },
				{ "EARFaceBlendShape::HeadRoll", (int64)EARFaceBlendShape::HeadRoll },
				{ "EARFaceBlendShape::LeftEyeYaw", (int64)EARFaceBlendShape::LeftEyeYaw },
				{ "EARFaceBlendShape::LeftEyePitch", (int64)EARFaceBlendShape::LeftEyePitch },
				{ "EARFaceBlendShape::LeftEyeRoll", (int64)EARFaceBlendShape::LeftEyeRoll },
				{ "EARFaceBlendShape::RightEyeYaw", (int64)EARFaceBlendShape::RightEyeYaw },
				{ "EARFaceBlendShape::RightEyePitch", (int64)EARFaceBlendShape::RightEyePitch },
				{ "EARFaceBlendShape::RightEyeRoll", (int64)EARFaceBlendShape::RightEyeRoll },
				{ "EARFaceBlendShape::MAX", (int64)EARFaceBlendShape::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BrowDownLeft.Comment", "// Brow blend shapes\n" },
				{ "BrowDownLeft.Name", "EARFaceBlendShape::BrowDownLeft" },
				{ "BrowDownLeft.ToolTip", "Brow blend shapes" },
				{ "BrowDownRight.Name", "EARFaceBlendShape::BrowDownRight" },
				{ "BrowInnerUp.Name", "EARFaceBlendShape::BrowInnerUp" },
				{ "BrowOuterUpLeft.Name", "EARFaceBlendShape::BrowOuterUpLeft" },
				{ "BrowOuterUpRight.Name", "EARFaceBlendShape::BrowOuterUpRight" },
				{ "Category", "AR AugmentedReality" },
				{ "CheekPuff.Comment", "// Cheek blend shapes\n" },
				{ "CheekPuff.Name", "EARFaceBlendShape::CheekPuff" },
				{ "CheekPuff.ToolTip", "Cheek blend shapes" },
				{ "CheekSquintLeft.Name", "EARFaceBlendShape::CheekSquintLeft" },
				{ "CheekSquintRight.Name", "EARFaceBlendShape::CheekSquintRight" },
				{ "Experimental", "" },
				{ "EyeBlinkLeft.Comment", "// Left eye blend shapes\n" },
				{ "EyeBlinkLeft.Name", "EARFaceBlendShape::EyeBlinkLeft" },
				{ "EyeBlinkLeft.ToolTip", "Left eye blend shapes" },
				{ "EyeBlinkRight.Comment", "// Right eye blend shapes\n" },
				{ "EyeBlinkRight.Name", "EARFaceBlendShape::EyeBlinkRight" },
				{ "EyeBlinkRight.ToolTip", "Right eye blend shapes" },
				{ "EyeLookDownLeft.Name", "EARFaceBlendShape::EyeLookDownLeft" },
				{ "EyeLookDownRight.Name", "EARFaceBlendShape::EyeLookDownRight" },
				{ "EyeLookInLeft.Name", "EARFaceBlendShape::EyeLookInLeft" },
				{ "EyeLookInRight.Name", "EARFaceBlendShape::EyeLookInRight" },
				{ "EyeLookOutLeft.Name", "EARFaceBlendShape::EyeLookOutLeft" },
				{ "EyeLookOutRight.Name", "EARFaceBlendShape::EyeLookOutRight" },
				{ "EyeLookUpLeft.Name", "EARFaceBlendShape::EyeLookUpLeft" },
				{ "EyeLookUpRight.Name", "EARFaceBlendShape::EyeLookUpRight" },
				{ "EyeSquintLeft.Name", "EARFaceBlendShape::EyeSquintLeft" },
				{ "EyeSquintRight.Name", "EARFaceBlendShape::EyeSquintRight" },
				{ "EyeWideLeft.Name", "EARFaceBlendShape::EyeWideLeft" },
				{ "EyeWideRight.Name", "EARFaceBlendShape::EyeWideRight" },
				{ "HeadPitch.Name", "EARFaceBlendShape::HeadPitch" },
				{ "HeadRoll.Name", "EARFaceBlendShape::HeadRoll" },
				{ "HeadYaw.Comment", "// Treat the head rotation as curves for LiveLink support\n" },
				{ "HeadYaw.Name", "EARFaceBlendShape::HeadYaw" },
				{ "HeadYaw.ToolTip", "Treat the head rotation as curves for LiveLink support" },
				{ "JawForward.Comment", "// Jaw blend shapes\n" },
				{ "JawForward.Name", "EARFaceBlendShape::JawForward" },
				{ "JawForward.ToolTip", "Jaw blend shapes" },
				{ "JawLeft.Name", "EARFaceBlendShape::JawLeft" },
				{ "JawOpen.Name", "EARFaceBlendShape::JawOpen" },
				{ "JawRight.Name", "EARFaceBlendShape::JawRight" },
				{ "LeftEyePitch.Name", "EARFaceBlendShape::LeftEyePitch" },
				{ "LeftEyeRoll.Name", "EARFaceBlendShape::LeftEyeRoll" },
				{ "LeftEyeYaw.Comment", "// Treat eye rotation as curves for LiveLink support\n" },
				{ "LeftEyeYaw.Name", "EARFaceBlendShape::LeftEyeYaw" },
				{ "LeftEyeYaw.ToolTip", "Treat eye rotation as curves for LiveLink support" },
				{ "MAX.Name", "EARFaceBlendShape::MAX" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
				{ "MouthClose.Comment", "// Mouth blend shapes\n" },
				{ "MouthClose.Name", "EARFaceBlendShape::MouthClose" },
				{ "MouthClose.ToolTip", "Mouth blend shapes" },
				{ "MouthDimpleLeft.Name", "EARFaceBlendShape::MouthDimpleLeft" },
				{ "MouthDimpleRight.Name", "EARFaceBlendShape::MouthDimpleRight" },
				{ "MouthFrownLeft.Name", "EARFaceBlendShape::MouthFrownLeft" },
				{ "MouthFrownRight.Name", "EARFaceBlendShape::MouthFrownRight" },
				{ "MouthFunnel.Name", "EARFaceBlendShape::MouthFunnel" },
				{ "MouthLeft.Name", "EARFaceBlendShape::MouthLeft" },
				{ "MouthLowerDownLeft.Name", "EARFaceBlendShape::MouthLowerDownLeft" },
				{ "MouthLowerDownRight.Name", "EARFaceBlendShape::MouthLowerDownRight" },
				{ "MouthPressLeft.Name", "EARFaceBlendShape::MouthPressLeft" },
				{ "MouthPressRight.Name", "EARFaceBlendShape::MouthPressRight" },
				{ "MouthPucker.Name", "EARFaceBlendShape::MouthPucker" },
				{ "MouthRight.Name", "EARFaceBlendShape::MouthRight" },
				{ "MouthRollLower.Name", "EARFaceBlendShape::MouthRollLower" },
				{ "MouthRollUpper.Name", "EARFaceBlendShape::MouthRollUpper" },
				{ "MouthShrugLower.Name", "EARFaceBlendShape::MouthShrugLower" },
				{ "MouthShrugUpper.Name", "EARFaceBlendShape::MouthShrugUpper" },
				{ "MouthSmileLeft.Name", "EARFaceBlendShape::MouthSmileLeft" },
				{ "MouthSmileRight.Name", "EARFaceBlendShape::MouthSmileRight" },
				{ "MouthStretchLeft.Name", "EARFaceBlendShape::MouthStretchLeft" },
				{ "MouthStretchRight.Name", "EARFaceBlendShape::MouthStretchRight" },
				{ "MouthUpperUpLeft.Name", "EARFaceBlendShape::MouthUpperUpLeft" },
				{ "MouthUpperUpRight.Name", "EARFaceBlendShape::MouthUpperUpRight" },
				{ "NoseSneerLeft.Comment", "// Nose blend shapes\n" },
				{ "NoseSneerLeft.Name", "EARFaceBlendShape::NoseSneerLeft" },
				{ "NoseSneerLeft.ToolTip", "Nose blend shapes" },
				{ "NoseSneerRight.Name", "EARFaceBlendShape::NoseSneerRight" },
				{ "RightEyePitch.Name", "EARFaceBlendShape::RightEyePitch" },
				{ "RightEyeRoll.Name", "EARFaceBlendShape::RightEyeRoll" },
				{ "RightEyeYaw.Name", "EARFaceBlendShape::RightEyeYaw" },
				{ "TongueOut.Name", "EARFaceBlendShape::TongueOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFaceBlendShape",
				"EARFaceBlendShape",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARFaceTrackingDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTrackingDirection"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingDirection>()
	{
		return EARFaceTrackingDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceTrackingDirection(EARFaceTrackingDirection_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceTrackingDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Hash() { return 2847302033U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceTrackingDirection"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceTrackingDirection::FaceRelative", (int64)EARFaceTrackingDirection::FaceRelative },
				{ "EARFaceTrackingDirection::FaceMirrored", (int64)EARFaceTrackingDirection::FaceMirrored },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "FaceMirrored.Comment", "/** Blend shapes are tracked as if looking at the face, e.g. right eye is the mesh's left eye and right side of screen if facing you (like a mirror) */" },
				{ "FaceMirrored.Name", "EARFaceTrackingDirection::FaceMirrored" },
				{ "FaceMirrored.ToolTip", "Blend shapes are tracked as if looking at the face, e.g. right eye is the mesh's left eye and right side of screen if facing you (like a mirror)" },
				{ "FaceRelative.Comment", "/** Blend shapes are tracked as if looking out of the face, e.g. right eye is the mesh's right eye and left side of screen if facing you */" },
				{ "FaceRelative.Name", "EARFaceTrackingDirection::FaceRelative" },
				{ "FaceRelative.ToolTip", "Blend shapes are tracked as if looking out of the face, e.g. right eye is the mesh's right eye and left side of screen if facing you" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFaceTrackingDirection",
				"EARFaceTrackingDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetObjectClassification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARObjectClassification*)Z_Param__Result=P_THIS->GetObjectClassification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetUnderlyingMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMRMeshComponent**)Z_Param__Result=P_THIS->GetUnderlyingMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLastUpdateTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLastUpdateFrameNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetDebugName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDebugName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetTrackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLocalToTrackingTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLocalToWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform();
		P_NATIVE_END;
	}
	void UARTrackedGeometry::StaticRegisterNativesUARTrackedGeometry()
	{
		UClass* Class = UARTrackedGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugName", &UARTrackedGeometry::execGetDebugName },
			{ "GetLastUpdateFrameNumber", &UARTrackedGeometry::execGetLastUpdateFrameNumber },
			{ "GetLastUpdateTimestamp", &UARTrackedGeometry::execGetLastUpdateTimestamp },
			{ "GetLocalToTrackingTransform", &UARTrackedGeometry::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARTrackedGeometry::execGetLocalToWorldTransform },
			{ "GetObjectClassification", &UARTrackedGeometry::execGetObjectClassification },
			{ "GetTrackingState", &UARTrackedGeometry::execGetTrackingState },
			{ "GetUnderlyingMesh", &UARTrackedGeometry::execGetUnderlyingMesh },
			{ "IsTracked", &UARTrackedGeometry::execIsTracked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics
	{
		struct ARTrackedGeometry_eventGetDebugName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetDebugName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetDebugName", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetDebugName_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetDebugName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics
	{
		struct ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLastUpdateFrameNumber", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics
	{
		struct ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLastUpdateTimestamp", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics
	{
		struct ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLocalToTrackingTransform", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics
	{
		struct ARTrackedGeometry_eventGetLocalToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLocalToWorldTransform", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetLocalToWorldTransform_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics
	{
		struct ARTrackedGeometry_eventGetObjectClassification_Parms
		{
			EARObjectClassification ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetObjectClassification_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Scene Understanding" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetObjectClassification", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetObjectClassification_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics
	{
		struct ARTrackedGeometry_eventGetTrackingState_Parms
		{
			EARTrackingState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetTrackingState", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetTrackingState_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics
	{
		struct ARTrackedGeometry_eventGetUnderlyingMesh_Parms
		{
			UMRMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedGeometry_eventGetUnderlyingMesh_Parms, ReturnValue), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetUnderlyingMesh", nullptr, nullptr, sizeof(ARTrackedGeometry_eventGetUnderlyingMesh_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics
	{
		struct ARTrackedGeometry_eventIsTracked_Parms
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
	void Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARTrackedGeometry_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTrackedGeometry_eventIsTracked_Parms), &Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "IsTracked", nullptr, nullptr, sizeof(ARTrackedGeometry_eventIsTracked_Parms), Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister()
	{
		return UARTrackedGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateFrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateFrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClassification_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectClassification;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectClassification_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderlyingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnderlyingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToAlignedTrackingTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToAlignedTrackingTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToTrackingTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToTrackingTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetDebugName, "GetDebugName" }, // 1023922458
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber, "GetLastUpdateFrameNumber" }, // 2750597877
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp, "GetLastUpdateTimestamp" }, // 2166116362
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 2163313655
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 2204407058
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification, "GetObjectClassification" }, // 1033972489
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState, "GetTrackingState" }, // 775183293
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh, "GetUnderlyingMesh" }, // 3295150222
		{ &Z_Construct_UFunction_UARTrackedGeometry_IsTracked, "IsTracked" }, // 838179188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName_MetaData[] = {
		{ "Comment", "/** A unique name that can be used to identify the anchor for debug purposes */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "A unique name that can be used to identify the anchor for debug purposes" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, DebugName), METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber_MetaData[] = {
		{ "Comment", "/** The frame number this tracked geometry was last updated on */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The frame number this tracked geometry was last updated on" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber = { "LastUpdateFrameNumber", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, LastUpdateFrameNumber), METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_MetaData[] = {
		{ "Comment", "/** What the scene understanding system thinks this object is */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "What the scene understanding system thinks this object is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification = { "ObjectClassification", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, ObjectClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh_MetaData[] = {
		{ "Comment", "/** For AR systems that support arbitrary mesh geometry associated with a tracked point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "For AR systems that support arbitrary mesh geometry associated with a tracked point" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh = { "UnderlyingMesh", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, UnderlyingMesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, TrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform = { "LocalToAlignedTrackingTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, LocalToAlignedTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform = { "LocalToTrackingTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, LocalToTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedGeometry, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedGeometry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedGeometry_Statics::ClassParams = {
		&UARTrackedGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedGeometry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTrackedGeometry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTrackedGeometry, 2768511879);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedGeometry>()
	{
		return UARTrackedGeometry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedGeometry(Z_Construct_UClass_UARTrackedGeometry, &UARTrackedGeometry::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedGeometry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedGeometry);
	DEFINE_FUNCTION(UARPlaneGeometry::execGetOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARPlaneOrientation*)Z_Param__Result=P_THIS->GetOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetSubsumedBy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARPlaneGeometry**)Z_Param__Result=P_THIS->GetSubsumedBy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetBoundaryPolygonInLocalSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBoundaryPolygonInLocalSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetExtent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetExtent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCenter();
		P_NATIVE_END;
	}
	void UARPlaneGeometry::StaticRegisterNativesUARPlaneGeometry()
	{
		UClass* Class = UARPlaneGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundaryPolygonInLocalSpace", &UARPlaneGeometry::execGetBoundaryPolygonInLocalSpace },
			{ "GetCenter", &UARPlaneGeometry::execGetCenter },
			{ "GetExtent", &UARPlaneGeometry::execGetExtent },
			{ "GetOrientation", &UARPlaneGeometry::execGetOrientation },
			{ "GetSubsumedBy", &UARPlaneGeometry::execGetSubsumedBy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics
	{
		struct ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetBoundaryPolygonInLocalSpace", nullptr, nullptr, sizeof(ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics
	{
		struct ARPlaneGeometry_eventGetCenter_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneGeometry_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetCenter", nullptr, nullptr, sizeof(ARPlaneGeometry_eventGetCenter_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics
	{
		struct ARPlaneGeometry_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneGeometry_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetExtent", nullptr, nullptr, sizeof(ARPlaneGeometry_eventGetExtent_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics
	{
		struct ARPlaneGeometry_eventGetOrientation_Parms
		{
			EARPlaneOrientation ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneGeometry_eventGetOrientation_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetOrientation", nullptr, nullptr, sizeof(ARPlaneGeometry_eventGetOrientation_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics
	{
		struct ARPlaneGeometry_eventGetSubsumedBy_Parms
		{
			UARPlaneGeometry* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneGeometry_eventGetSubsumedBy_Parms, ReturnValue), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetSubsumedBy", nullptr, nullptr, sizeof(ARPlaneGeometry_eventGetSubsumedBy_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister()
	{
		return UARPlaneGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARPlaneGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsumedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubsumedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPlaneGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPlaneGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace, "GetBoundaryPolygonInLocalSpace" }, // 3850504740
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetCenter, "GetCenter" }, // 1757810633
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetExtent, "GetExtent" }, // 1900789399
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetOrientation, "GetOrientation" }, // 2148299979
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy, "GetSubsumedBy" }, // 2765985719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy_MetaData[] = {
		{ "Comment", "// Used by ARCore Only\n" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "Used by ARCore Only" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy = { "SubsumedBy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPlaneGeometry, SubsumedBy), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPlaneGeometry, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPlaneGeometry, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPlaneGeometry, Orientation), Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPlaneGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPlaneGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPlaneGeometry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARPlaneGeometry_Statics::ClassParams = {
		&UARPlaneGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPlaneGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPlaneGeometry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARPlaneGeometry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARPlaneGeometry, 2957900263);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPlaneGeometry>()
	{
		return UARPlaneGeometry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARPlaneGeometry(Z_Construct_UClass_UARPlaneGeometry, &UARPlaneGeometry::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARPlaneGeometry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPlaneGeometry);
	void UARTrackedPoint::StaticRegisterNativesUARTrackedPoint()
	{
	}
	UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister()
	{
		return UARTrackedPoint::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedPoint_Statics::ClassParams = {
		&UARTrackedPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTrackedPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTrackedPoint, 2358094161);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedPoint>()
	{
		return UARTrackedPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedPoint(Z_Construct_UClass_UARTrackedPoint, &UARTrackedPoint::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedPoint);
	DEFINE_FUNCTION(UARTrackedImage::execGetEstimateSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetEstimateSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedImage::execGetDetectedImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateImage**)Z_Param__Result=P_THIS->GetDetectedImage();
		P_NATIVE_END;
	}
	void UARTrackedImage::StaticRegisterNativesUARTrackedImage()
	{
		UClass* Class = UARTrackedImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetectedImage", &UARTrackedImage::execGetDetectedImage },
			{ "GetEstimateSize", &UARTrackedImage::execGetEstimateSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics
	{
		struct ARTrackedImage_eventGetDetectedImage_Parms
		{
			UARCandidateImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedImage_eventGetDetectedImage_Parms, ReturnValue), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see DetectedImage */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see DetectedImage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedImage, nullptr, "GetDetectedImage", nullptr, nullptr, sizeof(ARTrackedImage_eventGetDetectedImage_Parms), Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedImage_GetDetectedImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics
	{
		struct ARTrackedImage_eventGetEstimateSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedImage_eventGetEstimateSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/*\n\x09 * Get the estimate size of the detected image, where X is the estimated width, and Y is the estimated height.\n\x09 *\n\x09 * Note that ARCore can return a valid estimate size of the detected image when the tracking state of the UARTrackedImage\n\x09 * is tracking. The size should reflect the actual size of the image target, which could be different than the input physical\n\x09 * size of the candidate image.\n\x09 *\n\x09 * ARKit will return the physical size of the ARCandidate image.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "* Get the estimate size of the detected image, where X is the estimated width, and Y is the estimated height.\n*\n* Note that ARCore can return a valid estimate size of the detected image when the tracking state of the UARTrackedImage\n* is tracking. The size should reflect the actual size of the image target, which could be different than the input physical\n* size of the candidate image.\n*\n* ARKit will return the physical size of the ARCandidate image." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedImage, nullptr, "GetEstimateSize", nullptr, nullptr, sizeof(ARTrackedImage_eventGetEstimateSize_Parms), Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedImage_GetEstimateSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTrackedImage_NoRegister()
	{
		return UARTrackedImage::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EstimatedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedImage_GetDetectedImage, "GetDetectedImage" }, // 2667694673
		{ &Z_Construct_UFunction_UARTrackedImage_GetEstimateSize, "GetEstimateSize" }, // 352374625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize_MetaData[] = {
		{ "Comment", "/** The estimated image size that was detected in the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The estimated image size that was detected in the scene" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize = { "EstimatedSize", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedImage, EstimatedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage_MetaData[] = {
		{ "Comment", "/** The candidate image that was detected in the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The candidate image that was detected in the scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage = { "DetectedImage", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedImage, DetectedImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedImage_Statics::ClassParams = {
		&UARTrackedImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTrackedImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTrackedImage, 2164827492);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedImage>()
	{
		return UARTrackedImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedImage(Z_Construct_UClass_UARTrackedImage, &UARTrackedImage::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedImage);
	void UARTrackedQRCode::StaticRegisterNativesUARTrackedQRCode()
	{
	}
	UClass* Z_Construct_UClass_UARTrackedQRCode_NoRegister()
	{
		return UARTrackedQRCode::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedQRCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QRCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QRCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedQRCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedImage,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedQRCode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "QR Code" },
		{ "Comment", "/** The version of the qr code */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The version of the qr code" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedQRCode, Version), METADATA_PARAMS(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode_MetaData[] = {
		{ "Category", "QR Code" },
		{ "Comment", "/** The encoded information in the qr code */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The encoded information in the qr code" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode = { "QRCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedQRCode, QRCode), METADATA_PARAMS(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedQRCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedQRCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedQRCode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedQRCode_Statics::ClassParams = {
		&UARTrackedQRCode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTrackedQRCode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedQRCode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedQRCode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTrackedQRCode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTrackedQRCode, 81272935);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedQRCode>()
	{
		return UARTrackedQRCode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedQRCode(Z_Construct_UClass_UARTrackedQRCode, &UARTrackedQRCode::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedQRCode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedQRCode);
	DEFINE_FUNCTION(UARFaceGeometry::execGetWorldSpaceEyeTransform)
	{
		P_GET_ENUM(EAREye,Z_Param_Eye);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetWorldSpaceEyeTransform(EAREye(Z_Param_Eye));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetLocalSpaceEyeTransform)
	{
		P_GET_ENUM(EAREye,Z_Param_Eye);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalSpaceEyeTransform(EAREye(Z_Param_Eye));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetBlendShapes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<EARFaceBlendShape,float>*)Z_Param__Result=P_THIS->GetBlendShapes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetBlendShapeValue)
	{
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlendShapeValue(EARFaceBlendShape(Z_Param_BlendShape));
		P_NATIVE_END;
	}
	void UARFaceGeometry::StaticRegisterNativesUARFaceGeometry()
	{
		UClass* Class = UARFaceGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlendShapes", &UARFaceGeometry::execGetBlendShapes },
			{ "GetBlendShapeValue", &UARFaceGeometry::execGetBlendShapeValue },
			{ "GetLocalSpaceEyeTransform", &UARFaceGeometry::execGetLocalSpaceEyeTransform },
			{ "GetWorldSpaceEyeTransform", &UARFaceGeometry::execGetWorldSpaceEyeTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics
	{
		struct ARFaceGeometry_eventGetBlendShapes_Parms
		{
			TMap<EARFaceBlendShape,float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetBlendShapes", nullptr, nullptr, sizeof(ARFaceGeometry_eventGetBlendShapes_Parms), Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics
	{
		struct ARFaceGeometry_eventGetBlendShapeValue_Parms
		{
			EARFaceBlendShape BlendShape;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendShape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendShape_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapeValue_Parms, BlendShape), Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetBlendShapeValue", nullptr, nullptr, sizeof(ARFaceGeometry_eventGetBlendShapeValue_Parms), Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics
	{
		struct ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms
		{
			EAREye Eye;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Eye;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms, Eye), Z_Construct_UEnum_AugmentedReality_EAREye, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetLocalSpaceEyeTransform", nullptr, nullptr, sizeof(ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms), Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics
	{
		struct ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms
		{
			EAREye Eye;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Eye;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms, Eye), Z_Construct_UEnum_AugmentedReality_EAREye, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetWorldSpaceEyeTransform", nullptr, nullptr, sizeof(ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms), Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister()
	{
		return UARFaceGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARFaceGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlendShapes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendShapes_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendShapes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendShapes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTracked_MetaData[];
#endif
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARFaceGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARFaceGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes, "GetBlendShapes" }, // 3912401032
		{ &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue, "GetBlendShapeValue" }, // 1622444000
		{ &Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform, "GetLocalSpaceEyeTransform" }, // 2003649086
		{ &Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform, "GetWorldSpaceEyeTransform" }, // 390253429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes = { "BlendShapes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARFaceGeometry, BlendShapes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp = { "BlendShapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_ValueProp = { "BlendShapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_MetaData[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "Comment", "/** Whether the face is currently being tracked by the AR system */" },
		{ "Deprecated", "" },
		{ "DeprecationMessage", "This property is now deprecated, please use GetTrackingState() and check for EARTrackingState::Tracking or IsTracked() instead." },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "Whether the face is currently being tracked by the AR system" },
	};
#endif
	void Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((UARFaceGeometry*)Obj)->bIsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARFaceGeometry), &Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "Comment", "/** The target the eyes are looking at */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The target the eyes are looking at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARFaceGeometry, LookAtTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARFaceGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARFaceGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARFaceGeometry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARFaceGeometry_Statics::ClassParams = {
		&UARFaceGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARFaceGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARFaceGeometry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARFaceGeometry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARFaceGeometry, 2193402059);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARFaceGeometry>()
	{
		return UARFaceGeometry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARFaceGeometry(Z_Construct_UClass_UARFaceGeometry, &UARFaceGeometry::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARFaceGeometry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARFaceGeometry);
	DEFINE_FUNCTION(UAREnvironmentCaptureProbe::execGetEnvironmentCaptureTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAREnvironmentCaptureProbeTexture**)Z_Param__Result=P_THIS->GetEnvironmentCaptureTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAREnvironmentCaptureProbe::execGetExtent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetExtent();
		P_NATIVE_END;
	}
	void UAREnvironmentCaptureProbe::StaticRegisterNativesUAREnvironmentCaptureProbe()
	{
		UClass* Class = UAREnvironmentCaptureProbe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnvironmentCaptureTexture", &UAREnvironmentCaptureProbe::execGetEnvironmentCaptureTexture },
			{ "GetExtent", &UAREnvironmentCaptureProbe::execGetExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics
	{
		struct AREnvironmentCaptureProbe_eventGetEnvironmentCaptureTexture_Parms
		{
			UAREnvironmentCaptureProbeTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AREnvironmentCaptureProbe_eventGetEnvironmentCaptureTexture_Parms, ReturnValue), Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Environment Capture Probe" },
		{ "Comment", "/** @see EnvironmentCaptureTexture */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see EnvironmentCaptureTexture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentCaptureProbe, nullptr, "GetEnvironmentCaptureTexture", nullptr, nullptr, sizeof(AREnvironmentCaptureProbe_eventGetEnvironmentCaptureTexture_Parms), Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics
	{
		struct AREnvironmentCaptureProbe_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AREnvironmentCaptureProbe_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Environment Capture Probe" },
		{ "Comment", "/** @see Extent */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see Extent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentCaptureProbe, nullptr, "GetExtent", nullptr, nullptr, sizeof(AREnvironmentCaptureProbe_eventGetExtent_Parms), Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister()
	{
		return UAREnvironmentCaptureProbe::StaticClass();
	}
	struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCaptureTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvironmentCaptureTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture, "GetEnvironmentCaptureTexture" }, // 2978108898
		{ &Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent, "GetExtent" }, // 1881853990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A tracked environment texture probe that gives you a cube map for reflections */" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "A tracked environment texture probe that gives you a cube map for reflections" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture_MetaData[] = {
		{ "Comment", "/** The cube map of the reflected environment */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The cube map of the reflected environment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture = { "EnvironmentCaptureTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture), Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAREnvironmentCaptureProbe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::ClassParams = {
		&UAREnvironmentCaptureProbe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAREnvironmentCaptureProbe, 3187583400);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UAREnvironmentCaptureProbe>()
	{
		return UAREnvironmentCaptureProbe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAREnvironmentCaptureProbe(Z_Construct_UClass_UAREnvironmentCaptureProbe, &UAREnvironmentCaptureProbe::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UAREnvironmentCaptureProbe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAREnvironmentCaptureProbe);
	DEFINE_FUNCTION(UARTrackedObject::execGetDetectedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateObject**)Z_Param__Result=P_THIS->GetDetectedObject();
		P_NATIVE_END;
	}
	void UARTrackedObject::StaticRegisterNativesUARTrackedObject()
	{
		UClass* Class = UARTrackedObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetectedObject", &UARTrackedObject::execGetDetectedObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics
	{
		struct ARTrackedObject_eventGetDetectedObject_Parms
		{
			UARCandidateObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedObject_eventGetDetectedObject_Parms, ReturnValue), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "Comment", "/** @see DetectedObject */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see DetectedObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedObject, nullptr, "GetDetectedObject", nullptr, nullptr, sizeof(ARTrackedObject_eventGetDetectedObject_Parms), Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedObject_GetDetectedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTrackedObject_NoRegister()
	{
		return UARTrackedObject::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedObject_GetDetectedObject, "GetDetectedObject" }, // 3124183678
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject_MetaData[] = {
		{ "Comment", "/** The candidate object that was detected in the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The candidate object that was detected in the scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject = { "DetectedObject", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTrackedObject, DetectedObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedObject_Statics::ClassParams = {
		&UARTrackedObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTrackedObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTrackedObject, 2938005270);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedObject>()
	{
		return UARTrackedObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedObject(Z_Construct_UClass_UARTrackedObject, &UARTrackedObject::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedObject);
	DEFINE_FUNCTION(UARTrackedPose::execGetTrackedPoseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARPose3D*)Z_Param__Result=P_THIS->GetTrackedPoseData();
		P_NATIVE_END;
	}
	void UARTrackedPose::StaticRegisterNativesUARTrackedPose()
	{
		UClass* Class = UARTrackedPose::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackedPoseData", &UARTrackedPose::execGetTrackedPoseData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics
	{
		struct ARTrackedPose_eventGetTrackedPoseData_Parms
		{
			FARPose3D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTrackedPose_eventGetTrackedPoseData_Parms, ReturnValue), Z_Construct_UScriptStruct_FARPose3D, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedPose, nullptr, "GetTrackedPoseData", nullptr, nullptr, sizeof(ARTrackedPose_eventGetTrackedPoseData_Parms), Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTrackedPose_NoRegister()
	{
		return UARTrackedPose::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedPose_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData, "GetTrackedPoseData" }, // 4264434606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedPose_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedPose>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedPose_Statics::ClassParams = {
		&UARTrackedPose::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedPose()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTrackedPose_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTrackedPose, 2885530813);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedPose>()
	{
		return UARTrackedPose::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedPose(Z_Construct_UClass_UARTrackedPose, &UARTrackedPose::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedPose"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedPose);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
