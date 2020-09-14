// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/MaterialSceneTextureId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialSceneTextureId() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneTextureId();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* ESceneTextureId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESceneTextureId, Z_Construct_UPackage__Script_Engine(), TEXT("ESceneTextureId"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESceneTextureId>()
	{
		return ESceneTextureId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneTextureId(ESceneTextureId_StaticEnum, TEXT("/Script/Engine"), TEXT("ESceneTextureId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESceneTextureId_Hash() { return 2901633918U; }
	UEnum* Z_Construct_UEnum_Engine_ESceneTextureId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneTextureId"), 0, Get_Z_Construct_UEnum_Engine_ESceneTextureId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PPI_SceneColor", (int64)PPI_SceneColor },
				{ "PPI_SceneDepth", (int64)PPI_SceneDepth },
				{ "PPI_DiffuseColor", (int64)PPI_DiffuseColor },
				{ "PPI_SpecularColor", (int64)PPI_SpecularColor },
				{ "PPI_SubsurfaceColor", (int64)PPI_SubsurfaceColor },
				{ "PPI_BaseColor", (int64)PPI_BaseColor },
				{ "PPI_Specular", (int64)PPI_Specular },
				{ "PPI_Metallic", (int64)PPI_Metallic },
				{ "PPI_WorldNormal", (int64)PPI_WorldNormal },
				{ "PPI_SeparateTranslucency", (int64)PPI_SeparateTranslucency },
				{ "PPI_Opacity", (int64)PPI_Opacity },
				{ "PPI_Roughness", (int64)PPI_Roughness },
				{ "PPI_MaterialAO", (int64)PPI_MaterialAO },
				{ "PPI_CustomDepth", (int64)PPI_CustomDepth },
				{ "PPI_PostProcessInput0", (int64)PPI_PostProcessInput0 },
				{ "PPI_PostProcessInput1", (int64)PPI_PostProcessInput1 },
				{ "PPI_PostProcessInput2", (int64)PPI_PostProcessInput2 },
				{ "PPI_PostProcessInput3", (int64)PPI_PostProcessInput3 },
				{ "PPI_PostProcessInput4", (int64)PPI_PostProcessInput4 },
				{ "PPI_PostProcessInput5", (int64)PPI_PostProcessInput5 },
				{ "PPI_PostProcessInput6", (int64)PPI_PostProcessInput6 },
				{ "PPI_DecalMask", (int64)PPI_DecalMask },
				{ "PPI_ShadingModelColor", (int64)PPI_ShadingModelColor },
				{ "PPI_ShadingModelID", (int64)PPI_ShadingModelID },
				{ "PPI_AmbientOcclusion", (int64)PPI_AmbientOcclusion },
				{ "PPI_CustomStencil", (int64)PPI_CustomStencil },
				{ "PPI_StoredBaseColor", (int64)PPI_StoredBaseColor },
				{ "PPI_StoredSpecular", (int64)PPI_StoredSpecular },
				{ "PPI_Velocity", (int64)PPI_Velocity },
				{ "PPI_WorldTangent", (int64)PPI_WorldTangent },
				{ "PPI_Anisotropy", (int64)PPI_Anisotropy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** like EPassInputId but can expose more e.g. GBuffer */" },
				{ "ModuleRelativePath", "Public/MaterialSceneTextureId.h" },
				{ "PPI_AmbientOcclusion.Comment", "/** Ambient Occlusion, single channel */" },
				{ "PPI_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
				{ "PPI_AmbientOcclusion.Name", "PPI_AmbientOcclusion" },
				{ "PPI_AmbientOcclusion.ToolTip", "Ambient Occlusion, single channel" },
				{ "PPI_Anisotropy.Comment", "/** Material anisotropy, single channel (GBuffer) */" },
				{ "PPI_Anisotropy.DisplayName", "Anisotropy" },
				{ "PPI_Anisotropy.Name", "PPI_Anisotropy" },
				{ "PPI_Anisotropy.ToolTip", "Material anisotropy, single channel (GBuffer)" },
				{ "PPI_BaseColor.Comment", "/** Material base, RGB color (GBuffer), can be modified on read by the ShadingModel, consider StoredBasedColor */" },
				{ "PPI_BaseColor.DisplayName", "BaseColor (for lighting)" },
				{ "PPI_BaseColor.Name", "PPI_BaseColor" },
				{ "PPI_BaseColor.ToolTip", "Material base, RGB color (GBuffer), can be modified on read by the ShadingModel, consider StoredBasedColor" },
				{ "PPI_CustomDepth.Comment", "/** Scene depth, single channel, contains the linear depth of the opaque objects rendered with CustomDepth (mesh property) */" },
				{ "PPI_CustomDepth.DisplayName", "CustomDepth" },
				{ "PPI_CustomDepth.Name", "PPI_CustomDepth" },
				{ "PPI_CustomDepth.ToolTip", "Scene depth, single channel, contains the linear depth of the opaque objects rendered with CustomDepth (mesh property)" },
				{ "PPI_CustomStencil.Comment", "/** Scene stencil, contains CustomStencil mesh property of the opaque objects rendered with CustomDepth */" },
				{ "PPI_CustomStencil.DisplayName", "CustomStencil" },
				{ "PPI_CustomStencil.Name", "PPI_CustomStencil" },
				{ "PPI_CustomStencil.ToolTip", "Scene stencil, contains CustomStencil mesh property of the opaque objects rendered with CustomDepth" },
				{ "PPI_DecalMask.Comment", "/** Decal Mask, single bit (was moved to stencil for better performance, not accessible at the moment) */" },
				{ "PPI_DecalMask.DisplayName", "Decal Mask" },
				{ "PPI_DecalMask.Name", "PPI_DecalMask" },
				{ "PPI_DecalMask.ToolTip", "Decal Mask, single bit (was moved to stencil for better performance, not accessible at the moment)" },
				{ "PPI_DiffuseColor.Comment", "/** Material diffuse, RGB color (computed from GBuffer) */" },
				{ "PPI_DiffuseColor.DisplayName", "DiffuseColor" },
				{ "PPI_DiffuseColor.Name", "PPI_DiffuseColor" },
				{ "PPI_DiffuseColor.ToolTip", "Material diffuse, RGB color (computed from GBuffer)" },
				{ "PPI_MaterialAO.Comment", "/** Material ambient occlusion, single channel (GBuffer) */" },
				{ "PPI_MaterialAO.DisplayName", "MaterialAO" },
				{ "PPI_MaterialAO.Name", "PPI_MaterialAO" },
				{ "PPI_MaterialAO.ToolTip", "Material ambient occlusion, single channel (GBuffer)" },
				{ "PPI_Metallic.Comment", "/** Material metallic, single channel (GBuffer) */" },
				{ "PPI_Metallic.DisplayName", "Metallic" },
				{ "PPI_Metallic.Name", "PPI_Metallic" },
				{ "PPI_Metallic.ToolTip", "Material metallic, single channel (GBuffer)" },
				{ "PPI_Opacity.Comment", "/** Material opacity, single channel (GBuffer) */" },
				{ "PPI_Opacity.DisplayName", "Opacity" },
				{ "PPI_Opacity.Name", "PPI_Opacity" },
				{ "PPI_Opacity.ToolTip", "Material opacity, single channel (GBuffer)" },
				{ "PPI_PostProcessInput0.Comment", "/** Input #0 of this postprocess pass, usually the only one hooked up */" },
				{ "PPI_PostProcessInput0.DisplayName", "PostProcessInput0" },
				{ "PPI_PostProcessInput0.Name", "PPI_PostProcessInput0" },
				{ "PPI_PostProcessInput0.ToolTip", "Input #0 of this postprocess pass, usually the only one hooked up" },
				{ "PPI_PostProcessInput1.Comment", "/** Input #1 of this postprocess pass, usually not used */" },
				{ "PPI_PostProcessInput1.DisplayName", "PostProcessInput1" },
				{ "PPI_PostProcessInput1.Name", "PPI_PostProcessInput1" },
				{ "PPI_PostProcessInput1.ToolTip", "Input #1 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput2.Comment", "/** Input #2 of this postprocess pass, usually not used */" },
				{ "PPI_PostProcessInput2.DisplayName", "PostProcessInput2" },
				{ "PPI_PostProcessInput2.Name", "PPI_PostProcessInput2" },
				{ "PPI_PostProcessInput2.ToolTip", "Input #2 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput3.Comment", "/** Input #3 of this postprocess pass, usually not used */" },
				{ "PPI_PostProcessInput3.DisplayName", "PostProcessInput3" },
				{ "PPI_PostProcessInput3.Name", "PPI_PostProcessInput3" },
				{ "PPI_PostProcessInput3.ToolTip", "Input #3 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput4.Comment", "/** Input #4 of this postprocess pass, usually not used */" },
				{ "PPI_PostProcessInput4.DisplayName", "PostProcessInput4" },
				{ "PPI_PostProcessInput4.Name", "PPI_PostProcessInput4" },
				{ "PPI_PostProcessInput4.ToolTip", "Input #4 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput5.Comment", "/** Input #5 of this postprocess pass, usually not used */" },
				{ "PPI_PostProcessInput5.DisplayName", "PostProcessInput5" },
				{ "PPI_PostProcessInput5.Name", "PPI_PostProcessInput5" },
				{ "PPI_PostProcessInput5.ToolTip", "Input #5 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput6.Comment", "/** Input #6 of this postprocess pass, usually not used */" },
				{ "PPI_PostProcessInput6.DisplayName", "PostProcessInput6" },
				{ "PPI_PostProcessInput6.Name", "PPI_PostProcessInput6" },
				{ "PPI_PostProcessInput6.ToolTip", "Input #6 of this postprocess pass, usually not used" },
				{ "PPI_Roughness.Comment", "/** Material roughness, single channel (GBuffer) */" },
				{ "PPI_Roughness.DisplayName", "Roughness" },
				{ "PPI_Roughness.Name", "PPI_Roughness" },
				{ "PPI_Roughness.ToolTip", "Material roughness, single channel (GBuffer)" },
				{ "PPI_SceneColor.Comment", "/** Scene color, normal post process passes should use PostProcessInput0 */" },
				{ "PPI_SceneColor.DisplayName", "SceneColor" },
				{ "PPI_SceneColor.Name", "PPI_SceneColor" },
				{ "PPI_SceneColor.ToolTip", "Scene color, normal post process passes should use PostProcessInput0" },
				{ "PPI_SceneDepth.Comment", "/** Scene depth, single channel, contains the linear depth of the opaque objects */" },
				{ "PPI_SceneDepth.DisplayName", "SceneDepth" },
				{ "PPI_SceneDepth.Name", "PPI_SceneDepth" },
				{ "PPI_SceneDepth.ToolTip", "Scene depth, single channel, contains the linear depth of the opaque objects" },
				{ "PPI_SeparateTranslucency.Comment", "/** Not yet supported */" },
				{ "PPI_SeparateTranslucency.DisplayName", "SeparateTranslucency" },
				{ "PPI_SeparateTranslucency.Name", "PPI_SeparateTranslucency" },
				{ "PPI_SeparateTranslucency.ToolTip", "Not yet supported" },
				{ "PPI_ShadingModelColor.Comment", "/** Shading model */" },
				{ "PPI_ShadingModelColor.DisplayName", "Shading Model Color" },
				{ "PPI_ShadingModelColor.Name", "PPI_ShadingModelColor" },
				{ "PPI_ShadingModelColor.ToolTip", "Shading model" },
				{ "PPI_ShadingModelID.Comment", "/** Shading model ID */" },
				{ "PPI_ShadingModelID.DisplayName", "Shading Model ID" },
				{ "PPI_ShadingModelID.Name", "PPI_ShadingModelID" },
				{ "PPI_ShadingModelID.ToolTip", "Shading model ID" },
				{ "PPI_Specular.Comment", "/** Material specular, single channel (GBuffer), can be modified on read by the ShadingModel, consider StoredSpecular */" },
				{ "PPI_Specular.DisplayName", "Specular (for lighting)" },
				{ "PPI_Specular.Name", "PPI_Specular" },
				{ "PPI_Specular.ToolTip", "Material specular, single channel (GBuffer), can be modified on read by the ShadingModel, consider StoredSpecular" },
				{ "PPI_SpecularColor.Comment", "/** Material specular, RGB color (computed from GBuffer) */" },
				{ "PPI_SpecularColor.DisplayName", "SpecularColor" },
				{ "PPI_SpecularColor.Name", "PPI_SpecularColor" },
				{ "PPI_SpecularColor.ToolTip", "Material specular, RGB color (computed from GBuffer)" },
				{ "PPI_StoredBaseColor.Comment", "/** Material base, RGB color (GBuffer) */" },
				{ "PPI_StoredBaseColor.DisplayName", "BaseColor (as stored in GBuffer)" },
				{ "PPI_StoredBaseColor.Name", "PPI_StoredBaseColor" },
				{ "PPI_StoredBaseColor.ToolTip", "Material base, RGB color (GBuffer)" },
				{ "PPI_StoredSpecular.Comment", "/** Material specular, single channel (GBuffer) */" },
				{ "PPI_StoredSpecular.DisplayName", "Specular (as stored in GBuffer)" },
				{ "PPI_StoredSpecular.Name", "PPI_StoredSpecular" },
				{ "PPI_StoredSpecular.ToolTip", "Material specular, single channel (GBuffer)" },
				{ "PPI_SubsurfaceColor.Comment", "/** Material subsurface, RGB color (GBuffer, only for some ShadingModels) */" },
				{ "PPI_SubsurfaceColor.DisplayName", "SubsurfaceColor" },
				{ "PPI_SubsurfaceColor.Name", "PPI_SubsurfaceColor" },
				{ "PPI_SubsurfaceColor.ToolTip", "Material subsurface, RGB color (GBuffer, only for some ShadingModels)" },
				{ "PPI_Velocity.Comment", "/** Scene Velocity */" },
				{ "PPI_Velocity.DisplayName", "Velocity" },
				{ "PPI_Velocity.Name", "PPI_Velocity" },
				{ "PPI_Velocity.ToolTip", "Scene Velocity" },
				{ "PPI_WorldNormal.Comment", "/** Normal, RGB in -1..1 range, not normalized (GBuffer) */" },
				{ "PPI_WorldNormal.DisplayName", "WorldNormal" },
				{ "PPI_WorldNormal.Name", "PPI_WorldNormal" },
				{ "PPI_WorldNormal.ToolTip", "Normal, RGB in -1..1 range, not normalized (GBuffer)" },
				{ "PPI_WorldTangent.Comment", "/** Tangent, RGB in -1..1 range, not normalized (GBuffer) */" },
				{ "PPI_WorldTangent.DisplayName", "WorldTangent" },
				{ "PPI_WorldTangent.Name", "PPI_WorldTangent" },
				{ "PPI_WorldTangent.ToolTip", "Tangent, RGB in -1..1 range, not normalized (GBuffer)" },
				{ "ToolTip", "like EPassInputId but can expose more e.g. GBuffer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESceneTextureId",
				"ESceneTextureId",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
