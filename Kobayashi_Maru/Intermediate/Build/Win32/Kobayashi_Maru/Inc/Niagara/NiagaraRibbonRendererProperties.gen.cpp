// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraRibbonRendererProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraRibbonRendererProperties() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* ENiagaraRibbonTessellationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonTessellationMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonTessellationMode>()
	{
		return ENiagaraRibbonTessellationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraRibbonTessellationMode(ENiagaraRibbonTessellationMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraRibbonTessellationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Hash() { return 1040462042U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRibbonTessellationMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRibbonTessellationMode::Automatic", (int64)ENiagaraRibbonTessellationMode::Automatic },
				{ "ENiagaraRibbonTessellationMode::Custom", (int64)ENiagaraRibbonTessellationMode::Custom },
				{ "ENiagaraRibbonTessellationMode::Disabled", (int64)ENiagaraRibbonTessellationMode::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Comment", "/** Default tessellation parameters. */" },
				{ "Automatic.Name", "ENiagaraRibbonTessellationMode::Automatic" },
				{ "Automatic.ToolTip", "Default tessellation parameters." },
				{ "Custom.Comment", "/** Custom tessellation parameters. */" },
				{ "Custom.Name", "ENiagaraRibbonTessellationMode::Custom" },
				{ "Custom.ToolTip", "Custom tessellation parameters." },
				{ "Disabled.Comment", "/** Disable tessellation entirely. */" },
				{ "Disabled.Name", "ENiagaraRibbonTessellationMode::Disabled" },
				{ "Disabled.ToolTip", "Disable tessellation entirely." },
				{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraRibbonTessellationMode",
				"ENiagaraRibbonTessellationMode",
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
	static UEnum* ENiagaraRibbonDrawDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonDrawDirection"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonDrawDirection>()
	{
		return ENiagaraRibbonDrawDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraRibbonDrawDirection(ENiagaraRibbonDrawDirection_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraRibbonDrawDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Hash() { return 3501278780U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRibbonDrawDirection"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRibbonDrawDirection::FrontToBack", (int64)ENiagaraRibbonDrawDirection::FrontToBack },
				{ "ENiagaraRibbonDrawDirection::BackToFront", (int64)ENiagaraRibbonDrawDirection::BackToFront },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackToFront.Name", "ENiagaraRibbonDrawDirection::BackToFront" },
				{ "Comment", "/** This enum decides in which order the ribbon segments will be rendered */" },
				{ "FrontToBack.Name", "ENiagaraRibbonDrawDirection::FrontToBack" },
				{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
				{ "ToolTip", "This enum decides in which order the ribbon segments will be rendered" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraRibbonDrawDirection",
				"ENiagaraRibbonDrawDirection",
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
	static UEnum* ENiagaraRibbonAgeOffsetMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonAgeOffsetMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonAgeOffsetMode>()
	{
		return ENiagaraRibbonAgeOffsetMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraRibbonAgeOffsetMode(ENiagaraRibbonAgeOffsetMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraRibbonAgeOffsetMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Hash() { return 691803247U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRibbonAgeOffsetMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRibbonAgeOffsetMode::Scale", (int64)ENiagaraRibbonAgeOffsetMode::Scale },
				{ "ENiagaraRibbonAgeOffsetMode::Clip", (int64)ENiagaraRibbonAgeOffsetMode::Clip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Clip.Comment", "/** Offset the UVs by age for smooth texture movement, but use the normalized age range directly as the UV range which will clip the texture for normalized age ranges that don't go from 0-1. */" },
				{ "Clip.Name", "ENiagaraRibbonAgeOffsetMode::Clip" },
				{ "Clip.ToolTip", "Offset the UVs by age for smooth texture movement, but use the normalized age range directly as the UV range which will clip the texture for normalized age ranges that don't go from 0-1." },
				{ "Comment", "/** Defines different modes for offsetting UVs by age when ordering ribbon particles using normalized age. */" },
				{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
				{ "Scale.Comment", "/** Offset the UVs by age for smooth texture movement, but scale the 0-1 UV range to the current normalized age range of the particles. */" },
				{ "Scale.Name", "ENiagaraRibbonAgeOffsetMode::Scale" },
				{ "Scale.ToolTip", "Offset the UVs by age for smooth texture movement, but scale the 0-1 UV range to the current normalized age range of the particles." },
				{ "ToolTip", "Defines different modes for offsetting UVs by age when ordering ribbon particles using normalized age." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraRibbonAgeOffsetMode",
				"ENiagaraRibbonAgeOffsetMode",
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
	static UEnum* ENiagaraRibbonFacingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonFacingMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonFacingMode>()
	{
		return ENiagaraRibbonFacingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraRibbonFacingMode(ENiagaraRibbonFacingMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraRibbonFacingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Hash() { return 4024155377U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRibbonFacingMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRibbonFacingMode::Screen", (int64)ENiagaraRibbonFacingMode::Screen },
				{ "ENiagaraRibbonFacingMode::Custom", (int64)ENiagaraRibbonFacingMode::Custom },
				{ "ENiagaraRibbonFacingMode::CustomSideVector", (int64)ENiagaraRibbonFacingMode::CustomSideVector },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Custom.Comment", "/** Use Particles.RibbonFacing as the facing vector. */" },
				{ "Custom.Name", "ENiagaraRibbonFacingMode::Custom" },
				{ "Custom.ToolTip", "Use Particles.RibbonFacing as the facing vector." },
				{ "CustomSideVector.Comment", "/** Use Particles.RibbonFacing as the side vector, and calculate the facing vector from that.\n\x09 *  Using ribbon twist with this mode is NOT supported.\n\x09 */" },
				{ "CustomSideVector.Name", "ENiagaraRibbonFacingMode::CustomSideVector" },
				{ "CustomSideVector.ToolTip", "Use Particles.RibbonFacing as the side vector, and calculate the facing vector from that.\nUsing ribbon twist with this mode is NOT supported." },
				{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
				{ "Screen.Comment", "/** Have the ribbon face the screen. */" },
				{ "Screen.Name", "ENiagaraRibbonFacingMode::Screen" },
				{ "Screen.ToolTip", "Have the ribbon face the screen." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraRibbonFacingMode",
				"ENiagaraRibbonFacingMode",
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
	void UNiagaraRibbonRendererProperties::StaticRegisterNativesUNiagaraRibbonRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister()
	{
		return UNiagaraRibbonRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonLinkOrderBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibbonLinkOrderBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonIdBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibbonIdBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonFacingBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibbonFacingBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonWidthBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibbonWidthBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonTwistBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibbonTwistBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceTessellation_MetaData[];
#endif
		static void NewProp_bScreenSpaceTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TessellationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseConstantFactor_MetaData[];
#endif
		static void NewProp_bUseConstantFactor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TessellationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TessellationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TessellationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DrawDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1AgeOffsetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UV1AgeOffsetMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UV1AgeOffsetMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1TilingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UV1TilingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0AgeOffsetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UV0AgeOffsetMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UV0AgeOffsetMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0TilingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UV0TilingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialUserParamBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialUserParamBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ribbon Renderer" },
		{ "IncludePath", "NiagaraRibbonRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for MaterialRandom when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for MaterialRandom when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for RibbonLinkOrder when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for RibbonLinkOrder when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding = { "RibbonLinkOrderBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon id when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon id when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding = { "RibbonIdBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonIdBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon facing when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon facing when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding = { "RibbonFacingBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonFacingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon width when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon width when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding = { "RibbonWidthBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonWidthBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon twist when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon twist when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding = { "RibbonTwistBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonTwistBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for normalized age when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for normalized age when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating ribbons?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "Comment", "/** If checked, use the ribbon's screen space percentage to adaptively adjust the tessellation factor. */" },
		{ "DisplayName", "Screen Space" },
		{ "EditCondition", "!bUseConstantFactor" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "If checked, use the ribbon's screen space percentage to adaptively adjust the tessellation factor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_SetBit(void* Obj)
	{
		((UNiagaraRibbonRendererProperties*)Obj)->bScreenSpaceTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation = { "bScreenSpaceTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Defines the angle in degrees at which tessellation occurs.\n\x09  * Ranges from 1 to 180. Smaller values increase amount of tessellation.\n\x09  * If set to 0, use the maximum tessellation set above.\n\x09  */" },
		{ "EditCondition", "!bUseConstantFactor" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the angle in degrees at which tessellation occurs.\nRanges from 1 to 180. Smaller values increase amount of tessellation.\nIf set to 0, use the maximum tessellation set above." },
		{ "UIMax", "180" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle = { "TessellationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TessellationAngle), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "Comment", "/** If checked, use the above constant factor. Otherwise, adaptively select the tessellation factor based on the below parameters. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "If checked, use the above constant factor. Otherwise, adaptively select the tessellation factor based on the below parameters." },
	};
#endif
	void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_SetBit(void* Obj)
	{
		((UNiagaraRibbonRendererProperties*)Obj)->bUseConstantFactor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor = { "bUseConstantFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Custom tessellation factor.\n\x09  * Ranges from 1 to 16. Greater values increase amount of tessellation.\n\x09  */" },
		{ "DisplayName", "Max Tessellation Factor" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Custom tessellation factor.\nRanges from 1 to 16. Greater values increase amount of tessellation." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor = { "TessellationFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TessellationFactor), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "Comment", "/** Defines the tessellation mode allowing custom tessellation parameters or disabling tessellation entirely. */" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the tessellation mode allowing custom tessellation parameters or disabling tessellation entirely." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode = { "TessellationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TessellationMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Defines the curve tension, or how long the curve's tangents are.\n\x09  * Ranges from 0 to 1. The higher the value, the sharper the curve becomes.\n\x09  */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the curve tension, or how long the curve's tangents are.\nRanges from 0 to 1. The higher the value, the sharper the curve becomes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection = { "DrawDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DrawDirection), Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** Defines the mode to use when offsetting UV channel 1 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the mode to use when offsetting UV channel 1 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode = { "UV1AgeOffsetMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1AgeOffsetMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset = { "UV1Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale = { "UV1Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** Tiles UV1 based on the distance traversed by the ribbon. Disables offsetting UVs by age. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Tiles UV1 based on the distance traversed by the ribbon. Disables offsetting UVs by age." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance = { "UV1TilingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1TilingDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** Defines the mode to use when offsetting UV channel 0 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the mode to use when offsetting UV channel 0 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode = { "UV0AgeOffsetMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0AgeOffsetMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset = { "UV0Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale = { "UV0Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** Tiles UV0 based on the distance traversed by the ribbon. Disables offsetting UVs by age. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Tiles UV0 based on the distance traversed by the ribbon. Disables offsetting UVs by age." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance = { "UV0TilingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0TilingDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding = { "MaterialUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "//UNiagaraRendererProperties Interface END\n" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "UNiagaraRendererProperties Interface END" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraRibbonRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::ClassParams = {
		&UNiagaraRibbonRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraRibbonRendererProperties, 542603497);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraRibbonRendererProperties>()
	{
		return UNiagaraRibbonRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraRibbonRendererProperties(Z_Construct_UClass_UNiagaraRibbonRendererProperties, &UNiagaraRibbonRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraRibbonRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraRibbonRendererProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
