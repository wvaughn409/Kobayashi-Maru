// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithLightComponentTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithLightComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UDatasmithLightComponentTemplate::StaticRegisterNativesUDatasmithLightComponentTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister()
	{
		return UDatasmithLightComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IESTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightFunctionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[];
#endif
		static void NewProp_bUseIESBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[];
#endif
		static void NewProp_bUseTemperature_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial = { "LightFunctionMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, IESBrightnessScale), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, Temperature), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, Intensity), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->bUseIESBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->bUseTemperature = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->CastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLightComponentTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams = {
		&UDatasmithLightComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithLightComponentTemplate, 501437208);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithLightComponentTemplate>()
	{
		return UDatasmithLightComponentTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithLightComponentTemplate(Z_Construct_UClass_UDatasmithLightComponentTemplate, &UDatasmithLightComponentTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithLightComponentTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLightComponentTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
