// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSpriteRendererProperties.h"
#include "Serialization/StructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSpriteRendererProperties() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* ENiagaraSpriteFacingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSpriteFacingMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSpriteFacingMode>()
	{
		return ENiagaraSpriteFacingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSpriteFacingMode(ENiagaraSpriteFacingMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSpriteFacingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Hash() { return 2324979947U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSpriteFacingMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSpriteFacingMode::FaceCamera", (int64)ENiagaraSpriteFacingMode::FaceCamera },
				{ "ENiagaraSpriteFacingMode::FaceCameraPlane", (int64)ENiagaraSpriteFacingMode::FaceCameraPlane },
				{ "ENiagaraSpriteFacingMode::CustomFacingVector", (int64)ENiagaraSpriteFacingMode::CustomFacingVector },
				{ "ENiagaraSpriteFacingMode::FaceCameraPosition", (int64)ENiagaraSpriteFacingMode::FaceCameraPosition },
				{ "ENiagaraSpriteFacingMode::FaceCameraDistanceBlend", (int64)ENiagaraSpriteFacingMode::FaceCameraDistanceBlend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** This enum decides how a sprite particle will orient its \"facing\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush*/" },
				{ "CustomFacingVector.Comment", "/** The sprite billboard faces toward the \"Particles.SpriteFacing\" vector attribute. If the \"Particles.SpriteFacing\" attribute is missing, this falls back to FaceCamera mode.*/" },
				{ "CustomFacingVector.Name", "ENiagaraSpriteFacingMode::CustomFacingVector" },
				{ "CustomFacingVector.ToolTip", "The sprite billboard faces toward the \"Particles.SpriteFacing\" vector attribute. If the \"Particles.SpriteFacing\" attribute is missing, this falls back to FaceCamera mode." },
				{ "FaceCamera.Comment", "/** The sprite billboard origin is always \"looking at\" the camera origin, trying to keep its up axis aligned to the camera's up axis. */" },
				{ "FaceCamera.Name", "ENiagaraSpriteFacingMode::FaceCamera" },
				{ "FaceCamera.ToolTip", "The sprite billboard origin is always \"looking at\" the camera origin, trying to keep its up axis aligned to the camera's up axis." },
				{ "FaceCameraDistanceBlend.Comment", "/** Blends between FaceCamera and FaceCameraPosition.*/" },
				{ "FaceCameraDistanceBlend.Name", "ENiagaraSpriteFacingMode::FaceCameraDistanceBlend" },
				{ "FaceCameraDistanceBlend.ToolTip", "Blends between FaceCamera and FaceCameraPosition." },
				{ "FaceCameraPlane.Comment", "/** The sprite billboard plane is completely parallel to the camera plane. Particle always looks \"flat\" */" },
				{ "FaceCameraPlane.Name", "ENiagaraSpriteFacingMode::FaceCameraPlane" },
				{ "FaceCameraPlane.ToolTip", "The sprite billboard plane is completely parallel to the camera plane. Particle always looks \"flat\"" },
				{ "FaceCameraPosition.Comment", "/** Faces the camera position, but is not dependent on the camera rotation.  This method produces more stable particles under camera rotation. Uses the up axis of (0,0,1).*/" },
				{ "FaceCameraPosition.Name", "ENiagaraSpriteFacingMode::FaceCameraPosition" },
				{ "FaceCameraPosition.ToolTip", "Faces the camera position, but is not dependent on the camera rotation.  This method produces more stable particles under camera rotation. Uses the up axis of (0,0,1)." },
				{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
				{ "ToolTip", "This enum decides how a sprite particle will orient its \"facing\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSpriteFacingMode",
				"ENiagaraSpriteFacingMode",
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
	static UEnum* ENiagaraSpriteAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSpriteAlignment"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSpriteAlignment>()
	{
		return ENiagaraSpriteAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSpriteAlignment(ENiagaraSpriteAlignment_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSpriteAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Hash() { return 3159908443U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSpriteAlignment"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSpriteAlignment::Unaligned", (int64)ENiagaraSpriteAlignment::Unaligned },
				{ "ENiagaraSpriteAlignment::VelocityAligned", (int64)ENiagaraSpriteAlignment::VelocityAligned },
				{ "ENiagaraSpriteAlignment::CustomAlignment", (int64)ENiagaraSpriteAlignment::CustomAlignment },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** This enum decides how a sprite particle will orient its \"up\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush*/" },
				{ "CustomAlignment.Comment", "/** Imagine the particle texture having an arrow pointing up, this mode makes the arrow point towards the axis defined by the \"Particles.SpriteAlignment\" attribute. FacingMode is ignored unless CustomFacingVector is set. If the \"Particles.SpriteAlignment\" attribute is missing, this falls back to Unaligned mode.*/" },
				{ "CustomAlignment.Name", "ENiagaraSpriteAlignment::CustomAlignment" },
				{ "CustomAlignment.ToolTip", "Imagine the particle texture having an arrow pointing up, this mode makes the arrow point towards the axis defined by the \"Particles.SpriteAlignment\" attribute. FacingMode is ignored unless CustomFacingVector is set. If the \"Particles.SpriteAlignment\" attribute is missing, this falls back to Unaligned mode." },
				{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
				{ "ToolTip", "This enum decides how a sprite particle will orient its \"up\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush" },
				{ "Unaligned.Comment", "/** Only Particles.SpriteRotation and FacingMode impact the alignment of the particle.*/" },
				{ "Unaligned.Name", "ENiagaraSpriteAlignment::Unaligned" },
				{ "Unaligned.ToolTip", "Only Particles.SpriteRotation and FacingMode impact the alignment of the particle." },
				{ "VelocityAligned.Comment", "/** Imagine the particle texture having an arrow pointing up, this mode makes the arrow point in the direction of the Particles.Velocity attribute. FacingMode is ignored unless CustomFacingVector is set.*/" },
				{ "VelocityAligned.Name", "ENiagaraSpriteAlignment::VelocityAligned" },
				{ "VelocityAligned.ToolTip", "Imagine the particle texture having an arrow pointing up, this mode makes the arrow point in the direction of the Particles.Velocity attribute. FacingMode is ignored unless CustomFacingVector is set." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSpriteAlignment",
				"ENiagaraSpriteAlignment",
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
	void UNiagaraSpriteRendererProperties::StaticRegisterNativesUNiagaraSpriteRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister()
	{
		return UNiagaraSpriteRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutoutTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutoutTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialCutoutTexture_MetaData[];
#endif
		static void NewProp_bUseMaterialCutoutTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialCutoutTexture;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSortingBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSortingBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVScaleBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVScaleBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffsetBinding;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageIndexBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageIndexBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteAlignmentBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteAlignmentBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteFacingBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteFacingBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSizeBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteSizeBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteRotationBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteRotationBinding;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortOnlyWhenTranslucent_MetaData[];
#endif
		static void NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortOnlyWhenTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRollInVR_MetaData[];
#endif
		static void NewProp_bRemoveHMDRollInVR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRollInVR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubImageBlend_MetaData[];
#endif
		static void NewProp_bSubImageBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubImageBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotInUVSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotInUVSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Alignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialUserParamBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialUserParamBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sprite Renderer" },
		{ "IncludePath", "NiagaraSpriteRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/**\n\x09* Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\n\x09* Raising this threshold slightly can reduce overdraw in particles using this animation asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, AlphaThreshold), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "Cutout" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode = { "OpacitySourceMode", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/**\n\x09* More bounding vertices results in reduced overdraw, but adds more triangle overhead.\n\x09* The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\n\x09* and when the particles using the texture will be few and large.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode = { "BoundingMode", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/** Texture to generate bounding geometry from.\x09*/" },
		{ "EditCondition", "!bUseMaterialCutoutTexture" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture = { "CutoutTexture", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, CutoutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/** Use the cutout texture from the material opacity mask, or if none exist, from the material opacity.\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Use the cutout texture from the material opacity mask, or if none exist, from the material opacity." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bUseMaterialCutoutTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture = { "bUseMaterialCutoutTexture", nullptr, (EPropertyFlags)0x0010000800000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for Normalized Age? */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for Normalized Age?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for custom sorting? Defaults to Particles.NormalizedAge. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for custom sorting? Defaults to Particles.NormalizedAge." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding = { "CustomSortingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, CustomSortingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for material randoms when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for material randoms when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for UV scale when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for UV scale when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding = { "UVScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, UVScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for camera offset when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for camera offset when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding = { "CameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, CameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite sub-image indexing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite sub-image indexing when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding = { "SubImageIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SubImageIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite alignment when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite alignment when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding = { "SpriteAlignmentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite facing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite facing when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding = { "SpriteFacingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteFacingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite size when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite size when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding = { "SpriteSizeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteSizeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite rotation (in degrees) when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite rotation (in degrees) when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding = { "SpriteRotationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteRotationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera position */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera position" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera plane. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera plane." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bSortOnlyWhenTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent = { "bSortOnlyWhenTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "DisplayName", "Remove HMD Roll" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bRemoveHMDRollInVR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR = { "bRemoveHMDRollInVR", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.*/" },
		{ "DisplayName", "Sub UV Blending Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bSubImageBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend = { "bSubImageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SubImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Determines how we sort the particles prior to rendering.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Determines how we sort the particles prior to rendering." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SortMode), Z_Construct_UEnum_Niagara_ENiagaraSortMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Determines the location of the pivot point of this particle. It follows Unreal's UV space, which has the upper left of the image at 0,0 and bottom right at 1,1. The middle is at 0.5, 0.5. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Determines the location of the pivot point of this particle. It follows Unreal's UV space, which has the upper left of the image at 0,0 and bottom right at 1,1. The middle is at 0.5, 0.5." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace = { "PivotInUVSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PivotInUVSpace), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Determines how the particle billboard orients itself relative to the camera.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Determines how the particle billboard orients itself relative to the camera." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Imagine the particle texture having an arrow pointing up, these modes define how the particle aligns that texture to other particle attributes.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Imagine the particle texture having an arrow pointing up, these modes define how the particle aligns that texture to other particle attributes." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, Alignment), Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding = { "MaterialUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaterialUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** The material used to render the particle. Note that it must have the Use with Niagara Sprites flag checked.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "The material used to render the particle. Note that it must have the Use with Niagara Sprites flag checked." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSpriteRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::ClassParams = {
		&UNiagaraSpriteRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraSpriteRendererProperties, 1604281938);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSpriteRendererProperties>()
	{
		return UNiagaraSpriteRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSpriteRendererProperties(Z_Construct_UClass_UNiagaraSpriteRendererProperties, &UNiagaraSpriteRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraSpriteRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSpriteRendererProperties);
	IMPLEMENT_FARCHIVE_SERIALIZER(UNiagaraSpriteRendererProperties)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
