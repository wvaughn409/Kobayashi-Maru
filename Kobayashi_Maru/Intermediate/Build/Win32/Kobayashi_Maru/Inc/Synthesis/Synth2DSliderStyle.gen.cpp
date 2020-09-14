// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/Synth2DSliderStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynth2DSliderStyle() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FSynth2DSliderStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSynth2DSliderStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynth2DSliderStyle, Z_Construct_UPackage__Script_Synthesis(), TEXT("Synth2DSliderStyle"), sizeof(FSynth2DSliderStyle), Get_Z_Construct_UScriptStruct_FSynth2DSliderStyle_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynth2DSliderStyle>()
{
	return FSynth2DSliderStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSynth2DSliderStyle(FSynth2DSliderStyle::StaticStruct, TEXT("/Script/Synthesis"), TEXT("Synth2DSliderStyle"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSynth2DSliderStyle
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSynth2DSliderStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Synth2DSliderStyle")),new UScriptStruct::TCppStructOps<FSynth2DSliderStyle>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSynth2DSliderStyle;
	struct Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledBarImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledBarImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBarImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalBarImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledThumbImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an SSynth2DSlider\n*/" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSynth2DSlider" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynth2DSliderStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth2DSliderStyle, BarThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth2DSliderStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage = { "DisabledBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth2DSliderStyle, DisabledBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage = { "NormalBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth2DSliderStyle, NormalBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the 2D handle\n" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Image to use for the 2D handle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage = { "DisabledThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth2DSliderStyle, DisabledThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the 2D handle\n" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Image to use for the 2D handle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSynth2DSliderStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"Synth2DSliderStyle",
		sizeof(FSynth2DSliderStyle),
		alignof(FSynth2DSliderStyle),
		Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSynth2DSliderStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Synth2DSliderStyle"), sizeof(FSynth2DSliderStyle), Get_Z_Construct_UScriptStruct_FSynth2DSliderStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSynth2DSliderStyle_Hash() { return 2524192771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
