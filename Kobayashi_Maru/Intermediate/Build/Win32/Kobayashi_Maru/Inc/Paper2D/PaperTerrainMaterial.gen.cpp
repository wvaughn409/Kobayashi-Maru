// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTerrainMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainMaterial() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FPaperTerrainMaterialRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTerrainMaterialRule"), sizeof(FPaperTerrainMaterialRule), Get_Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTerrainMaterialRule>()
{
	return FPaperTerrainMaterialRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperTerrainMaterialRule(FPaperTerrainMaterialRule::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperTerrainMaterialRule"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperTerrainMaterialRule
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperTerrainMaterialRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperTerrainMaterialRule")),new UScriptStruct::TCppStructOps<FPaperTerrainMaterialRule>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperTerrainMaterialRule;
	struct Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DrawOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartCap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Rule for a single section of a terrain material\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Rule for a single section of a terrain material" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTerrainMaterialRule>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Readable description for the rule (unused anywhere, just for clarity when editing the material)\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Readable description for the rule (unused anywhere, just for clarity when editing the material)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Specify a draw order for different materials in a spline. Smaller draw orders are drawn first, negative values are allowed.\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Specify a draw order for different materials in a spline. Smaller draw orders are drawn first, negative values are allowed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder = { "DrawOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, DrawOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// How much should the collision be lofted from the spline (positive values go out from the spline, negative values go in to the spline)\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "How much should the collision be lofted from the spline (positive values go out from the spline, negative values go in to the spline)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset = { "CollisionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, CollisionOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// If true, collision is enabled for sections matching this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "If true, collision is enabled for sections matching this rule" },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FPaperTerrainMaterialRule*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPaperTerrainMaterialRule), &Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Maximum slope angle (in degrees) to apply this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Maximum slope angle (in degrees) to apply this rule" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle = { "MaximumAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, MaximumAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Minimum slope angle (in degrees) to apply this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Minimum slope angle (in degrees) to apply this rule" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle = { "MinimumAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, MinimumAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use at the 'right' (closest to spline end) edge of the terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use at the 'right' (closest to spline end) edge of the terrain segment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap = { "EndCap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, EndCap), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// A set of sprites to randomly choose to fill up the interior space between the caps in a terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "A set of sprites to randomly choose to fill up the interior space between the caps in a terrain segment" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, Body), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_Inner = { "Body", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use at the 'left' (closest to spline start) edge of the terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use at the 'left' (closest to spline start) edge of the terrain segment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap = { "StartCap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, StartCap), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTerrainMaterialRule",
		sizeof(FPaperTerrainMaterialRule),
		alignof(FPaperTerrainMaterialRule),
		Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperTerrainMaterialRule"), sizeof(FPaperTerrainMaterialRule), Get_Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Hash() { return 1279421358U; }
	void UPaperTerrainMaterial::StaticRegisterNativesUPaperTerrainMaterial()
	{
	}
	UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister()
	{
		return UPaperTerrainMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTerrainMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteriorFill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTerrainMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Paper Terrain Material\n *\n * 'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface).\n */" },
		{ "IncludePath", "PaperTerrainMaterial.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Paper Terrain Material\n\n'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use for an interior region fill\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use for an interior region fill" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill = { "InteriorFill", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTerrainMaterial, InteriorFill), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperTerrainMaterial, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTerrainMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams = {
		&UPaperTerrainMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTerrainMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperTerrainMaterial, 2707600916);
	template<> PAPER2D_API UClass* StaticClass<UPaperTerrainMaterial>()
	{
		return UPaperTerrainMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperTerrainMaterial(Z_Construct_UClass_UPaperTerrainMaterial, &UPaperTerrainMaterial::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperTerrainMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
