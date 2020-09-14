// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraLightRendererProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraLightRendererProperties() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UNiagaraLightRendererProperties::StaticRegisterNativesUNiagaraLightRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister()
	{
		return UNiagaraLightRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraLightRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricScatteringBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadiusBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightExponentBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightExponentBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightRenderingEnabledBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightRenderingEnabledBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideRenderingEnabled_MetaData[];
#endif
		static void NewProp_bOverrideRenderingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideRenderingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsTranslucency_MetaData[];
#endif
		static void NewProp_bAffectsTranslucency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTranslucency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[];
#endif
		static void NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Light Renderer" },
		{ "IncludePath", "NiagaraLightRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the intensity of the volumetric scattering from this light? This scales the light's intensity and color. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the intensity of the volumetric scattering from this light? This scales the light's intensity and color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding = { "VolumetricScatteringBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, VolumetricScatteringBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for light radius when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for light radius when generating lights?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding = { "RadiusBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, RadiusBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for light color when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for light color when generating lights?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating lights?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the light's exponent when inverse squared falloff is disabled? */" },
		{ "EditCondition", "!bUseInverseSquaredFalloff" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the light's exponent when inverse squared falloff is disabled?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding = { "LightExponentBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, LightExponentBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use to check if light rendering should be enabled for a particle? */" },
		{ "EditCondition", "bOverrideRenderingEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if light rendering should be enabled for a particle?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding = { "LightRenderingEnabledBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, LightRenderingEnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** A static color shift applied to each rendered light */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "A static color shift applied to each rendered light" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd = { "ColorAdd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, ColorAdd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** A factor used to scale each particle light radius */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "A factor used to scale each particle light radius" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraLightRendererProperties, RadiusScale), METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** By default, a light is spawned for each particle. Enable this to control the spawn-rate on a per-particle basis. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "By default, a light is spawned for each particle. Enable this to control the spawn-rate on a per-particle basis." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bOverrideRenderingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled = { "bOverrideRenderingEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/**\n\x09 * Whether lights from this renderer should affect translucency.\n\x09 * Use with caution - if enabled, create only a few particle lights at most, and the smaller they are, the less they will cost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether lights from this renderer should affect translucency.\nUse with caution - if enabled, create only a few particle lights at most, and the smaller they are, the less they will cost." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bAffectsTranslucency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency = { "bAffectsTranslucency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** Whether to use physically based inverse squared falloff from the light.  If unchecked, the value from the LightExponent binding will be used instead. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the value from the LightExponent binding will be used instead." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bUseInverseSquaredFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideRenderingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraLightRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams = {
		&UNiagaraLightRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraLightRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraLightRendererProperties, 1208490061);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraLightRendererProperties>()
	{
		return UNiagaraLightRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraLightRendererProperties(Z_Construct_UClass_UNiagaraLightRendererProperties, &UNiagaraLightRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraLightRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraLightRendererProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
