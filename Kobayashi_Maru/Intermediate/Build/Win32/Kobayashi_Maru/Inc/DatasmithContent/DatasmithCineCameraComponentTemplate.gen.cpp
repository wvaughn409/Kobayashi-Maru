// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate();
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
// End Cross Module References
class UScriptStruct* FDatasmithPostProcessSettingsTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithPostProcessSettingsTemplate"), sizeof(FDatasmithPostProcessSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithPostProcessSettingsTemplate>()
{
	return FDatasmithPostProcessSettingsTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithPostProcessSettingsTemplate(FDatasmithPostProcessSettingsTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithPostProcessSettingsTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithPostProcessSettingsTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithPostProcessSettingsTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithPostProcessSettingsTemplate")),new UScriptStruct::TCppStructOps<FDatasmithPostProcessSettingsTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithPostProcessSettingsTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShutterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoExposureMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmWhitePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmWhitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraShutterSpeed_MetaData[];
#endif
		static void NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraShutterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[];
#endif
		static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMethod_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmWhitePoint_MetaData[];
#endif
		static void NewProp_bOverride_FilmWhitePoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmWhitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_VignetteIntensity_MetaData[];
#endif
		static void NewProp_bOverride_VignetteIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithPostProcessSettingsTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed = { "CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, CameraShutterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, CameraISO), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod = { "AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, AutoExposureMethod), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation = { "ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, ColorSaturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_FilmWhitePoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_FilmWhitePoint = { "FilmWhitePoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, FilmWhitePoint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_FilmWhitePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_FilmWhitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, VignetteIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, WhiteTemp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_DepthOfFieldFstop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop = { "bOverride_DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_CameraShutterSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed = { "bOverride_CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_CameraISO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO = { "bOverride_CameraISO", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_AutoExposureMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod = { "bOverride_AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_FilmWhitePoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint = { "bOverride_FilmWhitePoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_VignetteIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity = { "bOverride_VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_ColorSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation = { "bOverride_ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
	{
		((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_WhiteTemp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_FilmWhitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_FilmWhitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithPostProcessSettingsTemplate",
		sizeof(FDatasmithPostProcessSettingsTemplate),
		alignof(FDatasmithPostProcessSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithPostProcessSettingsTemplate"), sizeof(FDatasmithPostProcessSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Hash() { return 2102901601U; }
class UScriptStruct* FDatasmithCameraFocusSettingsTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraFocusSettingsTemplate"), sizeof(FDatasmithCameraFocusSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraFocusSettingsTemplate>()
{
	return FDatasmithCameraFocusSettingsTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate(FDatasmithCameraFocusSettingsTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithCameraFocusSettingsTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraFocusSettingsTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraFocusSettingsTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithCameraFocusSettingsTemplate")),new UScriptStruct::TCppStructOps<FDatasmithCameraFocusSettingsTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraFocusSettingsTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraFocusSettingsTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithCameraFocusSettingsTemplate, ManualFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod = { "FocusMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithCameraFocusSettingsTemplate, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithCameraFocusSettingsTemplate",
		sizeof(FDatasmithCameraFocusSettingsTemplate),
		alignof(FDatasmithCameraFocusSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithCameraFocusSettingsTemplate"), sizeof(FDatasmithCameraFocusSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Hash() { return 4007410696U; }
class UScriptStruct* FDatasmithCameraLensSettingsTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraLensSettingsTemplate"), sizeof(FDatasmithCameraLensSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraLensSettingsTemplate>()
{
	return FDatasmithCameraLensSettingsTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithCameraLensSettingsTemplate(FDatasmithCameraLensSettingsTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithCameraLensSettingsTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraLensSettingsTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraLensSettingsTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithCameraLensSettingsTemplate")),new UScriptStruct::TCppStructOps<FDatasmithCameraLensSettingsTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraLensSettingsTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraLensSettingsTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop = { "MaxFStop", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithCameraLensSettingsTemplate, MaxFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithCameraLensSettingsTemplate",
		sizeof(FDatasmithCameraLensSettingsTemplate),
		alignof(FDatasmithCameraLensSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithCameraLensSettingsTemplate"), sizeof(FDatasmithCameraLensSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Hash() { return 3909653947U; }
class UScriptStruct* FDatasmithCameraFilmbackSettingsTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraFilmbackSettingsTemplate"), sizeof(FDatasmithCameraFilmbackSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraFilmbackSettingsTemplate>()
{
	return FDatasmithCameraFilmbackSettingsTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate(FDatasmithCameraFilmbackSettingsTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithCameraFilmbackSettingsTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraFilmbackSettingsTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraFilmbackSettingsTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithCameraFilmbackSettingsTemplate")),new UScriptStruct::TCppStructOps<FDatasmithCameraFilmbackSettingsTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraFilmbackSettingsTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraFilmbackSettingsTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithCameraFilmbackSettingsTemplate, SensorHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithCameraFilmbackSettingsTemplate, SensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithCameraFilmbackSettingsTemplate",
		sizeof(FDatasmithCameraFilmbackSettingsTemplate),
		alignof(FDatasmithCameraFilmbackSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithCameraFilmbackSettingsTemplate"), sizeof(FDatasmithCameraFilmbackSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Hash() { return 535307955U; }
	void UDatasmithCineCameraComponentTemplate::StaticRegisterNativesUDatasmithCineCameraComponentTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_NoRegister()
	{
		return UDatasmithCineCameraComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, PostProcessSettings), Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, CurrentAperture), METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, CurrentFocalLength), METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, FocusSettings), Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, LensSettings), Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, FilmbackSettings), Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCineCameraComponentTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::ClassParams = {
		&UDatasmithCineCameraComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithCineCameraComponentTemplate, 54694444);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCineCameraComponentTemplate>()
	{
		return UDatasmithCineCameraComponentTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithCineCameraComponentTemplate(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate, &UDatasmithCineCameraComponentTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithCineCameraComponentTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCineCameraComponentTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
