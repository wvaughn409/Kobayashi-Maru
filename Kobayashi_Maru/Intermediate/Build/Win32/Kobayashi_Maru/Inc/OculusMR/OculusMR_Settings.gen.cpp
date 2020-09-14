// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Public/OculusMR_Settings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_Settings() {}
// Cross Module References
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_VirtualGreenScreenType();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_Settings_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_Settings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EOculusMR_CompositionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_CompositionMethod"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CompositionMethod>()
	{
		return EOculusMR_CompositionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_CompositionMethod(EOculusMR_CompositionMethod_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_CompositionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Hash() { return 2143745242U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_CompositionMethod"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_CompositionMethod::ExternalComposition", (int64)EOculusMR_CompositionMethod::ExternalComposition },
				{ "EOculusMR_CompositionMethod::DirectComposition", (int64)EOculusMR_CompositionMethod::DirectComposition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DirectComposition.Comment", "/* Composite the camera stream directly to the output with the proper depth.*/" },
				{ "DirectComposition.DisplayName", "Direct Composition" },
				{ "DirectComposition.Name", "EOculusMR_CompositionMethod::DirectComposition" },
				{ "DirectComposition.ToolTip", "Composite the camera stream directly to the output with the proper depth." },
				{ "ExternalComposition.Comment", "/* Generate both foreground and background views for compositing with 3rd-party software like OBS. */" },
				{ "ExternalComposition.DisplayName", "External Composition" },
				{ "ExternalComposition.Name", "EOculusMR_CompositionMethod::ExternalComposition" },
				{ "ExternalComposition.ToolTip", "Generate both foreground and background views for compositing with 3rd-party software like OBS." },
				{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_CompositionMethod",
				"EOculusMR_CompositionMethod",
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
	static UEnum* EOculusMR_DepthQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_DepthQuality"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_DepthQuality>()
	{
		return EOculusMR_DepthQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_DepthQuality(EOculusMR_DepthQuality_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_DepthQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality_Hash() { return 1875753121U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_DepthQuality"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_DepthQuality::DQ_Low", (int64)EOculusMR_DepthQuality::DQ_Low },
				{ "EOculusMR_DepthQuality::DQ_Medium", (int64)EOculusMR_DepthQuality::DQ_Medium },
				{ "EOculusMR_DepthQuality::DQ_High", (int64)EOculusMR_DepthQuality::DQ_High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DQ_High.DisplayName", "High" },
				{ "DQ_High.Name", "EOculusMR_DepthQuality::DQ_High" },
				{ "DQ_Low.DisplayName", "Low" },
				{ "DQ_Low.Name", "EOculusMR_DepthQuality::DQ_Low" },
				{ "DQ_Medium.DisplayName", "Medium" },
				{ "DQ_Medium.Name", "EOculusMR_DepthQuality::DQ_Medium" },
				{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_DepthQuality",
				"EOculusMR_DepthQuality",
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
	static UEnum* EOculusMR_PostProcessEffects_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_PostProcessEffects"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_PostProcessEffects>()
	{
		return EOculusMR_PostProcessEffects_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_PostProcessEffects(EOculusMR_PostProcessEffects_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_PostProcessEffects"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Hash() { return 1780163333U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_PostProcessEffects"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_PostProcessEffects::PPE_Off", (int64)EOculusMR_PostProcessEffects::PPE_Off },
				{ "EOculusMR_PostProcessEffects::PPE_On", (int64)EOculusMR_PostProcessEffects::PPE_On },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
				{ "PPE_Off.DisplayName", "Off" },
				{ "PPE_Off.Name", "EOculusMR_PostProcessEffects::PPE_Off" },
				{ "PPE_On.DisplayName", "On" },
				{ "PPE_On.Name", "EOculusMR_PostProcessEffects::PPE_On" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_PostProcessEffects",
				"EOculusMR_PostProcessEffects",
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
	static UEnum* EOculusMR_VirtualGreenScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_VirtualGreenScreenType, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_VirtualGreenScreenType"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_VirtualGreenScreenType>()
	{
		return EOculusMR_VirtualGreenScreenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_VirtualGreenScreenType(EOculusMR_VirtualGreenScreenType_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_VirtualGreenScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_VirtualGreenScreenType_Hash() { return 549547425U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_VirtualGreenScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_VirtualGreenScreenType"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_VirtualGreenScreenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_VirtualGreenScreenType::VGS_Off", (int64)EOculusMR_VirtualGreenScreenType::VGS_Off },
				{ "EOculusMR_VirtualGreenScreenType::VGS_OuterBoundary", (int64)EOculusMR_VirtualGreenScreenType::VGS_OuterBoundary },
				{ "EOculusMR_VirtualGreenScreenType::VGS_PlayArea", (int64)EOculusMR_VirtualGreenScreenType::VGS_PlayArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
				{ "VGS_Off.DisplayName", "Off" },
				{ "VGS_Off.Name", "EOculusMR_VirtualGreenScreenType::VGS_Off" },
				{ "VGS_OuterBoundary.DisplayName", "Outer Boundary" },
				{ "VGS_OuterBoundary.Name", "EOculusMR_VirtualGreenScreenType::VGS_OuterBoundary" },
				{ "VGS_PlayArea.DisplayName", "Play Area" },
				{ "VGS_PlayArea.Name", "EOculusMR_VirtualGreenScreenType::VGS_PlayArea" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_VirtualGreenScreenType",
				"EOculusMR_VirtualGreenScreenType",
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
	static UEnum* EOculusMR_ClippingReference_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_ClippingReference"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_ClippingReference>()
	{
		return EOculusMR_ClippingReference_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_ClippingReference(EOculusMR_ClippingReference_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_ClippingReference"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Hash() { return 2849833878U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_ClippingReference"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_ClippingReference::CR_TrackingReference", (int64)EOculusMR_ClippingReference::CR_TrackingReference },
				{ "EOculusMR_ClippingReference::CR_Head", (int64)EOculusMR_ClippingReference::CR_Head },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CR_Head.DisplayName", "Head" },
				{ "CR_Head.Name", "EOculusMR_ClippingReference::CR_Head" },
				{ "CR_TrackingReference.DisplayName", "Tracking Reference" },
				{ "CR_TrackingReference.Name", "EOculusMR_ClippingReference::CR_TrackingReference" },
				{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_ClippingReference",
				"EOculusMR_ClippingReference",
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
	static UEnum* EOculusMR_CameraDeviceEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_CameraDeviceEnum"));
		}
		return Singleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CameraDeviceEnum>()
	{
		return EOculusMR_CameraDeviceEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOculusMR_CameraDeviceEnum(EOculusMR_CameraDeviceEnum_StaticEnum, TEXT("/Script/OculusMR"), TEXT("EOculusMR_CameraDeviceEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Hash() { return 1456509032U; }
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOculusMR_CameraDeviceEnum"), 0, Get_Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOculusMR_CameraDeviceEnum::CD_None", (int64)EOculusMR_CameraDeviceEnum::CD_None },
				{ "EOculusMR_CameraDeviceEnum::CD_WebCamera0", (int64)EOculusMR_CameraDeviceEnum::CD_WebCamera0 },
				{ "EOculusMR_CameraDeviceEnum::CD_WebCamera1", (int64)EOculusMR_CameraDeviceEnum::CD_WebCamera1 },
				{ "EOculusMR_CameraDeviceEnum::CD_ZEDCamera", (int64)EOculusMR_CameraDeviceEnum::CD_ZEDCamera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CD_None.DisplayName", "None" },
				{ "CD_None.Name", "EOculusMR_CameraDeviceEnum::CD_None" },
				{ "CD_WebCamera0.DisplayName", "Web Camera 0" },
				{ "CD_WebCamera0.Name", "EOculusMR_CameraDeviceEnum::CD_WebCamera0" },
				{ "CD_WebCamera1.DisplayName", "Web Camera 1" },
				{ "CD_WebCamera1.Name", "EOculusMR_CameraDeviceEnum::CD_WebCamera1" },
				{ "CD_ZEDCamera.DisplayName", "ZED Camera" },
				{ "CD_ZEDCamera.Name", "EOculusMR_CameraDeviceEnum::CD_ZEDCamera" },
				{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
				nullptr,
				"EOculusMR_CameraDeviceEnum",
				"EOculusMR_CameraDeviceEnum",
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
	DEFINE_FUNCTION(UOculusMR_Settings::execSaveToIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveToIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execLoadFromIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execGetBindToTrackedCameraIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBindToTrackedCameraIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execBindToTrackedCameraIndexIfAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTrackedCameraIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToTrackedCameraIndexIfAvailable(Z_Param_InTrackedCameraIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execSetDepthQuality)
	{
		P_GET_ENUM(EOculusMR_DepthQuality,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepthQuality(EOculusMR_DepthQuality(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execGetDepthQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusMR_DepthQuality*)Z_Param__Result=P_THIS->GetDepthQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execSetUseDynamicLighting)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseDynamicLighting(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execGetUseDynamicLighting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseDynamicLighting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execSetIsCasting)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCasting(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execGetIsCasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCasting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execSetCapturingCamera)
	{
		P_GET_ENUM(EOculusMR_CameraDeviceEnum,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapturingCamera(EOculusMR_CameraDeviceEnum(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execGetCapturingCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusMR_CameraDeviceEnum*)Z_Param__Result=P_THIS->GetCapturingCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execSetCompositionMethod)
	{
		P_GET_ENUM(EOculusMR_CompositionMethod,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompositionMethod(EOculusMR_CompositionMethod(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_Settings::execGetCompositionMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusMR_CompositionMethod*)Z_Param__Result=P_THIS->GetCompositionMethod();
		P_NATIVE_END;
	}
	void UOculusMR_Settings::StaticRegisterNativesUOculusMR_Settings()
	{
		UClass* Class = UOculusMR_Settings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToTrackedCameraIndexIfAvailable", &UOculusMR_Settings::execBindToTrackedCameraIndexIfAvailable },
			{ "GetBindToTrackedCameraIndex", &UOculusMR_Settings::execGetBindToTrackedCameraIndex },
			{ "GetCapturingCamera", &UOculusMR_Settings::execGetCapturingCamera },
			{ "GetCompositionMethod", &UOculusMR_Settings::execGetCompositionMethod },
			{ "GetDepthQuality", &UOculusMR_Settings::execGetDepthQuality },
			{ "GetIsCasting", &UOculusMR_Settings::execGetIsCasting },
			{ "GetUseDynamicLighting", &UOculusMR_Settings::execGetUseDynamicLighting },
			{ "LoadFromIni", &UOculusMR_Settings::execLoadFromIni },
			{ "SaveToIni", &UOculusMR_Settings::execSaveToIni },
			{ "SetCapturingCamera", &UOculusMR_Settings::execSetCapturingCamera },
			{ "SetCompositionMethod", &UOculusMR_Settings::execSetCompositionMethod },
			{ "SetDepthQuality", &UOculusMR_Settings::execSetDepthQuality },
			{ "SetIsCasting", &UOculusMR_Settings::execSetIsCasting },
			{ "SetUseDynamicLighting", &UOculusMR_Settings::execSetUseDynamicLighting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics
	{
		struct OculusMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms
		{
			int32 InTrackedCameraIndex;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InTrackedCameraIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::NewProp_InTrackedCameraIndex = { "InTrackedCameraIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms, InTrackedCameraIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::NewProp_InTrackedCameraIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Bind the casting camera to the calibrated external camera.\n\x09  * (Requires a calibrated external camera)\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Bind the casting camera to the calibrated external camera.\n(Requires a calibrated external camera)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "BindToTrackedCameraIndexIfAvailable", nullptr, nullptr, sizeof(OculusMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms), Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics
	{
		struct OculusMR_Settings_eventGetBindToTrackedCameraIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventGetBindToTrackedCameraIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "GetBindToTrackedCameraIndex", nullptr, nullptr, sizeof(OculusMR_Settings_eventGetBindToTrackedCameraIndex_Parms), Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics
	{
		struct OculusMR_Settings_eventGetCapturingCamera_Parms
		{
			EOculusMR_CameraDeviceEnum ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventGetCapturingCamera_Parms, ReturnValue), Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "GetCapturingCamera", nullptr, nullptr, sizeof(OculusMR_Settings_eventGetCapturingCamera_Parms), Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics
	{
		struct OculusMR_Settings_eventGetCompositionMethod_Parms
		{
			EOculusMR_CompositionMethod ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventGetCompositionMethod_Parms, ReturnValue), Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "GetCompositionMethod", nullptr, nullptr, sizeof(OculusMR_Settings_eventGetCompositionMethod_Parms), Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics
	{
		struct OculusMR_Settings_eventGetDepthQuality_Parms
		{
			EOculusMR_DepthQuality ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventGetDepthQuality_Parms, ReturnValue), Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** The quality level of the depth sensor */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "The quality level of the depth sensor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "GetDepthQuality", nullptr, nullptr, sizeof(OculusMR_Settings_eventGetDepthQuality_Parms), Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics
	{
		struct OculusMR_Settings_eventGetIsCasting_Parms
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
	void Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMR_Settings_eventGetIsCasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMR_Settings_eventGetIsCasting_Parms), &Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Is MRC on and off */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Is MRC on and off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "GetIsCasting", nullptr, nullptr, sizeof(OculusMR_Settings_eventGetIsCasting_Parms), Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics
	{
		struct OculusMR_Settings_eventGetUseDynamicLighting_Parms
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
	void Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMR_Settings_eventGetUseDynamicLighting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMR_Settings_eventGetUseDynamicLighting_Parms), &Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Is using the in-game lights on the camera frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Is using the in-game lights on the camera frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "GetUseDynamicLighting", nullptr, nullptr, sizeof(OculusMR_Settings_eventGetUseDynamicLighting_Parms), Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Load settings from the config file */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Load settings from the config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "LoadFromIni", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_SaveToIni_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_SaveToIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Save settings to the config file */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Save settings to the config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_SaveToIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "SaveToIni", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_SaveToIni_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SaveToIni_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_SaveToIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_SaveToIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics
	{
		struct OculusMR_Settings_eventSetCapturingCamera_Parms
		{
			EOculusMR_CameraDeviceEnum val;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventSetCapturingCamera_Parms, val), Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "SetCapturingCamera", nullptr, nullptr, sizeof(OculusMR_Settings_eventSetCapturingCamera_Parms), Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics
	{
		struct OculusMR_Settings_eventSetCompositionMethod_Parms
		{
			EOculusMR_CompositionMethod val;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventSetCompositionMethod_Parms, val), Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "SetCompositionMethod", nullptr, nullptr, sizeof(OculusMR_Settings_eventSetCompositionMethod_Parms), Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics
	{
		struct OculusMR_Settings_eventSetDepthQuality_Parms
		{
			EOculusMR_DepthQuality val;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_Settings_eventSetDepthQuality_Parms, val), Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::NewProp_val,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::NewProp_val_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** The quality level of the depth sensor */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "The quality level of the depth sensor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "SetDepthQuality", nullptr, nullptr, sizeof(OculusMR_Settings_eventSetDepthQuality_Parms), Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics
	{
		struct OculusMR_Settings_eventSetIsCasting_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val_SetBit(void* Obj)
	{
		((OculusMR_Settings_eventSetIsCasting_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMR_Settings_eventSetIsCasting_Parms), &Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Turns MRC on and off */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Turns MRC on and off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "SetIsCasting", nullptr, nullptr, sizeof(OculusMR_Settings_eventSetIsCasting_Parms), Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics
	{
		struct OculusMR_Settings_eventSetUseDynamicLighting_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::NewProp_val_SetBit(void* Obj)
	{
		((OculusMR_Settings_eventSetUseDynamicLighting_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMR_Settings_eventSetUseDynamicLighting_Parms), &Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Use the in-game lights on the camera frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Use the in-game lights on the camera frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_Settings, nullptr, "SetUseDynamicLighting", nullptr, nullptr, sizeof(OculusMR_Settings_eventSetUseDynamicLighting_Parms), Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOculusMR_Settings_NoRegister()
	{
		return UOculusMR_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMR_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicLighting_MetaData[];
#endif
		static void NewProp_bUseDynamicLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturingCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapturingCamera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapturingCamera_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompositionMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompositionMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[];
#endif
		static void NewProp_bIsCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCompositionPostProcessEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExternalCompositionPostProcessEffects;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExternalCompositionPostProcessEffects_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicLightingDepthVariationClampingValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicLightingDepthVariationClampingValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicLightingDepthSmoothFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicLightingDepthSmoothFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualGreenScreenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VirtualGreenScreenType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VirtualGreenScreenType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySpillRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySpillRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySmoothRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySmoothRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySimilarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySimilarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPoseStateLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandPoseStateLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackdropColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackdropColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CastingLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightPerView_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HeightPerView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthPerView_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WidthPerView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTrackedCameraResolution_MetaData[];
#endif
		static void NewProp_bUseTrackedCameraResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTrackedCameraResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClippingReference;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClippingReference_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMR_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusMR_Settings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable, "BindToTrackedCameraIndexIfAvailable" }, // 2546486627
		{ &Z_Construct_UFunction_UOculusMR_Settings_GetBindToTrackedCameraIndex, "GetBindToTrackedCameraIndex" }, // 906399715
		{ &Z_Construct_UFunction_UOculusMR_Settings_GetCapturingCamera, "GetCapturingCamera" }, // 3798829426
		{ &Z_Construct_UFunction_UOculusMR_Settings_GetCompositionMethod, "GetCompositionMethod" }, // 3839592880
		{ &Z_Construct_UFunction_UOculusMR_Settings_GetDepthQuality, "GetDepthQuality" }, // 2606712558
		{ &Z_Construct_UFunction_UOculusMR_Settings_GetIsCasting, "GetIsCasting" }, // 2568370174
		{ &Z_Construct_UFunction_UOculusMR_Settings_GetUseDynamicLighting, "GetUseDynamicLighting" }, // 2847152715
		{ &Z_Construct_UFunction_UOculusMR_Settings_LoadFromIni, "LoadFromIni" }, // 1104912363
		{ &Z_Construct_UFunction_UOculusMR_Settings_SaveToIni, "SaveToIni" }, // 2630502906
		{ &Z_Construct_UFunction_UOculusMR_Settings_SetCapturingCamera, "SetCapturingCamera" }, // 3498797458
		{ &Z_Construct_UFunction_UOculusMR_Settings_SetCompositionMethod, "SetCompositionMethod" }, // 4103154231
		{ &Z_Construct_UFunction_UOculusMR_Settings_SetDepthQuality, "SetDepthQuality" }, // 1742966649
		{ &Z_Construct_UFunction_UOculusMR_Settings_SetIsCasting, "SetIsCasting" }, // 1267940242
		{ &Z_Construct_UFunction_UOculusMR_Settings_SetUseDynamicLighting, "SetUseDynamicLighting" }, // 4267787497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusMR" },
		{ "IncludePath", "OculusMR_Settings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality_MetaData[] = {
		{ "Comment", "/** The quality level of the depth sensor */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "The quality level of the depth sensor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality = { "DepthQuality", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, DepthQuality), Z_Construct_UEnum_OculusMR_EOculusMR_DepthQuality, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting_MetaData[] = {
		{ "Comment", "/** Use the in-game lights on the camera frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Use the in-game lights on the camera frame" },
	};
#endif
	void Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting_SetBit(void* Obj)
	{
		((UOculusMR_Settings*)Obj)->bUseDynamicLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting = { "bUseDynamicLighting", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusMR_Settings), &Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera_MetaData[] = {
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera = { "CapturingCamera", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, CapturingCamera), Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod_MetaData[] = {
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod = { "CompositionMethod", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, CompositionMethod), Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting_MetaData[] = {
		{ "Comment", "/** Turns MRC on and off (does not get saved to or loaded from ini) */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Turns MRC on and off (does not get saved to or loaded from ini)" },
	};
#endif
	void Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting_SetBit(void* Obj)
	{
		((UOculusMR_Settings*)Obj)->bIsCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting = { "bIsCasting", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusMR_Settings), &Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Set the amount of post process effects in the MR view for external composition */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Set the amount of post process effects in the MR view for external composition" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects = { "ExternalCompositionPostProcessEffects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, ExternalCompositionPostProcessEffects), Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthVariationClampingValue_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Sets the maximum depth variation across edges (smaller values set smoother edges) */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Sets the maximum depth variation across edges (smaller values set smoother edges)" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthVariationClampingValue = { "DynamicLightingDepthVariationClampingValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, DynamicLightingDepthVariationClampingValue), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthVariationClampingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthVariationClampingValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthSmoothFactor_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Larger values make dynamic lighting effects smoother, but values that are too large make the lighting look flat. */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Larger values make dynamic lighting effects smoother, but values that are too large make the lighting look flat." },
		{ "UIMax", "16" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthSmoothFactor = { "DynamicLightingDepthSmoothFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, DynamicLightingDepthSmoothFactor), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthSmoothFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthSmoothFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** The type of virtual green screen */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "The type of virtual green screen" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType = { "VirtualGreenScreenType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, VirtualGreenScreenType), Z_Construct_UEnum_OculusMR_EOculusMR_VirtualGreenScreenType, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** [Green-screen removal] Chroma Key Spill Range. Apply when CompositionMethod is DirectComposition */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Spill Range. Apply when CompositionMethod is DirectComposition" },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange = { "ChromaKeySpillRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, ChromaKeySpillRange), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** [Green-screen removal] Chroma Key Smooth Range. Apply when CompositionMethod is DirectComposition */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Smooth Range. Apply when CompositionMethod is DirectComposition" },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange = { "ChromaKeySmoothRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, ChromaKeySmoothRange), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** [Green-screen removal] Chroma Key Similarity. Apply when CompositionMethod is DirectComposition */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Similarity. Apply when CompositionMethod is DirectComposition" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity = { "ChromaKeySimilarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, ChromaKeySimilarity), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** [Green-screen removal] Chroma Key Color. Apply when CompositionMethod is DirectComposition */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Color. Apply when CompositionMethod is DirectComposition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When CompositionMethod is Direct Composition, you could adjust this latency to delay the virtual\n\x09* hand movement by a small amount of time to match the camera latency */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is Direct Composition, you could adjust this latency to delay the virtual\nhand movement by a small amount of time to match the camera latency" },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency = { "HandPoseStateLatency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, HandPoseStateLatency), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_BackdropColor_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When CompositionMethod is External Composition, the color of the backdrop in the foreground view */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is External Composition, the color of the backdrop in the foreground view" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_BackdropColor = { "BackdropColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, BackdropColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_BackdropColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_BackdropColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CastingLatency_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When CompositionMethod is External Composition, the latency of the casting output which could be adjusted to\n\x09  * match the camera latency in the external composition application */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is External Composition, the latency of the casting output which could be adjusted to\nmatch the camera latency in the external composition application" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CastingLatency = { "CastingLatency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, CastingLatency), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CastingLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CastingLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HeightPerView_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When bUseTrackedCameraResolution is false, the height of each casting viewport */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When bUseTrackedCameraResolution is false, the height of each casting viewport" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HeightPerView = { "HeightPerView", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, HeightPerView), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HeightPerView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HeightPerView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_WidthPerView_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** When bUseTrackedCameraResolution is false, the width of each casting viewport */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When bUseTrackedCameraResolution is false, the width of each casting viewport" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_WidthPerView = { "WidthPerView", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, WidthPerView), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_WidthPerView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_WidthPerView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** The casting viewports would use the same resolution of the camera which used in the calibration process. */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "The casting viewports would use the same resolution of the camera which used in the calibration process." },
	};
#endif
	void Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_SetBit(void* Obj)
	{
		((UOculusMR_Settings*)Obj)->bUseTrackedCameraResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution = { "bUseTrackedCameraResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusMR_Settings), &Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Specify the distance to the camera which divide the background and foreground in MxR casting.\n\x09  * Set it to CR_TrackingReference to use the distance to the Tracking Reference, which works better\n\x09  * in the stationary experience. Set it to CR_Head would use the distance to the HMD, which works better\n\x09  * in the room scale experience.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Specify the distance to the camera which divide the background and foreground in MxR casting.\nSet it to CR_TrackingReference to use the distance to the Tracking Reference, which works better\nin the stationary experience. Set it to CR_Head would use the distance to the HMD, which works better\nin the room scale experience." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference = { "ClippingReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusMR_Settings, ClippingReference), Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusMR_Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DepthQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseDynamicLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CapturingCamera_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CompositionMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bIsCasting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthVariationClampingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_DynamicLightingDepthSmoothFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_VirtualGreenScreenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_BackdropColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_CastingLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_HeightPerView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_WidthPerView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_Settings_Statics::NewProp_ClippingReference_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMR_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMR_Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusMR_Settings_Statics::ClassParams = {
		&UOculusMR_Settings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusMR_Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMR_Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMR_Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusMR_Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusMR_Settings, 726625224);
	template<> OCULUSMR_API UClass* StaticClass<UOculusMR_Settings>()
	{
		return UOculusMR_Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusMR_Settings(Z_Construct_UClass_UOculusMR_Settings, &UOculusMR_Settings::StaticClass, TEXT("/Script/OculusMR"), TEXT("UOculusMR_Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMR_Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
