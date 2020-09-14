// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARSessionConfig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSessionConfig() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldAlignment();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
// End Cross Module References
	static UEnum* EARSessionTrackingFeature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionTrackingFeature"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionTrackingFeature>()
	{
		return EARSessionTrackingFeature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionTrackingFeature(EARSessionTrackingFeature_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionTrackingFeature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Hash() { return 75574405U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionTrackingFeature"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionTrackingFeature::None", (int64)EARSessionTrackingFeature::None },
				{ "EARSessionTrackingFeature::PoseDetection2D", (int64)EARSessionTrackingFeature::PoseDetection2D },
				{ "EARSessionTrackingFeature::PersonSegmentation", (int64)EARSessionTrackingFeature::PersonSegmentation },
				{ "EARSessionTrackingFeature::PersonSegmentationWithDepth", (int64)EARSessionTrackingFeature::PersonSegmentationWithDepth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Tells the AR system how much of the face work to perform\n */" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.Comment", "/** None of the session feature is enabled */" },
				{ "None.Name", "EARSessionTrackingFeature::None" },
				{ "None.ToolTip", "None of the session feature is enabled" },
				{ "PersonSegmentation.Comment", "/** Person segmentation is enabled */" },
				{ "PersonSegmentation.Name", "EARSessionTrackingFeature::PersonSegmentation" },
				{ "PersonSegmentation.ToolTip", "Person segmentation is enabled" },
				{ "PersonSegmentationWithDepth.Comment", "/** Person segmentation with depth info is enabled */" },
				{ "PersonSegmentationWithDepth.Name", "EARSessionTrackingFeature::PersonSegmentationWithDepth" },
				{ "PersonSegmentationWithDepth.ToolTip", "Person segmentation with depth info is enabled" },
				{ "PoseDetection2D.Comment", "/** 2D pose detection is enabled */" },
				{ "PoseDetection2D.Name", "EARSessionTrackingFeature::PoseDetection2D" },
				{ "PoseDetection2D.ToolTip", "2D pose detection is enabled" },
				{ "ToolTip", "Tells the AR system how much of the face work to perform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARSessionTrackingFeature",
				"EARSessionTrackingFeature",
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
	static UEnum* EARFaceTrackingUpdate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTrackingUpdate"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingUpdate>()
	{
		return EARFaceTrackingUpdate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceTrackingUpdate(EARFaceTrackingUpdate_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceTrackingUpdate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Hash() { return 175770110U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceTrackingUpdate"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceTrackingUpdate::CurvesAndGeo", (int64)EARFaceTrackingUpdate::CurvesAndGeo },
				{ "EARFaceTrackingUpdate::CurvesOnly", (int64)EARFaceTrackingUpdate::CurvesOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Tells the AR system how much of the face work to perform\n */" },
				{ "CurvesAndGeo.Comment", "/** Curves and geometry will be updated (only needed for mesh visualization) */" },
				{ "CurvesAndGeo.Name", "EARFaceTrackingUpdate::CurvesAndGeo" },
				{ "CurvesAndGeo.ToolTip", "Curves and geometry will be updated (only needed for mesh visualization)" },
				{ "CurvesOnly.Comment", "/** Only the curve data is updated */" },
				{ "CurvesOnly.Name", "EARFaceTrackingUpdate::CurvesOnly" },
				{ "CurvesOnly.ToolTip", "Only the curve data is updated" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "Tells the AR system how much of the face work to perform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFaceTrackingUpdate",
				"EARFaceTrackingUpdate",
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
	static UEnum* EAREnvironmentCaptureProbeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EAREnvironmentCaptureProbeType"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>()
	{
		return EAREnvironmentCaptureProbeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAREnvironmentCaptureProbeType(EAREnvironmentCaptureProbeType_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EAREnvironmentCaptureProbeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Hash() { return 4233320049U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAREnvironmentCaptureProbeType"), 0, Get_Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAREnvironmentCaptureProbeType::None", (int64)EAREnvironmentCaptureProbeType::None },
				{ "EAREnvironmentCaptureProbeType::Manual", (int64)EAREnvironmentCaptureProbeType::Manual },
				{ "EAREnvironmentCaptureProbeType::Automatic", (int64)EAREnvironmentCaptureProbeType::Automatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Comment", "/** Capturing will be automatic with probes placed by the AR system */" },
				{ "Automatic.Name", "EAREnvironmentCaptureProbeType::Automatic" },
				{ "Automatic.ToolTip", "Capturing will be automatic with probes placed by the AR system" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Tells the AR system what type of environmental texture capturing to perform\n */" },
				{ "Manual.Comment", "/** Capturing will be manual with the app specifying where the probes are and their size */" },
				{ "Manual.Name", "EAREnvironmentCaptureProbeType::Manual" },
				{ "Manual.ToolTip", "Capturing will be manual with the app specifying where the probes are and their size" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.Comment", "/** No capturing will happen */" },
				{ "None.Name", "EAREnvironmentCaptureProbeType::None" },
				{ "None.ToolTip", "No capturing will happen" },
				{ "ToolTip", "Tells the AR system what type of environmental texture capturing to perform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EAREnvironmentCaptureProbeType",
				"EAREnvironmentCaptureProbeType",
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
	static UEnum* EARFrameSyncMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFrameSyncMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFrameSyncMode>()
	{
		return EARFrameSyncMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFrameSyncMode(EARFrameSyncMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFrameSyncMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Hash() { return 1112363304U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFrameSyncMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFrameSyncMode::SyncTickWithCameraImage", (int64)EARFrameSyncMode::SyncTickWithCameraImage },
				{ "EARFrameSyncMode::SyncTickWithoutCameraImage", (int64)EARFrameSyncMode::SyncTickWithoutCameraImage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "SyncTickWithCameraImage.Comment", "/** Unreal tick will be synced with the camera image update rate. */" },
				{ "SyncTickWithCameraImage.Name", "EARFrameSyncMode::SyncTickWithCameraImage" },
				{ "SyncTickWithCameraImage.ToolTip", "Unreal tick will be synced with the camera image update rate." },
				{ "SyncTickWithoutCameraImage.Comment", "/** Unreal tick will not related to the camera image update rate. */" },
				{ "SyncTickWithoutCameraImage.Name", "EARFrameSyncMode::SyncTickWithoutCameraImage" },
				{ "SyncTickWithoutCameraImage.ToolTip", "Unreal tick will not related to the camera image update rate." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFrameSyncMode",
				"EARFrameSyncMode",
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
	static UEnum* EARLightEstimationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLightEstimationMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLightEstimationMode>()
	{
		return EARLightEstimationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARLightEstimationMode(EARLightEstimationMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARLightEstimationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Hash() { return 3734996132U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARLightEstimationMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARLightEstimationMode::None", (int64)EARLightEstimationMode::None },
				{ "EARLightEstimationMode::AmbientLightEstimate", (int64)EARLightEstimationMode::AmbientLightEstimate },
				{ "EARLightEstimationMode::DirectionalLightEstimate", (int64)EARLightEstimationMode::DirectionalLightEstimate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AmbientLightEstimate.Comment", "/** Enable light estimation for ambient intensity; returned as a UARBasicLightEstimate */" },
				{ "AmbientLightEstimate.Name", "EARLightEstimationMode::AmbientLightEstimate" },
				{ "AmbientLightEstimate.ToolTip", "Enable light estimation for ambient intensity; returned as a UARBasicLightEstimate" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "DirectionalLightEstimate.Comment", "/**\n\x09* Enable directional light estimation of environment with an additional key light.\n\x09* Currently not supported.\n\x09*/" },
				{ "DirectionalLightEstimate.Name", "EARLightEstimationMode::DirectionalLightEstimate" },
				{ "DirectionalLightEstimate.ToolTip", "Enable directional light estimation of environment with an additional key light.\nCurrently not supported." },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.Comment", "/** Light estimation disabled. */" },
				{ "None.Name", "EARLightEstimationMode::None" },
				{ "None.ToolTip", "Light estimation disabled." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARLightEstimationMode",
				"EARLightEstimationMode",
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
	static UEnum* EARPlaneDetectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARPlaneDetectionMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneDetectionMode>()
	{
		return EARPlaneDetectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARPlaneDetectionMode(EARPlaneDetectionMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARPlaneDetectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Hash() { return 1248232271U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARPlaneDetectionMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARPlaneDetectionMode::None", (int64)EARPlaneDetectionMode::None },
				{ "EARPlaneDetectionMode::HorizontalPlaneDetection", (int64)EARPlaneDetectionMode::HorizontalPlaneDetection },
				{ "EARPlaneDetectionMode::VerticalPlaneDetection", (int64)EARPlaneDetectionMode::VerticalPlaneDetection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "HorizontalPlaneDetection.Comment", "/* Detect Horizontal Surfaces */" },
				{ "HorizontalPlaneDetection.Name", "EARPlaneDetectionMode::HorizontalPlaneDetection" },
				{ "HorizontalPlaneDetection.ToolTip", "Detect Horizontal Surfaces" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.Name", "EARPlaneDetectionMode::None" },
				{ "VerticalPlaneDetection.Comment", "/* Detects Vertical Surfaces */" },
				{ "VerticalPlaneDetection.Name", "EARPlaneDetectionMode::VerticalPlaneDetection" },
				{ "VerticalPlaneDetection.ToolTip", "Detects Vertical Surfaces" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARPlaneDetectionMode",
				"EARPlaneDetectionMode",
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
	static UEnum* EARSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionType, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionType"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionType>()
	{
		return EARSessionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionType(EARSessionType_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionType_Hash() { return 1225029708U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionType"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionType::None", (int64)EARSessionType::None },
				{ "EARSessionType::Orientation", (int64)EARSessionType::Orientation },
				{ "EARSessionType::World", (int64)EARSessionType::World },
				{ "EARSessionType::Face", (int64)EARSessionType::Face },
				{ "EARSessionType::Image", (int64)EARSessionType::Image },
				{ "EARSessionType::ObjectScanning", (int64)EARSessionType::ObjectScanning },
				{ "EARSessionType::PoseTracking", (int64)EARSessionType::PoseTracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "Face.Comment", "/** AR meant to overlay onto a face */" },
				{ "Face.Name", "EARSessionType::Face" },
				{ "Face.ToolTip", "AR meant to overlay onto a face" },
				{ "Image.Comment", "/** Tracking of images supplied by the app. No world tracking, just images */" },
				{ "Image.Name", "EARSessionType::Image" },
				{ "Image.ToolTip", "Tracking of images supplied by the app. No world tracking, just images" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.Comment", "/** AR tracking is not supported */" },
				{ "None.Name", "EARSessionType::None" },
				{ "None.ToolTip", "AR tracking is not supported" },
				{ "ObjectScanning.Comment", "/** A session used to scan objects for object detection in a world tracking session */" },
				{ "ObjectScanning.Name", "EARSessionType::ObjectScanning" },
				{ "ObjectScanning.ToolTip", "A session used to scan objects for object detection in a world tracking session" },
				{ "Orientation.Comment", "/** AR session used to track orientation of the device only */" },
				{ "Orientation.Name", "EARSessionType::Orientation" },
				{ "Orientation.ToolTip", "AR session used to track orientation of the device only" },
				{ "PoseTracking.Comment", "/** A session used to track human pose in 3D */" },
				{ "PoseTracking.Name", "EARSessionType::PoseTracking" },
				{ "PoseTracking.ToolTip", "A session used to track human pose in 3D" },
				{ "World.Comment", "/** AR meant to overlay onto the world with tracking */" },
				{ "World.Name", "EARSessionType::World" },
				{ "World.ToolTip", "AR meant to overlay onto the world with tracking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARSessionType",
				"EARSessionType",
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
	static UEnum* EARWorldAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARWorldAlignment"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldAlignment>()
	{
		return EARWorldAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARWorldAlignment(EARWorldAlignment_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARWorldAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Hash() { return 543961492U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARWorldAlignment"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARWorldAlignment::Gravity", (int64)EARWorldAlignment::Gravity },
				{ "EARWorldAlignment::GravityAndHeading", (int64)EARWorldAlignment::GravityAndHeading },
				{ "EARWorldAlignment::Camera", (int64)EARWorldAlignment::Camera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Camera.Comment", "/** Aligns the world with the camera's orientation, which is best for Face AR */" },
				{ "Camera.Name", "EARWorldAlignment::Camera" },
				{ "Camera.ToolTip", "Aligns the world with the camera's orientation, which is best for Face AR" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "Gravity.Comment", "/** Aligns the world with gravity that is defined by vector (0, -1, 0) */" },
				{ "Gravity.Name", "EARWorldAlignment::Gravity" },
				{ "Gravity.ToolTip", "Aligns the world with gravity that is defined by vector (0, -1, 0)" },
				{ "GravityAndHeading.Comment", "/**\n\x09 * Aligns the world with gravity that is defined by the vector (0, -1, 0)\n\x09 * and heading (w.r.t. True North) that is given by the vector (0, 0, -1)\n\x09 */" },
				{ "GravityAndHeading.Name", "EARWorldAlignment::GravityAndHeading" },
				{ "GravityAndHeading.ToolTip", "Aligns the world with gravity that is defined by the vector (0, -1, 0)\nand heading (w.r.t. True North) that is given by the vector (0, 0, -1)" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARWorldAlignment",
				"EARWorldAlignment",
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
	DEFINE_FUNCTION(UARSessionConfig::execSetSessionTrackingFeatureToEnable)
	{
		P_GET_ENUM(EARSessionTrackingFeature,Z_Param_InSessionTrackingFeature);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature(Z_Param_InSessionTrackingFeature));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetEnabledSessionTrackingFeature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARSessionTrackingFeature*)Z_Param__Result=P_THIS->GetEnabledSessionTrackingFeature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetFaceTrackingUpdate)
	{
		P_GET_ENUM(EARFaceTrackingUpdate,Z_Param_InUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFaceTrackingUpdate(EARFaceTrackingUpdate(Z_Param_InUpdate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetFaceTrackingUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARFaceTrackingUpdate*)Z_Param__Result=P_THIS->GetFaceTrackingUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetFaceTrackingDirection)
	{
		P_GET_ENUM(EARFaceTrackingDirection,Z_Param_InDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFaceTrackingDirection(EARFaceTrackingDirection(Z_Param_InDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetFaceTrackingDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARFaceTrackingDirection*)Z_Param__Result=P_THIS->GetFaceTrackingDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetDesiredVideoFormat)
	{
		P_GET_STRUCT(FARVideoFormat,Z_Param_NewFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredVideoFormat(Z_Param_NewFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetDesiredVideoFormat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARVideoFormat*)Z_Param__Result=P_THIS->GetDesiredVideoFormat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execAddCandidateObject)
	{
		P_GET_OBJECT(UARCandidateObject,Z_Param_CandidateObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCandidateObject(Z_Param_CandidateObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetCandidateObjectList)
	{
		P_GET_TARRAY_REF(UARCandidateObject*,Z_Param_Out_InCandidateObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCandidateObjectList(Z_Param_Out_InCandidateObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetCandidateObjectList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARCandidateObject*>*)Z_Param__Result=P_THIS->GetCandidateObjectList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetWorldMapData)
	{
		P_GET_TARRAY(uint8,Z_Param_WorldMapData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldMapData(Z_Param_WorldMapData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetWorldMapData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetWorldMapData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetEnvironmentCaptureProbeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAREnvironmentCaptureProbeType*)Z_Param__Result=P_THIS->GetEnvironmentCaptureProbeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetMaxNumSimultaneousImagesTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumSimultaneousImagesTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execAddCandidateImage)
	{
		P_GET_OBJECT(UARCandidateImage,Z_Param_NewCandidateImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCandidateImage(Z_Param_NewCandidateImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetCandidateImageList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARCandidateImage*>*)Z_Param__Result=P_THIS->GetCandidateImageList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetResetTrackedObjects)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResetTrackedObjects(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldResetTrackedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldResetTrackedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetResetCameraTracking)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResetCameraTracking(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldResetCameraTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldResetCameraTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetEnableAutoFocus)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableAutoFocus(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldEnableAutoFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableAutoFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldEnableCameraTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableCameraTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldRenderCameraOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldRenderCameraOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetFrameSyncMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARFrameSyncMode*)Z_Param__Result=P_THIS->GetFrameSyncMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetLightEstimationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARLightEstimationMode*)Z_Param__Result=P_THIS->GetLightEstimationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetPlaneDetectionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARPlaneDetectionMode*)Z_Param__Result=P_THIS->GetPlaneDetectionMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetSessionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARSessionType*)Z_Param__Result=P_THIS->GetSessionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetWorldAlignment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARWorldAlignment*)Z_Param__Result=P_THIS->GetWorldAlignment();
		P_NATIVE_END;
	}
	void UARSessionConfig::StaticRegisterNativesUARSessionConfig()
	{
		UClass* Class = UARSessionConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCandidateImage", &UARSessionConfig::execAddCandidateImage },
			{ "AddCandidateObject", &UARSessionConfig::execAddCandidateObject },
			{ "GetCandidateImageList", &UARSessionConfig::execGetCandidateImageList },
			{ "GetCandidateObjectList", &UARSessionConfig::execGetCandidateObjectList },
			{ "GetDesiredVideoFormat", &UARSessionConfig::execGetDesiredVideoFormat },
			{ "GetEnabledSessionTrackingFeature", &UARSessionConfig::execGetEnabledSessionTrackingFeature },
			{ "GetEnvironmentCaptureProbeType", &UARSessionConfig::execGetEnvironmentCaptureProbeType },
			{ "GetFaceTrackingDirection", &UARSessionConfig::execGetFaceTrackingDirection },
			{ "GetFaceTrackingUpdate", &UARSessionConfig::execGetFaceTrackingUpdate },
			{ "GetFrameSyncMode", &UARSessionConfig::execGetFrameSyncMode },
			{ "GetLightEstimationMode", &UARSessionConfig::execGetLightEstimationMode },
			{ "GetMaxNumSimultaneousImagesTracked", &UARSessionConfig::execGetMaxNumSimultaneousImagesTracked },
			{ "GetPlaneDetectionMode", &UARSessionConfig::execGetPlaneDetectionMode },
			{ "GetSessionType", &UARSessionConfig::execGetSessionType },
			{ "GetWorldAlignment", &UARSessionConfig::execGetWorldAlignment },
			{ "GetWorldMapData", &UARSessionConfig::execGetWorldMapData },
			{ "SetCandidateObjectList", &UARSessionConfig::execSetCandidateObjectList },
			{ "SetDesiredVideoFormat", &UARSessionConfig::execSetDesiredVideoFormat },
			{ "SetEnableAutoFocus", &UARSessionConfig::execSetEnableAutoFocus },
			{ "SetFaceTrackingDirection", &UARSessionConfig::execSetFaceTrackingDirection },
			{ "SetFaceTrackingUpdate", &UARSessionConfig::execSetFaceTrackingUpdate },
			{ "SetResetCameraTracking", &UARSessionConfig::execSetResetCameraTracking },
			{ "SetResetTrackedObjects", &UARSessionConfig::execSetResetTrackedObjects },
			{ "SetSessionTrackingFeatureToEnable", &UARSessionConfig::execSetSessionTrackingFeatureToEnable },
			{ "SetWorldMapData", &UARSessionConfig::execSetWorldMapData },
			{ "ShouldEnableAutoFocus", &UARSessionConfig::execShouldEnableAutoFocus },
			{ "ShouldEnableCameraTracking", &UARSessionConfig::execShouldEnableCameraTracking },
			{ "ShouldRenderCameraOverlay", &UARSessionConfig::execShouldRenderCameraOverlay },
			{ "ShouldResetCameraTracking", &UARSessionConfig::execShouldResetCameraTracking },
			{ "ShouldResetTrackedObjects", &UARSessionConfig::execShouldResetTrackedObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics
	{
		struct ARSessionConfig_eventAddCandidateImage_Parms
		{
			UARCandidateImage* NewCandidateImage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCandidateImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::NewProp_NewCandidateImage = { "NewCandidateImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventAddCandidateImage_Parms, NewCandidateImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::NewProp_NewCandidateImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "// Add a new CandidateImage to the ARSessionConfig.\n" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Add a new CandidateImage to the ARSessionConfig." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "AddCandidateImage", nullptr, nullptr, sizeof(ARSessionConfig_eventAddCandidateImage_Parms), Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics
	{
		struct ARSessionConfig_eventAddCandidateObject_Parms
		{
			UARCandidateObject* CandidateObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::NewProp_CandidateObject = { "CandidateObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventAddCandidateObject_Parms, CandidateObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::NewProp_CandidateObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "AddCandidateObject", nullptr, nullptr, sizeof(ARSessionConfig_eventAddCandidateObject_Parms), Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics
	{
		struct ARSessionConfig_eventGetCandidateImageList_Parms
		{
			TArray<UARCandidateImage*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetCandidateImageList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateImages */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateImages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetCandidateImageList", nullptr, nullptr, sizeof(ARSessionConfig_eventGetCandidateImageList_Parms), Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics
	{
		struct ARSessionConfig_eventGetCandidateObjectList_Parms
		{
			TArray<UARCandidateObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetCandidateObjectList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetCandidateObjectList", nullptr, nullptr, sizeof(ARSessionConfig_eventGetCandidateObjectList_Parms), Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics
	{
		struct ARSessionConfig_eventGetDesiredVideoFormat_Parms
		{
			FARVideoFormat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetDesiredVideoFormat_Parms, ReturnValue), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see DesiredVideoFormat */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see DesiredVideoFormat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetDesiredVideoFormat", nullptr, nullptr, sizeof(ARSessionConfig_eventGetDesiredVideoFormat_Parms), Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics
	{
		struct ARSessionConfig_eventGetEnabledSessionTrackingFeature_Parms
		{
			EARSessionTrackingFeature ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetEnabledSessionTrackingFeature_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EnabledSessionTrackingFeatures */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnabledSessionTrackingFeatures" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetEnabledSessionTrackingFeature", nullptr, nullptr, sizeof(ARSessionConfig_eventGetEnabledSessionTrackingFeature_Parms), Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics
	{
		struct ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms
		{
			EAREnvironmentCaptureProbeType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EnvironmentCaptureProbeType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnvironmentCaptureProbeType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetEnvironmentCaptureProbeType", nullptr, nullptr, sizeof(ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms), Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics
	{
		struct ARSessionConfig_eventGetFaceTrackingDirection_Parms
		{
			EARFaceTrackingDirection ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetFaceTrackingDirection_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingDirection */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingDirection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFaceTrackingDirection", nullptr, nullptr, sizeof(ARSessionConfig_eventGetFaceTrackingDirection_Parms), Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics
	{
		struct ARSessionConfig_eventGetFaceTrackingUpdate_Parms
		{
			EARFaceTrackingUpdate ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetFaceTrackingUpdate_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingUpdate */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingUpdate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFaceTrackingUpdate", nullptr, nullptr, sizeof(ARSessionConfig_eventGetFaceTrackingUpdate_Parms), Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics
	{
		struct ARSessionConfig_eventGetFrameSyncMode_Parms
		{
			EARFrameSyncMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetFrameSyncMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FrameSyncMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FrameSyncMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFrameSyncMode", nullptr, nullptr, sizeof(ARSessionConfig_eventGetFrameSyncMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics
	{
		struct ARSessionConfig_eventGetLightEstimationMode_Parms
		{
			EARLightEstimationMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetLightEstimationMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see LightEstimationMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see LightEstimationMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetLightEstimationMode", nullptr, nullptr, sizeof(ARSessionConfig_eventGetLightEstimationMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics
	{
		struct ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see MaxNumSimultaneousImagesTracked */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see MaxNumSimultaneousImagesTracked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetMaxNumSimultaneousImagesTracked", nullptr, nullptr, sizeof(ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms), Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics
	{
		struct ARSessionConfig_eventGetPlaneDetectionMode_Parms
		{
			EARPlaneDetectionMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetPlaneDetectionMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see PlaneDetectionMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see PlaneDetectionMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetPlaneDetectionMode", nullptr, nullptr, sizeof(ARSessionConfig_eventGetPlaneDetectionMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics
	{
		struct ARSessionConfig_eventGetSessionType_Parms
		{
			EARSessionType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetSessionType_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see SessionType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see SessionType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetSessionType", nullptr, nullptr, sizeof(ARSessionConfig_eventGetSessionType_Parms), Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetSessionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics
	{
		struct ARSessionConfig_eventGetWorldAlignment_Parms
		{
			EARWorldAlignment ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetWorldAlignment_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARWorldAlignment */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARWorldAlignment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetWorldAlignment", nullptr, nullptr, sizeof(ARSessionConfig_eventGetWorldAlignment_Parms), Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics
	{
		struct ARSessionConfig_eventGetWorldMapData_Parms
		{
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetWorldMapData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see WorldMapData */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see WorldMapData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetWorldMapData", nullptr, nullptr, sizeof(ARSessionConfig_eventGetWorldMapData_Parms), Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics
	{
		struct ARSessionConfig_eventSetCandidateObjectList_Parms
		{
			TArray<UARCandidateObject*> InCandidateObjects;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCandidateObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCandidateObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCandidateObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects = { "InCandidateObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetCandidateObjectList_Parms, InCandidateObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_Inner = { "InCandidateObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetCandidateObjectList", nullptr, nullptr, sizeof(ARSessionConfig_eventSetCandidateObjectList_Parms), Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics
	{
		struct ARSessionConfig_eventSetDesiredVideoFormat_Parms
		{
			FARVideoFormat NewFormat;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::NewProp_NewFormat = { "NewFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetDesiredVideoFormat_Parms, NewFormat), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::NewProp_NewFormat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see DesiredVideoFormat */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see DesiredVideoFormat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetDesiredVideoFormat", nullptr, nullptr, sizeof(ARSessionConfig_eventSetDesiredVideoFormat_Parms), Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics
	{
		struct ARSessionConfig_eventSetEnableAutoFocus_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetEnableAutoFocus_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventSetEnableAutoFocus_Parms), &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutoFocus */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutoFocus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetEnableAutoFocus", nullptr, nullptr, sizeof(ARSessionConfig_eventSetEnableAutoFocus_Parms), Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics
	{
		struct ARSessionConfig_eventSetFaceTrackingDirection_Parms
		{
			EARFaceTrackingDirection InDirection;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetFaceTrackingDirection_Parms, InDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingDirection */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingDirection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetFaceTrackingDirection", nullptr, nullptr, sizeof(ARSessionConfig_eventSetFaceTrackingDirection_Parms), Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics
	{
		struct ARSessionConfig_eventSetFaceTrackingUpdate_Parms
		{
			EARFaceTrackingUpdate InUpdate;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InUpdate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InUpdate_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate = { "InUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetFaceTrackingUpdate_Parms, InUpdate), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingUpdate */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingUpdate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetFaceTrackingUpdate", nullptr, nullptr, sizeof(ARSessionConfig_eventSetFaceTrackingUpdate_Parms), Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics
	{
		struct ARSessionConfig_eventSetResetCameraTracking_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetResetCameraTracking_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventSetResetCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetCameraTracking */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetCameraTracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetResetCameraTracking", nullptr, nullptr, sizeof(ARSessionConfig_eventSetResetCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics
	{
		struct ARSessionConfig_eventSetResetTrackedObjects_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetResetTrackedObjects_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventSetResetTrackedObjects_Parms), &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetTrackedObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetTrackedObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetResetTrackedObjects", nullptr, nullptr, sizeof(ARSessionConfig_eventSetResetTrackedObjects_Parms), Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics
	{
		struct ARSessionConfig_eventSetSessionTrackingFeatureToEnable_Parms
		{
			EARSessionTrackingFeature InSessionTrackingFeature;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSessionTrackingFeature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSessionTrackingFeature_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature = { "InSessionTrackingFeature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetSessionTrackingFeatureToEnable_Parms, InSessionTrackingFeature), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EnabledSessionTrackingFeatures */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnabledSessionTrackingFeatures" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetSessionTrackingFeatureToEnable", nullptr, nullptr, sizeof(ARSessionConfig_eventSetSessionTrackingFeatureToEnable_Parms), Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics
	{
		struct ARSessionConfig_eventSetWorldMapData_Parms
		{
			TArray<uint8> WorldMapData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldMapData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldMapData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData = { "WorldMapData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetWorldMapData_Parms, WorldMapData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData_Inner = { "WorldMapData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see WorldMapData */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see WorldMapData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetWorldMapData", nullptr, nullptr, sizeof(ARSessionConfig_eventSetWorldMapData_Parms), Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetWorldMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics
	{
		struct ARSessionConfig_eventShouldEnableAutoFocus_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldEnableAutoFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldEnableAutoFocus_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutoFocus */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutoFocus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldEnableAutoFocus", nullptr, nullptr, sizeof(ARSessionConfig_eventShouldEnableAutoFocus_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics
	{
		struct ARSessionConfig_eventShouldEnableCameraTracking_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldEnableCameraTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldEnableCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutomaticCameraTracking */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutomaticCameraTracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldEnableCameraTracking", nullptr, nullptr, sizeof(ARSessionConfig_eventShouldEnableCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics
	{
		struct ARSessionConfig_eventShouldRenderCameraOverlay_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldRenderCameraOverlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldRenderCameraOverlay_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutomaticCameraOverlay */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutomaticCameraOverlay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldRenderCameraOverlay", nullptr, nullptr, sizeof(ARSessionConfig_eventShouldRenderCameraOverlay_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics
	{
		struct ARSessionConfig_eventShouldResetCameraTracking_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldResetCameraTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldResetCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetCameraTracking */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetCameraTracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldResetCameraTracking", nullptr, nullptr, sizeof(ARSessionConfig_eventShouldResetCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics
	{
		struct ARSessionConfig_eventShouldResetTrackedObjects_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldResetTrackedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldResetTrackedObjects_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetTrackedObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetTrackedObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldResetTrackedObjects", nullptr, nullptr, sizeof(ARSessionConfig_eventShouldResetTrackedObjects_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARSessionConfig_NoRegister()
	{
		return UARSessionConfig::StaticClass();
	}
	struct Z_Construct_UClass_UARSessionConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledSessionTrackingFeature_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnabledSessionTrackingFeature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnabledSessionTrackingFeature_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedARCandidateImageDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializedARCandidateImageDatabase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializedARCandidateImageDatabase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingUpdate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceTrackingUpdate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceTrackingDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredVideoFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredVideoFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldMapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldMapData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldMapData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCaptureProbeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentCaptureProbeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentCaptureProbeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSimultaneousImagesTracked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSimultaneousImagesTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetTrackedObjects_MetaData[];
#endif
		static void NewProp_bResetTrackedObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetTrackedObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetCameraTracking_MetaData[];
#endif
		static void NewProp_bResetCameraTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetCameraTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraTracking_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCameraTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraOverlay_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCameraOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSyncMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameSyncMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameSyncMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightEstimationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightEstimationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightEstimationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoFocus_MetaData[];
#endif
		static void NewProp_bEnableAutoFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVerticalPlaneDetection_MetaData[];
#endif
		static void NewProp_bVerticalPlaneDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVerticalPlaneDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHorizontalPlaneDetection_MetaData[];
#endif
		static void NewProp_bHorizontalPlaneDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHorizontalPlaneDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneDetectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneDetectionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneDetectionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePersonSegmentationForOcclusion_MetaData[];
#endif
		static void NewProp_bUsePersonSegmentationForOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePersonSegmentationForOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrackSceneObjects_MetaData[];
#endif
		static void NewProp_bTrackSceneObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackSceneObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderMeshDataInWireframe_MetaData[];
#endif
		static void NewProp_bRenderMeshDataInWireframe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderMeshDataInWireframe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMeshDataForOcclusion_MetaData[];
#endif
		static void NewProp_bUseMeshDataForOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMeshDataForOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNavMeshForMeshData_MetaData[];
#endif
		static void NewProp_bGenerateNavMeshForMeshData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNavMeshForMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisionForMeshData_MetaData[];
#endif
		static void NewProp_bGenerateCollisionForMeshData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisionForMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData[];
#endif
		static void NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDataFromTrackedGeometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSessionConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSessionConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSessionConfig_AddCandidateImage, "AddCandidateImage" }, // 2892678450
		{ &Z_Construct_UFunction_UARSessionConfig_AddCandidateObject, "AddCandidateObject" }, // 1077573132
		{ &Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList, "GetCandidateImageList" }, // 50847897
		{ &Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList, "GetCandidateObjectList" }, // 1291936654
		{ &Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat, "GetDesiredVideoFormat" }, // 3374499935
		{ &Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature, "GetEnabledSessionTrackingFeature" }, // 3914762755
		{ &Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType, "GetEnvironmentCaptureProbeType" }, // 3171703799
		{ &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection, "GetFaceTrackingDirection" }, // 1013735537
		{ &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate, "GetFaceTrackingUpdate" }, // 4233556519
		{ &Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode, "GetFrameSyncMode" }, // 330369656
		{ &Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode, "GetLightEstimationMode" }, // 331170789
		{ &Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked, "GetMaxNumSimultaneousImagesTracked" }, // 907921828
		{ &Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode, "GetPlaneDetectionMode" }, // 859523581
		{ &Z_Construct_UFunction_UARSessionConfig_GetSessionType, "GetSessionType" }, // 4066230738
		{ &Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment, "GetWorldAlignment" }, // 1958982546
		{ &Z_Construct_UFunction_UARSessionConfig_GetWorldMapData, "GetWorldMapData" }, // 1625004021
		{ &Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList, "SetCandidateObjectList" }, // 1033214954
		{ &Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat, "SetDesiredVideoFormat" }, // 1055961825
		{ &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus, "SetEnableAutoFocus" }, // 3316016115
		{ &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection, "SetFaceTrackingDirection" }, // 2429717793
		{ &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate, "SetFaceTrackingUpdate" }, // 950926241
		{ &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking, "SetResetCameraTracking" }, // 337985959
		{ &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects, "SetResetTrackedObjects" }, // 3008445852
		{ &Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable, "SetSessionTrackingFeatureToEnable" }, // 571489038
		{ &Z_Construct_UFunction_UARSessionConfig_SetWorldMapData, "SetWorldMapData" }, // 204008381
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus, "ShouldEnableAutoFocus" }, // 501831253
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking, "ShouldEnableCameraTracking" }, // 1108652722
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay, "ShouldRenderCameraOverlay" }, // 3120241965
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking, "ShouldResetCameraTracking" }, // 1746597848
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects, "ShouldResetTrackedObjects" }, // 1316414642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Settings" },
		{ "IncludePath", "ARSessionConfig.h" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** A list of session features  to enable */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "A list of session features  to enable" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature = { "EnabledSessionTrackingFeature", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, EnabledSessionTrackingFeature), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData[] = {
		{ "Comment", "/** Data array for storing the cooked image database */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Data array for storing the cooked image database" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase = { "SerializedARCandidateImageDatabase", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, SerializedARCandidateImageDatabase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_Inner = { "SerializedARCandidateImageDatabase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "Comment", "/** Whether to track the face as if you are looking out of the device or as a mirror */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether to track the face as if you are looking out of the device or as a mirror" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate = { "FaceTrackingUpdate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, FaceTrackingUpdate), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "Comment", "/** Whether to track the face as if you are looking out of the device or as a mirror */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether to track the face as if you are looking out of the device or as a mirror" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection = { "FaceTrackingDirection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, FaceTrackingDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/**\n\x09 * The desired video format (or the default if not supported) that this session should use if the camera is enabled\n\x09 * Note: Call GetSupportedVideoFormats to get a list of device supported formats\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The desired video format (or the default if not supported) that this session should use if the camera is enabled\nNote: Call GetSupportedVideoFormats to get a list of device supported formats" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat = { "DesiredVideoFormat", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, DesiredVideoFormat), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** A list of candidate objects to search for in the scene */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "A list of candidate objects to search for in the scene" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects = { "CandidateObjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, CandidateObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_Inner = { "CandidateObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** A previously saved world that is to be loaded when the session starts */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "A previously saved world that is to be loaded when the session starts" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData = { "WorldMapData", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, WorldMapData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_Inner = { "WorldMapData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** How the AR system should handle texture probe capturing */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "How the AR system should handle texture probe capturing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType = { "EnvironmentCaptureProbeType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, EnvironmentCaptureProbeType), Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The maximum number of images to track at the same time. Defaults to 1 */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The maximum number of images to track at the same time. Defaults to 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked = { "MaxNumSimultaneousImagesTracked", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, MaxNumSimultaneousImagesTracked), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The list of candidate images to detect within the AR camera view */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The list of candidate images to detect within the AR camera view" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages = { "CandidateImages", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, CandidateImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_Inner = { "CandidateImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether the AR system should remove any tracked objects or not. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should remove any tracked objects or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bResetTrackedObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects = { "bResetTrackedObjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether the AR system should reset camera tracking (origin, transform) or not. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should reset camera tracking (origin, transform) or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bResetCameraTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking = { "bResetCameraTracking", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether the game camera should track the device movement or not. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the game camera should track the device movement or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutomaticCameraTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking = { "bEnableAutomaticCameraTracking", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether the AR camera feed should be drawn as an overlay or not. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR camera feed should be drawn as an overlay or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutomaticCameraOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay = { "bEnableAutomaticCameraOverlay", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARFrameSyncMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARFrameSyncMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode = { "FrameSyncMode", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, FrameSyncMode), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARLightEstimationMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARLightEstimationMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode = { "LightEstimationMode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, LightEstimationMode), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether the camera should use autofocus or not (can cause subtle shifts in position for small objects at macro camera distance) */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the camera should use autofocus or not (can cause subtle shifts in position for small objects at macro camera distance)" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutoFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus = { "bEnableAutoFocus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Should we detect flat vertical surfaces: e.g. paintings, monitors, book cases */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Should we detect flat vertical surfaces: e.g. paintings, monitors, book cases" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bVerticalPlaneDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection = { "bVerticalPlaneDetection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Should we detect flat horizontal surfaces: e.g. table tops, windows sills */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Should we detect flat horizontal surfaces: e.g. table tops, windows sills" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bHorizontalPlaneDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection = { "bHorizontalPlaneDetection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData[] = {
		{ "Comment", "/** @see EARPlaneDetectionMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARPlaneDetectionMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode = { "PlaneDetectionMode", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode_DEPRECATED), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARSessionType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARSessionType" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARWorldAlignment */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARWorldAlignment" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment = { "WorldAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, WorldAlignment), Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_MetaData[] = {
		{ "Category", "AR Settings | Occlusion" },
		{ "Comment", "/** Whether to occlude the virtual content with the result from person segmentation */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether to occlude the virtual content with the result from person segmentation" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUsePersonSegmentationForOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion = { "bUsePersonSegmentationForOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Whether the AR system should report scene objects (@see EARObjectClassification::SceneObject) */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should report scene objects (@see EARObjectClassification::SceneObject)" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bTrackSceneObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects = { "bTrackSceneObjects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Whether the AR system should render the mesh data in wireframe or not */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should render the mesh data in wireframe or not" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bRenderMeshDataInWireframe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe = { "bRenderMeshDataInWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Whether the AR system render the mesh data as occlusion meshes or not */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system render the mesh data as occlusion meshes or not" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUseMeshDataForOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion = { "bUseMeshDataForOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Whether the AR system should generate navigation mesh data from the mesh data or not */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should generate navigation mesh data from the mesh data or not" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bGenerateNavMeshForMeshData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData = { "bGenerateNavMeshForMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Whether the AR system should generate collision data from the mesh data or not */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should generate collision data from the mesh data or not" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bGenerateCollisionForMeshData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData = { "bGenerateCollisionForMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Whether the AR system should generate mesh data that can be rendered, collided against, nav mesh generated on, etc. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should generate mesh data that can be rendered, collided against, nav mesh generated on, etc." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bGenerateMeshDataFromTrackedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry = { "bGenerateMeshDataFromTrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSessionConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSessionConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSessionConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARSessionConfig_Statics::ClassParams = {
		&UARSessionConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSessionConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARSessionConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARSessionConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARSessionConfig, 1689550727);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARSessionConfig>()
	{
		return UARSessionConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARSessionConfig(Z_Construct_UClass_UARSessionConfig, &UARSessionConfig::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARSessionConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSessionConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
