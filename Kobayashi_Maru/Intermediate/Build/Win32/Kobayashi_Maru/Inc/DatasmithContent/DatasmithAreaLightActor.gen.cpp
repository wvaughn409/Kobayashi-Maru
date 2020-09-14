// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithAreaLightActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActor() {}
// Cross Module References
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EDatasmithAreaLightActorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithAreaLightActorType"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorType>()
	{
		return EDatasmithAreaLightActorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithAreaLightActorType(EDatasmithAreaLightActorType_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithAreaLightActorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Hash() { return 180323453U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithAreaLightActorType"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithAreaLightActorType::Point", (int64)EDatasmithAreaLightActorType::Point },
				{ "EDatasmithAreaLightActorType::Spot", (int64)EDatasmithAreaLightActorType::Spot },
				{ "EDatasmithAreaLightActorType::Rect", (int64)EDatasmithAreaLightActorType::Rect },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
				{ "Point.Name", "EDatasmithAreaLightActorType::Point" },
				{ "Rect.Name", "EDatasmithAreaLightActorType::Rect" },
				{ "Spot.Name", "EDatasmithAreaLightActorType::Spot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithAreaLightActorType",
				"EDatasmithAreaLightActorType",
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
	static UEnum* EDatasmithAreaLightActorShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithAreaLightActorShape"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorShape>()
	{
		return EDatasmithAreaLightActorShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatasmithAreaLightActorShape(EDatasmithAreaLightActorShape_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EDatasmithAreaLightActorShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Hash() { return 1305416659U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatasmithAreaLightActorShape"), 0, Get_Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatasmithAreaLightActorShape::Rectangle", (int64)EDatasmithAreaLightActorShape::Rectangle },
				{ "EDatasmithAreaLightActorShape::Disc", (int64)EDatasmithAreaLightActorShape::Disc },
				{ "EDatasmithAreaLightActorShape::Sphere", (int64)EDatasmithAreaLightActorShape::Sphere },
				{ "EDatasmithAreaLightActorShape::Cylinder", (int64)EDatasmithAreaLightActorShape::Cylinder },
				{ "EDatasmithAreaLightActorShape::None", (int64)EDatasmithAreaLightActorShape::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Keep in sync with EDatasmithLightShape from DatasmithDefinitions\n" },
				{ "Cylinder.Name", "EDatasmithAreaLightActorShape::Cylinder" },
				{ "Disc.Name", "EDatasmithAreaLightActorShape::Disc" },
				{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
				{ "None.Name", "EDatasmithAreaLightActorShape::None" },
				{ "Rectangle.Name", "EDatasmithAreaLightActorShape::Rectangle" },
				{ "Sphere.Name", "EDatasmithAreaLightActorShape::Sphere" },
				{ "ToolTip", "Keep in sync with EDatasmithLightShape from DatasmithDefinitions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EDatasmithAreaLightActorShape",
				"EDatasmithAreaLightActorShape",
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
	void ADatasmithAreaLightActor::StaticRegisterNativesADatasmithAreaLightActor()
	{
	}
	UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister()
	{
		return ADatasmithAreaLightActor::StaticClass();
	}
	struct Z_Construct_UClass_ADatasmithAreaLightActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotlightOuterAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpotlightOuterAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotlightInnerAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpotlightInnerAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[];
#endif
		static void NewProp_bUseIESBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IESTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightShape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightShape_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADatasmithAreaLightActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithAreaLightActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "1.0" },
		{ "UIMax", "80.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle = { "SpotlightOuterAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SpotlightOuterAngle), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "1.0" },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle = { "SpotlightInnerAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SpotlightInnerAngle), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "5.0" },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SourceLength), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SourceRadius), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "IES Intensity Scale" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, IESBrightnessScale), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Use IES Intensity" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	void Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
	{
		((ADatasmithAreaLightActor*)Obj)->bUseIESBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADatasmithAreaLightActor), &Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Temperature), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Intensity), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Light" },
		{ "EditCondition", "LightShape != EDatasmithAreaLightActorShape::None" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Dimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape = { "LightShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, LightShape), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, LightType), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADatasmithAreaLightActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithAreaLightActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams = {
		&ADatasmithAreaLightActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADatasmithAreaLightActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADatasmithAreaLightActor, 173029358);
	template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithAreaLightActor>()
	{
		return ADatasmithAreaLightActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADatasmithAreaLightActor(Z_Construct_UClass_ADatasmithAreaLightActor, &ADatasmithAreaLightActor::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("ADatasmithAreaLightActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithAreaLightActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
