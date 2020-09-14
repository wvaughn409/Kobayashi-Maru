// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Fonts/SlateFontInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateFontInfo() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontOutlineSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FSlateFontInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateFontInfo, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateFontInfo"), sizeof(FSlateFontInfo), Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateFontInfo>()
{
	return FSlateFontInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateFontInfo(FSlateFontInfo::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateFontInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateFontInfo")),new UScriptStruct::TCppStructOps<FSlateFontInfo>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo;
	struct Z_Construct_UScriptStruct_FSlateFontInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hinting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FontName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypefaceFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TypefaceFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A representation of a font in Slate.\n */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "A representation of a font in Slate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateFontInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData[] = {
		{ "Comment", "/** The hinting algorithm to use with the font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The hinting algorithm to use with the font" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, Hinting_DEPRECATED), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData[] = {
		{ "Comment", "/** The name of the font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The name of the font" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName = { "FontName", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, FontName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The font size is a measure in point values.  The conversion of points to Slate Units is done at 96 dpi.  So if \n\x09 * you're using a tool like Photoshop to prototype layouts and UI mock ups, be sure to change the default dpi \n\x09 * measurements from 72 dpi to 96 dpi.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The font size is a measure in point values.  The conversion of points to Slate Units is done at 96 dpi.  So if\nyou're using a tool like Photoshop to prototype layouts and UI mock ups, be sure to change the default dpi\nmeasurements from 72 dpi to 96 dpi." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** The name of the font to use from the default typeface (None will use the first entry) */" },
		{ "DisplayName", "Typeface" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The name of the font to use from the default typeface (None will use the first entry)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName = { "TypefaceFontName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, TypefaceFontName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** Settings for applying an outline to a font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Settings for applying an outline to a font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings = { "OutlineSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, OutlineSettings), Z_Construct_UScriptStruct_FFontOutlineSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData[] = {
		{ "AllowedClasses", "MaterialInterface" },
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** The material to use when rendering this font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The material to use when rendering this font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial = { "FontMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, FontMaterial), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** The font object (valid when used from UMG or a Slate widget style asset) */" },
		{ "DisplayName", "Font Family" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The font object (valid when used from UMG or a Slate widget style asset)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject = { "FontObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateFontInfo, FontObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateFontInfo",
		sizeof(FSlateFontInfo),
		alignof(FSlateFontInfo),
		Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateFontInfo"), sizeof(FSlateFontInfo), Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateFontInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateFontInfo_Hash() { return 2622448767U; }
class UScriptStruct* FFontOutlineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontOutlineSettings, Z_Construct_UPackage__Script_SlateCore(), TEXT("FontOutlineSettings"), sizeof(FFontOutlineSettings), Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFontOutlineSettings>()
{
	return FFontOutlineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontOutlineSettings(FFontOutlineSettings::StaticStruct, TEXT("/Script/SlateCore"), TEXT("FontOutlineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings
{
	FScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontOutlineSettings")),new UScriptStruct::TCppStructOps<FFontOutlineSettings>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings;
	struct Z_Construct_UScriptStruct_FFontOutlineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyOutlineToDropShadows_MetaData[];
#endif
		static void NewProp_bApplyOutlineToDropShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyOutlineToDropShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeparateFillAlpha_MetaData[];
#endif
		static void NewProp_bSeparateFillAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeparateFillAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutlineSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for applying an outline to a font\n */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Settings for applying an outline to a font" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontOutlineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "Comment", "/** The color of the outline for any character in this font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The color of the outline for any character in this font" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontOutlineSettings, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "AllowedClasses", "MaterialInterface" },
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** Optional material to apply to the outline */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Optional material to apply to the outline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontOutlineSettings, OutlineMaterial), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "Comment", "/**\n\x09 * When enabled the outline will be applied to any drop shadow that uses this font\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "When enabled the outline will be applied to any drop shadow that uses this font" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_SetBit(void* Obj)
	{
		((FFontOutlineSettings*)Obj)->bApplyOutlineToDropShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows = { "bApplyOutlineToDropShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFontOutlineSettings), &Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "Comment", "/**\n\x09 * When enabled the outline will be completely translucent where the filled area will be.  This allows for a separate fill alpha value\n\x09 * The trade off when enabling this is slightly worse quality for completely opaque fills where the inner outline border meets the fill area\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "When enabled the outline will be completely translucent where the filled area will be.  This allows for a separate fill alpha value\nThe trade off when enabling this is slightly worse quality for completely opaque fills where the inner outline border meets the fill area" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_SetBit(void* Obj)
	{
		((FFontOutlineSettings*)Obj)->bSeparateFillAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha = { "bSeparateFillAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFontOutlineSettings), &Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Size of the outline in slate units (at 1.0 font scale this unit is a pixel)*/" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Size of the outline in slate units (at 1.0 font scale this unit is a pixel)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize = { "OutlineSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontOutlineSettings, OutlineSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FontOutlineSettings",
		sizeof(FFontOutlineSettings),
		alignof(FFontOutlineSettings),
		Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontOutlineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontOutlineSettings"), sizeof(FFontOutlineSettings), Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontOutlineSettings_Hash() { return 1457712152U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
