// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialLayersFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialLayersFunctions() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static UEnum* EMaterialParameterAssociation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialParameterAssociation, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialParameterAssociation"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialParameterAssociation>()
	{
		return EMaterialParameterAssociation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialParameterAssociation(EMaterialParameterAssociation_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialParameterAssociation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Hash() { return 2304647027U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialParameterAssociation"), 0, Get_Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LayerParameter", (int64)LayerParameter },
				{ "BlendParameter", (int64)BlendParameter },
				{ "GlobalParameter", (int64)GlobalParameter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlendParameter.Name", "BlendParameter" },
				{ "GlobalParameter.Name", "GlobalParameter" },
				{ "LayerParameter.Name", "LayerParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialParameterAssociation",
				"EMaterialParameterAssociation",
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
class UScriptStruct* FMaterialLayersFunctions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialLayersFunctions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctions, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialLayersFunctions"), sizeof(FMaterialLayersFunctions), Get_Z_Construct_UScriptStruct_FMaterialLayersFunctions_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialLayersFunctions>()
{
	return FMaterialLayersFunctions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialLayersFunctions(FMaterialLayersFunctions::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialLayersFunctions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialLayersFunctions
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialLayersFunctions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialLayersFunctions")),new UScriptStruct::TCppStructOps<FMaterialLayersFunctions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialLayersFunctions;
	struct Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyString;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeletedParentLayerGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeletedParentLayerGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeletedParentLayerGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentLayerGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentLayerGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentLayerGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictToBlendRelatives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RestrictToBlendRelatives;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RestrictToBlendRelatives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictToLayerRelatives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RestrictToLayerRelatives;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RestrictToLayerRelatives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LayerNames_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerStates;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LayerStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blends;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialLayersFunctions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_KeyString_MetaData[] = {
		{ "Comment", "// WITH_EDITORONLY_DATA\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "WITH_EDITORONLY_DATA" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_KeyString = { "KeyString", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, KeyString_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_KeyString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_KeyString_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "Comment", "/**\n\x09 * List of Guids that exist in the parent material that have been explicitly deleted\n\x09 * This is needed to distinguish these layers from newly added layers in the parent material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "List of Guids that exist in the parent material that have been explicitly deleted\nThis is needed to distinguish these layers from newly added layers in the parent material" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids = { "DeletedParentLayerGuids", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, DeletedParentLayerGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_Inner = { "DeletedParentLayerGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "Comment", "/**\n\x09 * Refers to the layer in the parent's LayerGuids list used to initialize this layer\n\x09 * - Special value of 'NoParentGuid' means this layer was created in this material, not based on any layer in the parent\n\x09 * - Special value of 'UninitializedParentGuid' means this data was serialized before these guids existed...layers with this value will attempt to match a parent layer with the same resources assigned\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "Refers to the layer in the parent's LayerGuids list used to initialize this layer\n- Special value of 'NoParentGuid' means this layer was created in this material, not based on any layer in the parent\n- Special value of 'UninitializedParentGuid' means this data was serialized before these guids existed...layers with this value will attempt to match a parent layer with the same resources assigned" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids = { "ParentLayerGuids", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, ParentLayerGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids_Inner = { "ParentLayerGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "Comment", "/** Guid that identifies each layer in this stack */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "Guid that identifies each layer in this stack" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids = { "LayerGuids", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, LayerGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_Inner = { "LayerGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives = { "RestrictToBlendRelatives", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, RestrictToBlendRelatives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_Inner = { "RestrictToBlendRelatives", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives = { "RestrictToLayerRelatives", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, RestrictToLayerRelatives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_Inner = { "RestrictToLayerRelatives", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates = { "LayerStates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, LayerStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_Inner = { "LayerStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends = { "Blends", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, Blends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends_Inner = { "Blends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialLayersFunctions, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_KeyString,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_ParentLayerGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Blends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_Layers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialLayersFunctions",
		sizeof(FMaterialLayersFunctions),
		alignof(FMaterialLayersFunctions),
		Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialLayersFunctions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialLayersFunctions"), sizeof(FMaterialLayersFunctions), Get_Z_Construct_UScriptStruct_FMaterialLayersFunctions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialLayersFunctions_Hash() { return 775475976U; }
class UScriptStruct* FMaterialParameterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterInfo"), sizeof(FMaterialParameterInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialParameterInfo>()
{
	return FMaterialParameterInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialParameterInfo(FMaterialParameterInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialParameterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialParameterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialParameterInfo")),new UScriptStruct::TCppStructOps<FMaterialParameterInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialParameterInfo;
	struct Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterLocation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Association_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Association;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_ParameterLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_ParameterLocation = { "ParameterLocation", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterInfo, ParameterLocation), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_ParameterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_ParameterLocation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ParameterInfo" },
		{ "Comment", "/** Layer or blend index this parameter is part of. INDEX_NONE for global parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "Layer or blend index this parameter is part of. INDEX_NONE for global parameters." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterInfo, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association_MetaData[] = {
		{ "Category", "ParameterInfo" },
		{ "Comment", "/** Whether this is a global parameter, or part of a layer or blend */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "Whether this is a global parameter, or part of a layer or blend" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterInfo, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ParameterInfo" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_ParameterLocation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialParameterInfo",
		sizeof(FMaterialParameterInfo),
		alignof(FMaterialParameterInfo),
		Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialParameterInfo"), sizeof(FMaterialParameterInfo), Get_Z_Construct_UScriptStruct_FMaterialParameterInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialParameterInfo_Hash() { return 3848688717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
