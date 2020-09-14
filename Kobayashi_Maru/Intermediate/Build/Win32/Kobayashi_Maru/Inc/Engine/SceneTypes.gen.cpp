// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/SceneTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData();
// End Cross Module References
	static UEnum* EMaterialProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialProperty, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialProperty"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialProperty>()
	{
		return EMaterialProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialProperty(EMaterialProperty_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialProperty_Hash() { return 733200202U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialProperty"), 0, Get_Z_Construct_UEnum_Engine_EMaterialProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MP_EmissiveColor", (int64)MP_EmissiveColor },
				{ "MP_Opacity", (int64)MP_Opacity },
				{ "MP_OpacityMask", (int64)MP_OpacityMask },
				{ "MP_DiffuseColor", (int64)MP_DiffuseColor },
				{ "MP_SpecularColor", (int64)MP_SpecularColor },
				{ "MP_BaseColor", (int64)MP_BaseColor },
				{ "MP_Metallic", (int64)MP_Metallic },
				{ "MP_Specular", (int64)MP_Specular },
				{ "MP_Roughness", (int64)MP_Roughness },
				{ "MP_Anisotropy", (int64)MP_Anisotropy },
				{ "MP_Normal", (int64)MP_Normal },
				{ "MP_Tangent", (int64)MP_Tangent },
				{ "MP_WorldPositionOffset", (int64)MP_WorldPositionOffset },
				{ "MP_WorldDisplacement", (int64)MP_WorldDisplacement },
				{ "MP_TessellationMultiplier", (int64)MP_TessellationMultiplier },
				{ "MP_SubsurfaceColor", (int64)MP_SubsurfaceColor },
				{ "MP_CustomData0", (int64)MP_CustomData0 },
				{ "MP_CustomData1", (int64)MP_CustomData1 },
				{ "MP_AmbientOcclusion", (int64)MP_AmbientOcclusion },
				{ "MP_Refraction", (int64)MP_Refraction },
				{ "MP_CustomizedUVs0", (int64)MP_CustomizedUVs0 },
				{ "MP_CustomizedUVs1", (int64)MP_CustomizedUVs1 },
				{ "MP_CustomizedUVs2", (int64)MP_CustomizedUVs2 },
				{ "MP_CustomizedUVs3", (int64)MP_CustomizedUVs3 },
				{ "MP_CustomizedUVs4", (int64)MP_CustomizedUVs4 },
				{ "MP_CustomizedUVs5", (int64)MP_CustomizedUVs5 },
				{ "MP_CustomizedUVs6", (int64)MP_CustomizedUVs6 },
				{ "MP_CustomizedUVs7", (int64)MP_CustomizedUVs7 },
				{ "MP_PixelDepthOffset", (int64)MP_PixelDepthOffset },
				{ "MP_ShadingModel", (int64)MP_ShadingModel },
				{ "MP_MaterialAttributes", (int64)MP_MaterialAttributes },
				{ "MP_CustomOutput", (int64)MP_CustomOutput },
				{ "MP_MAX", (int64)MP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\n//\x09""EMaterialProperty\n//\n" },
				{ "ModuleRelativePath", "Public/SceneTypes.h" },
				{ "MP_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
				{ "MP_AmbientOcclusion.Name", "MP_AmbientOcclusion" },
				{ "MP_Anisotropy.DisplayName", "Anisotropy" },
				{ "MP_Anisotropy.Name", "MP_Anisotropy" },
				{ "MP_BaseColor.Comment", "// used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular\n" },
				{ "MP_BaseColor.DisplayName", "Diffuse" },
				{ "MP_BaseColor.Name", "MP_BaseColor" },
				{ "MP_BaseColor.ToolTip", "used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular" },
				{ "MP_CustomData0.Hidden", "" },
				{ "MP_CustomData0.Name", "MP_CustomData0" },
				{ "MP_CustomData1.Hidden", "" },
				{ "MP_CustomData1.Name", "MP_CustomData1" },
				{ "MP_CustomizedUVs0.Hidden", "" },
				{ "MP_CustomizedUVs0.Name", "MP_CustomizedUVs0" },
				{ "MP_CustomizedUVs1.Hidden", "" },
				{ "MP_CustomizedUVs1.Name", "MP_CustomizedUVs1" },
				{ "MP_CustomizedUVs2.Hidden", "" },
				{ "MP_CustomizedUVs2.Name", "MP_CustomizedUVs2" },
				{ "MP_CustomizedUVs3.Hidden", "" },
				{ "MP_CustomizedUVs3.Name", "MP_CustomizedUVs3" },
				{ "MP_CustomizedUVs4.Hidden", "" },
				{ "MP_CustomizedUVs4.Name", "MP_CustomizedUVs4" },
				{ "MP_CustomizedUVs5.Hidden", "" },
				{ "MP_CustomizedUVs5.Name", "MP_CustomizedUVs5" },
				{ "MP_CustomizedUVs6.Hidden", "" },
				{ "MP_CustomizedUVs6.Name", "MP_CustomizedUVs6" },
				{ "MP_CustomizedUVs7.Hidden", "" },
				{ "MP_CustomizedUVs7.Name", "MP_CustomizedUVs7" },
				{ "MP_CustomOutput.Hidden", "" },
				{ "MP_CustomOutput.Name", "MP_CustomOutput" },
				{ "MP_DiffuseColor.Hidden", "" },
				{ "MP_DiffuseColor.Name", "MP_DiffuseColor" },
				{ "MP_EmissiveColor.DisplayName", "Emissive" },
				{ "MP_EmissiveColor.Name", "MP_EmissiveColor" },
				{ "MP_MaterialAttributes.Comment", "//^^^ New material properties go above here ^^^^\n" },
				{ "MP_MaterialAttributes.Hidden", "" },
				{ "MP_MaterialAttributes.Name", "MP_MaterialAttributes" },
				{ "MP_MaterialAttributes.ToolTip", "^^^ New material properties go above here ^^^^" },
				{ "MP_MAX.DisplayName", "None" },
				{ "MP_MAX.Name", "MP_MAX" },
				{ "MP_Metallic.DisplayName", "Metallic" },
				{ "MP_Metallic.Name", "MP_Metallic" },
				{ "MP_Normal.DisplayName", "Normal" },
				{ "MP_Normal.Name", "MP_Normal" },
				{ "MP_Opacity.DisplayName", "Opacity" },
				{ "MP_Opacity.Name", "MP_Opacity" },
				{ "MP_OpacityMask.DisplayName", "Opacity Mask" },
				{ "MP_OpacityMask.Name", "MP_OpacityMask" },
				{ "MP_PixelDepthOffset.Hidden", "" },
				{ "MP_PixelDepthOffset.Name", "MP_PixelDepthOffset" },
				{ "MP_Refraction.DisplayName", "Refraction" },
				{ "MP_Refraction.Name", "MP_Refraction" },
				{ "MP_Roughness.DisplayName", "Roughness " },
				{ "MP_Roughness.Name", "MP_Roughness" },
				{ "MP_ShadingModel.Hidden", "" },
				{ "MP_ShadingModel.Name", "MP_ShadingModel" },
				{ "MP_Specular.DisplayName", "Specular" },
				{ "MP_Specular.Name", "MP_Specular" },
				{ "MP_SpecularColor.Comment", "// used in Lightmass, not exposed to user, computed from: BaseColor, Metallic\n" },
				{ "MP_SpecularColor.Hidden", "" },
				{ "MP_SpecularColor.Name", "MP_SpecularColor" },
				{ "MP_SpecularColor.ToolTip", "used in Lightmass, not exposed to user, computed from: BaseColor, Metallic" },
				{ "MP_SubsurfaceColor.DisplayName", "Subsurface" },
				{ "MP_SubsurfaceColor.Name", "MP_SubsurfaceColor" },
				{ "MP_Tangent.DisplayName", "Tangent" },
				{ "MP_Tangent.Name", "MP_Tangent" },
				{ "MP_TessellationMultiplier.Hidden", "" },
				{ "MP_TessellationMultiplier.Name", "MP_TessellationMultiplier" },
				{ "MP_WorldDisplacement.Hidden", "" },
				{ "MP_WorldDisplacement.Name", "MP_WorldDisplacement" },
				{ "MP_WorldPositionOffset.Hidden", "" },
				{ "MP_WorldPositionOffset.Name", "MP_WorldPositionOffset" },
				{ "ToolTip", "EMaterialProperty" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialProperty",
				"EMaterialProperty",
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
class UScriptStruct* FCustomPrimitiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomPrimitiveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPrimitiveData, Z_Construct_UPackage__Script_Engine(), TEXT("CustomPrimitiveData"), sizeof(FCustomPrimitiveData), Get_Z_Construct_UScriptStruct_FCustomPrimitiveData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomPrimitiveData>()
{
	return FCustomPrimitiveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomPrimitiveData(FCustomPrimitiveData::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomPrimitiveData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomPrimitiveData
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomPrimitiveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomPrimitiveData")),new UScriptStruct::TCppStructOps<FCustomPrimitiveData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomPrimitiveData;
	struct Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom primitive data payload. */" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
		{ "ToolTip", "Custom primitive data payload." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPrimitiveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPrimitiveData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomPrimitiveData",
		sizeof(FCustomPrimitiveData),
		alignof(FCustomPrimitiveData),
		Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomPrimitiveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomPrimitiveData"), sizeof(FCustomPrimitiveData), Get_Z_Construct_UScriptStruct_FCustomPrimitiveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomPrimitiveData_Hash() { return 3474495453U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
