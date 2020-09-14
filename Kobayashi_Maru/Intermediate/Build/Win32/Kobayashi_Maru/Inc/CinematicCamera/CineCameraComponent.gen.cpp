// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCamera/Public/CineCameraComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* ECameraFocusMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("ECameraFocusMethod"));
		}
		return Singleton;
	}
	template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>()
	{
		return ECameraFocusMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraFocusMethod(ECameraFocusMethod_StaticEnum, TEXT("/Script/CinematicCamera"), TEXT("ECameraFocusMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Hash() { return 1416253955U; }
	UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraFocusMethod"), 0, Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraFocusMethod::DoNotOverride", (int64)ECameraFocusMethod::DoNotOverride },
				{ "ECameraFocusMethod::Manual", (int64)ECameraFocusMethod::Manual },
				{ "ECameraFocusMethod::Tracking", (int64)ECameraFocusMethod::Tracking },
				{ "ECameraFocusMethod::Disable", (int64)ECameraFocusMethod::Disable },
				{ "ECameraFocusMethod::MAX", (int64)ECameraFocusMethod::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Supported methods for focusing the camera. */" },
				{ "Disable.Comment", "/** Disable depth of field entirely. */" },
				{ "Disable.Name", "ECameraFocusMethod::Disable" },
				{ "Disable.ToolTip", "Disable depth of field entirely." },
				{ "DoNotOverride.Comment", "/** Don't override, ie. allow post process volume settings to persist. */" },
				{ "DoNotOverride.Name", "ECameraFocusMethod::DoNotOverride" },
				{ "DoNotOverride.ToolTip", "Don't override, ie. allow post process volume settings to persist." },
				{ "Manual.Comment", "/** Allows for specifying or animating exact focus distances. */" },
				{ "Manual.Name", "ECameraFocusMethod::Manual" },
				{ "Manual.ToolTip", "Allows for specifying or animating exact focus distances." },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "ECameraFocusMethod::MAX" },
				{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
				{ "ToolTip", "Supported methods for focusing the camera." },
				{ "Tracking.Comment", "/** Locks focus to specific object. */" },
				{ "Tracking.Name", "ECameraFocusMethod::Tracking" },
				{ "Tracking.ToolTip", "Locks focus to specific object." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CinematicCamera,
				nullptr,
				"ECameraFocusMethod",
				"ECameraFocusMethod",
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
class UScriptStruct* FCameraFocusSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFocusSettings"), sizeof(FCameraFocusSettings), Get_Z_Construct_UScriptStruct_FCameraFocusSettings_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraFocusSettings>()
{
	return FCameraFocusSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraFocusSettings(FCameraFocusSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraFocusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraFocusSettings")),new UScriptStruct::TCppStructOps<FCameraFocusSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings;
	struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusSmoothingInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusSmoothingInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothFocusChanges_MetaData[];
#endif
		static void NewProp_bSmoothFocusChanges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothFocusChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugFocusPlaneColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFocusPlane_MetaData[];
#endif
		static void NewProp_bDrawDebugFocusPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFocusPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingFocusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingFocusSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FocusMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control camera focus */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Settings to control camera focus" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFocusSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset = { "FocusOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, FocusOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false. */" },
		{ "EditCondition", "bSmoothFocusChanges" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed = { "FocusSmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, FocusSmoothingInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit(void* Obj)
	{
		((FCameraFocusSettings*)Obj)->bSmoothFocusChanges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges = { "bSmoothFocusChanges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraFocusSettings), &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** For customizing the focus plane color, in case the default doesn't show up well in your scene. */" },
		{ "EditCondition", "bDrawDebugFocusPlane" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "For customizing the focus plane color, in case the default doesn't show up well in your scene." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor = { "DebugFocusPlaneColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, DebugFocusPlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** True to draw a translucent plane at the current focus depth, for easy tweaking. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "True to draw a translucent plane at the current focus depth, for easy tweaking." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_SetBit(void* Obj)
	{
		((FCameraFocusSettings*)Obj)->bDrawDebugFocusPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane = { "bDrawDebugFocusPlane", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraFocusSettings), &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData[] = {
		{ "Category", "Tracking Focus Settings" },
		{ "Comment", "/** Settings to control tracking focus (tracking focus mode only) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Settings to control tracking focus (tracking focus mode only)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings = { "TrackingFocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, TrackingFocusSettings), Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "Category", "Manual Focus Settings" },
		{ "Comment", "/** Manually-controlled focus distance (manual focus mode only) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Manually-controlled focus distance (manual focus mode only)" },
		{ "Units", "cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, ManualFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData[] = {
		{ "Category", "Focus Method" },
		{ "Comment", "/** Which method to use to handle camera focus */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Which method to use to handle camera focus" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod = { "FocusMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraFocusSettings",
		sizeof(FCameraFocusSettings),
		alignof(FCameraFocusSettings),
		Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraFocusSettings"), sizeof(FCameraFocusSettings), Get_Z_Construct_UScriptStruct_FCameraFocusSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_Hash() { return 4087081288U; }
class UScriptStruct* FCameraTrackingFocusSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraTrackingFocusSettings"), sizeof(FCameraTrackingFocusSettings), Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraTrackingFocusSettings>()
{
	return FCameraTrackingFocusSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraTrackingFocusSettings(FCameraTrackingFocusSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraTrackingFocusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraTrackingFocusSettings")),new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings;
	struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTrackingFocusPoint_MetaData[];
#endif
		static void NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTrackingFocusPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control tracking-focus mode. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Settings to control tracking-focus mode." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** True to draw a debug representation of the tracked position. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "True to draw a debug representation of the tracked position." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj)
	{
		((FCameraTrackingFocusSettings*)Obj)->bDrawDebugTrackingFocusPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint = { "bDrawDebugTrackingFocusPoint", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraTrackingFocusSettings), &Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraTrackingFocusSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** Focus distance will be tied to this actor's location. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Focus distance will be tied to this actor's location." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000200000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraTrackingFocusSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraTrackingFocusSettings",
		sizeof(FCameraTrackingFocusSettings),
		alignof(FCameraTrackingFocusSettings),
		Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraTrackingFocusSettings"), sizeof(FCameraTrackingFocusSettings), Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Hash() { return 3154207379U; }
class UScriptStruct* FNamedLensPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedLensPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedLensPreset"), sizeof(FNamedLensPreset), Get_Z_Construct_UScriptStruct_FNamedLensPreset_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedLensPreset>()
{
	return FNamedLensPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedLensPreset(FNamedLensPreset::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("NamedLensPreset"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedLensPreset")),new UScriptStruct::TCppStructOps<FNamedLensPreset>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset;
	struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named bundle of lens settings used to implement lens presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A named bundle of lens settings used to implement lens presets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedLensPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedLensPreset, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedLensPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedLensPreset",
		sizeof(FNamedLensPreset),
		alignof(FNamedLensPreset),
		Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedLensPreset"), sizeof(FNamedLensPreset), Get_Z_Construct_UScriptStruct_FNamedLensPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedLensPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_Hash() { return 1420480832U; }
class UScriptStruct* FCameraLensSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLensSettings"), sizeof(FCameraLensSettings), Get_Z_Construct_UScriptStruct_FCameraLensSettings_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraLensSettings>()
{
	return FCameraLensSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraLensSettings(FCameraLensSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraLensSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraLensSettings")),new UScriptStruct::TCppStructOps<FCameraLensSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings;
	struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiaphragmBladeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiaphragmBladeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFocalLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * #note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h\n */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLensSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of blades of diaphragm. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Number of blades of diaphragm." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount = { "DiaphragmBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, DiaphragmBladeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Shortest distance this lens can focus on. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Shortest distance this lens can focus on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance = { "MinimumFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MinimumFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop = { "MaxFStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MaxFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop = { "MinFStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MinFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Maximum focal length for this lens */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Maximum focal length for this lens" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength = { "MaxFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MaxFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Minimum focal length for this lens */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Minimum focal length for this lens" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength = { "MinFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MinFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraLensSettings",
		sizeof(FCameraLensSettings),
		alignof(FCameraLensSettings),
		Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraLensSettings"), sizeof(FCameraLensSettings), Get_Z_Construct_UScriptStruct_FCameraLensSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraLensSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_Hash() { return 3941125480U; }
class UScriptStruct* FNamedFilmbackPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFilmbackPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedFilmbackPreset"), sizeof(FNamedFilmbackPreset), Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedFilmbackPreset>()
{
	return FNamedFilmbackPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedFilmbackPreset(FNamedFilmbackPreset::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("NamedFilmbackPreset"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedFilmbackPreset")),new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset;
	struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A named bundle of filmback settings used to implement filmback presets */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A named bundle of filmback settings used to implement filmback presets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedFilmbackPreset, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedFilmbackPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedFilmbackPreset",
		sizeof(FNamedFilmbackPreset),
		alignof(FNamedFilmbackPreset),
		Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedFilmbackPreset"), sizeof(FNamedFilmbackPreset), Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_Hash() { return 2277202956U; }
class UScriptStruct* FCameraFilmbackSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFilmbackSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFilmbackSettings"), sizeof(FCameraFilmbackSettings), Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_Hash());
	}
	return Singleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraFilmbackSettings>()
{
	return FCameraFilmbackSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraFilmbackSettings(FCameraFilmbackSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraFilmbackSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraFilmbackSettings")),new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings;
	struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** #note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Read-only. Computed from Sensor dimensions. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Computed from Sensor dimensions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio = { "SensorAspectRatio", nullptr, (EPropertyFlags)0x0010000200020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFilmbackSettings, SensorAspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Vertical size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Vertical size of filmback or digital sensor, in mm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFilmbackSettings, SensorHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Horizontal size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Horizontal size of filmback or digital sensor, in mm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFilmbackSettings, SensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraFilmbackSettings",
		sizeof(FCameraFilmbackSettings),
		alignof(FCameraFilmbackSettings),
		Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraFilmbackSettings"), sizeof(FCameraFilmbackSettings), Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_Hash() { return 1567401582U; }
	DEFINE_FUNCTION(UCineCameraComponent::execGetLensPresetsCopy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNamedLensPreset>*)Z_Param__Result=UCineCameraComponent::GetLensPresetsCopy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execSetLensPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensPresetByName(Z_Param_InPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetLensPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLensPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execSetFilmbackPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilmbackPresetByName(Z_Param_InPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetDefaultFilmbackPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultFilmbackPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetFilmbackPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilmbackPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetVerticalFieldOfView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVerticalFieldOfView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetHorizontalFieldOfView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execSetCurrentFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFocalLength(Z_Param_Out_InFocalLength);
		P_NATIVE_END;
	}
	void UCineCameraComponent::StaticRegisterNativesUCineCameraComponent()
	{
		UClass* Class = UCineCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultFilmbackPresetName", &UCineCameraComponent::execGetDefaultFilmbackPresetName },
			{ "GetFilmbackPresetName", &UCineCameraComponent::execGetFilmbackPresetName },
			{ "GetHorizontalFieldOfView", &UCineCameraComponent::execGetHorizontalFieldOfView },
			{ "GetLensPresetName", &UCineCameraComponent::execGetLensPresetName },
			{ "GetLensPresetsCopy", &UCineCameraComponent::execGetLensPresetsCopy },
			{ "GetVerticalFieldOfView", &UCineCameraComponent::execGetVerticalFieldOfView },
			{ "SetCurrentFocalLength", &UCineCameraComponent::execSetCurrentFocalLength },
			{ "SetFilmbackPresetByName", &UCineCameraComponent::execSetFilmbackPresetByName },
			{ "SetLensPresetByName", &UCineCameraComponent::execSetLensPresetByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics
	{
		struct CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the name of the default filmback preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the name of the default filmback preset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetDefaultFilmbackPresetName", nullptr, nullptr, sizeof(CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms), Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics
	{
		struct CineCameraComponent_eventGetFilmbackPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the filmback name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the filmback name of the camera with the current settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetFilmbackPresetName", nullptr, nullptr, sizeof(CineCameraComponent_eventGetFilmbackPresetName_Parms), Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics
	{
		struct CineCameraComponent_eventGetHorizontalFieldOfView_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetHorizontalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the horizonal FOV of the camera with current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the horizonal FOV of the camera with current settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetHorizontalFieldOfView", nullptr, nullptr, sizeof(CineCameraComponent_eventGetHorizontalFieldOfView_Parms), Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics
	{
		struct CineCameraComponent_eventGetLensPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the lens name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the lens name of the camera with the current settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetLensPresetName", nullptr, nullptr, sizeof(CineCameraComponent_eventGetLensPresetName_Parms), Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics
	{
		struct CineCameraComponent_eventGetLensPresetsCopy_Parms
		{
			TArray<FNamedLensPreset> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetsCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns a copy of the list of available lens presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns a copy of the list of available lens presets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetLensPresetsCopy", nullptr, nullptr, sizeof(CineCameraComponent_eventGetLensPresetsCopy_Parms), Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics
	{
		struct CineCameraComponent_eventGetVerticalFieldOfView_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetVerticalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the vertical FOV of the camera with current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the vertical FOV of the camera with current settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetVerticalFieldOfView", nullptr, nullptr, sizeof(CineCameraComponent_eventGetVerticalFieldOfView_Parms), Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics
	{
		struct CineCameraComponent_eventSetCurrentFocalLength_Parms
		{
			float InFocalLength;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFocalLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength = { "InFocalLength", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCurrentFocalLength_Parms, InFocalLength), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Cine Camera" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCurrentFocalLength", nullptr, nullptr, sizeof(CineCameraComponent_eventSetCurrentFocalLength_Parms), Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics
	{
		struct CineCameraComponent_eventSetFilmbackPresetByName_Parms
		{
			FString InPresetName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPresetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventSetFilmbackPresetByName_Parms, InPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current preset settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current preset settings by preset name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetFilmbackPresetByName", nullptr, nullptr, sizeof(CineCameraComponent_eventSetFilmbackPresetByName_Parms), Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics
	{
		struct CineCameraComponent_eventSetLensPresetByName_Parms
		{
			FString InPresetName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPresetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventSetLensPresetByName_Parms, InPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current lens settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current lens settings by preset name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetLensPresetByName", nullptr, nullptr, sizeof(CineCameraComponent_eventSetLensPresetByName_Parms), Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister()
	{
		return UCineCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCineCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLensPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultLensPresetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPresetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LensPresets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensPresets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilmbackPresets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackPresets_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPlaneVisualizationMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusPlaneVisualizationMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPlaneVisualizationMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusPlaneVisualizationMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHorizontalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHorizontalFOV;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filmback_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filmback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCineCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName, "GetDefaultFilmbackPresetName" }, // 2319875460
		{ &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName, "GetFilmbackPresetName" }, // 796845039
		{ &Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView, "GetHorizontalFieldOfView" }, // 3759448136
		{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName, "GetLensPresetName" }, // 252423255
		{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy, "GetLensPresetsCopy" }, // 1771549058
		{ &Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView, "GetVerticalFieldOfView" }, // 3331032980
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength, "SetCurrentFocalLength" }, // 4001781492
		{ &Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName, "SetFilmbackPresetByName" }, // 1542145731
		{ &Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName, "SetLensPresetByName" }, // 1711177277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * A specialized version of a camera component, geared toward cinematic usage.\n */" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "CineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A specialized version of a camera component, geared toward cinematic usage." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop_MetaData[] = {
		{ "Comment", "/** Default aperture (will be constrained by default lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Default aperture (will be constrained by default lens)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop = { "DefaultLensFStop", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength_MetaData[] = {
		{ "Comment", "/** Default focal length (will be constrained by default lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Default focal length (will be constrained by default lens)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength = { "DefaultLensFocalLength", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName_MetaData[] = {
		{ "Comment", "/** Name of the default lens preset */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name of the default lens preset" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName = { "DefaultLensPresetName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset_MetaData[] = {
		{ "Comment", "/** Name of the default filmback preset */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name of the default filmback preset" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset = { "DefaultFilmbackPreset", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPreset), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName_MetaData[] = {
		{ "Comment", "/** Deprecated. See DefaultFilmbackPreset */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Deprecated. See DefaultFilmbackPreset" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName = { "DefaultFilmbackPresetName", nullptr, (EPropertyFlags)0x0020080020004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_MetaData[] = {
		{ "Comment", "/** List of available lens presets */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "List of available lens presets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets = { "LensPresets", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, LensPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_Inner = { "LensPresets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_MetaData[] = {
		{ "Comment", "/** List of available filmback presets */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "List of available filmback presets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_Inner = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID_MetaData[] = {
		{ "Comment", "/** Dynamic material instance for the debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Dynamic material instance for the debug focus plane visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID = { "DebugFocusPlaneMID", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent_MetaData[] = {
		{ "Comment", "/** Component for the debug focus plane visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Component for the debug focus plane visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent = { "DebugFocusPlaneComponent", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial_MetaData[] = {
		{ "Comment", "/** Material used for debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Material used for debug focus plane visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial = { "FocusPlaneVisualizationMaterial", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FocusPlaneVisualizationMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh_MetaData[] = {
		{ "Comment", "/** Mesh used for debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Mesh used for debug focus plane visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh = { "FocusPlaneVisualizationMesh", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FocusPlaneVisualizationMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Read-only. Control this value with CurrentFocalLength (and filmback settings). */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Control this value with CurrentFocalLength (and filmback settings)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV = { "CurrentHorizontalFOV", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentHorizontalFOV), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Read-only. Control this value via FocusSettings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Control this value via FocusSettings." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance = { "CurrentFocusDistance", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentFocusDistance), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentAperture), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "BlueprintSetter", "SetCurrentFocalLength" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Current focal length of the camera (i.e. controls FoV, zoom) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Current focal length of the camera (i.e. controls FoV, zoom)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the camera's focus. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the camera's focus." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the camera's lens. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the camera's lens." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the filmback of the camera. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the filmback of the camera." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FilmbackSettings_DEPRECATED), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams = {
		&UCineCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCineCameraComponent, 2343608989);
	template<> CINEMATICCAMERA_API UClass* StaticClass<UCineCameraComponent>()
	{
		return UCineCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCineCameraComponent(Z_Construct_UClass_UCineCameraComponent, &UCineCameraComponent::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("UCineCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCineCameraComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
